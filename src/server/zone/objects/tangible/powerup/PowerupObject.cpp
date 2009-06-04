/*
 *	server/zone/objects/tangible/powerup/PowerupObject.cpp generated by engine3 IDL compiler 0.55
 */

#include "PowerupObject.h"

#include "PowerupObjectImplementation.h"

#include "../TangibleObject.h"

#include "../../intangible/player/PlayerObject.h"

#include "../../SceneObject.h"

/*
 *	PowerupObjectStub
 */

PowerupObject::PowerupObject(unsigned long long objectid, int type) : TangibleObject(DummyConstructorParameter::instance()) {
	_impl = new PowerupObjectImplementation(objectid, type);
	_impl->_setStub(this);
}

PowerupObject::PowerupObject(DummyConstructorParameter* param) : TangibleObject(param) {
}

PowerupObject::~PowerupObject() {
}

void PowerupObject::onDragDrop(PlayerObject* player, SceneObject* target) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 6);
		method.addObjectParameter(player);
		method.addObjectParameter(target);

		method.executeWithVoidReturn();
	} else
		((PowerupObjectImplementation*) _impl)->onDragDrop(player, target);
}

/*
 *	PowerupObjectAdapter
 */

PowerupObjectAdapter::PowerupObjectAdapter(PowerupObjectImplementation* obj) : TangibleObjectAdapter(obj) {
}

Packet* PowerupObjectAdapter::invokeMethod(uint32 methid, DistributedMethod* inv) {
	Packet* resp = new MethodReturnMessage(0);

	switch (methid) {
	case 6:
		onDragDrop((PlayerObject*) inv->getObjectParameter(), (SceneObject*) inv->getObjectParameter());
		break;
	default:
		return NULL;
	}

	return resp;
}

void PowerupObjectAdapter::onDragDrop(PlayerObject* player, SceneObject* target) {
	return ((PowerupObjectImplementation*) impl)->onDragDrop(player, target);
}

/*
 *	PowerupObjectHelper
 */

PowerupObjectHelper* PowerupObjectHelper::staticInitializer = PowerupObjectHelper::instance();

PowerupObjectHelper::PowerupObjectHelper() {
	className = "PowerupObject";

	DistributedObjectBroker::instance()->registerClass(className, this);
}

void PowerupObjectHelper::finalizeHelper() {
	PowerupObjectHelper::finalize();
}

DistributedObject* PowerupObjectHelper::instantiateObject() {
	return new PowerupObject(DummyConstructorParameter::instance());
}

DistributedObjectAdapter* PowerupObjectHelper::createAdapter(DistributedObjectStub* obj) {
	DistributedObjectAdapter* adapter = new PowerupObjectAdapter((PowerupObjectImplementation*) obj->_getImplementation());

	obj->_setClassName(className);
	obj->_setClassHelper(this);

	adapter->setStub(obj);

	return adapter;
}

/*
 *	PowerupObjectServant
 */

PowerupObjectServant::PowerupObjectServant(unsigned long long objectid, int type) : TangibleObjectImplementation(objectid, type) {
	_classHelper = PowerupObjectHelper::instance();
}

PowerupObjectServant::~PowerupObjectServant() {
}

void PowerupObjectServant::_setStub(DistributedObjectStub* stub) {
	_this = (PowerupObject*) stub;
	TangibleObjectServant::_setStub(stub);
}

DistributedObjectStub* PowerupObjectServant::_getStub() {
	return _this;
}


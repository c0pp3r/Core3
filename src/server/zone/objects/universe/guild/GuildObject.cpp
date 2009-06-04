/*
 *	server/zone/objects/universe/guild/GuildObject.cpp generated by engine3 IDL compiler 0.55
 */

#include "GuildObject.h"

#include "GuildObjectImplementation.h"

#include "../../SceneObject.h"

/*
 *	GuildObjectStub
 */

GuildObject::GuildObject(unsigned long long objectid) : SceneObject(DummyConstructorParameter::instance()) {
	_impl = new GuildObjectImplementation(objectid);
	_impl->_setStub(this);
}

GuildObject::GuildObject(DummyConstructorParameter* param) : SceneObject(param) {
}

GuildObject::~GuildObject() {
}

/*
 *	GuildObjectAdapter
 */

GuildObjectAdapter::GuildObjectAdapter(GuildObjectImplementation* obj) : SceneObjectAdapter(obj) {
}

Packet* GuildObjectAdapter::invokeMethod(uint32 methid, DistributedMethod* inv) {
	Packet* resp = new MethodReturnMessage(0);

	switch (methid) {
	default:
		return NULL;
	}

	return resp;
}

/*
 *	GuildObjectHelper
 */

GuildObjectHelper* GuildObjectHelper::staticInitializer = GuildObjectHelper::instance();

GuildObjectHelper::GuildObjectHelper() {
	className = "GuildObject";

	DistributedObjectBroker::instance()->registerClass(className, this);
}

void GuildObjectHelper::finalizeHelper() {
	GuildObjectHelper::finalize();
}

DistributedObject* GuildObjectHelper::instantiateObject() {
	return new GuildObject(DummyConstructorParameter::instance());
}

DistributedObjectAdapter* GuildObjectHelper::createAdapter(DistributedObjectStub* obj) {
	DistributedObjectAdapter* adapter = new GuildObjectAdapter((GuildObjectImplementation*) obj->_getImplementation());

	obj->_setClassName(className);
	obj->_setClassHelper(this);

	adapter->setStub(obj);

	return adapter;
}

/*
 *	GuildObjectServant
 */

GuildObjectServant::GuildObjectServant(unsigned long long objectid, int type) : SceneObjectImplementation(objectid, type) {
	_classHelper = GuildObjectHelper::instance();
}

GuildObjectServant::~GuildObjectServant() {
}

void GuildObjectServant::_setStub(DistributedObjectStub* stub) {
	_this = (GuildObject*) stub;
	SceneObjectServant::_setStub(stub);
}

DistributedObjectStub* GuildObjectServant::_getStub() {
	return _this;
}


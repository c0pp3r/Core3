/*
 *	server/zone/objects/building/tutorial/TutorialBuildingObject.cpp generated by engine3 IDL compiler 0.60
 */

#include "TutorialBuildingObject.h"

#include "server/zone/objects/player/PlayerCreature.h"

#include "server/zone/objects/building/tutorial/events/UnloadBuildingTask.h"

#include "server/zone/Zone.h"

#include "server/zone/objects/cell/CellObject.h"

/*
 *	TutorialBuildingObjectStub
 */

TutorialBuildingObject::TutorialBuildingObject() : BuildingObject(DummyConstructorParameter::instance()) {
	_impl = new TutorialBuildingObjectImplementation();
	_impl->_setStub(this);
}

TutorialBuildingObject::TutorialBuildingObject(DummyConstructorParameter* param) : BuildingObject(param) {
}

TutorialBuildingObject::~TutorialBuildingObject() {
}


void TutorialBuildingObject::initializeTransientMembers() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 6);

		method.executeWithVoidReturn();
	} else
		((TutorialBuildingObjectImplementation*) _impl)->initializeTransientMembers();
}

void TutorialBuildingObject::onEnter(PlayerCreature* player) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 7);
		method.addObjectParameter(player);

		method.executeWithVoidReturn();
	} else
		((TutorialBuildingObjectImplementation*) _impl)->onEnter(player);
}

void TutorialBuildingObject::onExit(PlayerCreature* player) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 8);
		method.addObjectParameter(player);

		method.executeWithVoidReturn();
	} else
		((TutorialBuildingObjectImplementation*) _impl)->onExit(player);
}

void TutorialBuildingObject::clearUnloadEvent() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 9);

		method.executeWithVoidReturn();
	} else
		((TutorialBuildingObjectImplementation*) _impl)->clearUnloadEvent();
}

/*
 *	TutorialBuildingObjectImplementation
 */

TutorialBuildingObjectImplementation::TutorialBuildingObjectImplementation(DummyConstructorParameter* param) : BuildingObjectImplementation(param) {
	_initializeImplementation();
}

TutorialBuildingObjectImplementation::~TutorialBuildingObjectImplementation() {
}


void TutorialBuildingObjectImplementation::finalize() {
}

void TutorialBuildingObjectImplementation::_initializeImplementation() {
	_setClassHelper(TutorialBuildingObjectHelper::instance());

	_serializationHelperMethod();
}

void TutorialBuildingObjectImplementation::_setStub(DistributedObjectStub* stub) {
	_this = (TutorialBuildingObject*) stub;
	BuildingObjectImplementation::_setStub(stub);
}

DistributedObjectStub* TutorialBuildingObjectImplementation::_getStub() {
	return _this;
}

TutorialBuildingObjectImplementation::operator const TutorialBuildingObject*() {
	return _this;
}

void TutorialBuildingObjectImplementation::lock(bool doLock) {
	_this->lock(doLock);
}

void TutorialBuildingObjectImplementation::lock(ManagedObject* obj) {
	_this->lock(obj);
}

void TutorialBuildingObjectImplementation::rlock(bool doLock) {
	_this->rlock(doLock);
}

void TutorialBuildingObjectImplementation::wlock(bool doLock) {
	_this->wlock(doLock);
}

void TutorialBuildingObjectImplementation::wlock(ManagedObject* obj) {
	_this->wlock(obj);
}

void TutorialBuildingObjectImplementation::unlock(bool doLock) {
	_this->unlock(doLock);
}

void TutorialBuildingObjectImplementation::runlock(bool doLock) {
	_this->runlock(doLock);
}

void TutorialBuildingObjectImplementation::_serializationHelperMethod() {
	BuildingObjectImplementation::_serializationHelperMethod();

	_setClassName("TutorialBuildingObject");

}

TutorialBuildingObjectImplementation::TutorialBuildingObjectImplementation() {
	_initializeImplementation();
	// server/zone/objects/building/tutorial/TutorialBuildingObject.idl(59):  		initializeTransientMembers();
	initializeTransientMembers();
}

void TutorialBuildingObjectImplementation::initializeTransientMembers() {
	// server/zone/objects/building/tutorial/TutorialBuildingObject.idl(63):  		super.initializeTransientMembers();
	BuildingObjectImplementation::initializeTransientMembers();
	// server/zone/objects/building/tutorial/TutorialBuildingObject.idl(65):  		unloadTask = null;
	unloadTask = NULL;
	// server/zone/objects/building/tutorial/TutorialBuildingObject.idl(67):  		Logger.setLoggingName("TutorialBuildingObject");
	Logger::setLoggingName("TutorialBuildingObject");
}

void TutorialBuildingObjectImplementation::onEnter(PlayerCreature* player) {
	// server/zone/objects/building/tutorial/TutorialBuildingObject.idl(71):  		dequeueUnloadEvent();
	dequeueUnloadEvent();
}

void TutorialBuildingObjectImplementation::onExit(PlayerCreature* player) {
	// server/zone/objects/building/tutorial/TutorialBuildingObject.idl(75):  		enqueueUnloadEvent();
	enqueueUnloadEvent();
}

void TutorialBuildingObjectImplementation::clearUnloadEvent() {
	// server/zone/objects/building/tutorial/TutorialBuildingObject.idl(79):  		unloadTask = null;
	unloadTask = NULL;
}

void TutorialBuildingObjectImplementation::dequeueUnloadEvent() {
	// server/zone/objects/building/tutorial/TutorialBuildingObject.idl(83):  	}
	if (unloadTask){
	// server/zone/objects/building/tutorial/TutorialBuildingObject.idl(84):  			unloadTask.cancel();
	unloadTask->cancel();
	// server/zone/objects/building/tutorial/TutorialBuildingObject.idl(85):  			clearUnloadEvent();
	clearUnloadEvent();
}
}

/*
 *	TutorialBuildingObjectAdapter
 */

TutorialBuildingObjectAdapter::TutorialBuildingObjectAdapter(TutorialBuildingObjectImplementation* obj) : BuildingObjectAdapter(obj) {
}

Packet* TutorialBuildingObjectAdapter::invokeMethod(uint32 methid, DistributedMethod* inv) {
	Packet* resp = new MethodReturnMessage(0);

	switch (methid) {
	case 6:
		initializeTransientMembers();
		break;
	case 7:
		onEnter((PlayerCreature*) inv->getObjectParameter());
		break;
	case 8:
		onExit((PlayerCreature*) inv->getObjectParameter());
		break;
	case 9:
		clearUnloadEvent();
		break;
	default:
		return NULL;
	}

	return resp;
}

void TutorialBuildingObjectAdapter::initializeTransientMembers() {
	((TutorialBuildingObjectImplementation*) impl)->initializeTransientMembers();
}

void TutorialBuildingObjectAdapter::onEnter(PlayerCreature* player) {
	((TutorialBuildingObjectImplementation*) impl)->onEnter(player);
}

void TutorialBuildingObjectAdapter::onExit(PlayerCreature* player) {
	((TutorialBuildingObjectImplementation*) impl)->onExit(player);
}

void TutorialBuildingObjectAdapter::clearUnloadEvent() {
	((TutorialBuildingObjectImplementation*) impl)->clearUnloadEvent();
}

/*
 *	TutorialBuildingObjectHelper
 */

TutorialBuildingObjectHelper* TutorialBuildingObjectHelper::staticInitializer = TutorialBuildingObjectHelper::instance();

TutorialBuildingObjectHelper::TutorialBuildingObjectHelper() {
	className = "TutorialBuildingObject";

	DistributedObjectBroker::instance()->registerClass(className, this);
}

void TutorialBuildingObjectHelper::finalizeHelper() {
	TutorialBuildingObjectHelper::finalize();
}

DistributedObject* TutorialBuildingObjectHelper::instantiateObject() {
	return new TutorialBuildingObject(DummyConstructorParameter::instance());
}

DistributedObjectServant* TutorialBuildingObjectHelper::instantiateServant() {
	return new TutorialBuildingObjectImplementation(DummyConstructorParameter::instance());
}

DistributedObjectAdapter* TutorialBuildingObjectHelper::createAdapter(DistributedObjectStub* obj) {
	DistributedObjectAdapter* adapter = new TutorialBuildingObjectAdapter((TutorialBuildingObjectImplementation*) obj->_getImplementation());

	obj->_setClassName(className);
	obj->_setClassHelper(this);

	adapter->setStub(obj);

	return adapter;
}


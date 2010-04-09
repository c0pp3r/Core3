/*
 *	server/zone/objects/building/BuildingObject.cpp generated by engine3 IDL compiler 0.60
 */

#include "BuildingObject.h"

#include "server/zone/objects/cell/CellObject.h"

#include "server/zone/objects/scene/SceneObject.h"

#include "server/zone/objects/player/PlayerCreature.h"

#include "server/zone/ZoneServer.h"

#include "server/zone/Zone.h"

/*
 *	BuildingObjectStub
 */

BuildingObject::BuildingObject() : TangibleObject(DummyConstructorParameter::instance()) {
	_impl = new BuildingObjectImplementation();
	_impl->_setStub(this);
}

BuildingObject::BuildingObject(DummyConstructorParameter* param) : TangibleObject(param) {
}

BuildingObject::~BuildingObject() {
}


void BuildingObject::createCellObjects() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 6);

		method.executeWithVoidReturn();
	} else
		((BuildingObjectImplementation*) _impl)->createCellObjects();
}

void BuildingObject::loadTemplateData(LuaObject* templateData) {
	if (_impl == NULL) {
		throw ObjectNotLocalException(this);

	} else
		((BuildingObjectImplementation*) _impl)->loadTemplateData(templateData);
}

void BuildingObject::initializeTransientMembers() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 7);

		method.executeWithVoidReturn();
	} else
		((BuildingObjectImplementation*) _impl)->initializeTransientMembers();
}

void BuildingObject::removeFromZone() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 8);

		method.executeWithVoidReturn();
	} else
		((BuildingObjectImplementation*) _impl)->removeFromZone();
}

void BuildingObject::notifyInsert(QuadTreeEntry* obj) {
	if (_impl == NULL) {
		throw ObjectNotLocalException(this);

	} else
		((BuildingObjectImplementation*) _impl)->notifyInsert(obj);
}

void BuildingObject::notifyDissapear(QuadTreeEntry* obj) {
	if (_impl == NULL) {
		throw ObjectNotLocalException(this);

	} else
		((BuildingObjectImplementation*) _impl)->notifyDissapear(obj);
}

void BuildingObject::notifyInsertToZone(SceneObject* object) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 9);
		method.addObjectParameter(object);

		method.executeWithVoidReturn();
	} else
		((BuildingObjectImplementation*) _impl)->notifyInsertToZone(object);
}

void BuildingObject::insert(QuadTreeEntry* obj) {
	if (_impl == NULL) {
		throw ObjectNotLocalException(this);

	} else
		((BuildingObjectImplementation*) _impl)->insert(obj);
}

void BuildingObject::remove(QuadTreeEntry* obj) {
	if (_impl == NULL) {
		throw ObjectNotLocalException(this);

	} else
		((BuildingObjectImplementation*) _impl)->remove(obj);
}

void BuildingObject::update(QuadTreeEntry* obj) {
	if (_impl == NULL) {
		throw ObjectNotLocalException(this);

	} else
		((BuildingObjectImplementation*) _impl)->update(obj);
}

void BuildingObject::inRange(QuadTreeEntry* obj, float range) {
	if (_impl == NULL) {
		throw ObjectNotLocalException(this);

	} else
		((BuildingObjectImplementation*) _impl)->inRange(obj, range);
}

void BuildingObject::sendTo(SceneObject* player, bool doClose) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 10);
		method.addObjectParameter(player);
		method.addBooleanParameter(doClose);

		method.executeWithVoidReturn();
	} else
		((BuildingObjectImplementation*) _impl)->sendTo(player, doClose);
}

void BuildingObject::sendBaselinesTo(SceneObject* player) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 11);
		method.addObjectParameter(player);

		method.executeWithVoidReturn();
	} else
		((BuildingObjectImplementation*) _impl)->sendBaselinesTo(player);
}

void BuildingObject::sendDestroyTo(SceneObject* player) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 12);
		method.addObjectParameter(player);

		method.executeWithVoidReturn();
	} else
		((BuildingObjectImplementation*) _impl)->sendDestroyTo(player);
}

void BuildingObject::addCell(CellObject* cell) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 13);
		method.addObjectParameter(cell);

		method.executeWithVoidReturn();
	} else
		((BuildingObjectImplementation*) _impl)->addCell(cell);
}

bool BuildingObject::isStaticBuilding() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 14);

		return method.executeWithBooleanReturn();
	} else
		return ((BuildingObjectImplementation*) _impl)->isStaticBuilding();
}

CellObject* BuildingObject::getCell(int idx) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 15);
		method.addSignedIntParameter(idx);

		return (CellObject*) method.executeWithObjectReturn();
	} else
		return ((BuildingObjectImplementation*) _impl)->getCell(idx);
}

void BuildingObject::setStaticBuilding(bool value) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 16);
		method.addBooleanParameter(value);

		method.executeWithVoidReturn();
	} else
		((BuildingObjectImplementation*) _impl)->setStaticBuilding(value);
}

void BuildingObject::onEnter(PlayerCreature* player) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 17);
		method.addObjectParameter(player);

		method.executeWithVoidReturn();
	} else
		((BuildingObjectImplementation*) _impl)->onEnter(player);
}

void BuildingObject::onExit(PlayerCreature* player) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 18);
		method.addObjectParameter(player);

		method.executeWithVoidReturn();
	} else
		((BuildingObjectImplementation*) _impl)->onExit(player);
}

/*
 *	BuildingObjectImplementation
 */

BuildingObjectImplementation::BuildingObjectImplementation(DummyConstructorParameter* param) : TangibleObjectImplementation(param) {
	_initializeImplementation();
}

BuildingObjectImplementation::~BuildingObjectImplementation() {
}


void BuildingObjectImplementation::finalize() {
}

void BuildingObjectImplementation::_initializeImplementation() {
	_setClassHelper(BuildingObjectHelper::instance());

	_serializationHelperMethod();
}

void BuildingObjectImplementation::_setStub(DistributedObjectStub* stub) {
	_this = (BuildingObject*) stub;
	TangibleObjectImplementation::_setStub(stub);
}

DistributedObjectStub* BuildingObjectImplementation::_getStub() {
	return _this;
}

BuildingObjectImplementation::operator const BuildingObject*() {
	return _this;
}

void BuildingObjectImplementation::lock(bool doLock) {
	_this->lock(doLock);
}

void BuildingObjectImplementation::lock(ManagedObject* obj) {
	_this->lock(obj);
}

void BuildingObjectImplementation::rlock(bool doLock) {
	_this->rlock(doLock);
}

void BuildingObjectImplementation::wlock(bool doLock) {
	_this->wlock(doLock);
}

void BuildingObjectImplementation::wlock(ManagedObject* obj) {
	_this->wlock(obj);
}

void BuildingObjectImplementation::unlock(bool doLock) {
	_this->unlock(doLock);
}

void BuildingObjectImplementation::runlock(bool doLock) {
	_this->runlock(doLock);
}

void BuildingObjectImplementation::_serializationHelperMethod() {
	TangibleObjectImplementation::_serializationHelperMethod();

	_setClassName("BuildingObject");

	addSerializableVariable("cells", &cells);
	addSerializableVariable("totalCellNumber", &totalCellNumber);
}

BuildingObjectImplementation::BuildingObjectImplementation() {
	_initializeImplementation();
	// server/zone/objects/building/BuildingObject.idl(67):  		Logger.setLoggingName("BuildingObject");
	Logger::setLoggingName("BuildingObject");
	// server/zone/objects/building/BuildingObject.idl(69):  		QuadTree.setSize(-1024, -1024, 1024, 1024);
	QuadTree::setSize(1024, 1024, 1024, 1024);
	// server/zone/objects/building/BuildingObject.idl(71):  		super.staticObject = false;
	TangibleObjectImplementation::staticObject = false;
	// server/zone/objects/building/BuildingObject.idl(73):  		super.containerVolumeLimit = 0xFFFFFFFF;
	TangibleObjectImplementation::containerVolumeLimit = 0xFFFFFFFF;
	// server/zone/objects/building/BuildingObject.idl(75):  		super.containerType = 2;
	TangibleObjectImplementation::containerType = 2;
	// server/zone/objects/building/BuildingObject.idl(77):  		totalCellNumber = 0;
	totalCellNumber = 0;
}

void BuildingObjectImplementation::createCellObjects() {
	// server/zone/objects/building/BuildingObject.idl(81):  
	for (	// server/zone/objects/building/BuildingObject.idl(81):  		for (int i = 0;
	int i = 0;
	i < totalCellNumber;
 ++i) {
	// server/zone/objects/building/BuildingObject.idl(82):  			SceneObject newCell = getZoneServer().createObject(206832110, 2);
	SceneObject* newCell = getZoneServer()->createObject(206832110, 2);
	// server/zone/objects/building/BuildingObject.idl(84):  			addCell((CellObject)newCell);
	addCell((CellObject*) newCell);
}
}

void BuildingObjectImplementation::removeFromZone() {
	// server/zone/objects/building/BuildingObject.idl(94):  
	for (	// server/zone/objects/building/BuildingObject.idl(94):  		for (int i = 0;
	int i = 0;
	i < (&cells)->size();
 ++i) {
	// server/zone/objects/building/BuildingObject.idl(95):  			CellObject cell = cells.get(i);
	CellObject* cell = (&cells)->get(i);
	// server/zone/objects/building/BuildingObject.idl(97):  
	for (	// server/zone/objects/building/BuildingObject.idl(97):  			for (int j = 0;
	int j = 0;
	j < cell->getContainerObjectsSize();
 ++j) {
	// server/zone/objects/building/BuildingObject.idl(98):  				SceneObject obj = cell.getContainerObject(j);
	SceneObject* obj = cell->getContainerObject(j);
	// server/zone/objects/building/BuildingObject.idl(99):  				obj.removeFromZone();
	obj->removeFromZone();
}
}
	// server/zone/objects/building/BuildingObject.idl(103):  		super.removeFromZone();
	TangibleObjectImplementation::removeFromZone();
}

bool BuildingObjectImplementation::isStaticBuilding() {
	// server/zone/objects/building/BuildingObject.idl(133):  		return super.staticObject;
	return TangibleObjectImplementation::staticObject;
}

CellObject* BuildingObjectImplementation::getCell(int idx) {
	// server/zone/objects/building/BuildingObject.idl(137):  		return cells.get(idx);
	return (&cells)->get(idx);
}

void BuildingObjectImplementation::setStaticBuilding(bool value) {
	// server/zone/objects/building/BuildingObject.idl(141):  		super.staticObject = value;
	TangibleObjectImplementation::staticObject = value;
}

void BuildingObjectImplementation::onEnter(PlayerCreature* player) {
}

void BuildingObjectImplementation::onExit(PlayerCreature* player) {
}

/*
 *	BuildingObjectAdapter
 */

BuildingObjectAdapter::BuildingObjectAdapter(BuildingObjectImplementation* obj) : TangibleObjectAdapter(obj) {
}

Packet* BuildingObjectAdapter::invokeMethod(uint32 methid, DistributedMethod* inv) {
	Packet* resp = new MethodReturnMessage(0);

	switch (methid) {
	case 6:
		createCellObjects();
		break;
	case 7:
		initializeTransientMembers();
		break;
	case 8:
		removeFromZone();
		break;
	case 9:
		notifyInsertToZone((SceneObject*) inv->getObjectParameter());
		break;
	case 10:
		sendTo((SceneObject*) inv->getObjectParameter(), inv->getBooleanParameter());
		break;
	case 11:
		sendBaselinesTo((SceneObject*) inv->getObjectParameter());
		break;
	case 12:
		sendDestroyTo((SceneObject*) inv->getObjectParameter());
		break;
	case 13:
		addCell((CellObject*) inv->getObjectParameter());
		break;
	case 14:
		resp->insertBoolean(isStaticBuilding());
		break;
	case 15:
		resp->insertLong(getCell(inv->getSignedIntParameter())->_getObjectID());
		break;
	case 16:
		setStaticBuilding(inv->getBooleanParameter());
		break;
	case 17:
		onEnter((PlayerCreature*) inv->getObjectParameter());
		break;
	case 18:
		onExit((PlayerCreature*) inv->getObjectParameter());
		break;
	default:
		return NULL;
	}

	return resp;
}

void BuildingObjectAdapter::createCellObjects() {
	((BuildingObjectImplementation*) impl)->createCellObjects();
}

void BuildingObjectAdapter::initializeTransientMembers() {
	((BuildingObjectImplementation*) impl)->initializeTransientMembers();
}

void BuildingObjectAdapter::removeFromZone() {
	((BuildingObjectImplementation*) impl)->removeFromZone();
}

void BuildingObjectAdapter::notifyInsertToZone(SceneObject* object) {
	((BuildingObjectImplementation*) impl)->notifyInsertToZone(object);
}

void BuildingObjectAdapter::sendTo(SceneObject* player, bool doClose) {
	((BuildingObjectImplementation*) impl)->sendTo(player, doClose);
}

void BuildingObjectAdapter::sendBaselinesTo(SceneObject* player) {
	((BuildingObjectImplementation*) impl)->sendBaselinesTo(player);
}

void BuildingObjectAdapter::sendDestroyTo(SceneObject* player) {
	((BuildingObjectImplementation*) impl)->sendDestroyTo(player);
}

void BuildingObjectAdapter::addCell(CellObject* cell) {
	((BuildingObjectImplementation*) impl)->addCell(cell);
}

bool BuildingObjectAdapter::isStaticBuilding() {
	return ((BuildingObjectImplementation*) impl)->isStaticBuilding();
}

CellObject* BuildingObjectAdapter::getCell(int idx) {
	return ((BuildingObjectImplementation*) impl)->getCell(idx);
}

void BuildingObjectAdapter::setStaticBuilding(bool value) {
	((BuildingObjectImplementation*) impl)->setStaticBuilding(value);
}

void BuildingObjectAdapter::onEnter(PlayerCreature* player) {
	((BuildingObjectImplementation*) impl)->onEnter(player);
}

void BuildingObjectAdapter::onExit(PlayerCreature* player) {
	((BuildingObjectImplementation*) impl)->onExit(player);
}

/*
 *	BuildingObjectHelper
 */

BuildingObjectHelper* BuildingObjectHelper::staticInitializer = BuildingObjectHelper::instance();

BuildingObjectHelper::BuildingObjectHelper() {
	className = "BuildingObject";

	DistributedObjectBroker::instance()->registerClass(className, this);
}

void BuildingObjectHelper::finalizeHelper() {
	BuildingObjectHelper::finalize();
}

DistributedObject* BuildingObjectHelper::instantiateObject() {
	return new BuildingObject(DummyConstructorParameter::instance());
}

DistributedObjectServant* BuildingObjectHelper::instantiateServant() {
	return new BuildingObjectImplementation(DummyConstructorParameter::instance());
}

DistributedObjectAdapter* BuildingObjectHelper::createAdapter(DistributedObjectStub* obj) {
	DistributedObjectAdapter* adapter = new BuildingObjectAdapter((BuildingObjectImplementation*) obj->_getImplementation());

	obj->_setClassName(className);
	obj->_setClassHelper(this);

	adapter->setStub(obj);

	return adapter;
}


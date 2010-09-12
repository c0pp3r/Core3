/*
 *	server/zone/objects/player/sui/listbox/teachplayerlistbox/TeachPlayerListBox.cpp generated by engine3 IDL compiler 0.60
 */

#include "TeachPlayerListBox.h"

#include "server/zone/objects/creature/professions/SkillBox.h"

#include "server/zone/objects/player/PlayerCreature.h"

/*
 *	TeachPlayerListBoxStub
 */

TeachPlayerListBox::TeachPlayerListBox(PlayerCreature* player) : SuiListBox(DummyConstructorParameter::instance()) {
	_impl = new TeachPlayerListBoxImplementation(player);
	_impl->_setStub(this);
}

TeachPlayerListBox::TeachPlayerListBox(DummyConstructorParameter* param) : SuiListBox(param) {
}

TeachPlayerListBox::~TeachPlayerListBox() {
}


void TeachPlayerListBox::setStudent(PlayerCreature* student) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 6);
		method.addObjectParameter(student);

		method.executeWithVoidReturn();
	} else
		((TeachPlayerListBoxImplementation*) _impl)->setStudent(student);
}

PlayerCreature* TeachPlayerListBox::getStudent() {
	if (_impl == NULL) {
		throw ObjectNotLocalException(this);

	} else
		return ((TeachPlayerListBoxImplementation*) _impl)->getStudent();
}

const String TeachPlayerListBox::getTeachingSkillOption(int index) {
	if (_impl == NULL) {
		throw ObjectNotLocalException(this);

	} else
		return ((TeachPlayerListBoxImplementation*) _impl)->getTeachingSkillOption(index);
}

bool TeachPlayerListBox::generateSkillList(PlayerCreature* teacher, PlayerCreature* student) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 7);
		method.addObjectParameter(teacher);
		method.addObjectParameter(student);

		return method.executeWithBooleanReturn();
	} else
		return ((TeachPlayerListBoxImplementation*) _impl)->generateSkillList(teacher, student);
}

/*
 *	TeachPlayerListBoxImplementation
 */

TeachPlayerListBoxImplementation::TeachPlayerListBoxImplementation(DummyConstructorParameter* param) : SuiListBoxImplementation(param) {
	_initializeImplementation();
}


TeachPlayerListBoxImplementation::~TeachPlayerListBoxImplementation() {
}


void TeachPlayerListBoxImplementation::finalize() {
}

void TeachPlayerListBoxImplementation::_initializeImplementation() {
	_setClassHelper(TeachPlayerListBoxHelper::instance());

	_serializationHelperMethod();
}

void TeachPlayerListBoxImplementation::_setStub(DistributedObjectStub* stub) {
	_this = (TeachPlayerListBox*) stub;
	SuiListBoxImplementation::_setStub(stub);
}

DistributedObjectStub* TeachPlayerListBoxImplementation::_getStub() {
	return _this;
}

TeachPlayerListBoxImplementation::operator const TeachPlayerListBox*() {
	return _this;
}

void TeachPlayerListBoxImplementation::lock(bool doLock) {
	_this->lock(doLock);
}

void TeachPlayerListBoxImplementation::lock(ManagedObject* obj) {
	_this->lock(obj);
}

void TeachPlayerListBoxImplementation::rlock(bool doLock) {
	_this->rlock(doLock);
}

void TeachPlayerListBoxImplementation::wlock(bool doLock) {
	_this->wlock(doLock);
}

void TeachPlayerListBoxImplementation::wlock(ManagedObject* obj) {
	_this->wlock(obj);
}

void TeachPlayerListBoxImplementation::unlock(bool doLock) {
	_this->unlock(doLock);
}

void TeachPlayerListBoxImplementation::runlock(bool doLock) {
	_this->runlock(doLock);
}

void TeachPlayerListBoxImplementation::_serializationHelperMethod() {
	SuiListBoxImplementation::_serializationHelperMethod();

	_setClassName("TeachPlayerListBox");

	addSerializableVariable("studentPlayer", &studentPlayer);
	addSerializableVariable("teachingSkillOptions", &teachingSkillOptions);
}

TeachPlayerListBoxImplementation::TeachPlayerListBoxImplementation(PlayerCreature* player) : SuiListBoxImplementation(player, 36, 0) {
	_initializeImplementation();
}

void TeachPlayerListBoxImplementation::setStudent(PlayerCreature* student) {
	// server/zone/objects/player/sui/listbox/teachplayerlistbox/TeachPlayerListBox.idl(66):   studentPlayer = student;
	studentPlayer = student;
}

PlayerCreature* TeachPlayerListBoxImplementation::getStudent() {
	// server/zone/objects/player/sui/listbox/teachplayerlistbox/TeachPlayerListBox.idl(71):   return studentPlayer;
	return studentPlayer;
}

const String TeachPlayerListBoxImplementation::getTeachingSkillOption(int index) {
	// server/zone/objects/player/sui/listbox/teachplayerlistbox/TeachPlayerListBox.idl(76):   return teachingSkillOptions.get(index).getName();
	return (&teachingSkillOptions)->get(index)->getName();
}

/*
 *	TeachPlayerListBoxAdapter
 */

TeachPlayerListBoxAdapter::TeachPlayerListBoxAdapter(TeachPlayerListBoxImplementation* obj) : SuiListBoxAdapter(obj) {
}

Packet* TeachPlayerListBoxAdapter::invokeMethod(uint32 methid, DistributedMethod* inv) {
	Packet* resp = new MethodReturnMessage(0);

	switch (methid) {
	case 6:
		setStudent((PlayerCreature*) inv->getObjectParameter());
		break;
	case 7:
		resp->insertBoolean(generateSkillList((PlayerCreature*) inv->getObjectParameter(), (PlayerCreature*) inv->getObjectParameter()));
		break;
	default:
		return NULL;
	}

	return resp;
}

void TeachPlayerListBoxAdapter::setStudent(PlayerCreature* student) {
	((TeachPlayerListBoxImplementation*) impl)->setStudent(student);
}

bool TeachPlayerListBoxAdapter::generateSkillList(PlayerCreature* teacher, PlayerCreature* student) {
	return ((TeachPlayerListBoxImplementation*) impl)->generateSkillList(teacher, student);
}

/*
 *	TeachPlayerListBoxHelper
 */

TeachPlayerListBoxHelper* TeachPlayerListBoxHelper::staticInitializer = TeachPlayerListBoxHelper::instance();

TeachPlayerListBoxHelper::TeachPlayerListBoxHelper() {
	className = "TeachPlayerListBox";

	DistributedObjectBroker::instance()->registerClass(className, this);
}

void TeachPlayerListBoxHelper::finalizeHelper() {
	TeachPlayerListBoxHelper::finalize();
}

DistributedObject* TeachPlayerListBoxHelper::instantiateObject() {
	return new TeachPlayerListBox(DummyConstructorParameter::instance());
}

DistributedObjectServant* TeachPlayerListBoxHelper::instantiateServant() {
	return new TeachPlayerListBoxImplementation(DummyConstructorParameter::instance());
}

DistributedObjectAdapter* TeachPlayerListBoxHelper::createAdapter(DistributedObjectStub* obj) {
	DistributedObjectAdapter* adapter = new TeachPlayerListBoxAdapter((TeachPlayerListBoxImplementation*) obj->_getImplementation());

	obj->_setClassName(className);
	obj->_setClassHelper(this);

	adapter->setStub(obj);

	return adapter;
}


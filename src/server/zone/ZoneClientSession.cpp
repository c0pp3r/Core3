/*
 *	server/zone/ZoneClientSession.cpp generated by engine3 IDL compiler 0.55
 */

#include "ZoneClientSession.h"

#include "ZoneClientSessionImplementation.h"

#include "ZoneServer.h"

#include "objects/intangible/player/PlayerObject.h"

/*
 *	ZoneClientSessionStub
 */

ZoneClientSession::ZoneClientSession(DatagramServiceThread* server, Socket* sock, SocketAddress* addr) {
	_impl = new ZoneClientSessionImplementation(server, sock, addr);
	_impl->_setStub(this);
}

ZoneClientSession::ZoneClientSession(DummyConstructorParameter* param) {
	_impl = NULL;
}

ZoneClientSession::~ZoneClientSession() {
}

void ZoneClientSession::disconnect(bool doLock) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 6);
		method.addBooleanParameter(doLock);

		method.executeWithVoidReturn();
	} else
		((ZoneClientSessionImplementation*) _impl)->disconnect(doLock);
}

void ZoneClientSession::closeConnection(bool lockPlayer, bool doLock) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 7);
		method.addBooleanParameter(lockPlayer);
		method.addBooleanParameter(doLock);

		method.executeWithVoidReturn();
	} else
		((ZoneClientSessionImplementation*) _impl)->closeConnection(lockPlayer, doLock);
}

void ZoneClientSession::sendMessage(BaseMessage* msg) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 8);
		method.addObjectParameter(msg);

		method.executeWithVoidReturn();
	} else
		((ZoneClientSessionImplementation*) _impl)->sendMessage(msg);
}

void ZoneClientSession::sendMessage(StandaloneBaseMessage* msg) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 9);
		method.addObjectParameter(msg);

		method.executeWithVoidReturn();
	} else
		((ZoneClientSessionImplementation*) _impl)->sendMessage(msg);
}

void ZoneClientSession::resetPacketCheckupTime() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 10);

		method.executeWithVoidReturn();
	} else
		((ZoneClientSessionImplementation*) _impl)->resetPacketCheckupTime();
}

void ZoneClientSession::balancePacketCheckupTime() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 11);

		method.executeWithVoidReturn();
	} else
		((ZoneClientSessionImplementation*) _impl)->balancePacketCheckupTime();
}

void ZoneClientSession::info(const String& msg, bool foredLog) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 12);
		method.addAsciiParameter(msg);
		method.addBooleanParameter(foredLog);

		method.executeWithVoidReturn();
	} else
		((ZoneClientSessionImplementation*) _impl)->info(msg, foredLog);
}

void ZoneClientSession::setPlayer(PlayerObject* player) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 13);
		method.addObjectParameter(player);

		method.executeWithVoidReturn();
	} else
		((ZoneClientSessionImplementation*) _impl)->setPlayer(player);
}

PlayerObject* ZoneClientSession::getPlayer() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 14);

		return (PlayerObject*) method.executeWithObjectReturn();
	} else
		return ((ZoneClientSessionImplementation*) _impl)->getPlayer();
}

bool ZoneClientSession::isAvailable() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 15);

		return method.executeWithBooleanReturn();
	} else
		return ((ZoneClientSessionImplementation*) _impl)->isAvailable();
}

String& ZoneClientSession::getAddress() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 16);

		method.executeWithAsciiReturn(_return_getAddress);
		return _return_getAddress;
	} else
		return ((ZoneClientSessionImplementation*) _impl)->getAddress();
}

unsigned int ZoneClientSession::getSessionKey() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 17);

		return method.executeWithUnsignedIntReturn();
	} else
		return ((ZoneClientSessionImplementation*) _impl)->getSessionKey();
}

/*
 *	ZoneClientSessionAdapter
 */

ZoneClientSessionAdapter::ZoneClientSessionAdapter(ZoneClientSessionImplementation* obj) : DistributedObjectAdapter((DistributedObjectServant*) obj) {
}

Packet* ZoneClientSessionAdapter::invokeMethod(uint32 methid, DistributedMethod* inv) {
	Packet* resp = new MethodReturnMessage(0);

	switch (methid) {
	case 6:
		disconnect(inv->getBooleanParameter());
		break;
	case 7:
		closeConnection(inv->getBooleanParameter(), inv->getBooleanParameter());
		break;
	case 8:
		sendMessage((BaseMessage*) inv->getObjectParameter());
		break;
	case 9:
		sendMessage((StandaloneBaseMessage*) inv->getObjectParameter());
		break;
	case 10:
		resetPacketCheckupTime();
		break;
	case 11:
		balancePacketCheckupTime();
		break;
	case 12:
		info(inv->getAsciiParameter(_param0_info__String_bool_), inv->getBooleanParameter());
		break;
	case 13:
		setPlayer((PlayerObject*) inv->getObjectParameter());
		break;
	case 14:
		resp->insertLong(getPlayer()->_getObjectID());
		break;
	case 15:
		resp->insertBoolean(isAvailable());
		break;
	case 16:
		resp->insertAscii(getAddress());
		break;
	case 17:
		resp->insertInt(getSessionKey());
		break;
	default:
		return NULL;
	}

	return resp;
}

void ZoneClientSessionAdapter::disconnect(bool doLock) {
	return ((ZoneClientSessionImplementation*) impl)->disconnect(doLock);
}

void ZoneClientSessionAdapter::closeConnection(bool lockPlayer, bool doLock) {
	return ((ZoneClientSessionImplementation*) impl)->closeConnection(lockPlayer, doLock);
}

void ZoneClientSessionAdapter::sendMessage(BaseMessage* msg) {
	return ((ZoneClientSessionImplementation*) impl)->sendMessage(msg);
}

void ZoneClientSessionAdapter::sendMessage(StandaloneBaseMessage* msg) {
	return ((ZoneClientSessionImplementation*) impl)->sendMessage(msg);
}

void ZoneClientSessionAdapter::resetPacketCheckupTime() {
	return ((ZoneClientSessionImplementation*) impl)->resetPacketCheckupTime();
}

void ZoneClientSessionAdapter::balancePacketCheckupTime() {
	return ((ZoneClientSessionImplementation*) impl)->balancePacketCheckupTime();
}

void ZoneClientSessionAdapter::info(const String& msg, bool foredLog) {
	return ((ZoneClientSessionImplementation*) impl)->info(msg, foredLog);
}

void ZoneClientSessionAdapter::setPlayer(PlayerObject* player) {
	return ((ZoneClientSessionImplementation*) impl)->setPlayer(player);
}

PlayerObject* ZoneClientSessionAdapter::getPlayer() {
	return ((ZoneClientSessionImplementation*) impl)->getPlayer();
}

bool ZoneClientSessionAdapter::isAvailable() {
	return ((ZoneClientSessionImplementation*) impl)->isAvailable();
}

String& ZoneClientSessionAdapter::getAddress() {
	return ((ZoneClientSessionImplementation*) impl)->getAddress();
}

unsigned int ZoneClientSessionAdapter::getSessionKey() {
	return ((ZoneClientSessionImplementation*) impl)->getSessionKey();
}

/*
 *	ZoneClientSessionHelper
 */

ZoneClientSessionHelper* ZoneClientSessionHelper::staticInitializer = ZoneClientSessionHelper::instance();

ZoneClientSessionHelper::ZoneClientSessionHelper() {
	className = "ZoneClientSession";

	DistributedObjectBroker::instance()->registerClass(className, this);
}

void ZoneClientSessionHelper::finalizeHelper() {
	ZoneClientSessionHelper::finalize();
}

DistributedObject* ZoneClientSessionHelper::instantiateObject() {
	return new ZoneClientSession(DummyConstructorParameter::instance());
}

DistributedObjectAdapter* ZoneClientSessionHelper::createAdapter(DistributedObjectStub* obj) {
	DistributedObjectAdapter* adapter = new ZoneClientSessionAdapter((ZoneClientSessionImplementation*) obj->_getImplementation());

	obj->_setClassName(className);
	obj->_setClassHelper(this);

	adapter->setStub(obj);

	return adapter;
}

/*
 *	ZoneClientSessionServant
 */

ZoneClientSessionServant::ZoneClientSessionServant() {
	_classHelper = ZoneClientSessionHelper::instance();
}

ZoneClientSessionServant::~ZoneClientSessionServant() {
}

void ZoneClientSessionServant::_setStub(DistributedObjectStub* stub) {
	_this = (ZoneClientSession*) stub;
}

DistributedObjectStub* ZoneClientSessionServant::_getStub() {
	return _this;
}


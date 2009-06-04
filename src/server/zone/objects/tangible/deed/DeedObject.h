/*
 *	server/zone/objects/tangible/deed/DeedObject.h generated by engine3 IDL compiler 0.55
 */

#ifndef DEEDOBJECT_H_
#define DEEDOBJECT_H_

#include "engine/orb/DistributedObjectBroker.h"

class TangibleObject;

#include "../TangibleObject.h"

class DeedObject : public TangibleObject {
public:
	DeedObject(unsigned long long objectid, int type = 800000);

protected:
	DeedObject(DummyConstructorParameter* param);

	virtual ~DeedObject();

	friend class DeedObjectHelper;
};

class DeedObjectImplementation;

class DeedObjectAdapter : public TangibleObjectAdapter {
public:
	DeedObjectAdapter(DeedObjectImplementation* impl);

	Packet* invokeMethod(sys::uint32 methid, DistributedMethod* method);

};

class DeedObjectHelper : public DistributedObjectClassHelper, public Singleton<DeedObjectHelper> {
	static DeedObjectHelper* staticInitializer;

public:
	DeedObjectHelper();

	void finalizeHelper();

	DistributedObject* instantiateObject();

	DistributedObjectAdapter* createAdapter(DistributedObjectStub* obj);

	friend class SingletonWrapper<DeedObjectHelper>;
};

#include "../TangibleObjectImplementation.h"

class DeedObjectServant : public TangibleObjectImplementation {
public:
	DeedObject* _this;

public:
	DeedObjectServant(unsigned long long objectid, int type);
	virtual ~DeedObjectServant();

	void _setStub(DistributedObjectStub* stub);
	DistributedObjectStub* _getStub();

};

#endif /*DEEDOBJECT_H_*/

/*
 *	server/zone/objects/tangible/instrument/InstrumentObject.h generated by engine3 IDL compiler 0.55
 */

#ifndef INSTRUMENTOBJECT_H_
#define INSTRUMENTOBJECT_H_

#include "engine/orb/DistributedObjectBroker.h"

class TangibleObject;

#include "../TangibleObject.h"

class InstrumentObject : public TangibleObject {
public:
	InstrumentObject(unsigned long long objectid);

protected:
	InstrumentObject(DummyConstructorParameter* param);

	virtual ~InstrumentObject();

	friend class InstrumentObjectHelper;
};

class InstrumentObjectImplementation;

class InstrumentObjectAdapter : public TangibleObjectAdapter {
public:
	InstrumentObjectAdapter(InstrumentObjectImplementation* impl);

	Packet* invokeMethod(sys::uint32 methid, DistributedMethod* method);

};

class InstrumentObjectHelper : public DistributedObjectClassHelper, public Singleton<InstrumentObjectHelper> {
	static InstrumentObjectHelper* staticInitializer;

public:
	InstrumentObjectHelper();

	void finalizeHelper();

	DistributedObject* instantiateObject();

	DistributedObjectAdapter* createAdapter(DistributedObjectStub* obj);

	friend class SingletonWrapper<InstrumentObjectHelper>;
};

#include "../TangibleObjectImplementation.h"

class InstrumentObjectServant : public TangibleObjectImplementation {
public:
	InstrumentObject* _this;

public:
	InstrumentObjectServant(unsigned long long objectid, int type);
	virtual ~InstrumentObjectServant();

	void _setStub(DistributedObjectStub* stub);
	DistributedObjectStub* _getStub();

};

#endif /*INSTRUMENTOBJECT_H_*/

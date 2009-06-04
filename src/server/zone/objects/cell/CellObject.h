/*
 *	server/zone/objects/cell/CellObject.h generated by engine3 IDL compiler 0.55
 */

#ifndef CELLOBJECT_H_
#define CELLOBJECT_H_

#include "engine/orb/DistributedObjectBroker.h"

class SceneObject;

#include "../SceneObject.h"

class CellObject : public SceneObject {
public:
	CellObject(unsigned long long objectid);

protected:
	CellObject(DummyConstructorParameter* param);

	virtual ~CellObject();

	friend class CellObjectHelper;
};

class CellObjectImplementation;

class CellObjectAdapter : public SceneObjectAdapter {
public:
	CellObjectAdapter(CellObjectImplementation* impl);

	Packet* invokeMethod(sys::uint32 methid, DistributedMethod* method);

};

class CellObjectHelper : public DistributedObjectClassHelper, public Singleton<CellObjectHelper> {
	static CellObjectHelper* staticInitializer;

public:
	CellObjectHelper();

	void finalizeHelper();

	DistributedObject* instantiateObject();

	DistributedObjectAdapter* createAdapter(DistributedObjectStub* obj);

	friend class SingletonWrapper<CellObjectHelper>;
};

#include "../SceneObjectImplementation.h"

class CellObjectServant : public SceneObjectImplementation {
public:
	CellObject* _this;

public:
	CellObjectServant(unsigned long long objectid, int type);
	virtual ~CellObjectServant();

	void _setStub(DistributedObjectStub* stub);
	DistributedObjectStub* _getStub();

};

#endif /*CELLOBJECT_H_*/

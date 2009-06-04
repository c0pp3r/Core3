/*
 *	server/zone/objects/tangible/inventory/InventoryObject.h generated by engine3 IDL compiler 0.55
 */

#ifndef INVENTORYOBJECT_H_
#define INVENTORYOBJECT_H_

#include "engine/orb/DistributedObjectBroker.h"

class TangibleObject;

#include "../TangibleObject.h"

class InventoryObject : public TangibleObject {
public:
	InventoryObject(unsigned long long objectid);

protected:
	InventoryObject(DummyConstructorParameter* param);

	virtual ~InventoryObject();

	friend class InventoryObjectHelper;
};

class InventoryObjectImplementation;

class InventoryObjectAdapter : public TangibleObjectAdapter {
public:
	InventoryObjectAdapter(InventoryObjectImplementation* impl);

	Packet* invokeMethod(sys::uint32 methid, DistributedMethod* method);

};

class InventoryObjectHelper : public DistributedObjectClassHelper, public Singleton<InventoryObjectHelper> {
	static InventoryObjectHelper* staticInitializer;

public:
	InventoryObjectHelper();

	void finalizeHelper();

	DistributedObject* instantiateObject();

	DistributedObjectAdapter* createAdapter(DistributedObjectStub* obj);

	friend class SingletonWrapper<InventoryObjectHelper>;
};

#include "../TangibleObjectImplementation.h"

class InventoryObjectServant : public TangibleObjectImplementation {
public:
	InventoryObject* _this;

public:
	InventoryObjectServant(unsigned long long objectid, int type);
	virtual ~InventoryObjectServant();

	void _setStub(DistributedObjectStub* stub);
	DistributedObjectStub* _getStub();

};

#endif /*INVENTORYOBJECT_H_*/

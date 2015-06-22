/*
    This file is part of the WebKit open source project.
    This file has been generated by generate-bindings.pl. DO NOT MODIFY!

    This library is free software; you can redistribute it and/or
    modify it under the terms of the GNU Library General Public
    License as published by the Free Software Foundation; either
    version 2 of the License, or (at your option) any later version.

    This library is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
    Library General Public License for more details.

    You should have received a copy of the GNU Library General Public License
    along with this library; see the file COPYING.LIB.  If not, write to
    the Free Software Foundation, Inc., 51 Franklin Street, Fifth Floor,
    Boston, MA 02110-1301, USA.
*/

#include "config.h"
#include "JSMutationRecord.h"

#include "JSNode.h"
#include "JSNodeList.h"
#include "KURL.h"
#include "MutationRecord.h"
#include "NameNodeList.h"
#include "Node.h"
#include "NodeList.h"
#include <runtime/JSString.h>
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

/* Hash table */

static const HashTableValue JSMutationRecordTableValues[] =
{
    { "type", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsMutationRecordType), (intptr_t)0, NoIntrinsic },
    { "target", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsMutationRecordTarget), (intptr_t)0, NoIntrinsic },
    { "addedNodes", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsMutationRecordAddedNodes), (intptr_t)0, NoIntrinsic },
    { "removedNodes", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsMutationRecordRemovedNodes), (intptr_t)0, NoIntrinsic },
    { "previousSibling", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsMutationRecordPreviousSibling), (intptr_t)0, NoIntrinsic },
    { "nextSibling", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsMutationRecordNextSibling), (intptr_t)0, NoIntrinsic },
    { "attributeName", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsMutationRecordAttributeName), (intptr_t)0, NoIntrinsic },
    { "attributeNamespace", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsMutationRecordAttributeNamespace), (intptr_t)0, NoIntrinsic },
    { "oldValue", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsMutationRecordOldValue), (intptr_t)0, NoIntrinsic },
    { "constructor", DontEnum | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsMutationRecordConstructor), (intptr_t)0, NoIntrinsic },
    { 0, 0, 0, 0, NoIntrinsic }
};

static const HashTable JSMutationRecordTable = { 33, 31, JSMutationRecordTableValues, 0 };
/* Hash table for constructor */

static const HashTableValue JSMutationRecordConstructorTableValues[] =
{
    { 0, 0, 0, 0, NoIntrinsic }
};

static const HashTable JSMutationRecordConstructorTable = { 1, 0, JSMutationRecordConstructorTableValues, 0 };
const ClassInfo JSMutationRecordConstructor::s_info = { "MutationRecordConstructor", &Base::s_info, &JSMutationRecordConstructorTable, 0, CREATE_METHOD_TABLE(JSMutationRecordConstructor) };

JSMutationRecordConstructor::JSMutationRecordConstructor(Structure* structure, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(structure, globalObject)
{
}

void JSMutationRecordConstructor::finishCreation(ExecState* exec, JSDOMGlobalObject* globalObject)
{
    Base::finishCreation(exec->vm());
    ASSERT(inherits(&s_info));
    putDirect(exec->vm(), exec->propertyNames().prototype, JSMutationRecordPrototype::self(exec, globalObject), DontDelete | ReadOnly);
    putDirect(exec->vm(), exec->propertyNames().length, jsNumber(0), ReadOnly | DontDelete | DontEnum);
}

bool JSMutationRecordConstructor::getOwnPropertySlot(JSCell* cell, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSMutationRecordConstructor, JSDOMWrapper>(exec, &JSMutationRecordConstructorTable, jsCast<JSMutationRecordConstructor*>(cell), propertyName, slot);
}

bool JSMutationRecordConstructor::getOwnPropertyDescriptor(JSObject* object, ExecState* exec, PropertyName propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSMutationRecordConstructor, JSDOMWrapper>(exec, &JSMutationRecordConstructorTable, jsCast<JSMutationRecordConstructor*>(object), propertyName, descriptor);
}

/* Hash table for prototype */

static const HashTableValue JSMutationRecordPrototypeTableValues[] =
{
    { 0, 0, 0, 0, NoIntrinsic }
};

static const HashTable JSMutationRecordPrototypeTable = { 1, 0, JSMutationRecordPrototypeTableValues, 0 };
const ClassInfo JSMutationRecordPrototype::s_info = { "MutationRecordPrototype", &Base::s_info, &JSMutationRecordPrototypeTable, 0, CREATE_METHOD_TABLE(JSMutationRecordPrototype) };

JSObject* JSMutationRecordPrototype::self(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSMutationRecord>(exec, globalObject);
}

const ClassInfo JSMutationRecord::s_info = { "MutationRecord", &Base::s_info, &JSMutationRecordTable, 0 , CREATE_METHOD_TABLE(JSMutationRecord) };

JSMutationRecord::JSMutationRecord(Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<MutationRecord> impl)
    : JSDOMWrapper(structure, globalObject)
    , m_impl(impl.leakRef())
{
}

void JSMutationRecord::finishCreation(VM& vm)
{
    Base::finishCreation(vm);
    ASSERT(inherits(&s_info));
}

JSObject* JSMutationRecord::createPrototype(ExecState* exec, JSGlobalObject* globalObject)
{
    return JSMutationRecordPrototype::create(exec->vm(), globalObject, JSMutationRecordPrototype::createStructure(globalObject->vm(), globalObject, globalObject->objectPrototype()));
}

void JSMutationRecord::destroy(JSC::JSCell* cell)
{
    JSMutationRecord* thisObject = static_cast<JSMutationRecord*>(cell);
    thisObject->JSMutationRecord::~JSMutationRecord();
}

JSMutationRecord::~JSMutationRecord()
{
    releaseImplIfNotNull();
}

bool JSMutationRecord::getOwnPropertySlot(JSCell* cell, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    JSMutationRecord* thisObject = jsCast<JSMutationRecord*>(cell);
    ASSERT_GC_OBJECT_INHERITS(thisObject, &s_info);
    return getStaticValueSlot<JSMutationRecord, Base>(exec, &JSMutationRecordTable, thisObject, propertyName, slot);
}

bool JSMutationRecord::getOwnPropertyDescriptor(JSObject* object, ExecState* exec, PropertyName propertyName, PropertyDescriptor& descriptor)
{
    JSMutationRecord* thisObject = jsCast<JSMutationRecord*>(object);
    ASSERT_GC_OBJECT_INHERITS(thisObject, &s_info);
    return getStaticValueDescriptor<JSMutationRecord, Base>(exec, &JSMutationRecordTable, thisObject, propertyName, descriptor);
}

JSValue jsMutationRecordType(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSMutationRecord* castedThis = jsCast<JSMutationRecord*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    MutationRecord* impl = static_cast<MutationRecord*>(castedThis->impl());
    JSValue result = jsStringWithCache(exec, impl->type());
    return result;
}


JSValue jsMutationRecordTarget(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSMutationRecord* castedThis = jsCast<JSMutationRecord*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    MutationRecord* impl = static_cast<MutationRecord*>(castedThis->impl());
    JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(impl->target()));
    return result;
}


JSValue jsMutationRecordAddedNodes(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSMutationRecord* castedThis = jsCast<JSMutationRecord*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    MutationRecord* impl = static_cast<MutationRecord*>(castedThis->impl());
    JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(impl->addedNodes()));
    return result;
}


JSValue jsMutationRecordRemovedNodes(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSMutationRecord* castedThis = jsCast<JSMutationRecord*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    MutationRecord* impl = static_cast<MutationRecord*>(castedThis->impl());
    JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(impl->removedNodes()));
    return result;
}


JSValue jsMutationRecordPreviousSibling(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSMutationRecord* castedThis = jsCast<JSMutationRecord*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    MutationRecord* impl = static_cast<MutationRecord*>(castedThis->impl());
    JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(impl->previousSibling()));
    return result;
}


JSValue jsMutationRecordNextSibling(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSMutationRecord* castedThis = jsCast<JSMutationRecord*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    MutationRecord* impl = static_cast<MutationRecord*>(castedThis->impl());
    JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(impl->nextSibling()));
    return result;
}


JSValue jsMutationRecordAttributeName(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSMutationRecord* castedThis = jsCast<JSMutationRecord*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    MutationRecord* impl = static_cast<MutationRecord*>(castedThis->impl());
    JSValue result = jsStringOrNull(exec, impl->attributeName());
    return result;
}


JSValue jsMutationRecordAttributeNamespace(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSMutationRecord* castedThis = jsCast<JSMutationRecord*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    MutationRecord* impl = static_cast<MutationRecord*>(castedThis->impl());
    JSValue result = jsStringOrNull(exec, impl->attributeNamespace());
    return result;
}


JSValue jsMutationRecordOldValue(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSMutationRecord* castedThis = jsCast<JSMutationRecord*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    MutationRecord* impl = static_cast<MutationRecord*>(castedThis->impl());
    JSValue result = jsStringOrNull(exec, impl->oldValue());
    return result;
}


JSValue jsMutationRecordConstructor(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSMutationRecord* domObject = jsCast<JSMutationRecord*>(asObject(slotBase));
    return JSMutationRecord::getConstructor(exec, domObject->globalObject());
}

JSValue JSMutationRecord::getConstructor(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSMutationRecordConstructor>(exec, jsCast<JSDOMGlobalObject*>(globalObject));
}

static inline bool isObservable(JSMutationRecord* jsMutationRecord)
{
    if (jsMutationRecord->hasCustomProperties())
        return true;
    return false;
}

bool JSMutationRecordOwner::isReachableFromOpaqueRoots(JSC::Handle<JSC::Unknown> handle, void*, SlotVisitor& visitor)
{
    JSMutationRecord* jsMutationRecord = jsCast<JSMutationRecord*>(handle.get().asCell());
    if (!isObservable(jsMutationRecord))
        return false;
    UNUSED_PARAM(visitor);
    return false;
}

void JSMutationRecordOwner::finalize(JSC::Handle<JSC::Unknown> handle, void* context)
{
    JSMutationRecord* jsMutationRecord = jsCast<JSMutationRecord*>(handle.get().asCell());
    DOMWrapperWorld* world = static_cast<DOMWrapperWorld*>(context);
    uncacheWrapper(world, jsMutationRecord->impl(), jsMutationRecord);
    jsMutationRecord->releaseImpl();
}

JSC::JSValue toJS(JSC::ExecState* exec, JSDOMGlobalObject* globalObject, MutationRecord* impl)
{
    if (!impl)
        return jsNull();
    if (JSValue result = getExistingWrapper<JSMutationRecord>(exec, impl))
        return result;
    ReportMemoryCost<MutationRecord>::reportMemoryCost(exec, impl);
    return createNewWrapper<JSMutationRecord>(exec, globalObject, impl);
}

MutationRecord* toMutationRecord(JSC::JSValue value)
{
    return value.inherits(&JSMutationRecord::s_info) ? jsCast<JSMutationRecord*>(asObject(value))->impl() : 0;
}

}

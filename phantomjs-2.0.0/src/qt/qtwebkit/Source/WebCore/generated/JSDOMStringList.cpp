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
#include "JSDOMStringList.h"

#include "DOMStringList.h"
#include "ExceptionCode.h"
#include "JSDOMBinding.h"
#include "KURL.h"
#include <runtime/Error.h>
#include <runtime/PropertyNameArray.h>
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

/* Hash table */

static const HashTableValue JSDOMStringListTableValues[] =
{
    { "length", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsDOMStringListLength), (intptr_t)0, NoIntrinsic },
    { "constructor", DontEnum | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsDOMStringListConstructor), (intptr_t)0, NoIntrinsic },
    { 0, 0, 0, 0, NoIntrinsic }
};

static const HashTable JSDOMStringListTable = { 5, 3, JSDOMStringListTableValues, 0 };
/* Hash table for constructor */

static const HashTableValue JSDOMStringListConstructorTableValues[] =
{
    { 0, 0, 0, 0, NoIntrinsic }
};

static const HashTable JSDOMStringListConstructorTable = { 1, 0, JSDOMStringListConstructorTableValues, 0 };
static const HashTable* getJSDOMStringListConstructorTable(ExecState* exec)
{
    return getHashTableForGlobalData(exec->vm(), &JSDOMStringListConstructorTable);
}

const ClassInfo JSDOMStringListConstructor::s_info = { "DOMStringListConstructor", &Base::s_info, 0, getJSDOMStringListConstructorTable, CREATE_METHOD_TABLE(JSDOMStringListConstructor) };

JSDOMStringListConstructor::JSDOMStringListConstructor(Structure* structure, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(structure, globalObject)
{
}

void JSDOMStringListConstructor::finishCreation(ExecState* exec, JSDOMGlobalObject* globalObject)
{
    Base::finishCreation(exec->vm());
    ASSERT(inherits(&s_info));
    putDirect(exec->vm(), exec->propertyNames().prototype, JSDOMStringListPrototype::self(exec, globalObject), DontDelete | ReadOnly);
    putDirect(exec->vm(), exec->propertyNames().length, jsNumber(0), ReadOnly | DontDelete | DontEnum);
}

bool JSDOMStringListConstructor::getOwnPropertySlot(JSCell* cell, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSDOMStringListConstructor, JSDOMWrapper>(exec, getJSDOMStringListConstructorTable(exec), jsCast<JSDOMStringListConstructor*>(cell), propertyName, slot);
}

bool JSDOMStringListConstructor::getOwnPropertyDescriptor(JSObject* object, ExecState* exec, PropertyName propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSDOMStringListConstructor, JSDOMWrapper>(exec, getJSDOMStringListConstructorTable(exec), jsCast<JSDOMStringListConstructor*>(object), propertyName, descriptor);
}

/* Hash table for prototype */

static const HashTableValue JSDOMStringListPrototypeTableValues[] =
{
    { "item", DontDelete | JSC::Function, (intptr_t)static_cast<NativeFunction>(jsDOMStringListPrototypeFunctionItem), (intptr_t)0, NoIntrinsic },
    { "contains", DontDelete | JSC::Function, (intptr_t)static_cast<NativeFunction>(jsDOMStringListPrototypeFunctionContains), (intptr_t)0, NoIntrinsic },
    { 0, 0, 0, 0, NoIntrinsic }
};

static const HashTable JSDOMStringListPrototypeTable = { 4, 3, JSDOMStringListPrototypeTableValues, 0 };
static const HashTable* getJSDOMStringListPrototypeTable(ExecState* exec)
{
    return getHashTableForGlobalData(exec->vm(), &JSDOMStringListPrototypeTable);
}

const ClassInfo JSDOMStringListPrototype::s_info = { "DOMStringListPrototype", &Base::s_info, 0, getJSDOMStringListPrototypeTable, CREATE_METHOD_TABLE(JSDOMStringListPrototype) };

JSObject* JSDOMStringListPrototype::self(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSDOMStringList>(exec, globalObject);
}

bool JSDOMStringListPrototype::getOwnPropertySlot(JSCell* cell, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    JSDOMStringListPrototype* thisObject = jsCast<JSDOMStringListPrototype*>(cell);
    return getStaticFunctionSlot<JSObject>(exec, getJSDOMStringListPrototypeTable(exec), thisObject, propertyName, slot);
}

bool JSDOMStringListPrototype::getOwnPropertyDescriptor(JSObject* object, ExecState* exec, PropertyName propertyName, PropertyDescriptor& descriptor)
{
    JSDOMStringListPrototype* thisObject = jsCast<JSDOMStringListPrototype*>(object);
    return getStaticFunctionDescriptor<JSObject>(exec, getJSDOMStringListPrototypeTable(exec), thisObject, propertyName, descriptor);
}

static const HashTable* getJSDOMStringListTable(ExecState* exec)
{
    return getHashTableForGlobalData(exec->vm(), &JSDOMStringListTable);
}

const ClassInfo JSDOMStringList::s_info = { "DOMStringList", &Base::s_info, 0, getJSDOMStringListTable , CREATE_METHOD_TABLE(JSDOMStringList) };

JSDOMStringList::JSDOMStringList(Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<DOMStringList> impl)
    : JSDOMWrapper(structure, globalObject)
    , m_impl(impl.leakRef())
{
}

void JSDOMStringList::finishCreation(VM& vm)
{
    Base::finishCreation(vm);
    ASSERT(inherits(&s_info));
}

JSObject* JSDOMStringList::createPrototype(ExecState* exec, JSGlobalObject* globalObject)
{
    return JSDOMStringListPrototype::create(exec->vm(), globalObject, JSDOMStringListPrototype::createStructure(globalObject->vm(), globalObject, globalObject->objectPrototype()));
}

void JSDOMStringList::destroy(JSC::JSCell* cell)
{
    JSDOMStringList* thisObject = static_cast<JSDOMStringList*>(cell);
    thisObject->JSDOMStringList::~JSDOMStringList();
}

JSDOMStringList::~JSDOMStringList()
{
    releaseImplIfNotNull();
}

bool JSDOMStringList::getOwnPropertySlot(JSCell* cell, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    JSDOMStringList* thisObject = jsCast<JSDOMStringList*>(cell);
    ASSERT_GC_OBJECT_INHERITS(thisObject, &s_info);
    const HashEntry* entry = getStaticValueSlotEntryWithoutCaching<JSDOMStringList>(exec, propertyName);
    if (entry) {
        slot.setCustom(thisObject, entry->propertyGetter());
        return true;
    }
    unsigned index = propertyName.asIndex();
    if (index != PropertyName::NotAnIndex) {
        slot.setCustomIndex(thisObject, index, indexGetter);
        return true;
    }
    return getStaticValueSlot<JSDOMStringList, Base>(exec, getJSDOMStringListTable(exec), thisObject, propertyName, slot);
}

bool JSDOMStringList::getOwnPropertyDescriptor(JSObject* object, ExecState* exec, PropertyName propertyName, PropertyDescriptor& descriptor)
{
    JSDOMStringList* thisObject = jsCast<JSDOMStringList*>(object);
    ASSERT_GC_OBJECT_INHERITS(thisObject, &s_info);
    const HashEntry* entry = JSDOMStringListTable.entry(exec, propertyName);
    if (entry) {
        PropertySlot slot;
        slot.setCustom(thisObject, entry->propertyGetter());
        descriptor.setDescriptor(slot.getValue(exec, propertyName), entry->attributes());
        return true;
    }
    unsigned index = propertyName.asIndex();
    if (index != PropertyName::NotAnIndex && index < static_cast<DOMStringList*>(thisObject->impl())->length()) {
        PropertySlot slot;
        slot.setCustomIndex(thisObject, index, indexGetter);
        descriptor.setDescriptor(slot.getValue(exec, propertyName), DontDelete | ReadOnly);
        return true;
    }
    return getStaticValueDescriptor<JSDOMStringList, Base>(exec, getJSDOMStringListTable(exec), thisObject, propertyName, descriptor);
}

bool JSDOMStringList::getOwnPropertySlotByIndex(JSCell* cell, ExecState* exec, unsigned index, PropertySlot& slot)
{
    JSDOMStringList* thisObject = jsCast<JSDOMStringList*>(cell);
    ASSERT_GC_OBJECT_INHERITS(thisObject, &s_info);
    if (index <= MAX_ARRAY_INDEX) {
        slot.setCustomIndex(thisObject, index, thisObject->indexGetter);
        return true;
    }
    return Base::getOwnPropertySlotByIndex(thisObject, exec, index, slot);
}

JSValue jsDOMStringListLength(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSDOMStringList* castedThis = jsCast<JSDOMStringList*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    DOMStringList* impl = static_cast<DOMStringList*>(castedThis->impl());
    JSValue result = jsNumber(impl->length());
    return result;
}


JSValue jsDOMStringListConstructor(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSDOMStringList* domObject = jsCast<JSDOMStringList*>(asObject(slotBase));
    return JSDOMStringList::getConstructor(exec, domObject->globalObject());
}

void JSDOMStringList::getOwnPropertyNames(JSObject* object, ExecState* exec, PropertyNameArray& propertyNames, EnumerationMode mode)
{
    JSDOMStringList* thisObject = jsCast<JSDOMStringList*>(object);
    ASSERT_GC_OBJECT_INHERITS(thisObject, &s_info);
    for (unsigned i = 0; i < static_cast<DOMStringList*>(thisObject->impl())->length(); ++i)
        propertyNames.add(Identifier::from(exec, i));
     Base::getOwnPropertyNames(thisObject, exec, propertyNames, mode);
}

JSValue JSDOMStringList::getConstructor(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSDOMStringListConstructor>(exec, jsCast<JSDOMGlobalObject*>(globalObject));
}

EncodedJSValue JSC_HOST_CALL jsDOMStringListPrototypeFunctionItem(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSDOMStringList::s_info))
        return throwVMTypeError(exec);
    JSDOMStringList* castedThis = jsCast<JSDOMStringList*>(asObject(thisValue));
    ASSERT_GC_OBJECT_INHERITS(castedThis, &JSDOMStringList::s_info);
    DOMStringList* impl = static_cast<DOMStringList*>(castedThis->impl());
    unsigned index(toUInt32(exec, exec->argument(0), NormalConversion));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());

    JSC::JSValue result = jsStringOrNull(exec, impl->item(index));
    return JSValue::encode(result);
}

EncodedJSValue JSC_HOST_CALL jsDOMStringListPrototypeFunctionContains(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSDOMStringList::s_info))
        return throwVMTypeError(exec);
    JSDOMStringList* castedThis = jsCast<JSDOMStringList*>(asObject(thisValue));
    ASSERT_GC_OBJECT_INHERITS(castedThis, &JSDOMStringList::s_info);
    DOMStringList* impl = static_cast<DOMStringList*>(castedThis->impl());
    const String& string(exec->argument(0).isEmpty() ? String() : exec->argument(0).toString(exec)->value(exec));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());

    JSC::JSValue result = jsBoolean(impl->contains(string));
    return JSValue::encode(result);
}


JSValue JSDOMStringList::indexGetter(ExecState* exec, JSValue slotBase, unsigned index)
{
    JSDOMStringList* thisObj = jsCast<JSDOMStringList*>(asObject(slotBase));
    ASSERT_GC_OBJECT_INHERITS(thisObj, &s_info);
    return jsStringOrUndefined(exec, thisObj->impl()->item(index));
}

static inline bool isObservable(JSDOMStringList* jsDOMStringList)
{
    if (jsDOMStringList->hasCustomProperties())
        return true;
    return false;
}

bool JSDOMStringListOwner::isReachableFromOpaqueRoots(JSC::Handle<JSC::Unknown> handle, void*, SlotVisitor& visitor)
{
    JSDOMStringList* jsDOMStringList = jsCast<JSDOMStringList*>(handle.get().asCell());
    if (!isObservable(jsDOMStringList))
        return false;
    UNUSED_PARAM(visitor);
    return false;
}

void JSDOMStringListOwner::finalize(JSC::Handle<JSC::Unknown> handle, void* context)
{
    JSDOMStringList* jsDOMStringList = jsCast<JSDOMStringList*>(handle.get().asCell());
    DOMWrapperWorld* world = static_cast<DOMWrapperWorld*>(context);
    uncacheWrapper(world, jsDOMStringList->impl(), jsDOMStringList);
    jsDOMStringList->releaseImpl();
}

JSC::JSValue toJS(JSC::ExecState* exec, JSDOMGlobalObject* globalObject, DOMStringList* impl)
{
    if (!impl)
        return jsNull();
    if (JSValue result = getExistingWrapper<JSDOMStringList>(exec, impl))
        return result;
#if COMPILER(CLANG) && COMPILER_SUPPORTS(CXX_STATIC_ASSERT)
    // If you hit this failure the interface definition has the ImplementationLacksVTable
    // attribute. You should remove that attribute. If the class has subclasses
    // that may be passed through this toJS() function you should use the SkipVTableValidation
    // attribute to DOMStringList.
    COMPILE_ASSERT(!__is_polymorphic(DOMStringList), DOMStringList_is_polymorphic_but_idl_claims_not_to_be);
#endif
    ReportMemoryCost<DOMStringList>::reportMemoryCost(exec, impl);
    return createNewWrapper<JSDOMStringList>(exec, globalObject, impl);
}


}

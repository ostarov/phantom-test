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
#include "JSMutationObserver.h"

#include "Dictionary.h"
#include "ExceptionCode.h"
#include "JSDOMBinding.h"
#include "JSMutationRecord.h"
#include "JSNode.h"
#include "MutationObserver.h"
#include "MutationRecord.h"
#include <runtime/Error.h>
#include <runtime/JSArray.h>
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

/* Hash table */

static const HashTableValue JSMutationObserverTableValues[] =
{
    { "constructor", DontEnum | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsMutationObserverConstructor), (intptr_t)0, NoIntrinsic },
    { 0, 0, 0, 0, NoIntrinsic }
};

static const HashTable JSMutationObserverTable = { 2, 1, JSMutationObserverTableValues, 0 };
/* Hash table for constructor */

static const HashTableValue JSMutationObserverConstructorTableValues[] =
{
    { 0, 0, 0, 0, NoIntrinsic }
};

static const HashTable JSMutationObserverConstructorTable = { 1, 0, JSMutationObserverConstructorTableValues, 0 };
const ClassInfo JSMutationObserverConstructor::s_info = { "MutationObserverConstructor", &Base::s_info, &JSMutationObserverConstructorTable, 0, CREATE_METHOD_TABLE(JSMutationObserverConstructor) };

JSMutationObserverConstructor::JSMutationObserverConstructor(Structure* structure, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(structure, globalObject)
{
}

void JSMutationObserverConstructor::finishCreation(ExecState* exec, JSDOMGlobalObject* globalObject)
{
    Base::finishCreation(exec->vm());
    ASSERT(inherits(&s_info));
    putDirect(exec->vm(), exec->propertyNames().prototype, JSMutationObserverPrototype::self(exec, globalObject), DontDelete | ReadOnly);
    putDirect(exec->vm(), exec->propertyNames().length, jsNumber(1), ReadOnly | DontDelete | DontEnum);
}

bool JSMutationObserverConstructor::getOwnPropertySlot(JSCell* cell, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSMutationObserverConstructor, JSDOMWrapper>(exec, &JSMutationObserverConstructorTable, jsCast<JSMutationObserverConstructor*>(cell), propertyName, slot);
}

bool JSMutationObserverConstructor::getOwnPropertyDescriptor(JSObject* object, ExecState* exec, PropertyName propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSMutationObserverConstructor, JSDOMWrapper>(exec, &JSMutationObserverConstructorTable, jsCast<JSMutationObserverConstructor*>(object), propertyName, descriptor);
}

ConstructType JSMutationObserverConstructor::getConstructData(JSCell*, ConstructData& constructData)
{
    constructData.native.function = constructJSMutationObserver;
    return ConstructTypeHost;
}

/* Hash table for prototype */

static const HashTableValue JSMutationObserverPrototypeTableValues[] =
{
    { "observe", DontDelete | JSC::Function, (intptr_t)static_cast<NativeFunction>(jsMutationObserverPrototypeFunctionObserve), (intptr_t)2, NoIntrinsic },
    { "takeRecords", DontDelete | JSC::Function, (intptr_t)static_cast<NativeFunction>(jsMutationObserverPrototypeFunctionTakeRecords), (intptr_t)0, NoIntrinsic },
    { "disconnect", DontDelete | JSC::Function, (intptr_t)static_cast<NativeFunction>(jsMutationObserverPrototypeFunctionDisconnect), (intptr_t)0, NoIntrinsic },
    { 0, 0, 0, 0, NoIntrinsic }
};

static const HashTable JSMutationObserverPrototypeTable = { 8, 7, JSMutationObserverPrototypeTableValues, 0 };
const ClassInfo JSMutationObserverPrototype::s_info = { "MutationObserverPrototype", &Base::s_info, &JSMutationObserverPrototypeTable, 0, CREATE_METHOD_TABLE(JSMutationObserverPrototype) };

JSObject* JSMutationObserverPrototype::self(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSMutationObserver>(exec, globalObject);
}

bool JSMutationObserverPrototype::getOwnPropertySlot(JSCell* cell, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    JSMutationObserverPrototype* thisObject = jsCast<JSMutationObserverPrototype*>(cell);
    return getStaticFunctionSlot<JSObject>(exec, &JSMutationObserverPrototypeTable, thisObject, propertyName, slot);
}

bool JSMutationObserverPrototype::getOwnPropertyDescriptor(JSObject* object, ExecState* exec, PropertyName propertyName, PropertyDescriptor& descriptor)
{
    JSMutationObserverPrototype* thisObject = jsCast<JSMutationObserverPrototype*>(object);
    return getStaticFunctionDescriptor<JSObject>(exec, &JSMutationObserverPrototypeTable, thisObject, propertyName, descriptor);
}

const ClassInfo JSMutationObserver::s_info = { "MutationObserver", &Base::s_info, &JSMutationObserverTable, 0 , CREATE_METHOD_TABLE(JSMutationObserver) };

JSMutationObserver::JSMutationObserver(Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<MutationObserver> impl)
    : JSDOMWrapper(structure, globalObject)
    , m_impl(impl.leakRef())
{
}

void JSMutationObserver::finishCreation(VM& vm)
{
    Base::finishCreation(vm);
    ASSERT(inherits(&s_info));
}

JSObject* JSMutationObserver::createPrototype(ExecState* exec, JSGlobalObject* globalObject)
{
    return JSMutationObserverPrototype::create(exec->vm(), globalObject, JSMutationObserverPrototype::createStructure(globalObject->vm(), globalObject, globalObject->objectPrototype()));
}

void JSMutationObserver::destroy(JSC::JSCell* cell)
{
    JSMutationObserver* thisObject = static_cast<JSMutationObserver*>(cell);
    thisObject->JSMutationObserver::~JSMutationObserver();
}

JSMutationObserver::~JSMutationObserver()
{
    releaseImplIfNotNull();
}

bool JSMutationObserver::getOwnPropertySlot(JSCell* cell, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    JSMutationObserver* thisObject = jsCast<JSMutationObserver*>(cell);
    ASSERT_GC_OBJECT_INHERITS(thisObject, &s_info);
    return getStaticValueSlot<JSMutationObserver, Base>(exec, &JSMutationObserverTable, thisObject, propertyName, slot);
}

bool JSMutationObserver::getOwnPropertyDescriptor(JSObject* object, ExecState* exec, PropertyName propertyName, PropertyDescriptor& descriptor)
{
    JSMutationObserver* thisObject = jsCast<JSMutationObserver*>(object);
    ASSERT_GC_OBJECT_INHERITS(thisObject, &s_info);
    return getStaticValueDescriptor<JSMutationObserver, Base>(exec, &JSMutationObserverTable, thisObject, propertyName, descriptor);
}

JSValue jsMutationObserverConstructor(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSMutationObserver* domObject = jsCast<JSMutationObserver*>(asObject(slotBase));
    return JSMutationObserver::getConstructor(exec, domObject->globalObject());
}

JSValue JSMutationObserver::getConstructor(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSMutationObserverConstructor>(exec, jsCast<JSDOMGlobalObject*>(globalObject));
}

EncodedJSValue JSC_HOST_CALL jsMutationObserverPrototypeFunctionObserve(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSMutationObserver::s_info))
        return throwVMTypeError(exec);
    JSMutationObserver* castedThis = jsCast<JSMutationObserver*>(asObject(thisValue));
    ASSERT_GC_OBJECT_INHERITS(castedThis, &JSMutationObserver::s_info);
    MutationObserver* impl = static_cast<MutationObserver*>(castedThis->impl());
    if (exec->argumentCount() < 2)
        return throwVMError(exec, createNotEnoughArgumentsError(exec));
    ExceptionCode ec = 0;
    Node* target(toNode(exec->argument(0)));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());
    Dictionary options(exec, exec->argument(1));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());
    impl->observe(target, options, ec);
    setDOMException(exec, ec);
    return JSValue::encode(jsUndefined());
}

EncodedJSValue JSC_HOST_CALL jsMutationObserverPrototypeFunctionTakeRecords(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSMutationObserver::s_info))
        return throwVMTypeError(exec);
    JSMutationObserver* castedThis = jsCast<JSMutationObserver*>(asObject(thisValue));
    ASSERT_GC_OBJECT_INHERITS(castedThis, &JSMutationObserver::s_info);
    MutationObserver* impl = static_cast<MutationObserver*>(castedThis->impl());

    JSC::JSValue result = jsArray(exec, castedThis->globalObject(), impl->takeRecords());
    return JSValue::encode(result);
}

EncodedJSValue JSC_HOST_CALL jsMutationObserverPrototypeFunctionDisconnect(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSMutationObserver::s_info))
        return throwVMTypeError(exec);
    JSMutationObserver* castedThis = jsCast<JSMutationObserver*>(asObject(thisValue));
    ASSERT_GC_OBJECT_INHERITS(castedThis, &JSMutationObserver::s_info);
    MutationObserver* impl = static_cast<MutationObserver*>(castedThis->impl());
    impl->disconnect();
    return JSValue::encode(jsUndefined());
}

void JSMutationObserverOwner::finalize(JSC::Handle<JSC::Unknown> handle, void* context)
{
    JSMutationObserver* jsMutationObserver = jsCast<JSMutationObserver*>(handle.get().asCell());
    DOMWrapperWorld* world = static_cast<DOMWrapperWorld*>(context);
    uncacheWrapper(world, jsMutationObserver->impl(), jsMutationObserver);
    jsMutationObserver->releaseImpl();
}

JSC::JSValue toJS(JSC::ExecState* exec, JSDOMGlobalObject* globalObject, MutationObserver* impl)
{
    if (!impl)
        return jsNull();
    if (JSValue result = getExistingWrapper<JSMutationObserver>(exec, impl))
        return result;
#if COMPILER(CLANG) && COMPILER_SUPPORTS(CXX_STATIC_ASSERT)
    // If you hit this failure the interface definition has the ImplementationLacksVTable
    // attribute. You should remove that attribute. If the class has subclasses
    // that may be passed through this toJS() function you should use the SkipVTableValidation
    // attribute to MutationObserver.
    COMPILE_ASSERT(!__is_polymorphic(MutationObserver), MutationObserver_is_polymorphic_but_idl_claims_not_to_be);
#endif
    ReportMemoryCost<MutationObserver>::reportMemoryCost(exec, impl);
    return createNewWrapper<JSMutationObserver>(exec, globalObject, impl);
}

MutationObserver* toMutationObserver(JSC::JSValue value)
{
    return value.inherits(&JSMutationObserver::s_info) ? jsCast<JSMutationObserver*>(asObject(value))->impl() : 0;
}

}

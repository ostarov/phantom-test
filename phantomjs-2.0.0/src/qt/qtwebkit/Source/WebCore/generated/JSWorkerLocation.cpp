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

#if ENABLE(WORKERS)

#include "JSWorkerLocation.h"

#include "ExceptionCode.h"
#include "JSDOMBinding.h"
#include "KURL.h"
#include "WorkerLocation.h"
#include <runtime/Error.h>
#include <runtime/JSString.h>
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

/* Hash table */

static const HashTableValue JSWorkerLocationTableValues[] =
{
    { "href", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsWorkerLocationHref), (intptr_t)0, NoIntrinsic },
    { "protocol", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsWorkerLocationProtocol), (intptr_t)0, NoIntrinsic },
    { "host", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsWorkerLocationHost), (intptr_t)0, NoIntrinsic },
    { "hostname", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsWorkerLocationHostname), (intptr_t)0, NoIntrinsic },
    { "port", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsWorkerLocationPort), (intptr_t)0, NoIntrinsic },
    { "pathname", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsWorkerLocationPathname), (intptr_t)0, NoIntrinsic },
    { "search", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsWorkerLocationSearch), (intptr_t)0, NoIntrinsic },
    { "hash", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsWorkerLocationHash), (intptr_t)0, NoIntrinsic },
    { "constructor", DontEnum | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsWorkerLocationConstructor), (intptr_t)0, NoIntrinsic },
    { 0, 0, 0, 0, NoIntrinsic }
};

static const HashTable JSWorkerLocationTable = { 35, 31, JSWorkerLocationTableValues, 0 };
/* Hash table for constructor */

static const HashTableValue JSWorkerLocationConstructorTableValues[] =
{
    { 0, 0, 0, 0, NoIntrinsic }
};

static const HashTable JSWorkerLocationConstructorTable = { 1, 0, JSWorkerLocationConstructorTableValues, 0 };
static const HashTable* getJSWorkerLocationConstructorTable(ExecState* exec)
{
    return getHashTableForGlobalData(exec->vm(), &JSWorkerLocationConstructorTable);
}

const ClassInfo JSWorkerLocationConstructor::s_info = { "WorkerLocationConstructor", &Base::s_info, 0, getJSWorkerLocationConstructorTable, CREATE_METHOD_TABLE(JSWorkerLocationConstructor) };

JSWorkerLocationConstructor::JSWorkerLocationConstructor(Structure* structure, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(structure, globalObject)
{
}

void JSWorkerLocationConstructor::finishCreation(ExecState* exec, JSDOMGlobalObject* globalObject)
{
    Base::finishCreation(exec->vm());
    ASSERT(inherits(&s_info));
    putDirect(exec->vm(), exec->propertyNames().prototype, JSWorkerLocationPrototype::self(exec, globalObject), DontDelete | ReadOnly);
    putDirect(exec->vm(), exec->propertyNames().length, jsNumber(0), ReadOnly | DontDelete | DontEnum);
}

bool JSWorkerLocationConstructor::getOwnPropertySlot(JSCell* cell, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSWorkerLocationConstructor, JSDOMWrapper>(exec, getJSWorkerLocationConstructorTable(exec), jsCast<JSWorkerLocationConstructor*>(cell), propertyName, slot);
}

bool JSWorkerLocationConstructor::getOwnPropertyDescriptor(JSObject* object, ExecState* exec, PropertyName propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSWorkerLocationConstructor, JSDOMWrapper>(exec, getJSWorkerLocationConstructorTable(exec), jsCast<JSWorkerLocationConstructor*>(object), propertyName, descriptor);
}

/* Hash table for prototype */

static const HashTableValue JSWorkerLocationPrototypeTableValues[] =
{
    { "toString", DontDelete | DontEnum | JSC::Function, (intptr_t)static_cast<NativeFunction>(jsWorkerLocationPrototypeFunctionToString), (intptr_t)0, NoIntrinsic },
    { 0, 0, 0, 0, NoIntrinsic }
};

static const HashTable JSWorkerLocationPrototypeTable = { 2, 1, JSWorkerLocationPrototypeTableValues, 0 };
static const HashTable* getJSWorkerLocationPrototypeTable(ExecState* exec)
{
    return getHashTableForGlobalData(exec->vm(), &JSWorkerLocationPrototypeTable);
}

const ClassInfo JSWorkerLocationPrototype::s_info = { "WorkerLocationPrototype", &Base::s_info, 0, getJSWorkerLocationPrototypeTable, CREATE_METHOD_TABLE(JSWorkerLocationPrototype) };

JSObject* JSWorkerLocationPrototype::self(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSWorkerLocation>(exec, globalObject);
}

bool JSWorkerLocationPrototype::getOwnPropertySlot(JSCell* cell, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    JSWorkerLocationPrototype* thisObject = jsCast<JSWorkerLocationPrototype*>(cell);
    return getStaticFunctionSlot<JSObject>(exec, getJSWorkerLocationPrototypeTable(exec), thisObject, propertyName, slot);
}

bool JSWorkerLocationPrototype::getOwnPropertyDescriptor(JSObject* object, ExecState* exec, PropertyName propertyName, PropertyDescriptor& descriptor)
{
    JSWorkerLocationPrototype* thisObject = jsCast<JSWorkerLocationPrototype*>(object);
    return getStaticFunctionDescriptor<JSObject>(exec, getJSWorkerLocationPrototypeTable(exec), thisObject, propertyName, descriptor);
}

static const HashTable* getJSWorkerLocationTable(ExecState* exec)
{
    return getHashTableForGlobalData(exec->vm(), &JSWorkerLocationTable);
}

const ClassInfo JSWorkerLocation::s_info = { "WorkerLocation", &Base::s_info, 0, getJSWorkerLocationTable , CREATE_METHOD_TABLE(JSWorkerLocation) };

JSWorkerLocation::JSWorkerLocation(Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<WorkerLocation> impl)
    : JSDOMWrapper(structure, globalObject)
    , m_impl(impl.leakRef())
{
}

void JSWorkerLocation::finishCreation(VM& vm)
{
    Base::finishCreation(vm);
    ASSERT(inherits(&s_info));
}

JSObject* JSWorkerLocation::createPrototype(ExecState* exec, JSGlobalObject* globalObject)
{
    return JSWorkerLocationPrototype::create(exec->vm(), globalObject, JSWorkerLocationPrototype::createStructure(globalObject->vm(), globalObject, globalObject->objectPrototype()));
}

void JSWorkerLocation::destroy(JSC::JSCell* cell)
{
    JSWorkerLocation* thisObject = static_cast<JSWorkerLocation*>(cell);
    thisObject->JSWorkerLocation::~JSWorkerLocation();
}

JSWorkerLocation::~JSWorkerLocation()
{
    releaseImplIfNotNull();
}

bool JSWorkerLocation::getOwnPropertySlot(JSCell* cell, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    JSWorkerLocation* thisObject = jsCast<JSWorkerLocation*>(cell);
    ASSERT_GC_OBJECT_INHERITS(thisObject, &s_info);
    return getStaticValueSlot<JSWorkerLocation, Base>(exec, getJSWorkerLocationTable(exec), thisObject, propertyName, slot);
}

bool JSWorkerLocation::getOwnPropertyDescriptor(JSObject* object, ExecState* exec, PropertyName propertyName, PropertyDescriptor& descriptor)
{
    JSWorkerLocation* thisObject = jsCast<JSWorkerLocation*>(object);
    ASSERT_GC_OBJECT_INHERITS(thisObject, &s_info);
    return getStaticValueDescriptor<JSWorkerLocation, Base>(exec, getJSWorkerLocationTable(exec), thisObject, propertyName, descriptor);
}

JSValue jsWorkerLocationHref(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSWorkerLocation* castedThis = jsCast<JSWorkerLocation*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    WorkerLocation* impl = static_cast<WorkerLocation*>(castedThis->impl());
    JSValue result = jsStringWithCache(exec, impl->href());
    return result;
}


JSValue jsWorkerLocationProtocol(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSWorkerLocation* castedThis = jsCast<JSWorkerLocation*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    WorkerLocation* impl = static_cast<WorkerLocation*>(castedThis->impl());
    JSValue result = jsStringWithCache(exec, impl->protocol());
    return result;
}


JSValue jsWorkerLocationHost(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSWorkerLocation* castedThis = jsCast<JSWorkerLocation*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    WorkerLocation* impl = static_cast<WorkerLocation*>(castedThis->impl());
    JSValue result = jsStringWithCache(exec, impl->host());
    return result;
}


JSValue jsWorkerLocationHostname(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSWorkerLocation* castedThis = jsCast<JSWorkerLocation*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    WorkerLocation* impl = static_cast<WorkerLocation*>(castedThis->impl());
    JSValue result = jsStringWithCache(exec, impl->hostname());
    return result;
}


JSValue jsWorkerLocationPort(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSWorkerLocation* castedThis = jsCast<JSWorkerLocation*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    WorkerLocation* impl = static_cast<WorkerLocation*>(castedThis->impl());
    JSValue result = jsStringWithCache(exec, impl->port());
    return result;
}


JSValue jsWorkerLocationPathname(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSWorkerLocation* castedThis = jsCast<JSWorkerLocation*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    WorkerLocation* impl = static_cast<WorkerLocation*>(castedThis->impl());
    JSValue result = jsStringWithCache(exec, impl->pathname());
    return result;
}


JSValue jsWorkerLocationSearch(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSWorkerLocation* castedThis = jsCast<JSWorkerLocation*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    WorkerLocation* impl = static_cast<WorkerLocation*>(castedThis->impl());
    JSValue result = jsStringWithCache(exec, impl->search());
    return result;
}


JSValue jsWorkerLocationHash(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSWorkerLocation* castedThis = jsCast<JSWorkerLocation*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    WorkerLocation* impl = static_cast<WorkerLocation*>(castedThis->impl());
    JSValue result = jsStringWithCache(exec, impl->hash());
    return result;
}


JSValue jsWorkerLocationConstructor(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSWorkerLocation* domObject = jsCast<JSWorkerLocation*>(asObject(slotBase));
    return JSWorkerLocation::getConstructor(exec, domObject->globalObject());
}

JSValue JSWorkerLocation::getConstructor(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSWorkerLocationConstructor>(exec, jsCast<JSDOMGlobalObject*>(globalObject));
}

EncodedJSValue JSC_HOST_CALL jsWorkerLocationPrototypeFunctionToString(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSWorkerLocation::s_info))
        return throwVMTypeError(exec);
    JSWorkerLocation* castedThis = jsCast<JSWorkerLocation*>(asObject(thisValue));
    ASSERT_GC_OBJECT_INHERITS(castedThis, &JSWorkerLocation::s_info);
    WorkerLocation* impl = static_cast<WorkerLocation*>(castedThis->impl());

    JSC::JSValue result = jsStringWithCache(exec, impl->toString());
    return JSValue::encode(result);
}

static inline bool isObservable(JSWorkerLocation* jsWorkerLocation)
{
    if (jsWorkerLocation->hasCustomProperties())
        return true;
    return false;
}

bool JSWorkerLocationOwner::isReachableFromOpaqueRoots(JSC::Handle<JSC::Unknown> handle, void*, SlotVisitor& visitor)
{
    JSWorkerLocation* jsWorkerLocation = jsCast<JSWorkerLocation*>(handle.get().asCell());
    if (!isObservable(jsWorkerLocation))
        return false;
    WorkerLocation* root = jsWorkerLocation->impl();
    return visitor.containsOpaqueRoot(root);
}

void JSWorkerLocationOwner::finalize(JSC::Handle<JSC::Unknown> handle, void* context)
{
    JSWorkerLocation* jsWorkerLocation = jsCast<JSWorkerLocation*>(handle.get().asCell());
    DOMWrapperWorld* world = static_cast<DOMWrapperWorld*>(context);
    uncacheWrapper(world, jsWorkerLocation->impl(), jsWorkerLocation);
    jsWorkerLocation->releaseImpl();
}

JSC::JSValue toJS(JSC::ExecState* exec, JSDOMGlobalObject* globalObject, WorkerLocation* impl)
{
    if (!impl)
        return jsNull();
    if (JSValue result = getExistingWrapper<JSWorkerLocation>(exec, impl))
        return result;
#if COMPILER(CLANG) && COMPILER_SUPPORTS(CXX_STATIC_ASSERT)
    // If you hit this failure the interface definition has the ImplementationLacksVTable
    // attribute. You should remove that attribute. If the class has subclasses
    // that may be passed through this toJS() function you should use the SkipVTableValidation
    // attribute to WorkerLocation.
    COMPILE_ASSERT(!__is_polymorphic(WorkerLocation), WorkerLocation_is_polymorphic_but_idl_claims_not_to_be);
#endif
    ReportMemoryCost<WorkerLocation>::reportMemoryCost(exec, impl);
    return createNewWrapper<JSWorkerLocation>(exec, globalObject, impl);
}

WorkerLocation* toWorkerLocation(JSC::JSValue value)
{
    return value.inherits(&JSWorkerLocation::s_info) ? jsCast<JSWorkerLocation*>(asObject(value))->impl() : 0;
}

}

#endif // ENABLE(WORKERS)

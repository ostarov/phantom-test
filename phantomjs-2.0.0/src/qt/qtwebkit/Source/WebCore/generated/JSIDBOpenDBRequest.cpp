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

#if ENABLE(INDEXED_DATABASE)

#include "JSIDBOpenDBRequest.h"

#include "EventListener.h"
#include "IDBOpenDBRequest.h"
#include "JSEventListener.h"
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

/* Hash table */

static const HashTableValue JSIDBOpenDBRequestTableValues[] =
{
    { "onblocked", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsIDBOpenDBRequestOnblocked), (intptr_t)setJSIDBOpenDBRequestOnblocked, NoIntrinsic },
    { "onupgradeneeded", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsIDBOpenDBRequestOnupgradeneeded), (intptr_t)setJSIDBOpenDBRequestOnupgradeneeded, NoIntrinsic },
    { "constructor", DontEnum | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsIDBOpenDBRequestConstructor), (intptr_t)0, NoIntrinsic },
    { 0, 0, 0, 0, NoIntrinsic }
};

static const HashTable JSIDBOpenDBRequestTable = { 8, 7, JSIDBOpenDBRequestTableValues, 0 };
/* Hash table for constructor */

static const HashTableValue JSIDBOpenDBRequestConstructorTableValues[] =
{
    { 0, 0, 0, 0, NoIntrinsic }
};

static const HashTable JSIDBOpenDBRequestConstructorTable = { 1, 0, JSIDBOpenDBRequestConstructorTableValues, 0 };
static const HashTable* getJSIDBOpenDBRequestConstructorTable(ExecState* exec)
{
    return getHashTableForGlobalData(exec->vm(), &JSIDBOpenDBRequestConstructorTable);
}

const ClassInfo JSIDBOpenDBRequestConstructor::s_info = { "IDBOpenDBRequestConstructor", &Base::s_info, 0, getJSIDBOpenDBRequestConstructorTable, CREATE_METHOD_TABLE(JSIDBOpenDBRequestConstructor) };

JSIDBOpenDBRequestConstructor::JSIDBOpenDBRequestConstructor(Structure* structure, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(structure, globalObject)
{
}

void JSIDBOpenDBRequestConstructor::finishCreation(ExecState* exec, JSDOMGlobalObject* globalObject)
{
    Base::finishCreation(exec->vm());
    ASSERT(inherits(&s_info));
    putDirect(exec->vm(), exec->propertyNames().prototype, JSIDBOpenDBRequestPrototype::self(exec, globalObject), DontDelete | ReadOnly);
    putDirect(exec->vm(), exec->propertyNames().length, jsNumber(0), ReadOnly | DontDelete | DontEnum);
}

bool JSIDBOpenDBRequestConstructor::getOwnPropertySlot(JSCell* cell, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSIDBOpenDBRequestConstructor, JSDOMWrapper>(exec, getJSIDBOpenDBRequestConstructorTable(exec), jsCast<JSIDBOpenDBRequestConstructor*>(cell), propertyName, slot);
}

bool JSIDBOpenDBRequestConstructor::getOwnPropertyDescriptor(JSObject* object, ExecState* exec, PropertyName propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSIDBOpenDBRequestConstructor, JSDOMWrapper>(exec, getJSIDBOpenDBRequestConstructorTable(exec), jsCast<JSIDBOpenDBRequestConstructor*>(object), propertyName, descriptor);
}

/* Hash table for prototype */

static const HashTableValue JSIDBOpenDBRequestPrototypeTableValues[] =
{
    { 0, 0, 0, 0, NoIntrinsic }
};

static const HashTable JSIDBOpenDBRequestPrototypeTable = { 1, 0, JSIDBOpenDBRequestPrototypeTableValues, 0 };
static const HashTable* getJSIDBOpenDBRequestPrototypeTable(ExecState* exec)
{
    return getHashTableForGlobalData(exec->vm(), &JSIDBOpenDBRequestPrototypeTable);
}

const ClassInfo JSIDBOpenDBRequestPrototype::s_info = { "IDBOpenDBRequestPrototype", &Base::s_info, 0, getJSIDBOpenDBRequestPrototypeTable, CREATE_METHOD_TABLE(JSIDBOpenDBRequestPrototype) };

JSObject* JSIDBOpenDBRequestPrototype::self(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSIDBOpenDBRequest>(exec, globalObject);
}

static const HashTable* getJSIDBOpenDBRequestTable(ExecState* exec)
{
    return getHashTableForGlobalData(exec->vm(), &JSIDBOpenDBRequestTable);
}

const ClassInfo JSIDBOpenDBRequest::s_info = { "IDBOpenDBRequest", &Base::s_info, 0, getJSIDBOpenDBRequestTable , CREATE_METHOD_TABLE(JSIDBOpenDBRequest) };

JSIDBOpenDBRequest::JSIDBOpenDBRequest(Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<IDBOpenDBRequest> impl)
    : JSIDBRequest(structure, globalObject, impl)
{
}

void JSIDBOpenDBRequest::finishCreation(VM& vm)
{
    Base::finishCreation(vm);
    ASSERT(inherits(&s_info));
}

JSObject* JSIDBOpenDBRequest::createPrototype(ExecState* exec, JSGlobalObject* globalObject)
{
    return JSIDBOpenDBRequestPrototype::create(exec->vm(), globalObject, JSIDBOpenDBRequestPrototype::createStructure(exec->vm(), globalObject, JSIDBRequestPrototype::self(exec, globalObject)));
}

bool JSIDBOpenDBRequest::getOwnPropertySlot(JSCell* cell, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    JSIDBOpenDBRequest* thisObject = jsCast<JSIDBOpenDBRequest*>(cell);
    ASSERT_GC_OBJECT_INHERITS(thisObject, &s_info);
    return getStaticValueSlot<JSIDBOpenDBRequest, Base>(exec, getJSIDBOpenDBRequestTable(exec), thisObject, propertyName, slot);
}

bool JSIDBOpenDBRequest::getOwnPropertyDescriptor(JSObject* object, ExecState* exec, PropertyName propertyName, PropertyDescriptor& descriptor)
{
    JSIDBOpenDBRequest* thisObject = jsCast<JSIDBOpenDBRequest*>(object);
    ASSERT_GC_OBJECT_INHERITS(thisObject, &s_info);
    return getStaticValueDescriptor<JSIDBOpenDBRequest, Base>(exec, getJSIDBOpenDBRequestTable(exec), thisObject, propertyName, descriptor);
}

JSValue jsIDBOpenDBRequestOnblocked(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSIDBOpenDBRequest* castedThis = jsCast<JSIDBOpenDBRequest*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    IDBOpenDBRequest* impl = static_cast<IDBOpenDBRequest*>(castedThis->impl());
    if (EventListener* listener = impl->onblocked()) {
        if (const JSEventListener* jsListener = JSEventListener::cast(listener)) {
            if (JSObject* jsFunction = jsListener->jsFunction(impl->scriptExecutionContext()))
                return jsFunction;
        }
    }
    return jsNull();
}


JSValue jsIDBOpenDBRequestOnupgradeneeded(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSIDBOpenDBRequest* castedThis = jsCast<JSIDBOpenDBRequest*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    IDBOpenDBRequest* impl = static_cast<IDBOpenDBRequest*>(castedThis->impl());
    if (EventListener* listener = impl->onupgradeneeded()) {
        if (const JSEventListener* jsListener = JSEventListener::cast(listener)) {
            if (JSObject* jsFunction = jsListener->jsFunction(impl->scriptExecutionContext()))
                return jsFunction;
        }
    }
    return jsNull();
}


JSValue jsIDBOpenDBRequestConstructor(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSIDBOpenDBRequest* domObject = jsCast<JSIDBOpenDBRequest*>(asObject(slotBase));
    return JSIDBOpenDBRequest::getConstructor(exec, domObject->globalObject());
}

void JSIDBOpenDBRequest::put(JSCell* cell, ExecState* exec, PropertyName propertyName, JSValue value, PutPropertySlot& slot)
{
    JSIDBOpenDBRequest* thisObject = jsCast<JSIDBOpenDBRequest*>(cell);
    ASSERT_GC_OBJECT_INHERITS(thisObject, &s_info);
    lookupPut<JSIDBOpenDBRequest, Base>(exec, propertyName, value, getJSIDBOpenDBRequestTable(exec), thisObject, slot);
}

void setJSIDBOpenDBRequestOnblocked(ExecState* exec, JSObject* thisObject, JSValue value)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(exec);
    JSIDBOpenDBRequest* castedThis = jsCast<JSIDBOpenDBRequest*>(thisObject);
    IDBOpenDBRequest* impl = static_cast<IDBOpenDBRequest*>(castedThis->impl());
    impl->setOnblocked(createJSAttributeEventListener(exec, value, thisObject));
}


void setJSIDBOpenDBRequestOnupgradeneeded(ExecState* exec, JSObject* thisObject, JSValue value)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(exec);
    JSIDBOpenDBRequest* castedThis = jsCast<JSIDBOpenDBRequest*>(thisObject);
    IDBOpenDBRequest* impl = static_cast<IDBOpenDBRequest*>(castedThis->impl());
    impl->setOnupgradeneeded(createJSAttributeEventListener(exec, value, thisObject));
}


JSValue JSIDBOpenDBRequest::getConstructor(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSIDBOpenDBRequestConstructor>(exec, jsCast<JSDOMGlobalObject*>(globalObject));
}

void JSIDBOpenDBRequest::visitChildren(JSCell* cell, SlotVisitor& visitor)
{
    JSIDBOpenDBRequest* thisObject = jsCast<JSIDBOpenDBRequest*>(cell);
    ASSERT_GC_OBJECT_INHERITS(thisObject, &s_info);
    COMPILE_ASSERT(StructureFlags & OverridesVisitChildren, OverridesVisitChildrenWithoutSettingFlag);
    ASSERT(thisObject->structure()->typeInfo().overridesVisitChildren());
    Base::visitChildren(thisObject, visitor);
    thisObject->impl()->visitJSEventListeners(visitor);
}

static inline bool isObservable(JSIDBOpenDBRequest* jsIDBOpenDBRequest)
{
    if (jsIDBOpenDBRequest->hasCustomProperties())
        return true;
    if (jsIDBOpenDBRequest->impl()->hasEventListeners())
        return true;
    return false;
}

bool JSIDBOpenDBRequestOwner::isReachableFromOpaqueRoots(JSC::Handle<JSC::Unknown> handle, void*, SlotVisitor& visitor)
{
    JSIDBOpenDBRequest* jsIDBOpenDBRequest = jsCast<JSIDBOpenDBRequest*>(handle.get().asCell());
    if (jsIDBOpenDBRequest->impl()->hasPendingActivity())
        return true;
    if (jsIDBOpenDBRequest->impl()->isFiringEventListeners())
        return true;
    if (!isObservable(jsIDBOpenDBRequest))
        return false;
    UNUSED_PARAM(visitor);
    return false;
}

void JSIDBOpenDBRequestOwner::finalize(JSC::Handle<JSC::Unknown> handle, void* context)
{
    JSIDBOpenDBRequest* jsIDBOpenDBRequest = jsCast<JSIDBOpenDBRequest*>(handle.get().asCell());
    DOMWrapperWorld* world = static_cast<DOMWrapperWorld*>(context);
    uncacheWrapper(world, jsIDBOpenDBRequest->impl(), jsIDBOpenDBRequest);
    jsIDBOpenDBRequest->releaseImpl();
}

#if ENABLE(BINDING_INTEGRITY)
#if PLATFORM(WIN)
#pragma warning(disable: 4483)
extern "C" { extern void (*const __identifier("??_7IDBOpenDBRequest@WebCore@@6B@")[])(); }
#else
extern "C" { extern void* _ZTVN7WebCore16IDBOpenDBRequestE[]; }
#endif
#endif
JSC::JSValue toJS(JSC::ExecState* exec, JSDOMGlobalObject* globalObject, IDBOpenDBRequest* impl)
{
    if (!impl)
        return jsNull();
    if (JSValue result = getExistingWrapper<JSIDBOpenDBRequest>(exec, impl))
        return result;

#if ENABLE(BINDING_INTEGRITY)
    void* actualVTablePointer = *(reinterpret_cast<void**>(impl));
#if PLATFORM(WIN)
    void* expectedVTablePointer = reinterpret_cast<void*>(__identifier("??_7IDBOpenDBRequest@WebCore@@6B@"));
#else
    void* expectedVTablePointer = &_ZTVN7WebCore16IDBOpenDBRequestE[2];
#if COMPILER(CLANG) && COMPILER_SUPPORTS(CXX_STATIC_ASSERT)
    // If this fails IDBOpenDBRequest does not have a vtable, so you need to add the
    // ImplementationLacksVTable attribute to the interface definition
    COMPILE_ASSERT(__is_polymorphic(IDBOpenDBRequest), IDBOpenDBRequest_is_not_polymorphic);
#endif
#endif
    // If you hit this assertion you either have a use after free bug, or
    // IDBOpenDBRequest has subclasses. If IDBOpenDBRequest has subclasses that get passed
    // to toJS() we currently require IDBOpenDBRequest you to opt out of binding hardening
    // by adding the SkipVTableValidation attribute to the interface IDL definition
    RELEASE_ASSERT(actualVTablePointer == expectedVTablePointer);
#endif
    ReportMemoryCost<IDBOpenDBRequest>::reportMemoryCost(exec, impl);
    return createNewWrapper<JSIDBOpenDBRequest>(exec, globalObject, impl);
}


}

#endif // ENABLE(INDEXED_DATABASE)
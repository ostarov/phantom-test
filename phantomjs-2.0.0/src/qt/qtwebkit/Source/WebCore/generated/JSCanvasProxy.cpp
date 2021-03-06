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

#if ENABLE(CANVAS_PROXY)

#include "JSCanvasProxy.h"

#include "CanvasProxy.h"
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

/* Hash table */

static const HashTableValue JSCanvasProxyTableValues[] =
{
    { "constructor", DontEnum | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsCanvasProxyConstructor), (intptr_t)0, NoIntrinsic },
    { 0, 0, 0, 0, NoIntrinsic }
};

static const HashTable JSCanvasProxyTable = { 2, 1, JSCanvasProxyTableValues, 0 };
/* Hash table for constructor */

static const HashTableValue JSCanvasProxyConstructorTableValues[] =
{
    { 0, 0, 0, 0, NoIntrinsic }
};

static const HashTable JSCanvasProxyConstructorTable = { 1, 0, JSCanvasProxyConstructorTableValues, 0 };
const ClassInfo JSCanvasProxyConstructor::s_info = { "CanvasProxyConstructor", &Base::s_info, &JSCanvasProxyConstructorTable, 0, CREATE_METHOD_TABLE(JSCanvasProxyConstructor) };

JSCanvasProxyConstructor::JSCanvasProxyConstructor(Structure* structure, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(structure, globalObject)
{
}

void JSCanvasProxyConstructor::finishCreation(ExecState* exec, JSDOMGlobalObject* globalObject)
{
    Base::finishCreation(exec->vm());
    ASSERT(inherits(&s_info));
    putDirect(exec->vm(), exec->propertyNames().prototype, JSCanvasProxyPrototype::self(exec, globalObject), DontDelete | ReadOnly);
    putDirect(exec->vm(), exec->propertyNames().length, jsNumber(0), ReadOnly | DontDelete | DontEnum);
}

bool JSCanvasProxyConstructor::getOwnPropertySlot(JSCell* cell, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSCanvasProxyConstructor, JSDOMWrapper>(exec, &JSCanvasProxyConstructorTable, jsCast<JSCanvasProxyConstructor*>(cell), propertyName, slot);
}

bool JSCanvasProxyConstructor::getOwnPropertyDescriptor(JSObject* object, ExecState* exec, PropertyName propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSCanvasProxyConstructor, JSDOMWrapper>(exec, &JSCanvasProxyConstructorTable, jsCast<JSCanvasProxyConstructor*>(object), propertyName, descriptor);
}

/* Hash table for prototype */

static const HashTableValue JSCanvasProxyPrototypeTableValues[] =
{
    { 0, 0, 0, 0, NoIntrinsic }
};

static const HashTable JSCanvasProxyPrototypeTable = { 1, 0, JSCanvasProxyPrototypeTableValues, 0 };
const ClassInfo JSCanvasProxyPrototype::s_info = { "CanvasProxyPrototype", &Base::s_info, &JSCanvasProxyPrototypeTable, 0, CREATE_METHOD_TABLE(JSCanvasProxyPrototype) };

JSObject* JSCanvasProxyPrototype::self(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSCanvasProxy>(exec, globalObject);
}

const ClassInfo JSCanvasProxy::s_info = { "CanvasProxy", &Base::s_info, &JSCanvasProxyTable, 0 , CREATE_METHOD_TABLE(JSCanvasProxy) };

JSCanvasProxy::JSCanvasProxy(Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<CanvasProxy> impl)
    : JSDOMWrapper(structure, globalObject)
    , m_impl(impl.leakRef())
{
}

void JSCanvasProxy::finishCreation(VM& vm)
{
    Base::finishCreation(vm);
    ASSERT(inherits(&s_info));
}

JSObject* JSCanvasProxy::createPrototype(ExecState* exec, JSGlobalObject* globalObject)
{
    return JSCanvasProxyPrototype::create(exec->vm(), globalObject, JSCanvasProxyPrototype::createStructure(globalObject->vm(), globalObject, globalObject->objectPrototype()));
}

void JSCanvasProxy::destroy(JSC::JSCell* cell)
{
    JSCanvasProxy* thisObject = static_cast<JSCanvasProxy*>(cell);
    thisObject->JSCanvasProxy::~JSCanvasProxy();
}

JSCanvasProxy::~JSCanvasProxy()
{
    releaseImplIfNotNull();
}

bool JSCanvasProxy::getOwnPropertySlot(JSCell* cell, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    JSCanvasProxy* thisObject = jsCast<JSCanvasProxy*>(cell);
    ASSERT_GC_OBJECT_INHERITS(thisObject, &s_info);
    return getStaticValueSlot<JSCanvasProxy, Base>(exec, &JSCanvasProxyTable, thisObject, propertyName, slot);
}

bool JSCanvasProxy::getOwnPropertyDescriptor(JSObject* object, ExecState* exec, PropertyName propertyName, PropertyDescriptor& descriptor)
{
    JSCanvasProxy* thisObject = jsCast<JSCanvasProxy*>(object);
    ASSERT_GC_OBJECT_INHERITS(thisObject, &s_info);
    return getStaticValueDescriptor<JSCanvasProxy, Base>(exec, &JSCanvasProxyTable, thisObject, propertyName, descriptor);
}

JSValue jsCanvasProxyConstructor(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSCanvasProxy* domObject = jsCast<JSCanvasProxy*>(asObject(slotBase));
    return JSCanvasProxy::getConstructor(exec, domObject->globalObject());
}

JSValue JSCanvasProxy::getConstructor(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSCanvasProxyConstructor>(exec, jsCast<JSDOMGlobalObject*>(globalObject));
}

static inline bool isObservable(JSCanvasProxy* jsCanvasProxy)
{
    if (jsCanvasProxy->hasCustomProperties())
        return true;
    return false;
}

bool JSCanvasProxyOwner::isReachableFromOpaqueRoots(JSC::Handle<JSC::Unknown> handle, void*, SlotVisitor& visitor)
{
    JSCanvasProxy* jsCanvasProxy = jsCast<JSCanvasProxy*>(handle.get().asCell());
    if (!isObservable(jsCanvasProxy))
        return false;
    UNUSED_PARAM(visitor);
    return false;
}

void JSCanvasProxyOwner::finalize(JSC::Handle<JSC::Unknown> handle, void* context)
{
    JSCanvasProxy* jsCanvasProxy = jsCast<JSCanvasProxy*>(handle.get().asCell());
    DOMWrapperWorld* world = static_cast<DOMWrapperWorld*>(context);
    uncacheWrapper(world, jsCanvasProxy->impl(), jsCanvasProxy);
    jsCanvasProxy->releaseImpl();
}

#if ENABLE(BINDING_INTEGRITY)
#if PLATFORM(WIN)
#pragma warning(disable: 4483)
extern "C" { extern void (*const __identifier("??_7CanvasProxy@WebCore@@6B@")[])(); }
#else
extern "C" { extern void* _ZTVN7WebCore11CanvasProxyE[]; }
#endif
#endif
JSC::JSValue toJS(JSC::ExecState* exec, JSDOMGlobalObject* globalObject, CanvasProxy* impl)
{
    if (!impl)
        return jsNull();
    if (JSValue result = getExistingWrapper<JSCanvasProxy>(exec, impl))
        return result;

#if ENABLE(BINDING_INTEGRITY)
    void* actualVTablePointer = *(reinterpret_cast<void**>(impl));
#if PLATFORM(WIN)
    void* expectedVTablePointer = reinterpret_cast<void*>(__identifier("??_7CanvasProxy@WebCore@@6B@"));
#else
    void* expectedVTablePointer = &_ZTVN7WebCore11CanvasProxyE[2];
#if COMPILER(CLANG) && COMPILER_SUPPORTS(CXX_STATIC_ASSERT)
    // If this fails CanvasProxy does not have a vtable, so you need to add the
    // ImplementationLacksVTable attribute to the interface definition
    COMPILE_ASSERT(__is_polymorphic(CanvasProxy), CanvasProxy_is_not_polymorphic);
#endif
#endif
    // If you hit this assertion you either have a use after free bug, or
    // CanvasProxy has subclasses. If CanvasProxy has subclasses that get passed
    // to toJS() we currently require CanvasProxy you to opt out of binding hardening
    // by adding the SkipVTableValidation attribute to the interface IDL definition
    RELEASE_ASSERT(actualVTablePointer == expectedVTablePointer);
#endif
    ReportMemoryCost<CanvasProxy>::reportMemoryCost(exec, impl);
    return createNewWrapper<JSCanvasProxy>(exec, globalObject, impl);
}

CanvasProxy* toCanvasProxy(JSC::JSValue value)
{
    return value.inherits(&JSCanvasProxy::s_info) ? jsCast<JSCanvasProxy*>(asObject(value))->impl() : 0;
}

}

#endif // ENABLE(CANVAS_PROXY)

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

#if ENABLE(WEBGL)

#include "JSWebGLFramebuffer.h"

#include "WebGLFramebuffer.h"
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

/* Hash table */

static const HashTableValue JSWebGLFramebufferTableValues[] =
{
    { "constructor", DontEnum | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsWebGLFramebufferConstructor), (intptr_t)0, NoIntrinsic },
    { 0, 0, 0, 0, NoIntrinsic }
};

static const HashTable JSWebGLFramebufferTable = { 2, 1, JSWebGLFramebufferTableValues, 0 };
/* Hash table for constructor */

static const HashTableValue JSWebGLFramebufferConstructorTableValues[] =
{
    { 0, 0, 0, 0, NoIntrinsic }
};

static const HashTable JSWebGLFramebufferConstructorTable = { 1, 0, JSWebGLFramebufferConstructorTableValues, 0 };
const ClassInfo JSWebGLFramebufferConstructor::s_info = { "WebGLFramebufferConstructor", &Base::s_info, &JSWebGLFramebufferConstructorTable, 0, CREATE_METHOD_TABLE(JSWebGLFramebufferConstructor) };

JSWebGLFramebufferConstructor::JSWebGLFramebufferConstructor(Structure* structure, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(structure, globalObject)
{
}

void JSWebGLFramebufferConstructor::finishCreation(ExecState* exec, JSDOMGlobalObject* globalObject)
{
    Base::finishCreation(exec->vm());
    ASSERT(inherits(&s_info));
    putDirect(exec->vm(), exec->propertyNames().prototype, JSWebGLFramebufferPrototype::self(exec, globalObject), DontDelete | ReadOnly);
    putDirect(exec->vm(), exec->propertyNames().length, jsNumber(0), ReadOnly | DontDelete | DontEnum);
}

bool JSWebGLFramebufferConstructor::getOwnPropertySlot(JSCell* cell, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSWebGLFramebufferConstructor, JSDOMWrapper>(exec, &JSWebGLFramebufferConstructorTable, jsCast<JSWebGLFramebufferConstructor*>(cell), propertyName, slot);
}

bool JSWebGLFramebufferConstructor::getOwnPropertyDescriptor(JSObject* object, ExecState* exec, PropertyName propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSWebGLFramebufferConstructor, JSDOMWrapper>(exec, &JSWebGLFramebufferConstructorTable, jsCast<JSWebGLFramebufferConstructor*>(object), propertyName, descriptor);
}

/* Hash table for prototype */

static const HashTableValue JSWebGLFramebufferPrototypeTableValues[] =
{
    { 0, 0, 0, 0, NoIntrinsic }
};

static const HashTable JSWebGLFramebufferPrototypeTable = { 1, 0, JSWebGLFramebufferPrototypeTableValues, 0 };
const ClassInfo JSWebGLFramebufferPrototype::s_info = { "WebGLFramebufferPrototype", &Base::s_info, &JSWebGLFramebufferPrototypeTable, 0, CREATE_METHOD_TABLE(JSWebGLFramebufferPrototype) };

JSObject* JSWebGLFramebufferPrototype::self(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSWebGLFramebuffer>(exec, globalObject);
}

const ClassInfo JSWebGLFramebuffer::s_info = { "WebGLFramebuffer", &Base::s_info, &JSWebGLFramebufferTable, 0 , CREATE_METHOD_TABLE(JSWebGLFramebuffer) };

JSWebGLFramebuffer::JSWebGLFramebuffer(Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<WebGLFramebuffer> impl)
    : JSDOMWrapper(structure, globalObject)
    , m_impl(impl.leakRef())
{
}

void JSWebGLFramebuffer::finishCreation(VM& vm)
{
    Base::finishCreation(vm);
    ASSERT(inherits(&s_info));
}

JSObject* JSWebGLFramebuffer::createPrototype(ExecState* exec, JSGlobalObject* globalObject)
{
    return JSWebGLFramebufferPrototype::create(exec->vm(), globalObject, JSWebGLFramebufferPrototype::createStructure(globalObject->vm(), globalObject, globalObject->objectPrototype()));
}

void JSWebGLFramebuffer::destroy(JSC::JSCell* cell)
{
    JSWebGLFramebuffer* thisObject = static_cast<JSWebGLFramebuffer*>(cell);
    thisObject->JSWebGLFramebuffer::~JSWebGLFramebuffer();
}

JSWebGLFramebuffer::~JSWebGLFramebuffer()
{
    releaseImplIfNotNull();
}

bool JSWebGLFramebuffer::getOwnPropertySlot(JSCell* cell, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    JSWebGLFramebuffer* thisObject = jsCast<JSWebGLFramebuffer*>(cell);
    ASSERT_GC_OBJECT_INHERITS(thisObject, &s_info);
    return getStaticValueSlot<JSWebGLFramebuffer, Base>(exec, &JSWebGLFramebufferTable, thisObject, propertyName, slot);
}

bool JSWebGLFramebuffer::getOwnPropertyDescriptor(JSObject* object, ExecState* exec, PropertyName propertyName, PropertyDescriptor& descriptor)
{
    JSWebGLFramebuffer* thisObject = jsCast<JSWebGLFramebuffer*>(object);
    ASSERT_GC_OBJECT_INHERITS(thisObject, &s_info);
    return getStaticValueDescriptor<JSWebGLFramebuffer, Base>(exec, &JSWebGLFramebufferTable, thisObject, propertyName, descriptor);
}

JSValue jsWebGLFramebufferConstructor(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSWebGLFramebuffer* domObject = jsCast<JSWebGLFramebuffer*>(asObject(slotBase));
    return JSWebGLFramebuffer::getConstructor(exec, domObject->globalObject());
}

JSValue JSWebGLFramebuffer::getConstructor(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSWebGLFramebufferConstructor>(exec, jsCast<JSDOMGlobalObject*>(globalObject));
}

static inline bool isObservable(JSWebGLFramebuffer* jsWebGLFramebuffer)
{
    if (jsWebGLFramebuffer->hasCustomProperties())
        return true;
    return false;
}

bool JSWebGLFramebufferOwner::isReachableFromOpaqueRoots(JSC::Handle<JSC::Unknown> handle, void*, SlotVisitor& visitor)
{
    JSWebGLFramebuffer* jsWebGLFramebuffer = jsCast<JSWebGLFramebuffer*>(handle.get().asCell());
    if (!isObservable(jsWebGLFramebuffer))
        return false;
    UNUSED_PARAM(visitor);
    return false;
}

void JSWebGLFramebufferOwner::finalize(JSC::Handle<JSC::Unknown> handle, void* context)
{
    JSWebGLFramebuffer* jsWebGLFramebuffer = jsCast<JSWebGLFramebuffer*>(handle.get().asCell());
    DOMWrapperWorld* world = static_cast<DOMWrapperWorld*>(context);
    uncacheWrapper(world, jsWebGLFramebuffer->impl(), jsWebGLFramebuffer);
    jsWebGLFramebuffer->releaseImpl();
}

#if ENABLE(BINDING_INTEGRITY)
#if PLATFORM(WIN)
#pragma warning(disable: 4483)
extern "C" { extern void (*const __identifier("??_7WebGLFramebuffer@WebCore@@6B@")[])(); }
#else
extern "C" { extern void* _ZTVN7WebCore16WebGLFramebufferE[]; }
#endif
#endif
JSC::JSValue toJS(JSC::ExecState* exec, JSDOMGlobalObject* globalObject, WebGLFramebuffer* impl)
{
    if (!impl)
        return jsNull();
    if (JSValue result = getExistingWrapper<JSWebGLFramebuffer>(exec, impl))
        return result;

#if ENABLE(BINDING_INTEGRITY)
    void* actualVTablePointer = *(reinterpret_cast<void**>(impl));
#if PLATFORM(WIN)
    void* expectedVTablePointer = reinterpret_cast<void*>(__identifier("??_7WebGLFramebuffer@WebCore@@6B@"));
#else
    void* expectedVTablePointer = &_ZTVN7WebCore16WebGLFramebufferE[2];
#if COMPILER(CLANG) && COMPILER_SUPPORTS(CXX_STATIC_ASSERT)
    // If this fails WebGLFramebuffer does not have a vtable, so you need to add the
    // ImplementationLacksVTable attribute to the interface definition
    COMPILE_ASSERT(__is_polymorphic(WebGLFramebuffer), WebGLFramebuffer_is_not_polymorphic);
#endif
#endif
    // If you hit this assertion you either have a use after free bug, or
    // WebGLFramebuffer has subclasses. If WebGLFramebuffer has subclasses that get passed
    // to toJS() we currently require WebGLFramebuffer you to opt out of binding hardening
    // by adding the SkipVTableValidation attribute to the interface IDL definition
    RELEASE_ASSERT(actualVTablePointer == expectedVTablePointer);
#endif
    ReportMemoryCost<WebGLFramebuffer>::reportMemoryCost(exec, impl);
    return createNewWrapper<JSWebGLFramebuffer>(exec, globalObject, impl);
}

WebGLFramebuffer* toWebGLFramebuffer(JSC::JSValue value)
{
    return value.inherits(&JSWebGLFramebuffer::s_info) ? jsCast<JSWebGLFramebuffer*>(asObject(value))->impl() : 0;
}

}

#endif // ENABLE(WEBGL)
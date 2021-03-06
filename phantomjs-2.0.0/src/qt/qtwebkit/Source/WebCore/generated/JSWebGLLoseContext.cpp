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

#include "JSWebGLLoseContext.h"

#include "ExceptionCode.h"
#include "JSDOMBinding.h"
#include "WebGLLoseContext.h"
#include <runtime/Error.h>
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

/* Hash table for prototype */

static const HashTableValue JSWebGLLoseContextPrototypeTableValues[] =
{
    { "loseContext", DontDelete | JSC::Function, (intptr_t)static_cast<NativeFunction>(jsWebGLLoseContextPrototypeFunctionLoseContext), (intptr_t)0, NoIntrinsic },
    { "restoreContext", DontDelete | JSC::Function, (intptr_t)static_cast<NativeFunction>(jsWebGLLoseContextPrototypeFunctionRestoreContext), (intptr_t)0, NoIntrinsic },
    { 0, 0, 0, 0, NoIntrinsic }
};

static const HashTable JSWebGLLoseContextPrototypeTable = { 4, 3, JSWebGLLoseContextPrototypeTableValues, 0 };
const ClassInfo JSWebGLLoseContextPrototype::s_info = { "WebGLLoseContextPrototype", &Base::s_info, &JSWebGLLoseContextPrototypeTable, 0, CREATE_METHOD_TABLE(JSWebGLLoseContextPrototype) };

JSObject* JSWebGLLoseContextPrototype::self(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSWebGLLoseContext>(exec, globalObject);
}

bool JSWebGLLoseContextPrototype::getOwnPropertySlot(JSCell* cell, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    JSWebGLLoseContextPrototype* thisObject = jsCast<JSWebGLLoseContextPrototype*>(cell);
    return getStaticFunctionSlot<JSObject>(exec, &JSWebGLLoseContextPrototypeTable, thisObject, propertyName, slot);
}

bool JSWebGLLoseContextPrototype::getOwnPropertyDescriptor(JSObject* object, ExecState* exec, PropertyName propertyName, PropertyDescriptor& descriptor)
{
    JSWebGLLoseContextPrototype* thisObject = jsCast<JSWebGLLoseContextPrototype*>(object);
    return getStaticFunctionDescriptor<JSObject>(exec, &JSWebGLLoseContextPrototypeTable, thisObject, propertyName, descriptor);
}

const ClassInfo JSWebGLLoseContext::s_info = { "WebGLLoseContext", &Base::s_info, 0, 0 , CREATE_METHOD_TABLE(JSWebGLLoseContext) };

JSWebGLLoseContext::JSWebGLLoseContext(Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<WebGLLoseContext> impl)
    : JSDOMWrapper(structure, globalObject)
    , m_impl(impl.leakRef())
{
}

void JSWebGLLoseContext::finishCreation(VM& vm)
{
    Base::finishCreation(vm);
    ASSERT(inherits(&s_info));
}

JSObject* JSWebGLLoseContext::createPrototype(ExecState* exec, JSGlobalObject* globalObject)
{
    return JSWebGLLoseContextPrototype::create(exec->vm(), globalObject, JSWebGLLoseContextPrototype::createStructure(globalObject->vm(), globalObject, globalObject->objectPrototype()));
}

void JSWebGLLoseContext::destroy(JSC::JSCell* cell)
{
    JSWebGLLoseContext* thisObject = static_cast<JSWebGLLoseContext*>(cell);
    thisObject->JSWebGLLoseContext::~JSWebGLLoseContext();
}

JSWebGLLoseContext::~JSWebGLLoseContext()
{
    releaseImplIfNotNull();
}

EncodedJSValue JSC_HOST_CALL jsWebGLLoseContextPrototypeFunctionLoseContext(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSWebGLLoseContext::s_info))
        return throwVMTypeError(exec);
    JSWebGLLoseContext* castedThis = jsCast<JSWebGLLoseContext*>(asObject(thisValue));
    ASSERT_GC_OBJECT_INHERITS(castedThis, &JSWebGLLoseContext::s_info);
    WebGLLoseContext* impl = static_cast<WebGLLoseContext*>(castedThis->impl());
    impl->loseContext();
    return JSValue::encode(jsUndefined());
}

EncodedJSValue JSC_HOST_CALL jsWebGLLoseContextPrototypeFunctionRestoreContext(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSWebGLLoseContext::s_info))
        return throwVMTypeError(exec);
    JSWebGLLoseContext* castedThis = jsCast<JSWebGLLoseContext*>(asObject(thisValue));
    ASSERT_GC_OBJECT_INHERITS(castedThis, &JSWebGLLoseContext::s_info);
    WebGLLoseContext* impl = static_cast<WebGLLoseContext*>(castedThis->impl());
    impl->restoreContext();
    return JSValue::encode(jsUndefined());
}

static inline bool isObservable(JSWebGLLoseContext* jsWebGLLoseContext)
{
    if (jsWebGLLoseContext->hasCustomProperties())
        return true;
    return false;
}

bool JSWebGLLoseContextOwner::isReachableFromOpaqueRoots(JSC::Handle<JSC::Unknown> handle, void*, SlotVisitor& visitor)
{
    JSWebGLLoseContext* jsWebGLLoseContext = jsCast<JSWebGLLoseContext*>(handle.get().asCell());
    if (!isObservable(jsWebGLLoseContext))
        return false;
    WebGLRenderingContext* root = jsWebGLLoseContext->impl()->context();
    return visitor.containsOpaqueRoot(root);
}

void JSWebGLLoseContextOwner::finalize(JSC::Handle<JSC::Unknown> handle, void* context)
{
    JSWebGLLoseContext* jsWebGLLoseContext = jsCast<JSWebGLLoseContext*>(handle.get().asCell());
    DOMWrapperWorld* world = static_cast<DOMWrapperWorld*>(context);
    uncacheWrapper(world, jsWebGLLoseContext->impl(), jsWebGLLoseContext);
    jsWebGLLoseContext->releaseImpl();
}

#if ENABLE(BINDING_INTEGRITY)
#if PLATFORM(WIN)
#pragma warning(disable: 4483)
extern "C" { extern void (*const __identifier("??_7WebGLLoseContext@WebCore@@6B@")[])(); }
#else
extern "C" { extern void* _ZTVN7WebCore16WebGLLoseContextE[]; }
#endif
#endif
JSC::JSValue toJS(JSC::ExecState* exec, JSDOMGlobalObject* globalObject, WebGLLoseContext* impl)
{
    if (!impl)
        return jsNull();
    if (JSValue result = getExistingWrapper<JSWebGLLoseContext>(exec, impl))
        return result;

#if ENABLE(BINDING_INTEGRITY)
    void* actualVTablePointer = *(reinterpret_cast<void**>(impl));
#if PLATFORM(WIN)
    void* expectedVTablePointer = reinterpret_cast<void*>(__identifier("??_7WebGLLoseContext@WebCore@@6B@"));
#else
    void* expectedVTablePointer = &_ZTVN7WebCore16WebGLLoseContextE[2];
#if COMPILER(CLANG) && COMPILER_SUPPORTS(CXX_STATIC_ASSERT)
    // If this fails WebGLLoseContext does not have a vtable, so you need to add the
    // ImplementationLacksVTable attribute to the interface definition
    COMPILE_ASSERT(__is_polymorphic(WebGLLoseContext), WebGLLoseContext_is_not_polymorphic);
#endif
#endif
    // If you hit this assertion you either have a use after free bug, or
    // WebGLLoseContext has subclasses. If WebGLLoseContext has subclasses that get passed
    // to toJS() we currently require WebGLLoseContext you to opt out of binding hardening
    // by adding the SkipVTableValidation attribute to the interface IDL definition
    RELEASE_ASSERT(actualVTablePointer == expectedVTablePointer);
#endif
    ReportMemoryCost<WebGLLoseContext>::reportMemoryCost(exec, impl);
    return createNewWrapper<JSWebGLLoseContext>(exec, globalObject, impl);
}

WebGLLoseContext* toWebGLLoseContext(JSC::JSValue value)
{
    return value.inherits(&JSWebGLLoseContext::s_info) ? jsCast<JSWebGLLoseContext*>(asObject(value))->impl() : 0;
}

}

#endif // ENABLE(WEBGL)

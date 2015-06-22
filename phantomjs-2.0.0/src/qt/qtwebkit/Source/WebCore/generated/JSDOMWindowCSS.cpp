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

#if ENABLE(CSS3_CONDITIONAL_RULES)

#include "JSDOMWindowCSS.h"

#include "DOMWindowCSS.h"
#include "ExceptionCode.h"
#include "JSDOMBinding.h"
#include <runtime/Error.h>
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

/* Hash table for prototype */

static const HashTableValue JSDOMWindowCSSPrototypeTableValues[] =
{
    { "supports", DontDelete | JSC::Function, (intptr_t)static_cast<NativeFunction>(jsDOMWindowCSSPrototypeFunctionSupports), (intptr_t)2, NoIntrinsic },
    { 0, 0, 0, 0, NoIntrinsic }
};

static const HashTable JSDOMWindowCSSPrototypeTable = { 4, 3, JSDOMWindowCSSPrototypeTableValues, 0 };
const ClassInfo JSDOMWindowCSSPrototype::s_info = { "CSSPrototype", &Base::s_info, &JSDOMWindowCSSPrototypeTable, 0, CREATE_METHOD_TABLE(JSDOMWindowCSSPrototype) };

JSObject* JSDOMWindowCSSPrototype::self(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSDOMWindowCSS>(exec, globalObject);
}

bool JSDOMWindowCSSPrototype::getOwnPropertySlot(JSCell* cell, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    JSDOMWindowCSSPrototype* thisObject = jsCast<JSDOMWindowCSSPrototype*>(cell);
    return getStaticFunctionSlot<JSObject>(exec, &JSDOMWindowCSSPrototypeTable, thisObject, propertyName, slot);
}

bool JSDOMWindowCSSPrototype::getOwnPropertyDescriptor(JSObject* object, ExecState* exec, PropertyName propertyName, PropertyDescriptor& descriptor)
{
    JSDOMWindowCSSPrototype* thisObject = jsCast<JSDOMWindowCSSPrototype*>(object);
    return getStaticFunctionDescriptor<JSObject>(exec, &JSDOMWindowCSSPrototypeTable, thisObject, propertyName, descriptor);
}

const ClassInfo JSDOMWindowCSS::s_info = { "CSS", &Base::s_info, 0, 0 , CREATE_METHOD_TABLE(JSDOMWindowCSS) };

JSDOMWindowCSS::JSDOMWindowCSS(Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<DOMWindowCSS> impl)
    : JSDOMWrapper(structure, globalObject)
    , m_impl(impl.leakRef())
{
}

void JSDOMWindowCSS::finishCreation(VM& vm)
{
    Base::finishCreation(vm);
    ASSERT(inherits(&s_info));
}

JSObject* JSDOMWindowCSS::createPrototype(ExecState* exec, JSGlobalObject* globalObject)
{
    return JSDOMWindowCSSPrototype::create(exec->vm(), globalObject, JSDOMWindowCSSPrototype::createStructure(globalObject->vm(), globalObject, globalObject->objectPrototype()));
}

void JSDOMWindowCSS::destroy(JSC::JSCell* cell)
{
    JSDOMWindowCSS* thisObject = static_cast<JSDOMWindowCSS*>(cell);
    thisObject->JSDOMWindowCSS::~JSDOMWindowCSS();
}

JSDOMWindowCSS::~JSDOMWindowCSS()
{
    releaseImplIfNotNull();
}

static EncodedJSValue JSC_HOST_CALL jsDOMWindowCSSPrototypeFunctionSupports1(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSDOMWindowCSS::s_info))
        return throwVMTypeError(exec);
    JSDOMWindowCSS* castedThis = jsCast<JSDOMWindowCSS*>(asObject(thisValue));
    ASSERT_GC_OBJECT_INHERITS(castedThis, &JSDOMWindowCSS::s_info);
    DOMWindowCSS* impl = static_cast<DOMWindowCSS*>(castedThis->impl());
    if (exec->argumentCount() < 2)
        return throwVMError(exec, createNotEnoughArgumentsError(exec));
    const String& property(exec->argument(0).isEmpty() ? String() : exec->argument(0).toString(exec)->value(exec));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());
    const String& value(exec->argument(1).isEmpty() ? String() : exec->argument(1).toString(exec)->value(exec));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());

    JSC::JSValue result = jsBoolean(impl->supports(property, value));
    return JSValue::encode(result);
}

static EncodedJSValue JSC_HOST_CALL jsDOMWindowCSSPrototypeFunctionSupports2(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSDOMWindowCSS::s_info))
        return throwVMTypeError(exec);
    JSDOMWindowCSS* castedThis = jsCast<JSDOMWindowCSS*>(asObject(thisValue));
    ASSERT_GC_OBJECT_INHERITS(castedThis, &JSDOMWindowCSS::s_info);
    DOMWindowCSS* impl = static_cast<DOMWindowCSS*>(castedThis->impl());
    if (exec->argumentCount() < 1)
        return throwVMError(exec, createNotEnoughArgumentsError(exec));
    const String& conditionText(exec->argument(0).isEmpty() ? String() : exec->argument(0).toString(exec)->value(exec));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());

    JSC::JSValue result = jsBoolean(impl->supports(conditionText));
    return JSValue::encode(result);
}

EncodedJSValue JSC_HOST_CALL jsDOMWindowCSSPrototypeFunctionSupports(ExecState* exec)
{
    size_t argsCount = exec->argumentCount();
    if (argsCount == 2)
        return jsDOMWindowCSSPrototypeFunctionSupports1(exec);
    if (argsCount == 1)
        return jsDOMWindowCSSPrototypeFunctionSupports2(exec);
    if (argsCount < 1)
        return throwVMError(exec, createNotEnoughArgumentsError(exec));
    return throwVMTypeError(exec);
}

static inline bool isObservable(JSDOMWindowCSS* jsDOMWindowCSS)
{
    if (jsDOMWindowCSS->hasCustomProperties())
        return true;
    return false;
}

bool JSDOMWindowCSSOwner::isReachableFromOpaqueRoots(JSC::Handle<JSC::Unknown> handle, void*, SlotVisitor& visitor)
{
    JSDOMWindowCSS* jsDOMWindowCSS = jsCast<JSDOMWindowCSS*>(handle.get().asCell());
    if (!isObservable(jsDOMWindowCSS))
        return false;
    UNUSED_PARAM(visitor);
    return false;
}

void JSDOMWindowCSSOwner::finalize(JSC::Handle<JSC::Unknown> handle, void* context)
{
    JSDOMWindowCSS* jsDOMWindowCSS = jsCast<JSDOMWindowCSS*>(handle.get().asCell());
    DOMWrapperWorld* world = static_cast<DOMWrapperWorld*>(context);
    uncacheWrapper(world, jsDOMWindowCSS->impl(), jsDOMWindowCSS);
    jsDOMWindowCSS->releaseImpl();
}

#if ENABLE(BINDING_INTEGRITY)
#if PLATFORM(WIN)
#pragma warning(disable: 4483)
extern "C" { extern void (*const __identifier("??_7DOMWindowCSS@WebCore@@6B@")[])(); }
#else
extern "C" { extern void* _ZTVN7WebCore12DOMWindowCSSE[]; }
#endif
#endif
JSC::JSValue toJS(JSC::ExecState* exec, JSDOMGlobalObject* globalObject, DOMWindowCSS* impl)
{
    if (!impl)
        return jsNull();
    if (JSValue result = getExistingWrapper<JSDOMWindowCSS>(exec, impl))
        return result;

#if ENABLE(BINDING_INTEGRITY)
    void* actualVTablePointer = *(reinterpret_cast<void**>(impl));
#if PLATFORM(WIN)
    void* expectedVTablePointer = reinterpret_cast<void*>(__identifier("??_7DOMWindowCSS@WebCore@@6B@"));
#else
    void* expectedVTablePointer = &_ZTVN7WebCore12DOMWindowCSSE[2];
#if COMPILER(CLANG) && COMPILER_SUPPORTS(CXX_STATIC_ASSERT)
    // If this fails DOMWindowCSS does not have a vtable, so you need to add the
    // ImplementationLacksVTable attribute to the interface definition
    COMPILE_ASSERT(__is_polymorphic(DOMWindowCSS), DOMWindowCSS_is_not_polymorphic);
#endif
#endif
    // If you hit this assertion you either have a use after free bug, or
    // DOMWindowCSS has subclasses. If DOMWindowCSS has subclasses that get passed
    // to toJS() we currently require DOMWindowCSS you to opt out of binding hardening
    // by adding the SkipVTableValidation attribute to the interface IDL definition
    RELEASE_ASSERT(actualVTablePointer == expectedVTablePointer);
#endif
    ReportMemoryCost<DOMWindowCSS>::reportMemoryCost(exec, impl);
    return createNewWrapper<JSDOMWindowCSS>(exec, globalObject, impl);
}

DOMWindowCSS* toDOMWindowCSS(JSC::JSValue value)
{
    return value.inherits(&JSDOMWindowCSS::s_info) ? jsCast<JSDOMWindowCSS*>(asObject(value))->impl() : 0;
}

}

#endif // ENABLE(CSS3_CONDITIONAL_RULES)

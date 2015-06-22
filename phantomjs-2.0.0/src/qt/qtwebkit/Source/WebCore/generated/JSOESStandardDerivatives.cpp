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

#include "JSOESStandardDerivatives.h"

#include "OESStandardDerivatives.h"
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

/* Hash table for prototype */

static const HashTableValue JSOESStandardDerivativesPrototypeTableValues[] =
{
    { "FRAGMENT_SHADER_DERIVATIVE_HINT_OES", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsOESStandardDerivativesFRAGMENT_SHADER_DERIVATIVE_HINT_OES), (intptr_t)0, NoIntrinsic },
    { 0, 0, 0, 0, NoIntrinsic }
};

static const HashTable JSOESStandardDerivativesPrototypeTable = { 2, 1, JSOESStandardDerivativesPrototypeTableValues, 0 };
const ClassInfo JSOESStandardDerivativesPrototype::s_info = { "OESStandardDerivativesPrototype", &Base::s_info, &JSOESStandardDerivativesPrototypeTable, 0, CREATE_METHOD_TABLE(JSOESStandardDerivativesPrototype) };

JSObject* JSOESStandardDerivativesPrototype::self(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSOESStandardDerivatives>(exec, globalObject);
}

bool JSOESStandardDerivativesPrototype::getOwnPropertySlot(JSCell* cell, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    JSOESStandardDerivativesPrototype* thisObject = jsCast<JSOESStandardDerivativesPrototype*>(cell);
    return getStaticValueSlot<JSOESStandardDerivativesPrototype, JSObject>(exec, &JSOESStandardDerivativesPrototypeTable, thisObject, propertyName, slot);
}

bool JSOESStandardDerivativesPrototype::getOwnPropertyDescriptor(JSObject* object, ExecState* exec, PropertyName propertyName, PropertyDescriptor& descriptor)
{
    JSOESStandardDerivativesPrototype* thisObject = jsCast<JSOESStandardDerivativesPrototype*>(object);
    return getStaticValueDescriptor<JSOESStandardDerivativesPrototype, JSObject>(exec, &JSOESStandardDerivativesPrototypeTable, thisObject, propertyName, descriptor);
}

const ClassInfo JSOESStandardDerivatives::s_info = { "OESStandardDerivatives", &Base::s_info, 0, 0 , CREATE_METHOD_TABLE(JSOESStandardDerivatives) };

JSOESStandardDerivatives::JSOESStandardDerivatives(Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<OESStandardDerivatives> impl)
    : JSDOMWrapper(structure, globalObject)
    , m_impl(impl.leakRef())
{
}

void JSOESStandardDerivatives::finishCreation(VM& vm)
{
    Base::finishCreation(vm);
    ASSERT(inherits(&s_info));
}

JSObject* JSOESStandardDerivatives::createPrototype(ExecState* exec, JSGlobalObject* globalObject)
{
    return JSOESStandardDerivativesPrototype::create(exec->vm(), globalObject, JSOESStandardDerivativesPrototype::createStructure(globalObject->vm(), globalObject, globalObject->objectPrototype()));
}

void JSOESStandardDerivatives::destroy(JSC::JSCell* cell)
{
    JSOESStandardDerivatives* thisObject = static_cast<JSOESStandardDerivatives*>(cell);
    thisObject->JSOESStandardDerivatives::~JSOESStandardDerivatives();
}

JSOESStandardDerivatives::~JSOESStandardDerivatives()
{
    releaseImplIfNotNull();
}

// Constant getters

JSValue jsOESStandardDerivativesFRAGMENT_SHADER_DERIVATIVE_HINT_OES(ExecState* exec, JSValue, PropertyName)
{
    UNUSED_PARAM(exec);
    return jsNumber(static_cast<int>(0x8B8B));
}

static inline bool isObservable(JSOESStandardDerivatives* jsOESStandardDerivatives)
{
    if (jsOESStandardDerivatives->hasCustomProperties())
        return true;
    return false;
}

bool JSOESStandardDerivativesOwner::isReachableFromOpaqueRoots(JSC::Handle<JSC::Unknown> handle, void*, SlotVisitor& visitor)
{
    JSOESStandardDerivatives* jsOESStandardDerivatives = jsCast<JSOESStandardDerivatives*>(handle.get().asCell());
    if (!isObservable(jsOESStandardDerivatives))
        return false;
    WebGLRenderingContext* root = jsOESStandardDerivatives->impl()->context();
    return visitor.containsOpaqueRoot(root);
}

void JSOESStandardDerivativesOwner::finalize(JSC::Handle<JSC::Unknown> handle, void* context)
{
    JSOESStandardDerivatives* jsOESStandardDerivatives = jsCast<JSOESStandardDerivatives*>(handle.get().asCell());
    DOMWrapperWorld* world = static_cast<DOMWrapperWorld*>(context);
    uncacheWrapper(world, jsOESStandardDerivatives->impl(), jsOESStandardDerivatives);
    jsOESStandardDerivatives->releaseImpl();
}

#if ENABLE(BINDING_INTEGRITY)
#if PLATFORM(WIN)
#pragma warning(disable: 4483)
extern "C" { extern void (*const __identifier("??_7OESStandardDerivatives@WebCore@@6B@")[])(); }
#else
extern "C" { extern void* _ZTVN7WebCore22OESStandardDerivativesE[]; }
#endif
#endif
JSC::JSValue toJS(JSC::ExecState* exec, JSDOMGlobalObject* globalObject, OESStandardDerivatives* impl)
{
    if (!impl)
        return jsNull();
    if (JSValue result = getExistingWrapper<JSOESStandardDerivatives>(exec, impl))
        return result;

#if ENABLE(BINDING_INTEGRITY)
    void* actualVTablePointer = *(reinterpret_cast<void**>(impl));
#if PLATFORM(WIN)
    void* expectedVTablePointer = reinterpret_cast<void*>(__identifier("??_7OESStandardDerivatives@WebCore@@6B@"));
#else
    void* expectedVTablePointer = &_ZTVN7WebCore22OESStandardDerivativesE[2];
#if COMPILER(CLANG) && COMPILER_SUPPORTS(CXX_STATIC_ASSERT)
    // If this fails OESStandardDerivatives does not have a vtable, so you need to add the
    // ImplementationLacksVTable attribute to the interface definition
    COMPILE_ASSERT(__is_polymorphic(OESStandardDerivatives), OESStandardDerivatives_is_not_polymorphic);
#endif
#endif
    // If you hit this assertion you either have a use after free bug, or
    // OESStandardDerivatives has subclasses. If OESStandardDerivatives has subclasses that get passed
    // to toJS() we currently require OESStandardDerivatives you to opt out of binding hardening
    // by adding the SkipVTableValidation attribute to the interface IDL definition
    RELEASE_ASSERT(actualVTablePointer == expectedVTablePointer);
#endif
    ReportMemoryCost<OESStandardDerivatives>::reportMemoryCost(exec, impl);
    return createNewWrapper<JSOESStandardDerivatives>(exec, globalObject, impl);
}

OESStandardDerivatives* toOESStandardDerivatives(JSC::JSValue value)
{
    return value.inherits(&JSOESStandardDerivatives::s_info) ? jsCast<JSOESStandardDerivatives*>(asObject(value))->impl() : 0;
}

}

#endif // ENABLE(WEBGL)

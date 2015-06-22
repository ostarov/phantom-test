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
#include "JSBarProp.h"

#include "BarProp.h"
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

/* Hash table */

static const HashTableValue JSBarPropTableValues[] =
{
    { "visible", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsBarPropVisible), (intptr_t)0, NoIntrinsic },
    { "constructor", DontEnum | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsBarPropConstructor), (intptr_t)0, NoIntrinsic },
    { 0, 0, 0, 0, NoIntrinsic }
};

static const HashTable JSBarPropTable = { 4, 3, JSBarPropTableValues, 0 };
/* Hash table for constructor */

static const HashTableValue JSBarPropConstructorTableValues[] =
{
    { 0, 0, 0, 0, NoIntrinsic }
};

static const HashTable JSBarPropConstructorTable = { 1, 0, JSBarPropConstructorTableValues, 0 };
const ClassInfo JSBarPropConstructor::s_info = { "BarPropConstructor", &Base::s_info, &JSBarPropConstructorTable, 0, CREATE_METHOD_TABLE(JSBarPropConstructor) };

JSBarPropConstructor::JSBarPropConstructor(Structure* structure, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(structure, globalObject)
{
}

void JSBarPropConstructor::finishCreation(ExecState* exec, JSDOMGlobalObject* globalObject)
{
    Base::finishCreation(exec->vm());
    ASSERT(inherits(&s_info));
    putDirect(exec->vm(), exec->propertyNames().prototype, JSBarPropPrototype::self(exec, globalObject), DontDelete | ReadOnly);
    putDirect(exec->vm(), exec->propertyNames().length, jsNumber(0), ReadOnly | DontDelete | DontEnum);
}

bool JSBarPropConstructor::getOwnPropertySlot(JSCell* cell, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSBarPropConstructor, JSDOMWrapper>(exec, &JSBarPropConstructorTable, jsCast<JSBarPropConstructor*>(cell), propertyName, slot);
}

bool JSBarPropConstructor::getOwnPropertyDescriptor(JSObject* object, ExecState* exec, PropertyName propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSBarPropConstructor, JSDOMWrapper>(exec, &JSBarPropConstructorTable, jsCast<JSBarPropConstructor*>(object), propertyName, descriptor);
}

/* Hash table for prototype */

static const HashTableValue JSBarPropPrototypeTableValues[] =
{
    { 0, 0, 0, 0, NoIntrinsic }
};

static const HashTable JSBarPropPrototypeTable = { 1, 0, JSBarPropPrototypeTableValues, 0 };
const ClassInfo JSBarPropPrototype::s_info = { "BarPropPrototype", &Base::s_info, &JSBarPropPrototypeTable, 0, CREATE_METHOD_TABLE(JSBarPropPrototype) };

JSObject* JSBarPropPrototype::self(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSBarProp>(exec, globalObject);
}

const ClassInfo JSBarProp::s_info = { "BarProp", &Base::s_info, &JSBarPropTable, 0 , CREATE_METHOD_TABLE(JSBarProp) };

JSBarProp::JSBarProp(Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<BarProp> impl)
    : JSDOMWrapper(structure, globalObject)
    , m_impl(impl.leakRef())
{
}

void JSBarProp::finishCreation(VM& vm)
{
    Base::finishCreation(vm);
    ASSERT(inherits(&s_info));
}

JSObject* JSBarProp::createPrototype(ExecState* exec, JSGlobalObject* globalObject)
{
    return JSBarPropPrototype::create(exec->vm(), globalObject, JSBarPropPrototype::createStructure(globalObject->vm(), globalObject, globalObject->objectPrototype()));
}

void JSBarProp::destroy(JSC::JSCell* cell)
{
    JSBarProp* thisObject = static_cast<JSBarProp*>(cell);
    thisObject->JSBarProp::~JSBarProp();
}

JSBarProp::~JSBarProp()
{
    releaseImplIfNotNull();
}

bool JSBarProp::getOwnPropertySlot(JSCell* cell, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    JSBarProp* thisObject = jsCast<JSBarProp*>(cell);
    ASSERT_GC_OBJECT_INHERITS(thisObject, &s_info);
    return getStaticValueSlot<JSBarProp, Base>(exec, &JSBarPropTable, thisObject, propertyName, slot);
}

bool JSBarProp::getOwnPropertyDescriptor(JSObject* object, ExecState* exec, PropertyName propertyName, PropertyDescriptor& descriptor)
{
    JSBarProp* thisObject = jsCast<JSBarProp*>(object);
    ASSERT_GC_OBJECT_INHERITS(thisObject, &s_info);
    return getStaticValueDescriptor<JSBarProp, Base>(exec, &JSBarPropTable, thisObject, propertyName, descriptor);
}

JSValue jsBarPropVisible(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSBarProp* castedThis = jsCast<JSBarProp*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    BarProp* impl = static_cast<BarProp*>(castedThis->impl());
    JSValue result = jsBoolean(impl->visible());
    return result;
}


JSValue jsBarPropConstructor(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSBarProp* domObject = jsCast<JSBarProp*>(asObject(slotBase));
    return JSBarProp::getConstructor(exec, domObject->globalObject());
}

JSValue JSBarProp::getConstructor(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSBarPropConstructor>(exec, jsCast<JSDOMGlobalObject*>(globalObject));
}

static inline bool isObservable(JSBarProp* jsBarProp)
{
    if (jsBarProp->hasCustomProperties())
        return true;
    return false;
}

bool JSBarPropOwner::isReachableFromOpaqueRoots(JSC::Handle<JSC::Unknown> handle, void*, SlotVisitor& visitor)
{
    JSBarProp* jsBarProp = jsCast<JSBarProp*>(handle.get().asCell());
    if (!isObservable(jsBarProp))
        return false;
    Frame* root = jsBarProp->impl()->frame();
    if (!root)
        return false;
    return visitor.containsOpaqueRoot(root);
}

void JSBarPropOwner::finalize(JSC::Handle<JSC::Unknown> handle, void* context)
{
    JSBarProp* jsBarProp = jsCast<JSBarProp*>(handle.get().asCell());
    DOMWrapperWorld* world = static_cast<DOMWrapperWorld*>(context);
    uncacheWrapper(world, jsBarProp->impl(), jsBarProp);
    jsBarProp->releaseImpl();
}

#if ENABLE(BINDING_INTEGRITY)
#if PLATFORM(WIN)
#pragma warning(disable: 4483)
extern "C" { extern void (*const __identifier("??_7BarProp@WebCore@@6B@")[])(); }
#else
extern "C" { extern void* _ZTVN7WebCore7BarPropE[]; }
#endif
#endif
JSC::JSValue toJS(JSC::ExecState* exec, JSDOMGlobalObject* globalObject, BarProp* impl)
{
    if (!impl)
        return jsNull();
    if (JSValue result = getExistingWrapper<JSBarProp>(exec, impl))
        return result;

#if ENABLE(BINDING_INTEGRITY)
    void* actualVTablePointer = *(reinterpret_cast<void**>(impl));
#if PLATFORM(WIN)
    void* expectedVTablePointer = reinterpret_cast<void*>(__identifier("??_7BarProp@WebCore@@6B@"));
#else
    void* expectedVTablePointer = &_ZTVN7WebCore7BarPropE[2];
#if COMPILER(CLANG) && COMPILER_SUPPORTS(CXX_STATIC_ASSERT)
    // If this fails BarProp does not have a vtable, so you need to add the
    // ImplementationLacksVTable attribute to the interface definition
    COMPILE_ASSERT(__is_polymorphic(BarProp), BarProp_is_not_polymorphic);
#endif
#endif
    // If you hit this assertion you either have a use after free bug, or
    // BarProp has subclasses. If BarProp has subclasses that get passed
    // to toJS() we currently require BarProp you to opt out of binding hardening
    // by adding the SkipVTableValidation attribute to the interface IDL definition
    RELEASE_ASSERT(actualVTablePointer == expectedVTablePointer);
#endif
    ReportMemoryCost<BarProp>::reportMemoryCost(exec, impl);
    return createNewWrapper<JSBarProp>(exec, globalObject, impl);
}

BarProp* toBarProp(JSC::JSValue value)
{
    return value.inherits(&JSBarProp::s_info) ? jsCast<JSBarProp*>(asObject(value))->impl() : 0;
}

}
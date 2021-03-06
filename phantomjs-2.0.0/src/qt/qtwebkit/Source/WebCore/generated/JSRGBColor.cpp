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
#include "JSRGBColor.h"

#include "CSSPrimitiveValue.h"
#include "JSCSSPrimitiveValue.h"
#include "RGBColor.h"
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

/* Hash table */

static const HashTableValue JSRGBColorTableValues[] =
{
    { "red", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsRGBColorRed), (intptr_t)0, NoIntrinsic },
    { "green", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsRGBColorGreen), (intptr_t)0, NoIntrinsic },
    { "blue", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsRGBColorBlue), (intptr_t)0, NoIntrinsic },
    { "constructor", DontEnum | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsRGBColorConstructor), (intptr_t)0, NoIntrinsic },
    { 0, 0, 0, 0, NoIntrinsic }
};

static const HashTable JSRGBColorTable = { 8, 7, JSRGBColorTableValues, 0 };
/* Hash table for constructor */

static const HashTableValue JSRGBColorConstructorTableValues[] =
{
    { 0, 0, 0, 0, NoIntrinsic }
};

static const HashTable JSRGBColorConstructorTable = { 1, 0, JSRGBColorConstructorTableValues, 0 };
const ClassInfo JSRGBColorConstructor::s_info = { "RGBColorConstructor", &Base::s_info, &JSRGBColorConstructorTable, 0, CREATE_METHOD_TABLE(JSRGBColorConstructor) };

JSRGBColorConstructor::JSRGBColorConstructor(Structure* structure, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(structure, globalObject)
{
}

void JSRGBColorConstructor::finishCreation(ExecState* exec, JSDOMGlobalObject* globalObject)
{
    Base::finishCreation(exec->vm());
    ASSERT(inherits(&s_info));
    putDirect(exec->vm(), exec->propertyNames().prototype, JSRGBColorPrototype::self(exec, globalObject), DontDelete | ReadOnly);
    putDirect(exec->vm(), exec->propertyNames().length, jsNumber(0), ReadOnly | DontDelete | DontEnum);
}

bool JSRGBColorConstructor::getOwnPropertySlot(JSCell* cell, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSRGBColorConstructor, JSDOMWrapper>(exec, &JSRGBColorConstructorTable, jsCast<JSRGBColorConstructor*>(cell), propertyName, slot);
}

bool JSRGBColorConstructor::getOwnPropertyDescriptor(JSObject* object, ExecState* exec, PropertyName propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSRGBColorConstructor, JSDOMWrapper>(exec, &JSRGBColorConstructorTable, jsCast<JSRGBColorConstructor*>(object), propertyName, descriptor);
}

/* Hash table for prototype */

static const HashTableValue JSRGBColorPrototypeTableValues[] =
{
    { 0, 0, 0, 0, NoIntrinsic }
};

static const HashTable JSRGBColorPrototypeTable = { 1, 0, JSRGBColorPrototypeTableValues, 0 };
const ClassInfo JSRGBColorPrototype::s_info = { "RGBColorPrototype", &Base::s_info, &JSRGBColorPrototypeTable, 0, CREATE_METHOD_TABLE(JSRGBColorPrototype) };

JSObject* JSRGBColorPrototype::self(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSRGBColor>(exec, globalObject);
}

const ClassInfo JSRGBColor::s_info = { "RGBColor", &Base::s_info, &JSRGBColorTable, 0 , CREATE_METHOD_TABLE(JSRGBColor) };

JSRGBColor::JSRGBColor(Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<RGBColor> impl)
    : JSDOMWrapper(structure, globalObject)
    , m_impl(impl.leakRef())
{
}

void JSRGBColor::finishCreation(VM& vm)
{
    Base::finishCreation(vm);
    ASSERT(inherits(&s_info));
}

JSObject* JSRGBColor::createPrototype(ExecState* exec, JSGlobalObject* globalObject)
{
    return JSRGBColorPrototype::create(exec->vm(), globalObject, JSRGBColorPrototype::createStructure(globalObject->vm(), globalObject, globalObject->objectPrototype()));
}

void JSRGBColor::destroy(JSC::JSCell* cell)
{
    JSRGBColor* thisObject = static_cast<JSRGBColor*>(cell);
    thisObject->JSRGBColor::~JSRGBColor();
}

JSRGBColor::~JSRGBColor()
{
    releaseImplIfNotNull();
}

bool JSRGBColor::getOwnPropertySlot(JSCell* cell, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    JSRGBColor* thisObject = jsCast<JSRGBColor*>(cell);
    ASSERT_GC_OBJECT_INHERITS(thisObject, &s_info);
    return getStaticValueSlot<JSRGBColor, Base>(exec, &JSRGBColorTable, thisObject, propertyName, slot);
}

bool JSRGBColor::getOwnPropertyDescriptor(JSObject* object, ExecState* exec, PropertyName propertyName, PropertyDescriptor& descriptor)
{
    JSRGBColor* thisObject = jsCast<JSRGBColor*>(object);
    ASSERT_GC_OBJECT_INHERITS(thisObject, &s_info);
    return getStaticValueDescriptor<JSRGBColor, Base>(exec, &JSRGBColorTable, thisObject, propertyName, descriptor);
}

JSValue jsRGBColorRed(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSRGBColor* castedThis = jsCast<JSRGBColor*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    RGBColor* impl = static_cast<RGBColor*>(castedThis->impl());
    JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(impl->red()));
    return result;
}


JSValue jsRGBColorGreen(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSRGBColor* castedThis = jsCast<JSRGBColor*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    RGBColor* impl = static_cast<RGBColor*>(castedThis->impl());
    JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(impl->green()));
    return result;
}


JSValue jsRGBColorBlue(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSRGBColor* castedThis = jsCast<JSRGBColor*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    RGBColor* impl = static_cast<RGBColor*>(castedThis->impl());
    JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(impl->blue()));
    return result;
}


JSValue jsRGBColorConstructor(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSRGBColor* domObject = jsCast<JSRGBColor*>(asObject(slotBase));
    return JSRGBColor::getConstructor(exec, domObject->globalObject());
}

JSValue JSRGBColor::getConstructor(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSRGBColorConstructor>(exec, jsCast<JSDOMGlobalObject*>(globalObject));
}

static inline bool isObservable(JSRGBColor* jsRGBColor)
{
    if (jsRGBColor->hasCustomProperties())
        return true;
    return false;
}

bool JSRGBColorOwner::isReachableFromOpaqueRoots(JSC::Handle<JSC::Unknown> handle, void*, SlotVisitor& visitor)
{
    JSRGBColor* jsRGBColor = jsCast<JSRGBColor*>(handle.get().asCell());
    if (!isObservable(jsRGBColor))
        return false;
    UNUSED_PARAM(visitor);
    return false;
}

void JSRGBColorOwner::finalize(JSC::Handle<JSC::Unknown> handle, void* context)
{
    JSRGBColor* jsRGBColor = jsCast<JSRGBColor*>(handle.get().asCell());
    DOMWrapperWorld* world = static_cast<DOMWrapperWorld*>(context);
    uncacheWrapper(world, jsRGBColor->impl(), jsRGBColor);
    jsRGBColor->releaseImpl();
}

JSC::JSValue toJS(JSC::ExecState* exec, JSDOMGlobalObject* globalObject, RGBColor* impl)
{
    if (!impl)
        return jsNull();
    if (JSValue result = getExistingWrapper<JSRGBColor>(exec, impl))
        return result;
#if COMPILER(CLANG) && COMPILER_SUPPORTS(CXX_STATIC_ASSERT)
    // If you hit this failure the interface definition has the ImplementationLacksVTable
    // attribute. You should remove that attribute. If the class has subclasses
    // that may be passed through this toJS() function you should use the SkipVTableValidation
    // attribute to RGBColor.
    COMPILE_ASSERT(!__is_polymorphic(RGBColor), RGBColor_is_polymorphic_but_idl_claims_not_to_be);
#endif
    ReportMemoryCost<RGBColor>::reportMemoryCost(exec, impl);
    return createNewWrapper<JSRGBColor>(exec, globalObject, impl);
}

RGBColor* toRGBColor(JSC::JSValue value)
{
    return value.inherits(&JSRGBColor::s_info) ? jsCast<JSRGBColor*>(asObject(value))->impl() : 0;
}

}

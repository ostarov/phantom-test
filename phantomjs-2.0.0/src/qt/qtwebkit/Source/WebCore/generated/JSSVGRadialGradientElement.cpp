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

#if ENABLE(SVG)

#include "JSSVGRadialGradientElement.h"

#include "JSSVGAnimatedLength.h"
#include "SVGRadialGradientElement.h"
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

/* Hash table */

static const HashTableValue JSSVGRadialGradientElementTableValues[] =
{
    { "cx", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGRadialGradientElementCx), (intptr_t)0, NoIntrinsic },
    { "cy", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGRadialGradientElementCy), (intptr_t)0, NoIntrinsic },
    { "r", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGRadialGradientElementR), (intptr_t)0, NoIntrinsic },
    { "fx", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGRadialGradientElementFx), (intptr_t)0, NoIntrinsic },
    { "fy", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGRadialGradientElementFy), (intptr_t)0, NoIntrinsic },
    { "fr", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGRadialGradientElementFr), (intptr_t)0, NoIntrinsic },
    { "constructor", DontEnum | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGRadialGradientElementConstructor), (intptr_t)0, NoIntrinsic },
    { 0, 0, 0, 0, NoIntrinsic }
};

static const HashTable JSSVGRadialGradientElementTable = { 18, 15, JSSVGRadialGradientElementTableValues, 0 };
/* Hash table for constructor */

static const HashTableValue JSSVGRadialGradientElementConstructorTableValues[] =
{
    { 0, 0, 0, 0, NoIntrinsic }
};

static const HashTable JSSVGRadialGradientElementConstructorTable = { 1, 0, JSSVGRadialGradientElementConstructorTableValues, 0 };
const ClassInfo JSSVGRadialGradientElementConstructor::s_info = { "SVGRadialGradientElementConstructor", &Base::s_info, &JSSVGRadialGradientElementConstructorTable, 0, CREATE_METHOD_TABLE(JSSVGRadialGradientElementConstructor) };

JSSVGRadialGradientElementConstructor::JSSVGRadialGradientElementConstructor(Structure* structure, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(structure, globalObject)
{
}

void JSSVGRadialGradientElementConstructor::finishCreation(ExecState* exec, JSDOMGlobalObject* globalObject)
{
    Base::finishCreation(exec->vm());
    ASSERT(inherits(&s_info));
    putDirect(exec->vm(), exec->propertyNames().prototype, JSSVGRadialGradientElementPrototype::self(exec, globalObject), DontDelete | ReadOnly);
    putDirect(exec->vm(), exec->propertyNames().length, jsNumber(0), ReadOnly | DontDelete | DontEnum);
}

bool JSSVGRadialGradientElementConstructor::getOwnPropertySlot(JSCell* cell, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSSVGRadialGradientElementConstructor, JSDOMWrapper>(exec, &JSSVGRadialGradientElementConstructorTable, jsCast<JSSVGRadialGradientElementConstructor*>(cell), propertyName, slot);
}

bool JSSVGRadialGradientElementConstructor::getOwnPropertyDescriptor(JSObject* object, ExecState* exec, PropertyName propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSSVGRadialGradientElementConstructor, JSDOMWrapper>(exec, &JSSVGRadialGradientElementConstructorTable, jsCast<JSSVGRadialGradientElementConstructor*>(object), propertyName, descriptor);
}

/* Hash table for prototype */

static const HashTableValue JSSVGRadialGradientElementPrototypeTableValues[] =
{
    { 0, 0, 0, 0, NoIntrinsic }
};

static const HashTable JSSVGRadialGradientElementPrototypeTable = { 1, 0, JSSVGRadialGradientElementPrototypeTableValues, 0 };
const ClassInfo JSSVGRadialGradientElementPrototype::s_info = { "SVGRadialGradientElementPrototype", &Base::s_info, &JSSVGRadialGradientElementPrototypeTable, 0, CREATE_METHOD_TABLE(JSSVGRadialGradientElementPrototype) };

JSObject* JSSVGRadialGradientElementPrototype::self(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSSVGRadialGradientElement>(exec, globalObject);
}

const ClassInfo JSSVGRadialGradientElement::s_info = { "SVGRadialGradientElement", &Base::s_info, &JSSVGRadialGradientElementTable, 0 , CREATE_METHOD_TABLE(JSSVGRadialGradientElement) };

JSSVGRadialGradientElement::JSSVGRadialGradientElement(Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<SVGRadialGradientElement> impl)
    : JSSVGGradientElement(structure, globalObject, impl)
{
}

void JSSVGRadialGradientElement::finishCreation(VM& vm)
{
    Base::finishCreation(vm);
    ASSERT(inherits(&s_info));
}

JSObject* JSSVGRadialGradientElement::createPrototype(ExecState* exec, JSGlobalObject* globalObject)
{
    return JSSVGRadialGradientElementPrototype::create(exec->vm(), globalObject, JSSVGRadialGradientElementPrototype::createStructure(exec->vm(), globalObject, JSSVGGradientElementPrototype::self(exec, globalObject)));
}

bool JSSVGRadialGradientElement::getOwnPropertySlot(JSCell* cell, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    JSSVGRadialGradientElement* thisObject = jsCast<JSSVGRadialGradientElement*>(cell);
    ASSERT_GC_OBJECT_INHERITS(thisObject, &s_info);
    return getStaticValueSlot<JSSVGRadialGradientElement, Base>(exec, &JSSVGRadialGradientElementTable, thisObject, propertyName, slot);
}

bool JSSVGRadialGradientElement::getOwnPropertyDescriptor(JSObject* object, ExecState* exec, PropertyName propertyName, PropertyDescriptor& descriptor)
{
    JSSVGRadialGradientElement* thisObject = jsCast<JSSVGRadialGradientElement*>(object);
    ASSERT_GC_OBJECT_INHERITS(thisObject, &s_info);
    return getStaticValueDescriptor<JSSVGRadialGradientElement, Base>(exec, &JSSVGRadialGradientElementTable, thisObject, propertyName, descriptor);
}

JSValue jsSVGRadialGradientElementCx(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSSVGRadialGradientElement* castedThis = jsCast<JSSVGRadialGradientElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGRadialGradientElement* impl = static_cast<SVGRadialGradientElement*>(castedThis->impl());
    RefPtr<SVGAnimatedLength> obj = impl->cxAnimated();
    JSValue result =  toJS(exec, castedThis->globalObject(), obj.get());
    return result;
}


JSValue jsSVGRadialGradientElementCy(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSSVGRadialGradientElement* castedThis = jsCast<JSSVGRadialGradientElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGRadialGradientElement* impl = static_cast<SVGRadialGradientElement*>(castedThis->impl());
    RefPtr<SVGAnimatedLength> obj = impl->cyAnimated();
    JSValue result =  toJS(exec, castedThis->globalObject(), obj.get());
    return result;
}


JSValue jsSVGRadialGradientElementR(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSSVGRadialGradientElement* castedThis = jsCast<JSSVGRadialGradientElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGRadialGradientElement* impl = static_cast<SVGRadialGradientElement*>(castedThis->impl());
    RefPtr<SVGAnimatedLength> obj = impl->rAnimated();
    JSValue result =  toJS(exec, castedThis->globalObject(), obj.get());
    return result;
}


JSValue jsSVGRadialGradientElementFx(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSSVGRadialGradientElement* castedThis = jsCast<JSSVGRadialGradientElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGRadialGradientElement* impl = static_cast<SVGRadialGradientElement*>(castedThis->impl());
    RefPtr<SVGAnimatedLength> obj = impl->fxAnimated();
    JSValue result =  toJS(exec, castedThis->globalObject(), obj.get());
    return result;
}


JSValue jsSVGRadialGradientElementFy(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSSVGRadialGradientElement* castedThis = jsCast<JSSVGRadialGradientElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGRadialGradientElement* impl = static_cast<SVGRadialGradientElement*>(castedThis->impl());
    RefPtr<SVGAnimatedLength> obj = impl->fyAnimated();
    JSValue result =  toJS(exec, castedThis->globalObject(), obj.get());
    return result;
}


JSValue jsSVGRadialGradientElementFr(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSSVGRadialGradientElement* castedThis = jsCast<JSSVGRadialGradientElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGRadialGradientElement* impl = static_cast<SVGRadialGradientElement*>(castedThis->impl());
    RefPtr<SVGAnimatedLength> obj = impl->frAnimated();
    JSValue result =  toJS(exec, castedThis->globalObject(), obj.get());
    return result;
}


JSValue jsSVGRadialGradientElementConstructor(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSSVGRadialGradientElement* domObject = jsCast<JSSVGRadialGradientElement*>(asObject(slotBase));
    return JSSVGRadialGradientElement::getConstructor(exec, domObject->globalObject());
}

JSValue JSSVGRadialGradientElement::getConstructor(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSSVGRadialGradientElementConstructor>(exec, jsCast<JSDOMGlobalObject*>(globalObject));
}


}

#endif // ENABLE(SVG)

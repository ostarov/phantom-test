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

#include "JSSVGEllipseElement.h"

#include "JSSVGAnimatedLength.h"
#include "SVGEllipseElement.h"
#include <wtf/GetPtr.h>

#if ENABLE(SVG)
#include "JSSVGAnimatedBoolean.h"
#endif

using namespace JSC;

namespace WebCore {

/* Hash table */

static const HashTableValue JSSVGEllipseElementTableValues[] =
{
    { "cx", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGEllipseElementCx), (intptr_t)0, NoIntrinsic },
    { "cy", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGEllipseElementCy), (intptr_t)0, NoIntrinsic },
    { "rx", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGEllipseElementRx), (intptr_t)0, NoIntrinsic },
    { "ry", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGEllipseElementRy), (intptr_t)0, NoIntrinsic },
#if ENABLE(SVG)
    { "externalResourcesRequired", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGEllipseElementExternalResourcesRequired), (intptr_t)0, NoIntrinsic },
#endif
    { "constructor", DontEnum | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGEllipseElementConstructor), (intptr_t)0, NoIntrinsic },
    { 0, 0, 0, 0, NoIntrinsic }
};

static const HashTable JSSVGEllipseElementTable = { 17, 15, JSSVGEllipseElementTableValues, 0 };
/* Hash table for constructor */

static const HashTableValue JSSVGEllipseElementConstructorTableValues[] =
{
    { 0, 0, 0, 0, NoIntrinsic }
};

static const HashTable JSSVGEllipseElementConstructorTable = { 1, 0, JSSVGEllipseElementConstructorTableValues, 0 };
const ClassInfo JSSVGEllipseElementConstructor::s_info = { "SVGEllipseElementConstructor", &Base::s_info, &JSSVGEllipseElementConstructorTable, 0, CREATE_METHOD_TABLE(JSSVGEllipseElementConstructor) };

JSSVGEllipseElementConstructor::JSSVGEllipseElementConstructor(Structure* structure, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(structure, globalObject)
{
}

void JSSVGEllipseElementConstructor::finishCreation(ExecState* exec, JSDOMGlobalObject* globalObject)
{
    Base::finishCreation(exec->vm());
    ASSERT(inherits(&s_info));
    putDirect(exec->vm(), exec->propertyNames().prototype, JSSVGEllipseElementPrototype::self(exec, globalObject), DontDelete | ReadOnly);
    putDirect(exec->vm(), exec->propertyNames().length, jsNumber(0), ReadOnly | DontDelete | DontEnum);
}

bool JSSVGEllipseElementConstructor::getOwnPropertySlot(JSCell* cell, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSSVGEllipseElementConstructor, JSDOMWrapper>(exec, &JSSVGEllipseElementConstructorTable, jsCast<JSSVGEllipseElementConstructor*>(cell), propertyName, slot);
}

bool JSSVGEllipseElementConstructor::getOwnPropertyDescriptor(JSObject* object, ExecState* exec, PropertyName propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSSVGEllipseElementConstructor, JSDOMWrapper>(exec, &JSSVGEllipseElementConstructorTable, jsCast<JSSVGEllipseElementConstructor*>(object), propertyName, descriptor);
}

/* Hash table for prototype */

static const HashTableValue JSSVGEllipseElementPrototypeTableValues[] =
{
    { 0, 0, 0, 0, NoIntrinsic }
};

static const HashTable JSSVGEllipseElementPrototypeTable = { 1, 0, JSSVGEllipseElementPrototypeTableValues, 0 };
const ClassInfo JSSVGEllipseElementPrototype::s_info = { "SVGEllipseElementPrototype", &Base::s_info, &JSSVGEllipseElementPrototypeTable, 0, CREATE_METHOD_TABLE(JSSVGEllipseElementPrototype) };

JSObject* JSSVGEllipseElementPrototype::self(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSSVGEllipseElement>(exec, globalObject);
}

const ClassInfo JSSVGEllipseElement::s_info = { "SVGEllipseElement", &Base::s_info, &JSSVGEllipseElementTable, 0 , CREATE_METHOD_TABLE(JSSVGEllipseElement) };

JSSVGEllipseElement::JSSVGEllipseElement(Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<SVGEllipseElement> impl)
    : JSSVGGraphicsElement(structure, globalObject, impl)
{
}

void JSSVGEllipseElement::finishCreation(VM& vm)
{
    Base::finishCreation(vm);
    ASSERT(inherits(&s_info));
}

JSObject* JSSVGEllipseElement::createPrototype(ExecState* exec, JSGlobalObject* globalObject)
{
    return JSSVGEllipseElementPrototype::create(exec->vm(), globalObject, JSSVGEllipseElementPrototype::createStructure(exec->vm(), globalObject, JSSVGGraphicsElementPrototype::self(exec, globalObject)));
}

bool JSSVGEllipseElement::getOwnPropertySlot(JSCell* cell, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    JSSVGEllipseElement* thisObject = jsCast<JSSVGEllipseElement*>(cell);
    ASSERT_GC_OBJECT_INHERITS(thisObject, &s_info);
    return getStaticValueSlot<JSSVGEllipseElement, Base>(exec, &JSSVGEllipseElementTable, thisObject, propertyName, slot);
}

bool JSSVGEllipseElement::getOwnPropertyDescriptor(JSObject* object, ExecState* exec, PropertyName propertyName, PropertyDescriptor& descriptor)
{
    JSSVGEllipseElement* thisObject = jsCast<JSSVGEllipseElement*>(object);
    ASSERT_GC_OBJECT_INHERITS(thisObject, &s_info);
    return getStaticValueDescriptor<JSSVGEllipseElement, Base>(exec, &JSSVGEllipseElementTable, thisObject, propertyName, descriptor);
}

JSValue jsSVGEllipseElementCx(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSSVGEllipseElement* castedThis = jsCast<JSSVGEllipseElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGEllipseElement* impl = static_cast<SVGEllipseElement*>(castedThis->impl());
    RefPtr<SVGAnimatedLength> obj = impl->cxAnimated();
    JSValue result =  toJS(exec, castedThis->globalObject(), obj.get());
    return result;
}


JSValue jsSVGEllipseElementCy(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSSVGEllipseElement* castedThis = jsCast<JSSVGEllipseElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGEllipseElement* impl = static_cast<SVGEllipseElement*>(castedThis->impl());
    RefPtr<SVGAnimatedLength> obj = impl->cyAnimated();
    JSValue result =  toJS(exec, castedThis->globalObject(), obj.get());
    return result;
}


JSValue jsSVGEllipseElementRx(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSSVGEllipseElement* castedThis = jsCast<JSSVGEllipseElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGEllipseElement* impl = static_cast<SVGEllipseElement*>(castedThis->impl());
    RefPtr<SVGAnimatedLength> obj = impl->rxAnimated();
    JSValue result =  toJS(exec, castedThis->globalObject(), obj.get());
    return result;
}


JSValue jsSVGEllipseElementRy(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSSVGEllipseElement* castedThis = jsCast<JSSVGEllipseElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGEllipseElement* impl = static_cast<SVGEllipseElement*>(castedThis->impl());
    RefPtr<SVGAnimatedLength> obj = impl->ryAnimated();
    JSValue result =  toJS(exec, castedThis->globalObject(), obj.get());
    return result;
}


#if ENABLE(SVG)
JSValue jsSVGEllipseElementExternalResourcesRequired(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSSVGEllipseElement* castedThis = jsCast<JSSVGEllipseElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGEllipseElement* impl = static_cast<SVGEllipseElement*>(castedThis->impl());
    RefPtr<SVGAnimatedBoolean> obj = impl->externalResourcesRequiredAnimated();
    JSValue result =  toJS(exec, castedThis->globalObject(), obj.get());
    return result;
}

#endif

JSValue jsSVGEllipseElementConstructor(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSSVGEllipseElement* domObject = jsCast<JSSVGEllipseElement*>(asObject(slotBase));
    return JSSVGEllipseElement::getConstructor(exec, domObject->globalObject());
}

JSValue JSSVGEllipseElement::getConstructor(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSSVGEllipseElementConstructor>(exec, jsCast<JSDOMGlobalObject*>(globalObject));
}


}

#endif // ENABLE(SVG)
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

#include "JSSVGLineElement.h"

#include "JSSVGAnimatedLength.h"
#include "SVGLineElement.h"
#include <wtf/GetPtr.h>

#if ENABLE(SVG)
#include "JSSVGAnimatedBoolean.h"
#endif

using namespace JSC;

namespace WebCore {

/* Hash table */

static const HashTableValue JSSVGLineElementTableValues[] =
{
    { "x1", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGLineElementX1), (intptr_t)0, NoIntrinsic },
    { "y1", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGLineElementY1), (intptr_t)0, NoIntrinsic },
    { "x2", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGLineElementX2), (intptr_t)0, NoIntrinsic },
    { "y2", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGLineElementY2), (intptr_t)0, NoIntrinsic },
#if ENABLE(SVG)
    { "externalResourcesRequired", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGLineElementExternalResourcesRequired), (intptr_t)0, NoIntrinsic },
#endif
    { "constructor", DontEnum | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGLineElementConstructor), (intptr_t)0, NoIntrinsic },
    { 0, 0, 0, 0, NoIntrinsic }
};

static const HashTable JSSVGLineElementTable = { 16, 15, JSSVGLineElementTableValues, 0 };
/* Hash table for constructor */

static const HashTableValue JSSVGLineElementConstructorTableValues[] =
{
    { 0, 0, 0, 0, NoIntrinsic }
};

static const HashTable JSSVGLineElementConstructorTable = { 1, 0, JSSVGLineElementConstructorTableValues, 0 };
const ClassInfo JSSVGLineElementConstructor::s_info = { "SVGLineElementConstructor", &Base::s_info, &JSSVGLineElementConstructorTable, 0, CREATE_METHOD_TABLE(JSSVGLineElementConstructor) };

JSSVGLineElementConstructor::JSSVGLineElementConstructor(Structure* structure, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(structure, globalObject)
{
}

void JSSVGLineElementConstructor::finishCreation(ExecState* exec, JSDOMGlobalObject* globalObject)
{
    Base::finishCreation(exec->vm());
    ASSERT(inherits(&s_info));
    putDirect(exec->vm(), exec->propertyNames().prototype, JSSVGLineElementPrototype::self(exec, globalObject), DontDelete | ReadOnly);
    putDirect(exec->vm(), exec->propertyNames().length, jsNumber(0), ReadOnly | DontDelete | DontEnum);
}

bool JSSVGLineElementConstructor::getOwnPropertySlot(JSCell* cell, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSSVGLineElementConstructor, JSDOMWrapper>(exec, &JSSVGLineElementConstructorTable, jsCast<JSSVGLineElementConstructor*>(cell), propertyName, slot);
}

bool JSSVGLineElementConstructor::getOwnPropertyDescriptor(JSObject* object, ExecState* exec, PropertyName propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSSVGLineElementConstructor, JSDOMWrapper>(exec, &JSSVGLineElementConstructorTable, jsCast<JSSVGLineElementConstructor*>(object), propertyName, descriptor);
}

/* Hash table for prototype */

static const HashTableValue JSSVGLineElementPrototypeTableValues[] =
{
    { 0, 0, 0, 0, NoIntrinsic }
};

static const HashTable JSSVGLineElementPrototypeTable = { 1, 0, JSSVGLineElementPrototypeTableValues, 0 };
const ClassInfo JSSVGLineElementPrototype::s_info = { "SVGLineElementPrototype", &Base::s_info, &JSSVGLineElementPrototypeTable, 0, CREATE_METHOD_TABLE(JSSVGLineElementPrototype) };

JSObject* JSSVGLineElementPrototype::self(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSSVGLineElement>(exec, globalObject);
}

const ClassInfo JSSVGLineElement::s_info = { "SVGLineElement", &Base::s_info, &JSSVGLineElementTable, 0 , CREATE_METHOD_TABLE(JSSVGLineElement) };

JSSVGLineElement::JSSVGLineElement(Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<SVGLineElement> impl)
    : JSSVGGraphicsElement(structure, globalObject, impl)
{
}

void JSSVGLineElement::finishCreation(VM& vm)
{
    Base::finishCreation(vm);
    ASSERT(inherits(&s_info));
}

JSObject* JSSVGLineElement::createPrototype(ExecState* exec, JSGlobalObject* globalObject)
{
    return JSSVGLineElementPrototype::create(exec->vm(), globalObject, JSSVGLineElementPrototype::createStructure(exec->vm(), globalObject, JSSVGGraphicsElementPrototype::self(exec, globalObject)));
}

bool JSSVGLineElement::getOwnPropertySlot(JSCell* cell, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    JSSVGLineElement* thisObject = jsCast<JSSVGLineElement*>(cell);
    ASSERT_GC_OBJECT_INHERITS(thisObject, &s_info);
    return getStaticValueSlot<JSSVGLineElement, Base>(exec, &JSSVGLineElementTable, thisObject, propertyName, slot);
}

bool JSSVGLineElement::getOwnPropertyDescriptor(JSObject* object, ExecState* exec, PropertyName propertyName, PropertyDescriptor& descriptor)
{
    JSSVGLineElement* thisObject = jsCast<JSSVGLineElement*>(object);
    ASSERT_GC_OBJECT_INHERITS(thisObject, &s_info);
    return getStaticValueDescriptor<JSSVGLineElement, Base>(exec, &JSSVGLineElementTable, thisObject, propertyName, descriptor);
}

JSValue jsSVGLineElementX1(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSSVGLineElement* castedThis = jsCast<JSSVGLineElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGLineElement* impl = static_cast<SVGLineElement*>(castedThis->impl());
    RefPtr<SVGAnimatedLength> obj = impl->x1Animated();
    JSValue result =  toJS(exec, castedThis->globalObject(), obj.get());
    return result;
}


JSValue jsSVGLineElementY1(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSSVGLineElement* castedThis = jsCast<JSSVGLineElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGLineElement* impl = static_cast<SVGLineElement*>(castedThis->impl());
    RefPtr<SVGAnimatedLength> obj = impl->y1Animated();
    JSValue result =  toJS(exec, castedThis->globalObject(), obj.get());
    return result;
}


JSValue jsSVGLineElementX2(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSSVGLineElement* castedThis = jsCast<JSSVGLineElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGLineElement* impl = static_cast<SVGLineElement*>(castedThis->impl());
    RefPtr<SVGAnimatedLength> obj = impl->x2Animated();
    JSValue result =  toJS(exec, castedThis->globalObject(), obj.get());
    return result;
}


JSValue jsSVGLineElementY2(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSSVGLineElement* castedThis = jsCast<JSSVGLineElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGLineElement* impl = static_cast<SVGLineElement*>(castedThis->impl());
    RefPtr<SVGAnimatedLength> obj = impl->y2Animated();
    JSValue result =  toJS(exec, castedThis->globalObject(), obj.get());
    return result;
}


#if ENABLE(SVG)
JSValue jsSVGLineElementExternalResourcesRequired(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSSVGLineElement* castedThis = jsCast<JSSVGLineElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGLineElement* impl = static_cast<SVGLineElement*>(castedThis->impl());
    RefPtr<SVGAnimatedBoolean> obj = impl->externalResourcesRequiredAnimated();
    JSValue result =  toJS(exec, castedThis->globalObject(), obj.get());
    return result;
}

#endif

JSValue jsSVGLineElementConstructor(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSSVGLineElement* domObject = jsCast<JSSVGLineElement*>(asObject(slotBase));
    return JSSVGLineElement::getConstructor(exec, domObject->globalObject());
}

JSValue JSSVGLineElement::getConstructor(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSSVGLineElementConstructor>(exec, jsCast<JSDOMGlobalObject*>(globalObject));
}


}

#endif // ENABLE(SVG)

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

#include "JSSVGPolygonElement.h"

#include "JSSVGPointList.h"
#include "SVGPointList.h"
#include "SVGPolygonElement.h"
#include <wtf/GetPtr.h>

#if ENABLE(SVG)
#include "JSSVGAnimatedBoolean.h"
#endif

using namespace JSC;

namespace WebCore {

/* Hash table */

static const HashTableValue JSSVGPolygonElementTableValues[] =
{
    { "points", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGPolygonElementPoints), (intptr_t)0, NoIntrinsic },
    { "animatedPoints", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGPolygonElementAnimatedPoints), (intptr_t)0, NoIntrinsic },
#if ENABLE(SVG)
    { "externalResourcesRequired", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGPolygonElementExternalResourcesRequired), (intptr_t)0, NoIntrinsic },
#endif
    { "constructor", DontEnum | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGPolygonElementConstructor), (intptr_t)0, NoIntrinsic },
    { 0, 0, 0, 0, NoIntrinsic }
};

static const HashTable JSSVGPolygonElementTable = { 9, 7, JSSVGPolygonElementTableValues, 0 };
/* Hash table for constructor */

static const HashTableValue JSSVGPolygonElementConstructorTableValues[] =
{
    { 0, 0, 0, 0, NoIntrinsic }
};

static const HashTable JSSVGPolygonElementConstructorTable = { 1, 0, JSSVGPolygonElementConstructorTableValues, 0 };
const ClassInfo JSSVGPolygonElementConstructor::s_info = { "SVGPolygonElementConstructor", &Base::s_info, &JSSVGPolygonElementConstructorTable, 0, CREATE_METHOD_TABLE(JSSVGPolygonElementConstructor) };

JSSVGPolygonElementConstructor::JSSVGPolygonElementConstructor(Structure* structure, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(structure, globalObject)
{
}

void JSSVGPolygonElementConstructor::finishCreation(ExecState* exec, JSDOMGlobalObject* globalObject)
{
    Base::finishCreation(exec->vm());
    ASSERT(inherits(&s_info));
    putDirect(exec->vm(), exec->propertyNames().prototype, JSSVGPolygonElementPrototype::self(exec, globalObject), DontDelete | ReadOnly);
    putDirect(exec->vm(), exec->propertyNames().length, jsNumber(0), ReadOnly | DontDelete | DontEnum);
}

bool JSSVGPolygonElementConstructor::getOwnPropertySlot(JSCell* cell, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSSVGPolygonElementConstructor, JSDOMWrapper>(exec, &JSSVGPolygonElementConstructorTable, jsCast<JSSVGPolygonElementConstructor*>(cell), propertyName, slot);
}

bool JSSVGPolygonElementConstructor::getOwnPropertyDescriptor(JSObject* object, ExecState* exec, PropertyName propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSSVGPolygonElementConstructor, JSDOMWrapper>(exec, &JSSVGPolygonElementConstructorTable, jsCast<JSSVGPolygonElementConstructor*>(object), propertyName, descriptor);
}

/* Hash table for prototype */

static const HashTableValue JSSVGPolygonElementPrototypeTableValues[] =
{
    { 0, 0, 0, 0, NoIntrinsic }
};

static const HashTable JSSVGPolygonElementPrototypeTable = { 1, 0, JSSVGPolygonElementPrototypeTableValues, 0 };
const ClassInfo JSSVGPolygonElementPrototype::s_info = { "SVGPolygonElementPrototype", &Base::s_info, &JSSVGPolygonElementPrototypeTable, 0, CREATE_METHOD_TABLE(JSSVGPolygonElementPrototype) };

JSObject* JSSVGPolygonElementPrototype::self(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSSVGPolygonElement>(exec, globalObject);
}

const ClassInfo JSSVGPolygonElement::s_info = { "SVGPolygonElement", &Base::s_info, &JSSVGPolygonElementTable, 0 , CREATE_METHOD_TABLE(JSSVGPolygonElement) };

JSSVGPolygonElement::JSSVGPolygonElement(Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<SVGPolygonElement> impl)
    : JSSVGGraphicsElement(structure, globalObject, impl)
{
}

void JSSVGPolygonElement::finishCreation(VM& vm)
{
    Base::finishCreation(vm);
    ASSERT(inherits(&s_info));
}

JSObject* JSSVGPolygonElement::createPrototype(ExecState* exec, JSGlobalObject* globalObject)
{
    return JSSVGPolygonElementPrototype::create(exec->vm(), globalObject, JSSVGPolygonElementPrototype::createStructure(exec->vm(), globalObject, JSSVGGraphicsElementPrototype::self(exec, globalObject)));
}

bool JSSVGPolygonElement::getOwnPropertySlot(JSCell* cell, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    JSSVGPolygonElement* thisObject = jsCast<JSSVGPolygonElement*>(cell);
    ASSERT_GC_OBJECT_INHERITS(thisObject, &s_info);
    return getStaticValueSlot<JSSVGPolygonElement, Base>(exec, &JSSVGPolygonElementTable, thisObject, propertyName, slot);
}

bool JSSVGPolygonElement::getOwnPropertyDescriptor(JSObject* object, ExecState* exec, PropertyName propertyName, PropertyDescriptor& descriptor)
{
    JSSVGPolygonElement* thisObject = jsCast<JSSVGPolygonElement*>(object);
    ASSERT_GC_OBJECT_INHERITS(thisObject, &s_info);
    return getStaticValueDescriptor<JSSVGPolygonElement, Base>(exec, &JSSVGPolygonElementTable, thisObject, propertyName, descriptor);
}

JSValue jsSVGPolygonElementPoints(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSSVGPolygonElement* castedThis = jsCast<JSSVGPolygonElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGPolygonElement* impl = static_cast<SVGPolygonElement*>(castedThis->impl());
    JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(impl->points()));
    return result;
}


JSValue jsSVGPolygonElementAnimatedPoints(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSSVGPolygonElement* castedThis = jsCast<JSSVGPolygonElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGPolygonElement* impl = static_cast<SVGPolygonElement*>(castedThis->impl());
    JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(impl->animatedPoints()));
    return result;
}


#if ENABLE(SVG)
JSValue jsSVGPolygonElementExternalResourcesRequired(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSSVGPolygonElement* castedThis = jsCast<JSSVGPolygonElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGPolygonElement* impl = static_cast<SVGPolygonElement*>(castedThis->impl());
    RefPtr<SVGAnimatedBoolean> obj = impl->externalResourcesRequiredAnimated();
    JSValue result =  toJS(exec, castedThis->globalObject(), obj.get());
    return result;
}

#endif

JSValue jsSVGPolygonElementConstructor(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSSVGPolygonElement* domObject = jsCast<JSSVGPolygonElement*>(asObject(slotBase));
    return JSSVGPolygonElement::getConstructor(exec, domObject->globalObject());
}

JSValue JSSVGPolygonElement::getConstructor(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSSVGPolygonElementConstructor>(exec, jsCast<JSDOMGlobalObject*>(globalObject));
}


}

#endif // ENABLE(SVG)
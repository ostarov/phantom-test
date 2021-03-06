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

#include "JSSVGAnimateElement.h"

#include "SVGAnimateElement.h"
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

/* Hash table */

static const HashTableValue JSSVGAnimateElementTableValues[] =
{
    { "constructor", DontEnum | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGAnimateElementConstructor), (intptr_t)0, NoIntrinsic },
    { 0, 0, 0, 0, NoIntrinsic }
};

static const HashTable JSSVGAnimateElementTable = { 2, 1, JSSVGAnimateElementTableValues, 0 };
/* Hash table for constructor */

static const HashTableValue JSSVGAnimateElementConstructorTableValues[] =
{
    { 0, 0, 0, 0, NoIntrinsic }
};

static const HashTable JSSVGAnimateElementConstructorTable = { 1, 0, JSSVGAnimateElementConstructorTableValues, 0 };
const ClassInfo JSSVGAnimateElementConstructor::s_info = { "SVGAnimateElementConstructor", &Base::s_info, &JSSVGAnimateElementConstructorTable, 0, CREATE_METHOD_TABLE(JSSVGAnimateElementConstructor) };

JSSVGAnimateElementConstructor::JSSVGAnimateElementConstructor(Structure* structure, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(structure, globalObject)
{
}

void JSSVGAnimateElementConstructor::finishCreation(ExecState* exec, JSDOMGlobalObject* globalObject)
{
    Base::finishCreation(exec->vm());
    ASSERT(inherits(&s_info));
    putDirect(exec->vm(), exec->propertyNames().prototype, JSSVGAnimateElementPrototype::self(exec, globalObject), DontDelete | ReadOnly);
    putDirect(exec->vm(), exec->propertyNames().length, jsNumber(0), ReadOnly | DontDelete | DontEnum);
}

bool JSSVGAnimateElementConstructor::getOwnPropertySlot(JSCell* cell, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSSVGAnimateElementConstructor, JSDOMWrapper>(exec, &JSSVGAnimateElementConstructorTable, jsCast<JSSVGAnimateElementConstructor*>(cell), propertyName, slot);
}

bool JSSVGAnimateElementConstructor::getOwnPropertyDescriptor(JSObject* object, ExecState* exec, PropertyName propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSSVGAnimateElementConstructor, JSDOMWrapper>(exec, &JSSVGAnimateElementConstructorTable, jsCast<JSSVGAnimateElementConstructor*>(object), propertyName, descriptor);
}

/* Hash table for prototype */

static const HashTableValue JSSVGAnimateElementPrototypeTableValues[] =
{
    { 0, 0, 0, 0, NoIntrinsic }
};

static const HashTable JSSVGAnimateElementPrototypeTable = { 1, 0, JSSVGAnimateElementPrototypeTableValues, 0 };
const ClassInfo JSSVGAnimateElementPrototype::s_info = { "SVGAnimateElementPrototype", &Base::s_info, &JSSVGAnimateElementPrototypeTable, 0, CREATE_METHOD_TABLE(JSSVGAnimateElementPrototype) };

JSObject* JSSVGAnimateElementPrototype::self(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSSVGAnimateElement>(exec, globalObject);
}

const ClassInfo JSSVGAnimateElement::s_info = { "SVGAnimateElement", &Base::s_info, &JSSVGAnimateElementTable, 0 , CREATE_METHOD_TABLE(JSSVGAnimateElement) };

JSSVGAnimateElement::JSSVGAnimateElement(Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<SVGAnimateElement> impl)
    : JSSVGAnimationElement(structure, globalObject, impl)
{
}

void JSSVGAnimateElement::finishCreation(VM& vm)
{
    Base::finishCreation(vm);
    ASSERT(inherits(&s_info));
}

JSObject* JSSVGAnimateElement::createPrototype(ExecState* exec, JSGlobalObject* globalObject)
{
    return JSSVGAnimateElementPrototype::create(exec->vm(), globalObject, JSSVGAnimateElementPrototype::createStructure(exec->vm(), globalObject, JSSVGAnimationElementPrototype::self(exec, globalObject)));
}

bool JSSVGAnimateElement::getOwnPropertySlot(JSCell* cell, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    JSSVGAnimateElement* thisObject = jsCast<JSSVGAnimateElement*>(cell);
    ASSERT_GC_OBJECT_INHERITS(thisObject, &s_info);
    return getStaticValueSlot<JSSVGAnimateElement, Base>(exec, &JSSVGAnimateElementTable, thisObject, propertyName, slot);
}

bool JSSVGAnimateElement::getOwnPropertyDescriptor(JSObject* object, ExecState* exec, PropertyName propertyName, PropertyDescriptor& descriptor)
{
    JSSVGAnimateElement* thisObject = jsCast<JSSVGAnimateElement*>(object);
    ASSERT_GC_OBJECT_INHERITS(thisObject, &s_info);
    return getStaticValueDescriptor<JSSVGAnimateElement, Base>(exec, &JSSVGAnimateElementTable, thisObject, propertyName, descriptor);
}

JSValue jsSVGAnimateElementConstructor(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSSVGAnimateElement* domObject = jsCast<JSSVGAnimateElement*>(asObject(slotBase));
    return JSSVGAnimateElement::getConstructor(exec, domObject->globalObject());
}

JSValue JSSVGAnimateElement::getConstructor(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSSVGAnimateElementConstructor>(exec, jsCast<JSDOMGlobalObject*>(globalObject));
}


}

#endif // ENABLE(SVG)

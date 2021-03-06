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

#include "JSSVGAnimateColorElement.h"

#include "SVGAnimateColorElement.h"
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

/* Hash table */

static const HashTableValue JSSVGAnimateColorElementTableValues[] =
{
    { "constructor", DontEnum | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGAnimateColorElementConstructor), (intptr_t)0, NoIntrinsic },
    { 0, 0, 0, 0, NoIntrinsic }
};

static const HashTable JSSVGAnimateColorElementTable = { 2, 1, JSSVGAnimateColorElementTableValues, 0 };
/* Hash table for constructor */

static const HashTableValue JSSVGAnimateColorElementConstructorTableValues[] =
{
    { 0, 0, 0, 0, NoIntrinsic }
};

static const HashTable JSSVGAnimateColorElementConstructorTable = { 1, 0, JSSVGAnimateColorElementConstructorTableValues, 0 };
const ClassInfo JSSVGAnimateColorElementConstructor::s_info = { "SVGAnimateColorElementConstructor", &Base::s_info, &JSSVGAnimateColorElementConstructorTable, 0, CREATE_METHOD_TABLE(JSSVGAnimateColorElementConstructor) };

JSSVGAnimateColorElementConstructor::JSSVGAnimateColorElementConstructor(Structure* structure, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(structure, globalObject)
{
}

void JSSVGAnimateColorElementConstructor::finishCreation(ExecState* exec, JSDOMGlobalObject* globalObject)
{
    Base::finishCreation(exec->vm());
    ASSERT(inherits(&s_info));
    putDirect(exec->vm(), exec->propertyNames().prototype, JSSVGAnimateColorElementPrototype::self(exec, globalObject), DontDelete | ReadOnly);
    putDirect(exec->vm(), exec->propertyNames().length, jsNumber(0), ReadOnly | DontDelete | DontEnum);
}

bool JSSVGAnimateColorElementConstructor::getOwnPropertySlot(JSCell* cell, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSSVGAnimateColorElementConstructor, JSDOMWrapper>(exec, &JSSVGAnimateColorElementConstructorTable, jsCast<JSSVGAnimateColorElementConstructor*>(cell), propertyName, slot);
}

bool JSSVGAnimateColorElementConstructor::getOwnPropertyDescriptor(JSObject* object, ExecState* exec, PropertyName propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSSVGAnimateColorElementConstructor, JSDOMWrapper>(exec, &JSSVGAnimateColorElementConstructorTable, jsCast<JSSVGAnimateColorElementConstructor*>(object), propertyName, descriptor);
}

/* Hash table for prototype */

static const HashTableValue JSSVGAnimateColorElementPrototypeTableValues[] =
{
    { 0, 0, 0, 0, NoIntrinsic }
};

static const HashTable JSSVGAnimateColorElementPrototypeTable = { 1, 0, JSSVGAnimateColorElementPrototypeTableValues, 0 };
const ClassInfo JSSVGAnimateColorElementPrototype::s_info = { "SVGAnimateColorElementPrototype", &Base::s_info, &JSSVGAnimateColorElementPrototypeTable, 0, CREATE_METHOD_TABLE(JSSVGAnimateColorElementPrototype) };

JSObject* JSSVGAnimateColorElementPrototype::self(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSSVGAnimateColorElement>(exec, globalObject);
}

const ClassInfo JSSVGAnimateColorElement::s_info = { "SVGAnimateColorElement", &Base::s_info, &JSSVGAnimateColorElementTable, 0 , CREATE_METHOD_TABLE(JSSVGAnimateColorElement) };

JSSVGAnimateColorElement::JSSVGAnimateColorElement(Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<SVGAnimateColorElement> impl)
    : JSSVGAnimationElement(structure, globalObject, impl)
{
}

void JSSVGAnimateColorElement::finishCreation(VM& vm)
{
    Base::finishCreation(vm);
    ASSERT(inherits(&s_info));
}

JSObject* JSSVGAnimateColorElement::createPrototype(ExecState* exec, JSGlobalObject* globalObject)
{
    return JSSVGAnimateColorElementPrototype::create(exec->vm(), globalObject, JSSVGAnimateColorElementPrototype::createStructure(exec->vm(), globalObject, JSSVGAnimationElementPrototype::self(exec, globalObject)));
}

bool JSSVGAnimateColorElement::getOwnPropertySlot(JSCell* cell, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    JSSVGAnimateColorElement* thisObject = jsCast<JSSVGAnimateColorElement*>(cell);
    ASSERT_GC_OBJECT_INHERITS(thisObject, &s_info);
    return getStaticValueSlot<JSSVGAnimateColorElement, Base>(exec, &JSSVGAnimateColorElementTable, thisObject, propertyName, slot);
}

bool JSSVGAnimateColorElement::getOwnPropertyDescriptor(JSObject* object, ExecState* exec, PropertyName propertyName, PropertyDescriptor& descriptor)
{
    JSSVGAnimateColorElement* thisObject = jsCast<JSSVGAnimateColorElement*>(object);
    ASSERT_GC_OBJECT_INHERITS(thisObject, &s_info);
    return getStaticValueDescriptor<JSSVGAnimateColorElement, Base>(exec, &JSSVGAnimateColorElementTable, thisObject, propertyName, descriptor);
}

JSValue jsSVGAnimateColorElementConstructor(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSSVGAnimateColorElement* domObject = jsCast<JSSVGAnimateColorElement*>(asObject(slotBase));
    return JSSVGAnimateColorElement::getConstructor(exec, domObject->globalObject());
}

JSValue JSSVGAnimateColorElement::getConstructor(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSSVGAnimateColorElementConstructor>(exec, jsCast<JSDOMGlobalObject*>(globalObject));
}


}

#endif // ENABLE(SVG)

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

#include "JSSVGGElement.h"

#include "SVGGElement.h"
#include <wtf/GetPtr.h>

#if ENABLE(SVG)
#include "JSSVGAnimatedBoolean.h"
#endif

using namespace JSC;

namespace WebCore {

/* Hash table */

static const HashTableValue JSSVGGElementTableValues[] =
{
#if ENABLE(SVG)
    { "externalResourcesRequired", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGGElementExternalResourcesRequired), (intptr_t)0, NoIntrinsic },
#endif
    { "constructor", DontEnum | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGGElementConstructor), (intptr_t)0, NoIntrinsic },
    { 0, 0, 0, 0, NoIntrinsic }
};

static const HashTable JSSVGGElementTable = { 5, 3, JSSVGGElementTableValues, 0 };
/* Hash table for constructor */

static const HashTableValue JSSVGGElementConstructorTableValues[] =
{
    { 0, 0, 0, 0, NoIntrinsic }
};

static const HashTable JSSVGGElementConstructorTable = { 1, 0, JSSVGGElementConstructorTableValues, 0 };
const ClassInfo JSSVGGElementConstructor::s_info = { "SVGGElementConstructor", &Base::s_info, &JSSVGGElementConstructorTable, 0, CREATE_METHOD_TABLE(JSSVGGElementConstructor) };

JSSVGGElementConstructor::JSSVGGElementConstructor(Structure* structure, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(structure, globalObject)
{
}

void JSSVGGElementConstructor::finishCreation(ExecState* exec, JSDOMGlobalObject* globalObject)
{
    Base::finishCreation(exec->vm());
    ASSERT(inherits(&s_info));
    putDirect(exec->vm(), exec->propertyNames().prototype, JSSVGGElementPrototype::self(exec, globalObject), DontDelete | ReadOnly);
    putDirect(exec->vm(), exec->propertyNames().length, jsNumber(0), ReadOnly | DontDelete | DontEnum);
}

bool JSSVGGElementConstructor::getOwnPropertySlot(JSCell* cell, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSSVGGElementConstructor, JSDOMWrapper>(exec, &JSSVGGElementConstructorTable, jsCast<JSSVGGElementConstructor*>(cell), propertyName, slot);
}

bool JSSVGGElementConstructor::getOwnPropertyDescriptor(JSObject* object, ExecState* exec, PropertyName propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSSVGGElementConstructor, JSDOMWrapper>(exec, &JSSVGGElementConstructorTable, jsCast<JSSVGGElementConstructor*>(object), propertyName, descriptor);
}

/* Hash table for prototype */

static const HashTableValue JSSVGGElementPrototypeTableValues[] =
{
    { 0, 0, 0, 0, NoIntrinsic }
};

static const HashTable JSSVGGElementPrototypeTable = { 1, 0, JSSVGGElementPrototypeTableValues, 0 };
const ClassInfo JSSVGGElementPrototype::s_info = { "SVGGElementPrototype", &Base::s_info, &JSSVGGElementPrototypeTable, 0, CREATE_METHOD_TABLE(JSSVGGElementPrototype) };

JSObject* JSSVGGElementPrototype::self(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSSVGGElement>(exec, globalObject);
}

const ClassInfo JSSVGGElement::s_info = { "SVGGElement", &Base::s_info, &JSSVGGElementTable, 0 , CREATE_METHOD_TABLE(JSSVGGElement) };

JSSVGGElement::JSSVGGElement(Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<SVGGElement> impl)
    : JSSVGGraphicsElement(structure, globalObject, impl)
{
}

void JSSVGGElement::finishCreation(VM& vm)
{
    Base::finishCreation(vm);
    ASSERT(inherits(&s_info));
}

JSObject* JSSVGGElement::createPrototype(ExecState* exec, JSGlobalObject* globalObject)
{
    return JSSVGGElementPrototype::create(exec->vm(), globalObject, JSSVGGElementPrototype::createStructure(exec->vm(), globalObject, JSSVGGraphicsElementPrototype::self(exec, globalObject)));
}

bool JSSVGGElement::getOwnPropertySlot(JSCell* cell, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    JSSVGGElement* thisObject = jsCast<JSSVGGElement*>(cell);
    ASSERT_GC_OBJECT_INHERITS(thisObject, &s_info);
    return getStaticValueSlot<JSSVGGElement, Base>(exec, &JSSVGGElementTable, thisObject, propertyName, slot);
}

bool JSSVGGElement::getOwnPropertyDescriptor(JSObject* object, ExecState* exec, PropertyName propertyName, PropertyDescriptor& descriptor)
{
    JSSVGGElement* thisObject = jsCast<JSSVGGElement*>(object);
    ASSERT_GC_OBJECT_INHERITS(thisObject, &s_info);
    return getStaticValueDescriptor<JSSVGGElement, Base>(exec, &JSSVGGElementTable, thisObject, propertyName, descriptor);
}

#if ENABLE(SVG)
JSValue jsSVGGElementExternalResourcesRequired(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSSVGGElement* castedThis = jsCast<JSSVGGElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGGElement* impl = static_cast<SVGGElement*>(castedThis->impl());
    RefPtr<SVGAnimatedBoolean> obj = impl->externalResourcesRequiredAnimated();
    JSValue result =  toJS(exec, castedThis->globalObject(), obj.get());
    return result;
}

#endif

JSValue jsSVGGElementConstructor(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSSVGGElement* domObject = jsCast<JSSVGGElement*>(asObject(slotBase));
    return JSSVGGElement::getConstructor(exec, domObject->globalObject());
}

JSValue JSSVGGElement::getConstructor(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSSVGGElementConstructor>(exec, jsCast<JSDOMGlobalObject*>(globalObject));
}


}

#endif // ENABLE(SVG)
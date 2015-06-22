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

#include "JSSVGStopElement.h"

#include "JSSVGAnimatedNumber.h"
#include "SVGStopElement.h"
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

/* Hash table */

static const HashTableValue JSSVGStopElementTableValues[] =
{
    { "offset", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGStopElementOffset), (intptr_t)0, NoIntrinsic },
    { "constructor", DontEnum | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGStopElementConstructor), (intptr_t)0, NoIntrinsic },
    { 0, 0, 0, 0, NoIntrinsic }
};

static const HashTable JSSVGStopElementTable = { 4, 3, JSSVGStopElementTableValues, 0 };
/* Hash table for constructor */

static const HashTableValue JSSVGStopElementConstructorTableValues[] =
{
    { 0, 0, 0, 0, NoIntrinsic }
};

static const HashTable JSSVGStopElementConstructorTable = { 1, 0, JSSVGStopElementConstructorTableValues, 0 };
const ClassInfo JSSVGStopElementConstructor::s_info = { "SVGStopElementConstructor", &Base::s_info, &JSSVGStopElementConstructorTable, 0, CREATE_METHOD_TABLE(JSSVGStopElementConstructor) };

JSSVGStopElementConstructor::JSSVGStopElementConstructor(Structure* structure, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(structure, globalObject)
{
}

void JSSVGStopElementConstructor::finishCreation(ExecState* exec, JSDOMGlobalObject* globalObject)
{
    Base::finishCreation(exec->vm());
    ASSERT(inherits(&s_info));
    putDirect(exec->vm(), exec->propertyNames().prototype, JSSVGStopElementPrototype::self(exec, globalObject), DontDelete | ReadOnly);
    putDirect(exec->vm(), exec->propertyNames().length, jsNumber(0), ReadOnly | DontDelete | DontEnum);
}

bool JSSVGStopElementConstructor::getOwnPropertySlot(JSCell* cell, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSSVGStopElementConstructor, JSDOMWrapper>(exec, &JSSVGStopElementConstructorTable, jsCast<JSSVGStopElementConstructor*>(cell), propertyName, slot);
}

bool JSSVGStopElementConstructor::getOwnPropertyDescriptor(JSObject* object, ExecState* exec, PropertyName propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSSVGStopElementConstructor, JSDOMWrapper>(exec, &JSSVGStopElementConstructorTable, jsCast<JSSVGStopElementConstructor*>(object), propertyName, descriptor);
}

/* Hash table for prototype */

static const HashTableValue JSSVGStopElementPrototypeTableValues[] =
{
    { 0, 0, 0, 0, NoIntrinsic }
};

static const HashTable JSSVGStopElementPrototypeTable = { 1, 0, JSSVGStopElementPrototypeTableValues, 0 };
const ClassInfo JSSVGStopElementPrototype::s_info = { "SVGStopElementPrototype", &Base::s_info, &JSSVGStopElementPrototypeTable, 0, CREATE_METHOD_TABLE(JSSVGStopElementPrototype) };

JSObject* JSSVGStopElementPrototype::self(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSSVGStopElement>(exec, globalObject);
}

const ClassInfo JSSVGStopElement::s_info = { "SVGStopElement", &Base::s_info, &JSSVGStopElementTable, 0 , CREATE_METHOD_TABLE(JSSVGStopElement) };

JSSVGStopElement::JSSVGStopElement(Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<SVGStopElement> impl)
    : JSSVGStyledElement(structure, globalObject, impl)
{
}

void JSSVGStopElement::finishCreation(VM& vm)
{
    Base::finishCreation(vm);
    ASSERT(inherits(&s_info));
}

JSObject* JSSVGStopElement::createPrototype(ExecState* exec, JSGlobalObject* globalObject)
{
    return JSSVGStopElementPrototype::create(exec->vm(), globalObject, JSSVGStopElementPrototype::createStructure(exec->vm(), globalObject, JSSVGStyledElementPrototype::self(exec, globalObject)));
}

bool JSSVGStopElement::getOwnPropertySlot(JSCell* cell, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    JSSVGStopElement* thisObject = jsCast<JSSVGStopElement*>(cell);
    ASSERT_GC_OBJECT_INHERITS(thisObject, &s_info);
    return getStaticValueSlot<JSSVGStopElement, Base>(exec, &JSSVGStopElementTable, thisObject, propertyName, slot);
}

bool JSSVGStopElement::getOwnPropertyDescriptor(JSObject* object, ExecState* exec, PropertyName propertyName, PropertyDescriptor& descriptor)
{
    JSSVGStopElement* thisObject = jsCast<JSSVGStopElement*>(object);
    ASSERT_GC_OBJECT_INHERITS(thisObject, &s_info);
    return getStaticValueDescriptor<JSSVGStopElement, Base>(exec, &JSSVGStopElementTable, thisObject, propertyName, descriptor);
}

JSValue jsSVGStopElementOffset(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSSVGStopElement* castedThis = jsCast<JSSVGStopElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGStopElement* impl = static_cast<SVGStopElement*>(castedThis->impl());
    RefPtr<SVGAnimatedNumber> obj = impl->offsetAnimated();
    JSValue result =  toJS(exec, castedThis->globalObject(), obj.get());
    return result;
}


JSValue jsSVGStopElementConstructor(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSSVGStopElement* domObject = jsCast<JSSVGStopElement*>(asObject(slotBase));
    return JSSVGStopElement::getConstructor(exec, domObject->globalObject());
}

JSValue JSSVGStopElement::getConstructor(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSSVGStopElementConstructor>(exec, jsCast<JSDOMGlobalObject*>(globalObject));
}


}

#endif // ENABLE(SVG)

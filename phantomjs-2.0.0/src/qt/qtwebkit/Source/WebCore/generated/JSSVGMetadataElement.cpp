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

#include "JSSVGMetadataElement.h"

#include "SVGMetadataElement.h"
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

/* Hash table */

static const HashTableValue JSSVGMetadataElementTableValues[] =
{
    { "constructor", DontEnum | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGMetadataElementConstructor), (intptr_t)0, NoIntrinsic },
    { 0, 0, 0, 0, NoIntrinsic }
};

static const HashTable JSSVGMetadataElementTable = { 2, 1, JSSVGMetadataElementTableValues, 0 };
/* Hash table for constructor */

static const HashTableValue JSSVGMetadataElementConstructorTableValues[] =
{
    { 0, 0, 0, 0, NoIntrinsic }
};

static const HashTable JSSVGMetadataElementConstructorTable = { 1, 0, JSSVGMetadataElementConstructorTableValues, 0 };
const ClassInfo JSSVGMetadataElementConstructor::s_info = { "SVGMetadataElementConstructor", &Base::s_info, &JSSVGMetadataElementConstructorTable, 0, CREATE_METHOD_TABLE(JSSVGMetadataElementConstructor) };

JSSVGMetadataElementConstructor::JSSVGMetadataElementConstructor(Structure* structure, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(structure, globalObject)
{
}

void JSSVGMetadataElementConstructor::finishCreation(ExecState* exec, JSDOMGlobalObject* globalObject)
{
    Base::finishCreation(exec->vm());
    ASSERT(inherits(&s_info));
    putDirect(exec->vm(), exec->propertyNames().prototype, JSSVGMetadataElementPrototype::self(exec, globalObject), DontDelete | ReadOnly);
    putDirect(exec->vm(), exec->propertyNames().length, jsNumber(0), ReadOnly | DontDelete | DontEnum);
}

bool JSSVGMetadataElementConstructor::getOwnPropertySlot(JSCell* cell, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSSVGMetadataElementConstructor, JSDOMWrapper>(exec, &JSSVGMetadataElementConstructorTable, jsCast<JSSVGMetadataElementConstructor*>(cell), propertyName, slot);
}

bool JSSVGMetadataElementConstructor::getOwnPropertyDescriptor(JSObject* object, ExecState* exec, PropertyName propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSSVGMetadataElementConstructor, JSDOMWrapper>(exec, &JSSVGMetadataElementConstructorTable, jsCast<JSSVGMetadataElementConstructor*>(object), propertyName, descriptor);
}

/* Hash table for prototype */

static const HashTableValue JSSVGMetadataElementPrototypeTableValues[] =
{
    { 0, 0, 0, 0, NoIntrinsic }
};

static const HashTable JSSVGMetadataElementPrototypeTable = { 1, 0, JSSVGMetadataElementPrototypeTableValues, 0 };
const ClassInfo JSSVGMetadataElementPrototype::s_info = { "SVGMetadataElementPrototype", &Base::s_info, &JSSVGMetadataElementPrototypeTable, 0, CREATE_METHOD_TABLE(JSSVGMetadataElementPrototype) };

JSObject* JSSVGMetadataElementPrototype::self(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSSVGMetadataElement>(exec, globalObject);
}

const ClassInfo JSSVGMetadataElement::s_info = { "SVGMetadataElement", &Base::s_info, &JSSVGMetadataElementTable, 0 , CREATE_METHOD_TABLE(JSSVGMetadataElement) };

JSSVGMetadataElement::JSSVGMetadataElement(Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<SVGMetadataElement> impl)
    : JSSVGElement(structure, globalObject, impl)
{
}

void JSSVGMetadataElement::finishCreation(VM& vm)
{
    Base::finishCreation(vm);
    ASSERT(inherits(&s_info));
}

JSObject* JSSVGMetadataElement::createPrototype(ExecState* exec, JSGlobalObject* globalObject)
{
    return JSSVGMetadataElementPrototype::create(exec->vm(), globalObject, JSSVGMetadataElementPrototype::createStructure(exec->vm(), globalObject, JSSVGElementPrototype::self(exec, globalObject)));
}

bool JSSVGMetadataElement::getOwnPropertySlot(JSCell* cell, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    JSSVGMetadataElement* thisObject = jsCast<JSSVGMetadataElement*>(cell);
    ASSERT_GC_OBJECT_INHERITS(thisObject, &s_info);
    return getStaticValueSlot<JSSVGMetadataElement, Base>(exec, &JSSVGMetadataElementTable, thisObject, propertyName, slot);
}

bool JSSVGMetadataElement::getOwnPropertyDescriptor(JSObject* object, ExecState* exec, PropertyName propertyName, PropertyDescriptor& descriptor)
{
    JSSVGMetadataElement* thisObject = jsCast<JSSVGMetadataElement*>(object);
    ASSERT_GC_OBJECT_INHERITS(thisObject, &s_info);
    return getStaticValueDescriptor<JSSVGMetadataElement, Base>(exec, &JSSVGMetadataElementTable, thisObject, propertyName, descriptor);
}

JSValue jsSVGMetadataElementConstructor(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSSVGMetadataElement* domObject = jsCast<JSSVGMetadataElement*>(asObject(slotBase));
    return JSSVGMetadataElement::getConstructor(exec, domObject->globalObject());
}

JSValue JSSVGMetadataElement::getConstructor(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSSVGMetadataElementConstructor>(exec, jsCast<JSDOMGlobalObject*>(globalObject));
}


}

#endif // ENABLE(SVG)
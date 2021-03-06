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

#if ENABLE(SVG) && ENABLE(SVG_FONTS)

#include "JSSVGAltGlyphDefElement.h"

#include "SVGAltGlyphDefElement.h"
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

/* Hash table */

static const HashTableValue JSSVGAltGlyphDefElementTableValues[] =
{
    { "constructor", DontEnum | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGAltGlyphDefElementConstructor), (intptr_t)0, NoIntrinsic },
    { 0, 0, 0, 0, NoIntrinsic }
};

static const HashTable JSSVGAltGlyphDefElementTable = { 2, 1, JSSVGAltGlyphDefElementTableValues, 0 };
/* Hash table for constructor */

static const HashTableValue JSSVGAltGlyphDefElementConstructorTableValues[] =
{
    { 0, 0, 0, 0, NoIntrinsic }
};

static const HashTable JSSVGAltGlyphDefElementConstructorTable = { 1, 0, JSSVGAltGlyphDefElementConstructorTableValues, 0 };
const ClassInfo JSSVGAltGlyphDefElementConstructor::s_info = { "SVGAltGlyphDefElementConstructor", &Base::s_info, &JSSVGAltGlyphDefElementConstructorTable, 0, CREATE_METHOD_TABLE(JSSVGAltGlyphDefElementConstructor) };

JSSVGAltGlyphDefElementConstructor::JSSVGAltGlyphDefElementConstructor(Structure* structure, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(structure, globalObject)
{
}

void JSSVGAltGlyphDefElementConstructor::finishCreation(ExecState* exec, JSDOMGlobalObject* globalObject)
{
    Base::finishCreation(exec->vm());
    ASSERT(inherits(&s_info));
    putDirect(exec->vm(), exec->propertyNames().prototype, JSSVGAltGlyphDefElementPrototype::self(exec, globalObject), DontDelete | ReadOnly);
    putDirect(exec->vm(), exec->propertyNames().length, jsNumber(0), ReadOnly | DontDelete | DontEnum);
}

bool JSSVGAltGlyphDefElementConstructor::getOwnPropertySlot(JSCell* cell, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSSVGAltGlyphDefElementConstructor, JSDOMWrapper>(exec, &JSSVGAltGlyphDefElementConstructorTable, jsCast<JSSVGAltGlyphDefElementConstructor*>(cell), propertyName, slot);
}

bool JSSVGAltGlyphDefElementConstructor::getOwnPropertyDescriptor(JSObject* object, ExecState* exec, PropertyName propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSSVGAltGlyphDefElementConstructor, JSDOMWrapper>(exec, &JSSVGAltGlyphDefElementConstructorTable, jsCast<JSSVGAltGlyphDefElementConstructor*>(object), propertyName, descriptor);
}

/* Hash table for prototype */

static const HashTableValue JSSVGAltGlyphDefElementPrototypeTableValues[] =
{
    { 0, 0, 0, 0, NoIntrinsic }
};

static const HashTable JSSVGAltGlyphDefElementPrototypeTable = { 1, 0, JSSVGAltGlyphDefElementPrototypeTableValues, 0 };
const ClassInfo JSSVGAltGlyphDefElementPrototype::s_info = { "SVGAltGlyphDefElementPrototype", &Base::s_info, &JSSVGAltGlyphDefElementPrototypeTable, 0, CREATE_METHOD_TABLE(JSSVGAltGlyphDefElementPrototype) };

JSObject* JSSVGAltGlyphDefElementPrototype::self(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSSVGAltGlyphDefElement>(exec, globalObject);
}

const ClassInfo JSSVGAltGlyphDefElement::s_info = { "SVGAltGlyphDefElement", &Base::s_info, &JSSVGAltGlyphDefElementTable, 0 , CREATE_METHOD_TABLE(JSSVGAltGlyphDefElement) };

JSSVGAltGlyphDefElement::JSSVGAltGlyphDefElement(Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<SVGAltGlyphDefElement> impl)
    : JSSVGElement(structure, globalObject, impl)
{
}

void JSSVGAltGlyphDefElement::finishCreation(VM& vm)
{
    Base::finishCreation(vm);
    ASSERT(inherits(&s_info));
}

JSObject* JSSVGAltGlyphDefElement::createPrototype(ExecState* exec, JSGlobalObject* globalObject)
{
    return JSSVGAltGlyphDefElementPrototype::create(exec->vm(), globalObject, JSSVGAltGlyphDefElementPrototype::createStructure(exec->vm(), globalObject, JSSVGElementPrototype::self(exec, globalObject)));
}

bool JSSVGAltGlyphDefElement::getOwnPropertySlot(JSCell* cell, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    JSSVGAltGlyphDefElement* thisObject = jsCast<JSSVGAltGlyphDefElement*>(cell);
    ASSERT_GC_OBJECT_INHERITS(thisObject, &s_info);
    return getStaticValueSlot<JSSVGAltGlyphDefElement, Base>(exec, &JSSVGAltGlyphDefElementTable, thisObject, propertyName, slot);
}

bool JSSVGAltGlyphDefElement::getOwnPropertyDescriptor(JSObject* object, ExecState* exec, PropertyName propertyName, PropertyDescriptor& descriptor)
{
    JSSVGAltGlyphDefElement* thisObject = jsCast<JSSVGAltGlyphDefElement*>(object);
    ASSERT_GC_OBJECT_INHERITS(thisObject, &s_info);
    return getStaticValueDescriptor<JSSVGAltGlyphDefElement, Base>(exec, &JSSVGAltGlyphDefElementTable, thisObject, propertyName, descriptor);
}

JSValue jsSVGAltGlyphDefElementConstructor(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSSVGAltGlyphDefElement* domObject = jsCast<JSSVGAltGlyphDefElement*>(asObject(slotBase));
    return JSSVGAltGlyphDefElement::getConstructor(exec, domObject->globalObject());
}

JSValue JSSVGAltGlyphDefElement::getConstructor(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSSVGAltGlyphDefElementConstructor>(exec, jsCast<JSDOMGlobalObject*>(globalObject));
}


}

#endif // ENABLE(SVG) && ENABLE(SVG_FONTS)

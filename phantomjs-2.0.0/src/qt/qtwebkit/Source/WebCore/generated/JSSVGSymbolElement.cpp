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

#include "JSSVGSymbolElement.h"

#include "SVGSymbolElement.h"
#include <wtf/GetPtr.h>

#if ENABLE(SVG)
#include "JSSVGAnimatedBoolean.h"
#include "JSSVGAnimatedPreserveAspectRatio.h"
#include "JSSVGAnimatedRect.h"
#endif

using namespace JSC;

namespace WebCore {

/* Hash table */

static const HashTableValue JSSVGSymbolElementTableValues[] =
{
#if ENABLE(SVG)
    { "externalResourcesRequired", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGSymbolElementExternalResourcesRequired), (intptr_t)0, NoIntrinsic },
#endif
#if ENABLE(SVG)
    { "viewBox", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGSymbolElementViewBox), (intptr_t)0, NoIntrinsic },
#endif
#if ENABLE(SVG)
    { "preserveAspectRatio", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGSymbolElementPreserveAspectRatio), (intptr_t)0, NoIntrinsic },
#endif
    { "constructor", DontEnum | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGSymbolElementConstructor), (intptr_t)0, NoIntrinsic },
    { 0, 0, 0, 0, NoIntrinsic }
};

static const HashTable JSSVGSymbolElementTable = { 10, 7, JSSVGSymbolElementTableValues, 0 };
/* Hash table for constructor */

static const HashTableValue JSSVGSymbolElementConstructorTableValues[] =
{
    { 0, 0, 0, 0, NoIntrinsic }
};

static const HashTable JSSVGSymbolElementConstructorTable = { 1, 0, JSSVGSymbolElementConstructorTableValues, 0 };
const ClassInfo JSSVGSymbolElementConstructor::s_info = { "SVGSymbolElementConstructor", &Base::s_info, &JSSVGSymbolElementConstructorTable, 0, CREATE_METHOD_TABLE(JSSVGSymbolElementConstructor) };

JSSVGSymbolElementConstructor::JSSVGSymbolElementConstructor(Structure* structure, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(structure, globalObject)
{
}

void JSSVGSymbolElementConstructor::finishCreation(ExecState* exec, JSDOMGlobalObject* globalObject)
{
    Base::finishCreation(exec->vm());
    ASSERT(inherits(&s_info));
    putDirect(exec->vm(), exec->propertyNames().prototype, JSSVGSymbolElementPrototype::self(exec, globalObject), DontDelete | ReadOnly);
    putDirect(exec->vm(), exec->propertyNames().length, jsNumber(0), ReadOnly | DontDelete | DontEnum);
}

bool JSSVGSymbolElementConstructor::getOwnPropertySlot(JSCell* cell, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSSVGSymbolElementConstructor, JSDOMWrapper>(exec, &JSSVGSymbolElementConstructorTable, jsCast<JSSVGSymbolElementConstructor*>(cell), propertyName, slot);
}

bool JSSVGSymbolElementConstructor::getOwnPropertyDescriptor(JSObject* object, ExecState* exec, PropertyName propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSSVGSymbolElementConstructor, JSDOMWrapper>(exec, &JSSVGSymbolElementConstructorTable, jsCast<JSSVGSymbolElementConstructor*>(object), propertyName, descriptor);
}

/* Hash table for prototype */

static const HashTableValue JSSVGSymbolElementPrototypeTableValues[] =
{
    { 0, 0, 0, 0, NoIntrinsic }
};

static const HashTable JSSVGSymbolElementPrototypeTable = { 1, 0, JSSVGSymbolElementPrototypeTableValues, 0 };
const ClassInfo JSSVGSymbolElementPrototype::s_info = { "SVGSymbolElementPrototype", &Base::s_info, &JSSVGSymbolElementPrototypeTable, 0, CREATE_METHOD_TABLE(JSSVGSymbolElementPrototype) };

JSObject* JSSVGSymbolElementPrototype::self(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSSVGSymbolElement>(exec, globalObject);
}

const ClassInfo JSSVGSymbolElement::s_info = { "SVGSymbolElement", &Base::s_info, &JSSVGSymbolElementTable, 0 , CREATE_METHOD_TABLE(JSSVGSymbolElement) };

JSSVGSymbolElement::JSSVGSymbolElement(Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<SVGSymbolElement> impl)
    : JSSVGStyledElement(structure, globalObject, impl)
{
}

void JSSVGSymbolElement::finishCreation(VM& vm)
{
    Base::finishCreation(vm);
    ASSERT(inherits(&s_info));
}

JSObject* JSSVGSymbolElement::createPrototype(ExecState* exec, JSGlobalObject* globalObject)
{
    return JSSVGSymbolElementPrototype::create(exec->vm(), globalObject, JSSVGSymbolElementPrototype::createStructure(exec->vm(), globalObject, JSSVGStyledElementPrototype::self(exec, globalObject)));
}

bool JSSVGSymbolElement::getOwnPropertySlot(JSCell* cell, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    JSSVGSymbolElement* thisObject = jsCast<JSSVGSymbolElement*>(cell);
    ASSERT_GC_OBJECT_INHERITS(thisObject, &s_info);
    return getStaticValueSlot<JSSVGSymbolElement, Base>(exec, &JSSVGSymbolElementTable, thisObject, propertyName, slot);
}

bool JSSVGSymbolElement::getOwnPropertyDescriptor(JSObject* object, ExecState* exec, PropertyName propertyName, PropertyDescriptor& descriptor)
{
    JSSVGSymbolElement* thisObject = jsCast<JSSVGSymbolElement*>(object);
    ASSERT_GC_OBJECT_INHERITS(thisObject, &s_info);
    return getStaticValueDescriptor<JSSVGSymbolElement, Base>(exec, &JSSVGSymbolElementTable, thisObject, propertyName, descriptor);
}

#if ENABLE(SVG)
JSValue jsSVGSymbolElementExternalResourcesRequired(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSSVGSymbolElement* castedThis = jsCast<JSSVGSymbolElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGSymbolElement* impl = static_cast<SVGSymbolElement*>(castedThis->impl());
    RefPtr<SVGAnimatedBoolean> obj = impl->externalResourcesRequiredAnimated();
    JSValue result =  toJS(exec, castedThis->globalObject(), obj.get());
    return result;
}

#endif

#if ENABLE(SVG)
JSValue jsSVGSymbolElementViewBox(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSSVGSymbolElement* castedThis = jsCast<JSSVGSymbolElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGSymbolElement* impl = static_cast<SVGSymbolElement*>(castedThis->impl());
    RefPtr<SVGAnimatedRect> obj = impl->viewBoxAnimated();
    JSValue result =  toJS(exec, castedThis->globalObject(), obj.get());
    return result;
}

#endif

#if ENABLE(SVG)
JSValue jsSVGSymbolElementPreserveAspectRatio(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSSVGSymbolElement* castedThis = jsCast<JSSVGSymbolElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGSymbolElement* impl = static_cast<SVGSymbolElement*>(castedThis->impl());
    RefPtr<SVGAnimatedPreserveAspectRatio> obj = impl->preserveAspectRatioAnimated();
    JSValue result =  toJS(exec, castedThis->globalObject(), obj.get());
    return result;
}

#endif

JSValue jsSVGSymbolElementConstructor(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSSVGSymbolElement* domObject = jsCast<JSSVGSymbolElement*>(asObject(slotBase));
    return JSSVGSymbolElement::getConstructor(exec, domObject->globalObject());
}

JSValue JSSVGSymbolElement::getConstructor(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSSVGSymbolElementConstructor>(exec, jsCast<JSDOMGlobalObject*>(globalObject));
}


}

#endif // ENABLE(SVG)

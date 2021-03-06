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
#include "JSHTMLImageElement.h"

#include "HTMLImageElement.h"
#include "HTMLNames.h"
#include "KURL.h"
#include <runtime/JSString.h>
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

/* Hash table */

static const HashTableValue JSHTMLImageElementTableValues[] =
{
    { "name", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLImageElementName), (intptr_t)setJSHTMLImageElementName, NoIntrinsic },
    { "align", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLImageElementAlign), (intptr_t)setJSHTMLImageElementAlign, NoIntrinsic },
    { "alt", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLImageElementAlt), (intptr_t)setJSHTMLImageElementAlt, NoIntrinsic },
    { "border", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLImageElementBorder), (intptr_t)setJSHTMLImageElementBorder, NoIntrinsic },
    { "crossOrigin", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLImageElementCrossOrigin), (intptr_t)setJSHTMLImageElementCrossOrigin, NoIntrinsic },
    { "height", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLImageElementHeight), (intptr_t)setJSHTMLImageElementHeight, NoIntrinsic },
    { "hspace", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLImageElementHspace), (intptr_t)setJSHTMLImageElementHspace, NoIntrinsic },
    { "isMap", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLImageElementIsMap), (intptr_t)setJSHTMLImageElementIsMap, NoIntrinsic },
    { "longDesc", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLImageElementLongDesc), (intptr_t)setJSHTMLImageElementLongDesc, NoIntrinsic },
    { "src", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLImageElementSrc), (intptr_t)setJSHTMLImageElementSrc, NoIntrinsic },
    { "useMap", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLImageElementUseMap), (intptr_t)setJSHTMLImageElementUseMap, NoIntrinsic },
    { "vspace", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLImageElementVspace), (intptr_t)setJSHTMLImageElementVspace, NoIntrinsic },
    { "width", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLImageElementWidth), (intptr_t)setJSHTMLImageElementWidth, NoIntrinsic },
    { "complete", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLImageElementComplete), (intptr_t)0, NoIntrinsic },
    { "lowsrc", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLImageElementLowsrc), (intptr_t)setJSHTMLImageElementLowsrc, NoIntrinsic },
    { "naturalHeight", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLImageElementNaturalHeight), (intptr_t)0, NoIntrinsic },
    { "naturalWidth", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLImageElementNaturalWidth), (intptr_t)0, NoIntrinsic },
    { "x", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLImageElementX), (intptr_t)0, NoIntrinsic },
    { "y", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLImageElementY), (intptr_t)0, NoIntrinsic },
    { "constructor", DontEnum | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLImageElementConstructor), (intptr_t)0, NoIntrinsic },
    { 0, 0, 0, 0, NoIntrinsic }
};

static const HashTable JSHTMLImageElementTable = { 67, 63, JSHTMLImageElementTableValues, 0 };
/* Hash table for constructor */

static const HashTableValue JSHTMLImageElementConstructorTableValues[] =
{
    { 0, 0, 0, 0, NoIntrinsic }
};

static const HashTable JSHTMLImageElementConstructorTable = { 1, 0, JSHTMLImageElementConstructorTableValues, 0 };
const ClassInfo JSHTMLImageElementConstructor::s_info = { "HTMLImageElementConstructor", &Base::s_info, &JSHTMLImageElementConstructorTable, 0, CREATE_METHOD_TABLE(JSHTMLImageElementConstructor) };

JSHTMLImageElementConstructor::JSHTMLImageElementConstructor(Structure* structure, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(structure, globalObject)
{
}

void JSHTMLImageElementConstructor::finishCreation(ExecState* exec, JSDOMGlobalObject* globalObject)
{
    Base::finishCreation(exec->vm());
    ASSERT(inherits(&s_info));
    putDirect(exec->vm(), exec->propertyNames().prototype, JSHTMLImageElementPrototype::self(exec, globalObject), DontDelete | ReadOnly);
    putDirect(exec->vm(), exec->propertyNames().length, jsNumber(0), ReadOnly | DontDelete | DontEnum);
}

bool JSHTMLImageElementConstructor::getOwnPropertySlot(JSCell* cell, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSHTMLImageElementConstructor, JSDOMWrapper>(exec, &JSHTMLImageElementConstructorTable, jsCast<JSHTMLImageElementConstructor*>(cell), propertyName, slot);
}

bool JSHTMLImageElementConstructor::getOwnPropertyDescriptor(JSObject* object, ExecState* exec, PropertyName propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSHTMLImageElementConstructor, JSDOMWrapper>(exec, &JSHTMLImageElementConstructorTable, jsCast<JSHTMLImageElementConstructor*>(object), propertyName, descriptor);
}

/* Hash table for prototype */

static const HashTableValue JSHTMLImageElementPrototypeTableValues[] =
{
    { 0, 0, 0, 0, NoIntrinsic }
};

static const HashTable JSHTMLImageElementPrototypeTable = { 1, 0, JSHTMLImageElementPrototypeTableValues, 0 };
const ClassInfo JSHTMLImageElementPrototype::s_info = { "HTMLImageElementPrototype", &Base::s_info, &JSHTMLImageElementPrototypeTable, 0, CREATE_METHOD_TABLE(JSHTMLImageElementPrototype) };

JSObject* JSHTMLImageElementPrototype::self(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSHTMLImageElement>(exec, globalObject);
}

const ClassInfo JSHTMLImageElement::s_info = { "HTMLImageElement", &Base::s_info, &JSHTMLImageElementTable, 0 , CREATE_METHOD_TABLE(JSHTMLImageElement) };

JSHTMLImageElement::JSHTMLImageElement(Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<HTMLImageElement> impl)
    : JSHTMLElement(structure, globalObject, impl)
{
}

void JSHTMLImageElement::finishCreation(VM& vm)
{
    Base::finishCreation(vm);
    ASSERT(inherits(&s_info));
}

JSObject* JSHTMLImageElement::createPrototype(ExecState* exec, JSGlobalObject* globalObject)
{
    return JSHTMLImageElementPrototype::create(exec->vm(), globalObject, JSHTMLImageElementPrototype::createStructure(exec->vm(), globalObject, JSHTMLElementPrototype::self(exec, globalObject)));
}

bool JSHTMLImageElement::getOwnPropertySlot(JSCell* cell, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    JSHTMLImageElement* thisObject = jsCast<JSHTMLImageElement*>(cell);
    ASSERT_GC_OBJECT_INHERITS(thisObject, &s_info);
    return getStaticValueSlot<JSHTMLImageElement, Base>(exec, &JSHTMLImageElementTable, thisObject, propertyName, slot);
}

bool JSHTMLImageElement::getOwnPropertyDescriptor(JSObject* object, ExecState* exec, PropertyName propertyName, PropertyDescriptor& descriptor)
{
    JSHTMLImageElement* thisObject = jsCast<JSHTMLImageElement*>(object);
    ASSERT_GC_OBJECT_INHERITS(thisObject, &s_info);
    return getStaticValueDescriptor<JSHTMLImageElement, Base>(exec, &JSHTMLImageElementTable, thisObject, propertyName, descriptor);
}

JSValue jsHTMLImageElementName(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSHTMLImageElement* castedThis = jsCast<JSHTMLImageElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    HTMLImageElement* impl = static_cast<HTMLImageElement*>(castedThis->impl());
    JSValue result = jsStringWithCache(exec, impl->getNameAttribute());
    return result;
}


JSValue jsHTMLImageElementAlign(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSHTMLImageElement* castedThis = jsCast<JSHTMLImageElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    HTMLImageElement* impl = static_cast<HTMLImageElement*>(castedThis->impl());
    JSValue result = jsStringWithCache(exec, impl->fastGetAttribute(WebCore::HTMLNames::alignAttr));
    return result;
}


JSValue jsHTMLImageElementAlt(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSHTMLImageElement* castedThis = jsCast<JSHTMLImageElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    HTMLImageElement* impl = static_cast<HTMLImageElement*>(castedThis->impl());
    JSValue result = jsStringWithCache(exec, impl->fastGetAttribute(WebCore::HTMLNames::altAttr));
    return result;
}


JSValue jsHTMLImageElementBorder(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSHTMLImageElement* castedThis = jsCast<JSHTMLImageElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    HTMLImageElement* impl = static_cast<HTMLImageElement*>(castedThis->impl());
    JSValue result = jsStringWithCache(exec, impl->fastGetAttribute(WebCore::HTMLNames::borderAttr));
    return result;
}


JSValue jsHTMLImageElementCrossOrigin(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSHTMLImageElement* castedThis = jsCast<JSHTMLImageElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    HTMLImageElement* impl = static_cast<HTMLImageElement*>(castedThis->impl());
    JSValue result = jsStringWithCache(exec, impl->fastGetAttribute(WebCore::HTMLNames::crossoriginAttr));
    return result;
}


JSValue jsHTMLImageElementHeight(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSHTMLImageElement* castedThis = jsCast<JSHTMLImageElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    HTMLImageElement* impl = static_cast<HTMLImageElement*>(castedThis->impl());
    JSValue result = jsNumber(impl->height());
    return result;
}


JSValue jsHTMLImageElementHspace(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSHTMLImageElement* castedThis = jsCast<JSHTMLImageElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    HTMLImageElement* impl = static_cast<HTMLImageElement*>(castedThis->impl());
    JSValue result = jsNumber(impl->getIntegralAttribute(WebCore::HTMLNames::hspaceAttr));
    return result;
}


JSValue jsHTMLImageElementIsMap(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSHTMLImageElement* castedThis = jsCast<JSHTMLImageElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    HTMLImageElement* impl = static_cast<HTMLImageElement*>(castedThis->impl());
    JSValue result = jsBoolean(impl->fastHasAttribute(WebCore::HTMLNames::ismapAttr));
    return result;
}


JSValue jsHTMLImageElementLongDesc(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSHTMLImageElement* castedThis = jsCast<JSHTMLImageElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    HTMLImageElement* impl = static_cast<HTMLImageElement*>(castedThis->impl());
    JSValue result = jsStringWithCache(exec, impl->getURLAttribute(WebCore::HTMLNames::longdescAttr));
    return result;
}


JSValue jsHTMLImageElementSrc(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSHTMLImageElement* castedThis = jsCast<JSHTMLImageElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    HTMLImageElement* impl = static_cast<HTMLImageElement*>(castedThis->impl());
    JSValue result = jsStringWithCache(exec, impl->getURLAttribute(WebCore::HTMLNames::srcAttr));
    return result;
}


JSValue jsHTMLImageElementUseMap(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSHTMLImageElement* castedThis = jsCast<JSHTMLImageElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    HTMLImageElement* impl = static_cast<HTMLImageElement*>(castedThis->impl());
    JSValue result = jsStringWithCache(exec, impl->fastGetAttribute(WebCore::HTMLNames::usemapAttr));
    return result;
}


JSValue jsHTMLImageElementVspace(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSHTMLImageElement* castedThis = jsCast<JSHTMLImageElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    HTMLImageElement* impl = static_cast<HTMLImageElement*>(castedThis->impl());
    JSValue result = jsNumber(impl->getIntegralAttribute(WebCore::HTMLNames::vspaceAttr));
    return result;
}


JSValue jsHTMLImageElementWidth(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSHTMLImageElement* castedThis = jsCast<JSHTMLImageElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    HTMLImageElement* impl = static_cast<HTMLImageElement*>(castedThis->impl());
    JSValue result = jsNumber(impl->width());
    return result;
}


JSValue jsHTMLImageElementComplete(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSHTMLImageElement* castedThis = jsCast<JSHTMLImageElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    HTMLImageElement* impl = static_cast<HTMLImageElement*>(castedThis->impl());
    JSValue result = jsBoolean(impl->complete());
    return result;
}


JSValue jsHTMLImageElementLowsrc(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSHTMLImageElement* castedThis = jsCast<JSHTMLImageElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    HTMLImageElement* impl = static_cast<HTMLImageElement*>(castedThis->impl());
    JSValue result = jsStringWithCache(exec, impl->getURLAttribute(WebCore::HTMLNames::lowsrcAttr));
    return result;
}


JSValue jsHTMLImageElementNaturalHeight(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSHTMLImageElement* castedThis = jsCast<JSHTMLImageElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    HTMLImageElement* impl = static_cast<HTMLImageElement*>(castedThis->impl());
    JSValue result = jsNumber(impl->naturalHeight());
    return result;
}


JSValue jsHTMLImageElementNaturalWidth(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSHTMLImageElement* castedThis = jsCast<JSHTMLImageElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    HTMLImageElement* impl = static_cast<HTMLImageElement*>(castedThis->impl());
    JSValue result = jsNumber(impl->naturalWidth());
    return result;
}


JSValue jsHTMLImageElementX(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSHTMLImageElement* castedThis = jsCast<JSHTMLImageElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    HTMLImageElement* impl = static_cast<HTMLImageElement*>(castedThis->impl());
    JSValue result = jsNumber(impl->x());
    return result;
}


JSValue jsHTMLImageElementY(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSHTMLImageElement* castedThis = jsCast<JSHTMLImageElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    HTMLImageElement* impl = static_cast<HTMLImageElement*>(castedThis->impl());
    JSValue result = jsNumber(impl->y());
    return result;
}


JSValue jsHTMLImageElementConstructor(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSHTMLImageElement* domObject = jsCast<JSHTMLImageElement*>(asObject(slotBase));
    return JSHTMLImageElement::getConstructor(exec, domObject->globalObject());
}

void JSHTMLImageElement::put(JSCell* cell, ExecState* exec, PropertyName propertyName, JSValue value, PutPropertySlot& slot)
{
    JSHTMLImageElement* thisObject = jsCast<JSHTMLImageElement*>(cell);
    ASSERT_GC_OBJECT_INHERITS(thisObject, &s_info);
    lookupPut<JSHTMLImageElement, Base>(exec, propertyName, value, &JSHTMLImageElementTable, thisObject, slot);
}

void setJSHTMLImageElementName(ExecState* exec, JSObject* thisObject, JSValue value)
{
    UNUSED_PARAM(exec);
    JSHTMLImageElement* castedThis = jsCast<JSHTMLImageElement*>(thisObject);
    HTMLImageElement* impl = static_cast<HTMLImageElement*>(castedThis->impl());
    const String& nativeValue(valueToStringWithNullCheck(exec, value));
    if (exec->hadException())
        return;
    impl->setAttribute(WebCore::HTMLNames::nameAttr, nativeValue);
}


void setJSHTMLImageElementAlign(ExecState* exec, JSObject* thisObject, JSValue value)
{
    UNUSED_PARAM(exec);
    JSHTMLImageElement* castedThis = jsCast<JSHTMLImageElement*>(thisObject);
    HTMLImageElement* impl = static_cast<HTMLImageElement*>(castedThis->impl());
    const String& nativeValue(valueToStringWithNullCheck(exec, value));
    if (exec->hadException())
        return;
    impl->setAttribute(WebCore::HTMLNames::alignAttr, nativeValue);
}


void setJSHTMLImageElementAlt(ExecState* exec, JSObject* thisObject, JSValue value)
{
    UNUSED_PARAM(exec);
    JSHTMLImageElement* castedThis = jsCast<JSHTMLImageElement*>(thisObject);
    HTMLImageElement* impl = static_cast<HTMLImageElement*>(castedThis->impl());
    const String& nativeValue(valueToStringWithNullCheck(exec, value));
    if (exec->hadException())
        return;
    impl->setAttribute(WebCore::HTMLNames::altAttr, nativeValue);
}


void setJSHTMLImageElementBorder(ExecState* exec, JSObject* thisObject, JSValue value)
{
    UNUSED_PARAM(exec);
    JSHTMLImageElement* castedThis = jsCast<JSHTMLImageElement*>(thisObject);
    HTMLImageElement* impl = static_cast<HTMLImageElement*>(castedThis->impl());
    const String& nativeValue(valueToStringWithNullCheck(exec, value));
    if (exec->hadException())
        return;
    impl->setAttribute(WebCore::HTMLNames::borderAttr, nativeValue);
}


void setJSHTMLImageElementCrossOrigin(ExecState* exec, JSObject* thisObject, JSValue value)
{
    UNUSED_PARAM(exec);
    JSHTMLImageElement* castedThis = jsCast<JSHTMLImageElement*>(thisObject);
    HTMLImageElement* impl = static_cast<HTMLImageElement*>(castedThis->impl());
    const String& nativeValue(valueToStringWithNullCheck(exec, value));
    if (exec->hadException())
        return;
    impl->setAttribute(WebCore::HTMLNames::crossoriginAttr, nativeValue);
}


void setJSHTMLImageElementHeight(ExecState* exec, JSObject* thisObject, JSValue value)
{
    UNUSED_PARAM(exec);
    JSHTMLImageElement* castedThis = jsCast<JSHTMLImageElement*>(thisObject);
    HTMLImageElement* impl = static_cast<HTMLImageElement*>(castedThis->impl());
    int nativeValue(toInt32(exec, value, NormalConversion));
    if (exec->hadException())
        return;
    impl->setHeight(nativeValue);
}


void setJSHTMLImageElementHspace(ExecState* exec, JSObject* thisObject, JSValue value)
{
    UNUSED_PARAM(exec);
    JSHTMLImageElement* castedThis = jsCast<JSHTMLImageElement*>(thisObject);
    HTMLImageElement* impl = static_cast<HTMLImageElement*>(castedThis->impl());
    int nativeValue(toInt32(exec, value, NormalConversion));
    if (exec->hadException())
        return;
    impl->setIntegralAttribute(WebCore::HTMLNames::hspaceAttr, nativeValue);
}


void setJSHTMLImageElementIsMap(ExecState* exec, JSObject* thisObject, JSValue value)
{
    UNUSED_PARAM(exec);
    JSHTMLImageElement* castedThis = jsCast<JSHTMLImageElement*>(thisObject);
    HTMLImageElement* impl = static_cast<HTMLImageElement*>(castedThis->impl());
    bool nativeValue(value.toBoolean(exec));
    if (exec->hadException())
        return;
    impl->setBooleanAttribute(WebCore::HTMLNames::ismapAttr, nativeValue);
}


void setJSHTMLImageElementLongDesc(ExecState* exec, JSObject* thisObject, JSValue value)
{
    UNUSED_PARAM(exec);
    JSHTMLImageElement* castedThis = jsCast<JSHTMLImageElement*>(thisObject);
    HTMLImageElement* impl = static_cast<HTMLImageElement*>(castedThis->impl());
    const String& nativeValue(valueToStringWithNullCheck(exec, value));
    if (exec->hadException())
        return;
    impl->setAttribute(WebCore::HTMLNames::longdescAttr, nativeValue);
}


void setJSHTMLImageElementSrc(ExecState* exec, JSObject* thisObject, JSValue value)
{
    UNUSED_PARAM(exec);
    JSHTMLImageElement* castedThis = jsCast<JSHTMLImageElement*>(thisObject);
    HTMLImageElement* impl = static_cast<HTMLImageElement*>(castedThis->impl());
    const String& nativeValue(valueToStringWithNullCheck(exec, value));
    if (exec->hadException())
        return;
    impl->setAttribute(WebCore::HTMLNames::srcAttr, nativeValue);
}


void setJSHTMLImageElementUseMap(ExecState* exec, JSObject* thisObject, JSValue value)
{
    UNUSED_PARAM(exec);
    JSHTMLImageElement* castedThis = jsCast<JSHTMLImageElement*>(thisObject);
    HTMLImageElement* impl = static_cast<HTMLImageElement*>(castedThis->impl());
    const String& nativeValue(valueToStringWithNullCheck(exec, value));
    if (exec->hadException())
        return;
    impl->setAttribute(WebCore::HTMLNames::usemapAttr, nativeValue);
}


void setJSHTMLImageElementVspace(ExecState* exec, JSObject* thisObject, JSValue value)
{
    UNUSED_PARAM(exec);
    JSHTMLImageElement* castedThis = jsCast<JSHTMLImageElement*>(thisObject);
    HTMLImageElement* impl = static_cast<HTMLImageElement*>(castedThis->impl());
    int nativeValue(toInt32(exec, value, NormalConversion));
    if (exec->hadException())
        return;
    impl->setIntegralAttribute(WebCore::HTMLNames::vspaceAttr, nativeValue);
}


void setJSHTMLImageElementWidth(ExecState* exec, JSObject* thisObject, JSValue value)
{
    UNUSED_PARAM(exec);
    JSHTMLImageElement* castedThis = jsCast<JSHTMLImageElement*>(thisObject);
    HTMLImageElement* impl = static_cast<HTMLImageElement*>(castedThis->impl());
    int nativeValue(toInt32(exec, value, NormalConversion));
    if (exec->hadException())
        return;
    impl->setWidth(nativeValue);
}


void setJSHTMLImageElementLowsrc(ExecState* exec, JSObject* thisObject, JSValue value)
{
    UNUSED_PARAM(exec);
    JSHTMLImageElement* castedThis = jsCast<JSHTMLImageElement*>(thisObject);
    HTMLImageElement* impl = static_cast<HTMLImageElement*>(castedThis->impl());
    const String& nativeValue(valueToStringWithNullCheck(exec, value));
    if (exec->hadException())
        return;
    impl->setAttribute(WebCore::HTMLNames::lowsrcAttr, nativeValue);
}


JSValue JSHTMLImageElement::getConstructor(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSHTMLImageElementConstructor>(exec, jsCast<JSDOMGlobalObject*>(globalObject));
}

HTMLImageElement* toHTMLImageElement(JSC::JSValue value)
{
    return value.inherits(&JSHTMLImageElement::s_info) ? jsCast<JSHTMLImageElement*>(asObject(value))->impl() : 0;
}

}

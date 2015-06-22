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
#include "JSHTMLFontElement.h"

#include "HTMLFontElement.h"
#include "HTMLNames.h"
#include "KURL.h"
#include <runtime/JSString.h>
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

/* Hash table */

static const HashTableValue JSHTMLFontElementTableValues[] =
{
    { "color", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLFontElementColor), (intptr_t)setJSHTMLFontElementColor, NoIntrinsic },
    { "face", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLFontElementFace), (intptr_t)setJSHTMLFontElementFace, NoIntrinsic },
    { "size", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLFontElementSize), (intptr_t)setJSHTMLFontElementSize, NoIntrinsic },
    { "constructor", DontEnum | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLFontElementConstructor), (intptr_t)0, NoIntrinsic },
    { 0, 0, 0, 0, NoIntrinsic }
};

static const HashTable JSHTMLFontElementTable = { 9, 7, JSHTMLFontElementTableValues, 0 };
/* Hash table for constructor */

static const HashTableValue JSHTMLFontElementConstructorTableValues[] =
{
    { 0, 0, 0, 0, NoIntrinsic }
};

static const HashTable JSHTMLFontElementConstructorTable = { 1, 0, JSHTMLFontElementConstructorTableValues, 0 };
const ClassInfo JSHTMLFontElementConstructor::s_info = { "HTMLFontElementConstructor", &Base::s_info, &JSHTMLFontElementConstructorTable, 0, CREATE_METHOD_TABLE(JSHTMLFontElementConstructor) };

JSHTMLFontElementConstructor::JSHTMLFontElementConstructor(Structure* structure, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(structure, globalObject)
{
}

void JSHTMLFontElementConstructor::finishCreation(ExecState* exec, JSDOMGlobalObject* globalObject)
{
    Base::finishCreation(exec->vm());
    ASSERT(inherits(&s_info));
    putDirect(exec->vm(), exec->propertyNames().prototype, JSHTMLFontElementPrototype::self(exec, globalObject), DontDelete | ReadOnly);
    putDirect(exec->vm(), exec->propertyNames().length, jsNumber(0), ReadOnly | DontDelete | DontEnum);
}

bool JSHTMLFontElementConstructor::getOwnPropertySlot(JSCell* cell, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSHTMLFontElementConstructor, JSDOMWrapper>(exec, &JSHTMLFontElementConstructorTable, jsCast<JSHTMLFontElementConstructor*>(cell), propertyName, slot);
}

bool JSHTMLFontElementConstructor::getOwnPropertyDescriptor(JSObject* object, ExecState* exec, PropertyName propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSHTMLFontElementConstructor, JSDOMWrapper>(exec, &JSHTMLFontElementConstructorTable, jsCast<JSHTMLFontElementConstructor*>(object), propertyName, descriptor);
}

/* Hash table for prototype */

static const HashTableValue JSHTMLFontElementPrototypeTableValues[] =
{
    { 0, 0, 0, 0, NoIntrinsic }
};

static const HashTable JSHTMLFontElementPrototypeTable = { 1, 0, JSHTMLFontElementPrototypeTableValues, 0 };
const ClassInfo JSHTMLFontElementPrototype::s_info = { "HTMLFontElementPrototype", &Base::s_info, &JSHTMLFontElementPrototypeTable, 0, CREATE_METHOD_TABLE(JSHTMLFontElementPrototype) };

JSObject* JSHTMLFontElementPrototype::self(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSHTMLFontElement>(exec, globalObject);
}

const ClassInfo JSHTMLFontElement::s_info = { "HTMLFontElement", &Base::s_info, &JSHTMLFontElementTable, 0 , CREATE_METHOD_TABLE(JSHTMLFontElement) };

JSHTMLFontElement::JSHTMLFontElement(Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<HTMLFontElement> impl)
    : JSHTMLElement(structure, globalObject, impl)
{
}

void JSHTMLFontElement::finishCreation(VM& vm)
{
    Base::finishCreation(vm);
    ASSERT(inherits(&s_info));
}

JSObject* JSHTMLFontElement::createPrototype(ExecState* exec, JSGlobalObject* globalObject)
{
    return JSHTMLFontElementPrototype::create(exec->vm(), globalObject, JSHTMLFontElementPrototype::createStructure(exec->vm(), globalObject, JSHTMLElementPrototype::self(exec, globalObject)));
}

bool JSHTMLFontElement::getOwnPropertySlot(JSCell* cell, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    JSHTMLFontElement* thisObject = jsCast<JSHTMLFontElement*>(cell);
    ASSERT_GC_OBJECT_INHERITS(thisObject, &s_info);
    return getStaticValueSlot<JSHTMLFontElement, Base>(exec, &JSHTMLFontElementTable, thisObject, propertyName, slot);
}

bool JSHTMLFontElement::getOwnPropertyDescriptor(JSObject* object, ExecState* exec, PropertyName propertyName, PropertyDescriptor& descriptor)
{
    JSHTMLFontElement* thisObject = jsCast<JSHTMLFontElement*>(object);
    ASSERT_GC_OBJECT_INHERITS(thisObject, &s_info);
    return getStaticValueDescriptor<JSHTMLFontElement, Base>(exec, &JSHTMLFontElementTable, thisObject, propertyName, descriptor);
}

JSValue jsHTMLFontElementColor(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSHTMLFontElement* castedThis = jsCast<JSHTMLFontElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    HTMLFontElement* impl = static_cast<HTMLFontElement*>(castedThis->impl());
    JSValue result = jsStringWithCache(exec, impl->fastGetAttribute(WebCore::HTMLNames::colorAttr));
    return result;
}


JSValue jsHTMLFontElementFace(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSHTMLFontElement* castedThis = jsCast<JSHTMLFontElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    HTMLFontElement* impl = static_cast<HTMLFontElement*>(castedThis->impl());
    JSValue result = jsStringWithCache(exec, impl->fastGetAttribute(WebCore::HTMLNames::faceAttr));
    return result;
}


JSValue jsHTMLFontElementSize(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSHTMLFontElement* castedThis = jsCast<JSHTMLFontElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    HTMLFontElement* impl = static_cast<HTMLFontElement*>(castedThis->impl());
    JSValue result = jsStringWithCache(exec, impl->fastGetAttribute(WebCore::HTMLNames::sizeAttr));
    return result;
}


JSValue jsHTMLFontElementConstructor(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSHTMLFontElement* domObject = jsCast<JSHTMLFontElement*>(asObject(slotBase));
    return JSHTMLFontElement::getConstructor(exec, domObject->globalObject());
}

void JSHTMLFontElement::put(JSCell* cell, ExecState* exec, PropertyName propertyName, JSValue value, PutPropertySlot& slot)
{
    JSHTMLFontElement* thisObject = jsCast<JSHTMLFontElement*>(cell);
    ASSERT_GC_OBJECT_INHERITS(thisObject, &s_info);
    lookupPut<JSHTMLFontElement, Base>(exec, propertyName, value, &JSHTMLFontElementTable, thisObject, slot);
}

void setJSHTMLFontElementColor(ExecState* exec, JSObject* thisObject, JSValue value)
{
    UNUSED_PARAM(exec);
    JSHTMLFontElement* castedThis = jsCast<JSHTMLFontElement*>(thisObject);
    HTMLFontElement* impl = static_cast<HTMLFontElement*>(castedThis->impl());
    const String& nativeValue(valueToStringWithNullCheck(exec, value));
    if (exec->hadException())
        return;
    impl->setAttribute(WebCore::HTMLNames::colorAttr, nativeValue);
}


void setJSHTMLFontElementFace(ExecState* exec, JSObject* thisObject, JSValue value)
{
    UNUSED_PARAM(exec);
    JSHTMLFontElement* castedThis = jsCast<JSHTMLFontElement*>(thisObject);
    HTMLFontElement* impl = static_cast<HTMLFontElement*>(castedThis->impl());
    const String& nativeValue(valueToStringWithNullCheck(exec, value));
    if (exec->hadException())
        return;
    impl->setAttribute(WebCore::HTMLNames::faceAttr, nativeValue);
}


void setJSHTMLFontElementSize(ExecState* exec, JSObject* thisObject, JSValue value)
{
    UNUSED_PARAM(exec);
    JSHTMLFontElement* castedThis = jsCast<JSHTMLFontElement*>(thisObject);
    HTMLFontElement* impl = static_cast<HTMLFontElement*>(castedThis->impl());
    const String& nativeValue(valueToStringWithNullCheck(exec, value));
    if (exec->hadException())
        return;
    impl->setAttribute(WebCore::HTMLNames::sizeAttr, nativeValue);
}


JSValue JSHTMLFontElement::getConstructor(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSHTMLFontElementConstructor>(exec, jsCast<JSDOMGlobalObject*>(globalObject));
}


}
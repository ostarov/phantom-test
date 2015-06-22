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
#include "JSHTMLHeadingElement.h"

#include "HTMLHeadingElement.h"
#include "HTMLNames.h"
#include "KURL.h"
#include <runtime/JSString.h>
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

/* Hash table */

static const HashTableValue JSHTMLHeadingElementTableValues[] =
{
    { "align", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLHeadingElementAlign), (intptr_t)setJSHTMLHeadingElementAlign, NoIntrinsic },
    { "constructor", DontEnum | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLHeadingElementConstructor), (intptr_t)0, NoIntrinsic },
    { 0, 0, 0, 0, NoIntrinsic }
};

static const HashTable JSHTMLHeadingElementTable = { 5, 3, JSHTMLHeadingElementTableValues, 0 };
/* Hash table for constructor */

static const HashTableValue JSHTMLHeadingElementConstructorTableValues[] =
{
    { 0, 0, 0, 0, NoIntrinsic }
};

static const HashTable JSHTMLHeadingElementConstructorTable = { 1, 0, JSHTMLHeadingElementConstructorTableValues, 0 };
const ClassInfo JSHTMLHeadingElementConstructor::s_info = { "HTMLHeadingElementConstructor", &Base::s_info, &JSHTMLHeadingElementConstructorTable, 0, CREATE_METHOD_TABLE(JSHTMLHeadingElementConstructor) };

JSHTMLHeadingElementConstructor::JSHTMLHeadingElementConstructor(Structure* structure, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(structure, globalObject)
{
}

void JSHTMLHeadingElementConstructor::finishCreation(ExecState* exec, JSDOMGlobalObject* globalObject)
{
    Base::finishCreation(exec->vm());
    ASSERT(inherits(&s_info));
    putDirect(exec->vm(), exec->propertyNames().prototype, JSHTMLHeadingElementPrototype::self(exec, globalObject), DontDelete | ReadOnly);
    putDirect(exec->vm(), exec->propertyNames().length, jsNumber(0), ReadOnly | DontDelete | DontEnum);
}

bool JSHTMLHeadingElementConstructor::getOwnPropertySlot(JSCell* cell, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSHTMLHeadingElementConstructor, JSDOMWrapper>(exec, &JSHTMLHeadingElementConstructorTable, jsCast<JSHTMLHeadingElementConstructor*>(cell), propertyName, slot);
}

bool JSHTMLHeadingElementConstructor::getOwnPropertyDescriptor(JSObject* object, ExecState* exec, PropertyName propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSHTMLHeadingElementConstructor, JSDOMWrapper>(exec, &JSHTMLHeadingElementConstructorTable, jsCast<JSHTMLHeadingElementConstructor*>(object), propertyName, descriptor);
}

/* Hash table for prototype */

static const HashTableValue JSHTMLHeadingElementPrototypeTableValues[] =
{
    { 0, 0, 0, 0, NoIntrinsic }
};

static const HashTable JSHTMLHeadingElementPrototypeTable = { 1, 0, JSHTMLHeadingElementPrototypeTableValues, 0 };
const ClassInfo JSHTMLHeadingElementPrototype::s_info = { "HTMLHeadingElementPrototype", &Base::s_info, &JSHTMLHeadingElementPrototypeTable, 0, CREATE_METHOD_TABLE(JSHTMLHeadingElementPrototype) };

JSObject* JSHTMLHeadingElementPrototype::self(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSHTMLHeadingElement>(exec, globalObject);
}

const ClassInfo JSHTMLHeadingElement::s_info = { "HTMLHeadingElement", &Base::s_info, &JSHTMLHeadingElementTable, 0 , CREATE_METHOD_TABLE(JSHTMLHeadingElement) };

JSHTMLHeadingElement::JSHTMLHeadingElement(Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<HTMLHeadingElement> impl)
    : JSHTMLElement(structure, globalObject, impl)
{
}

void JSHTMLHeadingElement::finishCreation(VM& vm)
{
    Base::finishCreation(vm);
    ASSERT(inherits(&s_info));
}

JSObject* JSHTMLHeadingElement::createPrototype(ExecState* exec, JSGlobalObject* globalObject)
{
    return JSHTMLHeadingElementPrototype::create(exec->vm(), globalObject, JSHTMLHeadingElementPrototype::createStructure(exec->vm(), globalObject, JSHTMLElementPrototype::self(exec, globalObject)));
}

bool JSHTMLHeadingElement::getOwnPropertySlot(JSCell* cell, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    JSHTMLHeadingElement* thisObject = jsCast<JSHTMLHeadingElement*>(cell);
    ASSERT_GC_OBJECT_INHERITS(thisObject, &s_info);
    return getStaticValueSlot<JSHTMLHeadingElement, Base>(exec, &JSHTMLHeadingElementTable, thisObject, propertyName, slot);
}

bool JSHTMLHeadingElement::getOwnPropertyDescriptor(JSObject* object, ExecState* exec, PropertyName propertyName, PropertyDescriptor& descriptor)
{
    JSHTMLHeadingElement* thisObject = jsCast<JSHTMLHeadingElement*>(object);
    ASSERT_GC_OBJECT_INHERITS(thisObject, &s_info);
    return getStaticValueDescriptor<JSHTMLHeadingElement, Base>(exec, &JSHTMLHeadingElementTable, thisObject, propertyName, descriptor);
}

JSValue jsHTMLHeadingElementAlign(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSHTMLHeadingElement* castedThis = jsCast<JSHTMLHeadingElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    HTMLHeadingElement* impl = static_cast<HTMLHeadingElement*>(castedThis->impl());
    JSValue result = jsStringWithCache(exec, impl->fastGetAttribute(WebCore::HTMLNames::alignAttr));
    return result;
}


JSValue jsHTMLHeadingElementConstructor(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSHTMLHeadingElement* domObject = jsCast<JSHTMLHeadingElement*>(asObject(slotBase));
    return JSHTMLHeadingElement::getConstructor(exec, domObject->globalObject());
}

void JSHTMLHeadingElement::put(JSCell* cell, ExecState* exec, PropertyName propertyName, JSValue value, PutPropertySlot& slot)
{
    JSHTMLHeadingElement* thisObject = jsCast<JSHTMLHeadingElement*>(cell);
    ASSERT_GC_OBJECT_INHERITS(thisObject, &s_info);
    lookupPut<JSHTMLHeadingElement, Base>(exec, propertyName, value, &JSHTMLHeadingElementTable, thisObject, slot);
}

void setJSHTMLHeadingElementAlign(ExecState* exec, JSObject* thisObject, JSValue value)
{
    UNUSED_PARAM(exec);
    JSHTMLHeadingElement* castedThis = jsCast<JSHTMLHeadingElement*>(thisObject);
    HTMLHeadingElement* impl = static_cast<HTMLHeadingElement*>(castedThis->impl());
    const String& nativeValue(valueToStringWithNullCheck(exec, value));
    if (exec->hadException())
        return;
    impl->setAttribute(WebCore::HTMLNames::alignAttr, nativeValue);
}


JSValue JSHTMLHeadingElement::getConstructor(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSHTMLHeadingElementConstructor>(exec, jsCast<JSDOMGlobalObject*>(globalObject));
}


}

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
#include "JSHTMLBRElement.h"

#include "HTMLBRElement.h"
#include "HTMLNames.h"
#include "KURL.h"
#include <runtime/JSString.h>
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

/* Hash table */

static const HashTableValue JSHTMLBRElementTableValues[] =
{
    { "clear", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLBRElementClear), (intptr_t)setJSHTMLBRElementClear, NoIntrinsic },
    { "constructor", DontEnum | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLBRElementConstructor), (intptr_t)0, NoIntrinsic },
    { 0, 0, 0, 0, NoIntrinsic }
};

static const HashTable JSHTMLBRElementTable = { 4, 3, JSHTMLBRElementTableValues, 0 };
/* Hash table for constructor */

static const HashTableValue JSHTMLBRElementConstructorTableValues[] =
{
    { 0, 0, 0, 0, NoIntrinsic }
};

static const HashTable JSHTMLBRElementConstructorTable = { 1, 0, JSHTMLBRElementConstructorTableValues, 0 };
const ClassInfo JSHTMLBRElementConstructor::s_info = { "HTMLBRElementConstructor", &Base::s_info, &JSHTMLBRElementConstructorTable, 0, CREATE_METHOD_TABLE(JSHTMLBRElementConstructor) };

JSHTMLBRElementConstructor::JSHTMLBRElementConstructor(Structure* structure, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(structure, globalObject)
{
}

void JSHTMLBRElementConstructor::finishCreation(ExecState* exec, JSDOMGlobalObject* globalObject)
{
    Base::finishCreation(exec->vm());
    ASSERT(inherits(&s_info));
    putDirect(exec->vm(), exec->propertyNames().prototype, JSHTMLBRElementPrototype::self(exec, globalObject), DontDelete | ReadOnly);
    putDirect(exec->vm(), exec->propertyNames().length, jsNumber(0), ReadOnly | DontDelete | DontEnum);
}

bool JSHTMLBRElementConstructor::getOwnPropertySlot(JSCell* cell, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSHTMLBRElementConstructor, JSDOMWrapper>(exec, &JSHTMLBRElementConstructorTable, jsCast<JSHTMLBRElementConstructor*>(cell), propertyName, slot);
}

bool JSHTMLBRElementConstructor::getOwnPropertyDescriptor(JSObject* object, ExecState* exec, PropertyName propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSHTMLBRElementConstructor, JSDOMWrapper>(exec, &JSHTMLBRElementConstructorTable, jsCast<JSHTMLBRElementConstructor*>(object), propertyName, descriptor);
}

/* Hash table for prototype */

static const HashTableValue JSHTMLBRElementPrototypeTableValues[] =
{
    { 0, 0, 0, 0, NoIntrinsic }
};

static const HashTable JSHTMLBRElementPrototypeTable = { 1, 0, JSHTMLBRElementPrototypeTableValues, 0 };
const ClassInfo JSHTMLBRElementPrototype::s_info = { "HTMLBRElementPrototype", &Base::s_info, &JSHTMLBRElementPrototypeTable, 0, CREATE_METHOD_TABLE(JSHTMLBRElementPrototype) };

JSObject* JSHTMLBRElementPrototype::self(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSHTMLBRElement>(exec, globalObject);
}

const ClassInfo JSHTMLBRElement::s_info = { "HTMLBRElement", &Base::s_info, &JSHTMLBRElementTable, 0 , CREATE_METHOD_TABLE(JSHTMLBRElement) };

JSHTMLBRElement::JSHTMLBRElement(Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<HTMLBRElement> impl)
    : JSHTMLElement(structure, globalObject, impl)
{
}

void JSHTMLBRElement::finishCreation(VM& vm)
{
    Base::finishCreation(vm);
    ASSERT(inherits(&s_info));
}

JSObject* JSHTMLBRElement::createPrototype(ExecState* exec, JSGlobalObject* globalObject)
{
    return JSHTMLBRElementPrototype::create(exec->vm(), globalObject, JSHTMLBRElementPrototype::createStructure(exec->vm(), globalObject, JSHTMLElementPrototype::self(exec, globalObject)));
}

bool JSHTMLBRElement::getOwnPropertySlot(JSCell* cell, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    JSHTMLBRElement* thisObject = jsCast<JSHTMLBRElement*>(cell);
    ASSERT_GC_OBJECT_INHERITS(thisObject, &s_info);
    return getStaticValueSlot<JSHTMLBRElement, Base>(exec, &JSHTMLBRElementTable, thisObject, propertyName, slot);
}

bool JSHTMLBRElement::getOwnPropertyDescriptor(JSObject* object, ExecState* exec, PropertyName propertyName, PropertyDescriptor& descriptor)
{
    JSHTMLBRElement* thisObject = jsCast<JSHTMLBRElement*>(object);
    ASSERT_GC_OBJECT_INHERITS(thisObject, &s_info);
    return getStaticValueDescriptor<JSHTMLBRElement, Base>(exec, &JSHTMLBRElementTable, thisObject, propertyName, descriptor);
}

JSValue jsHTMLBRElementClear(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSHTMLBRElement* castedThis = jsCast<JSHTMLBRElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    HTMLBRElement* impl = static_cast<HTMLBRElement*>(castedThis->impl());
    JSValue result = jsStringWithCache(exec, impl->fastGetAttribute(WebCore::HTMLNames::clearAttr));
    return result;
}


JSValue jsHTMLBRElementConstructor(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSHTMLBRElement* domObject = jsCast<JSHTMLBRElement*>(asObject(slotBase));
    return JSHTMLBRElement::getConstructor(exec, domObject->globalObject());
}

void JSHTMLBRElement::put(JSCell* cell, ExecState* exec, PropertyName propertyName, JSValue value, PutPropertySlot& slot)
{
    JSHTMLBRElement* thisObject = jsCast<JSHTMLBRElement*>(cell);
    ASSERT_GC_OBJECT_INHERITS(thisObject, &s_info);
    lookupPut<JSHTMLBRElement, Base>(exec, propertyName, value, &JSHTMLBRElementTable, thisObject, slot);
}

void setJSHTMLBRElementClear(ExecState* exec, JSObject* thisObject, JSValue value)
{
    UNUSED_PARAM(exec);
    JSHTMLBRElement* castedThis = jsCast<JSHTMLBRElement*>(thisObject);
    HTMLBRElement* impl = static_cast<HTMLBRElement*>(castedThis->impl());
    const String& nativeValue(valueToStringWithNullCheck(exec, value));
    if (exec->hadException())
        return;
    impl->setAttribute(WebCore::HTMLNames::clearAttr, nativeValue);
}


JSValue JSHTMLBRElement::getConstructor(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSHTMLBRElementConstructor>(exec, jsCast<JSDOMGlobalObject*>(globalObject));
}


}

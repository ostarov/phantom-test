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
#include "JSHTMLTitleElement.h"

#include "HTMLTitleElement.h"
#include "KURL.h"
#include <runtime/JSString.h>
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

/* Hash table */

static const HashTableValue JSHTMLTitleElementTableValues[] =
{
    { "text", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLTitleElementText), (intptr_t)setJSHTMLTitleElementText, NoIntrinsic },
    { "constructor", DontEnum | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLTitleElementConstructor), (intptr_t)0, NoIntrinsic },
    { 0, 0, 0, 0, NoIntrinsic }
};

static const HashTable JSHTMLTitleElementTable = { 4, 3, JSHTMLTitleElementTableValues, 0 };
/* Hash table for constructor */

static const HashTableValue JSHTMLTitleElementConstructorTableValues[] =
{
    { 0, 0, 0, 0, NoIntrinsic }
};

static const HashTable JSHTMLTitleElementConstructorTable = { 1, 0, JSHTMLTitleElementConstructorTableValues, 0 };
const ClassInfo JSHTMLTitleElementConstructor::s_info = { "HTMLTitleElementConstructor", &Base::s_info, &JSHTMLTitleElementConstructorTable, 0, CREATE_METHOD_TABLE(JSHTMLTitleElementConstructor) };

JSHTMLTitleElementConstructor::JSHTMLTitleElementConstructor(Structure* structure, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(structure, globalObject)
{
}

void JSHTMLTitleElementConstructor::finishCreation(ExecState* exec, JSDOMGlobalObject* globalObject)
{
    Base::finishCreation(exec->vm());
    ASSERT(inherits(&s_info));
    putDirect(exec->vm(), exec->propertyNames().prototype, JSHTMLTitleElementPrototype::self(exec, globalObject), DontDelete | ReadOnly);
    putDirect(exec->vm(), exec->propertyNames().length, jsNumber(0), ReadOnly | DontDelete | DontEnum);
}

bool JSHTMLTitleElementConstructor::getOwnPropertySlot(JSCell* cell, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSHTMLTitleElementConstructor, JSDOMWrapper>(exec, &JSHTMLTitleElementConstructorTable, jsCast<JSHTMLTitleElementConstructor*>(cell), propertyName, slot);
}

bool JSHTMLTitleElementConstructor::getOwnPropertyDescriptor(JSObject* object, ExecState* exec, PropertyName propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSHTMLTitleElementConstructor, JSDOMWrapper>(exec, &JSHTMLTitleElementConstructorTable, jsCast<JSHTMLTitleElementConstructor*>(object), propertyName, descriptor);
}

/* Hash table for prototype */

static const HashTableValue JSHTMLTitleElementPrototypeTableValues[] =
{
    { 0, 0, 0, 0, NoIntrinsic }
};

static const HashTable JSHTMLTitleElementPrototypeTable = { 1, 0, JSHTMLTitleElementPrototypeTableValues, 0 };
const ClassInfo JSHTMLTitleElementPrototype::s_info = { "HTMLTitleElementPrototype", &Base::s_info, &JSHTMLTitleElementPrototypeTable, 0, CREATE_METHOD_TABLE(JSHTMLTitleElementPrototype) };

JSObject* JSHTMLTitleElementPrototype::self(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSHTMLTitleElement>(exec, globalObject);
}

const ClassInfo JSHTMLTitleElement::s_info = { "HTMLTitleElement", &Base::s_info, &JSHTMLTitleElementTable, 0 , CREATE_METHOD_TABLE(JSHTMLTitleElement) };

JSHTMLTitleElement::JSHTMLTitleElement(Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<HTMLTitleElement> impl)
    : JSHTMLElement(structure, globalObject, impl)
{
}

void JSHTMLTitleElement::finishCreation(VM& vm)
{
    Base::finishCreation(vm);
    ASSERT(inherits(&s_info));
}

JSObject* JSHTMLTitleElement::createPrototype(ExecState* exec, JSGlobalObject* globalObject)
{
    return JSHTMLTitleElementPrototype::create(exec->vm(), globalObject, JSHTMLTitleElementPrototype::createStructure(exec->vm(), globalObject, JSHTMLElementPrototype::self(exec, globalObject)));
}

bool JSHTMLTitleElement::getOwnPropertySlot(JSCell* cell, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    JSHTMLTitleElement* thisObject = jsCast<JSHTMLTitleElement*>(cell);
    ASSERT_GC_OBJECT_INHERITS(thisObject, &s_info);
    return getStaticValueSlot<JSHTMLTitleElement, Base>(exec, &JSHTMLTitleElementTable, thisObject, propertyName, slot);
}

bool JSHTMLTitleElement::getOwnPropertyDescriptor(JSObject* object, ExecState* exec, PropertyName propertyName, PropertyDescriptor& descriptor)
{
    JSHTMLTitleElement* thisObject = jsCast<JSHTMLTitleElement*>(object);
    ASSERT_GC_OBJECT_INHERITS(thisObject, &s_info);
    return getStaticValueDescriptor<JSHTMLTitleElement, Base>(exec, &JSHTMLTitleElementTable, thisObject, propertyName, descriptor);
}

JSValue jsHTMLTitleElementText(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSHTMLTitleElement* castedThis = jsCast<JSHTMLTitleElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    HTMLTitleElement* impl = static_cast<HTMLTitleElement*>(castedThis->impl());
    JSValue result = jsStringWithCache(exec, impl->text());
    return result;
}


JSValue jsHTMLTitleElementConstructor(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSHTMLTitleElement* domObject = jsCast<JSHTMLTitleElement*>(asObject(slotBase));
    return JSHTMLTitleElement::getConstructor(exec, domObject->globalObject());
}

void JSHTMLTitleElement::put(JSCell* cell, ExecState* exec, PropertyName propertyName, JSValue value, PutPropertySlot& slot)
{
    JSHTMLTitleElement* thisObject = jsCast<JSHTMLTitleElement*>(cell);
    ASSERT_GC_OBJECT_INHERITS(thisObject, &s_info);
    lookupPut<JSHTMLTitleElement, Base>(exec, propertyName, value, &JSHTMLTitleElementTable, thisObject, slot);
}

void setJSHTMLTitleElementText(ExecState* exec, JSObject* thisObject, JSValue value)
{
    UNUSED_PARAM(exec);
    JSHTMLTitleElement* castedThis = jsCast<JSHTMLTitleElement*>(thisObject);
    HTMLTitleElement* impl = static_cast<HTMLTitleElement*>(castedThis->impl());
    const String& nativeValue(valueToStringWithNullCheck(exec, value));
    if (exec->hadException())
        return;
    impl->setText(nativeValue);
}


JSValue JSHTMLTitleElement::getConstructor(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSHTMLTitleElementConstructor>(exec, jsCast<JSDOMGlobalObject*>(globalObject));
}


}

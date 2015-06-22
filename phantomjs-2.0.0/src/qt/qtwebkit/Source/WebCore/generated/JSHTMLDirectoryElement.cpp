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
#include "JSHTMLDirectoryElement.h"

#include "HTMLDirectoryElement.h"
#include "HTMLNames.h"
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

/* Hash table */

static const HashTableValue JSHTMLDirectoryElementTableValues[] =
{
    { "compact", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLDirectoryElementCompact), (intptr_t)setJSHTMLDirectoryElementCompact, NoIntrinsic },
    { "constructor", DontEnum | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLDirectoryElementConstructor), (intptr_t)0, NoIntrinsic },
    { 0, 0, 0, 0, NoIntrinsic }
};

static const HashTable JSHTMLDirectoryElementTable = { 4, 3, JSHTMLDirectoryElementTableValues, 0 };
/* Hash table for constructor */

static const HashTableValue JSHTMLDirectoryElementConstructorTableValues[] =
{
    { 0, 0, 0, 0, NoIntrinsic }
};

static const HashTable JSHTMLDirectoryElementConstructorTable = { 1, 0, JSHTMLDirectoryElementConstructorTableValues, 0 };
const ClassInfo JSHTMLDirectoryElementConstructor::s_info = { "HTMLDirectoryElementConstructor", &Base::s_info, &JSHTMLDirectoryElementConstructorTable, 0, CREATE_METHOD_TABLE(JSHTMLDirectoryElementConstructor) };

JSHTMLDirectoryElementConstructor::JSHTMLDirectoryElementConstructor(Structure* structure, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(structure, globalObject)
{
}

void JSHTMLDirectoryElementConstructor::finishCreation(ExecState* exec, JSDOMGlobalObject* globalObject)
{
    Base::finishCreation(exec->vm());
    ASSERT(inherits(&s_info));
    putDirect(exec->vm(), exec->propertyNames().prototype, JSHTMLDirectoryElementPrototype::self(exec, globalObject), DontDelete | ReadOnly);
    putDirect(exec->vm(), exec->propertyNames().length, jsNumber(0), ReadOnly | DontDelete | DontEnum);
}

bool JSHTMLDirectoryElementConstructor::getOwnPropertySlot(JSCell* cell, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSHTMLDirectoryElementConstructor, JSDOMWrapper>(exec, &JSHTMLDirectoryElementConstructorTable, jsCast<JSHTMLDirectoryElementConstructor*>(cell), propertyName, slot);
}

bool JSHTMLDirectoryElementConstructor::getOwnPropertyDescriptor(JSObject* object, ExecState* exec, PropertyName propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSHTMLDirectoryElementConstructor, JSDOMWrapper>(exec, &JSHTMLDirectoryElementConstructorTable, jsCast<JSHTMLDirectoryElementConstructor*>(object), propertyName, descriptor);
}

/* Hash table for prototype */

static const HashTableValue JSHTMLDirectoryElementPrototypeTableValues[] =
{
    { 0, 0, 0, 0, NoIntrinsic }
};

static const HashTable JSHTMLDirectoryElementPrototypeTable = { 1, 0, JSHTMLDirectoryElementPrototypeTableValues, 0 };
const ClassInfo JSHTMLDirectoryElementPrototype::s_info = { "HTMLDirectoryElementPrototype", &Base::s_info, &JSHTMLDirectoryElementPrototypeTable, 0, CREATE_METHOD_TABLE(JSHTMLDirectoryElementPrototype) };

JSObject* JSHTMLDirectoryElementPrototype::self(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSHTMLDirectoryElement>(exec, globalObject);
}

const ClassInfo JSHTMLDirectoryElement::s_info = { "HTMLDirectoryElement", &Base::s_info, &JSHTMLDirectoryElementTable, 0 , CREATE_METHOD_TABLE(JSHTMLDirectoryElement) };

JSHTMLDirectoryElement::JSHTMLDirectoryElement(Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<HTMLDirectoryElement> impl)
    : JSHTMLElement(structure, globalObject, impl)
{
}

void JSHTMLDirectoryElement::finishCreation(VM& vm)
{
    Base::finishCreation(vm);
    ASSERT(inherits(&s_info));
}

JSObject* JSHTMLDirectoryElement::createPrototype(ExecState* exec, JSGlobalObject* globalObject)
{
    return JSHTMLDirectoryElementPrototype::create(exec->vm(), globalObject, JSHTMLDirectoryElementPrototype::createStructure(exec->vm(), globalObject, JSHTMLElementPrototype::self(exec, globalObject)));
}

bool JSHTMLDirectoryElement::getOwnPropertySlot(JSCell* cell, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    JSHTMLDirectoryElement* thisObject = jsCast<JSHTMLDirectoryElement*>(cell);
    ASSERT_GC_OBJECT_INHERITS(thisObject, &s_info);
    return getStaticValueSlot<JSHTMLDirectoryElement, Base>(exec, &JSHTMLDirectoryElementTable, thisObject, propertyName, slot);
}

bool JSHTMLDirectoryElement::getOwnPropertyDescriptor(JSObject* object, ExecState* exec, PropertyName propertyName, PropertyDescriptor& descriptor)
{
    JSHTMLDirectoryElement* thisObject = jsCast<JSHTMLDirectoryElement*>(object);
    ASSERT_GC_OBJECT_INHERITS(thisObject, &s_info);
    return getStaticValueDescriptor<JSHTMLDirectoryElement, Base>(exec, &JSHTMLDirectoryElementTable, thisObject, propertyName, descriptor);
}

JSValue jsHTMLDirectoryElementCompact(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSHTMLDirectoryElement* castedThis = jsCast<JSHTMLDirectoryElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    HTMLDirectoryElement* impl = static_cast<HTMLDirectoryElement*>(castedThis->impl());
    JSValue result = jsBoolean(impl->fastHasAttribute(WebCore::HTMLNames::compactAttr));
    return result;
}


JSValue jsHTMLDirectoryElementConstructor(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSHTMLDirectoryElement* domObject = jsCast<JSHTMLDirectoryElement*>(asObject(slotBase));
    return JSHTMLDirectoryElement::getConstructor(exec, domObject->globalObject());
}

void JSHTMLDirectoryElement::put(JSCell* cell, ExecState* exec, PropertyName propertyName, JSValue value, PutPropertySlot& slot)
{
    JSHTMLDirectoryElement* thisObject = jsCast<JSHTMLDirectoryElement*>(cell);
    ASSERT_GC_OBJECT_INHERITS(thisObject, &s_info);
    lookupPut<JSHTMLDirectoryElement, Base>(exec, propertyName, value, &JSHTMLDirectoryElementTable, thisObject, slot);
}

void setJSHTMLDirectoryElementCompact(ExecState* exec, JSObject* thisObject, JSValue value)
{
    UNUSED_PARAM(exec);
    JSHTMLDirectoryElement* castedThis = jsCast<JSHTMLDirectoryElement*>(thisObject);
    HTMLDirectoryElement* impl = static_cast<HTMLDirectoryElement*>(castedThis->impl());
    bool nativeValue(value.toBoolean(exec));
    if (exec->hadException())
        return;
    impl->setBooleanAttribute(WebCore::HTMLNames::compactAttr, nativeValue);
}


JSValue JSHTMLDirectoryElement::getConstructor(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSHTMLDirectoryElementConstructor>(exec, jsCast<JSDOMGlobalObject*>(globalObject));
}


}

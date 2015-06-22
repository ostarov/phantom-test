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

#if ENABLE(SHADOW_DOM)

#include "JSHTMLContentElement.h"

#include "HTMLContentElement.h"
#include "HTMLNames.h"
#include "KURL.h"
#include <runtime/JSString.h>
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

/* Hash table */

static const HashTableValue JSHTMLContentElementTableValues[] =
{
    { "select", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLContentElementSelect), (intptr_t)setJSHTMLContentElementSelect, NoIntrinsic },
    { "resetStyleInheritance", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLContentElementResetStyleInheritance), (intptr_t)setJSHTMLContentElementResetStyleInheritance, NoIntrinsic },
    { "constructor", DontEnum | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLContentElementConstructor), (intptr_t)0, NoIntrinsic },
    { 0, 0, 0, 0, NoIntrinsic }
};

static const HashTable JSHTMLContentElementTable = { 8, 7, JSHTMLContentElementTableValues, 0 };
/* Hash table for constructor */

static const HashTableValue JSHTMLContentElementConstructorTableValues[] =
{
    { 0, 0, 0, 0, NoIntrinsic }
};

static const HashTable JSHTMLContentElementConstructorTable = { 1, 0, JSHTMLContentElementConstructorTableValues, 0 };
const ClassInfo JSHTMLContentElementConstructor::s_info = { "HTMLContentElementConstructor", &Base::s_info, &JSHTMLContentElementConstructorTable, 0, CREATE_METHOD_TABLE(JSHTMLContentElementConstructor) };

JSHTMLContentElementConstructor::JSHTMLContentElementConstructor(Structure* structure, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(structure, globalObject)
{
}

void JSHTMLContentElementConstructor::finishCreation(ExecState* exec, JSDOMGlobalObject* globalObject)
{
    Base::finishCreation(exec->vm());
    ASSERT(inherits(&s_info));
    putDirect(exec->vm(), exec->propertyNames().prototype, JSHTMLContentElementPrototype::self(exec, globalObject), DontDelete | ReadOnly);
    putDirect(exec->vm(), exec->propertyNames().length, jsNumber(0), ReadOnly | DontDelete | DontEnum);
}

bool JSHTMLContentElementConstructor::getOwnPropertySlot(JSCell* cell, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSHTMLContentElementConstructor, JSDOMWrapper>(exec, &JSHTMLContentElementConstructorTable, jsCast<JSHTMLContentElementConstructor*>(cell), propertyName, slot);
}

bool JSHTMLContentElementConstructor::getOwnPropertyDescriptor(JSObject* object, ExecState* exec, PropertyName propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSHTMLContentElementConstructor, JSDOMWrapper>(exec, &JSHTMLContentElementConstructorTable, jsCast<JSHTMLContentElementConstructor*>(object), propertyName, descriptor);
}

/* Hash table for prototype */

static const HashTableValue JSHTMLContentElementPrototypeTableValues[] =
{
    { 0, 0, 0, 0, NoIntrinsic }
};

static const HashTable JSHTMLContentElementPrototypeTable = { 1, 0, JSHTMLContentElementPrototypeTableValues, 0 };
const ClassInfo JSHTMLContentElementPrototype::s_info = { "HTMLContentElementPrototype", &Base::s_info, &JSHTMLContentElementPrototypeTable, 0, CREATE_METHOD_TABLE(JSHTMLContentElementPrototype) };

JSObject* JSHTMLContentElementPrototype::self(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSHTMLContentElement>(exec, globalObject);
}

const ClassInfo JSHTMLContentElement::s_info = { "HTMLContentElement", &Base::s_info, &JSHTMLContentElementTable, 0 , CREATE_METHOD_TABLE(JSHTMLContentElement) };

JSHTMLContentElement::JSHTMLContentElement(Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<HTMLContentElement> impl)
    : JSHTMLElement(structure, globalObject, impl)
{
}

void JSHTMLContentElement::finishCreation(VM& vm)
{
    Base::finishCreation(vm);
    ASSERT(inherits(&s_info));
}

JSObject* JSHTMLContentElement::createPrototype(ExecState* exec, JSGlobalObject* globalObject)
{
    return JSHTMLContentElementPrototype::create(exec->vm(), globalObject, JSHTMLContentElementPrototype::createStructure(exec->vm(), globalObject, JSHTMLElementPrototype::self(exec, globalObject)));
}

bool JSHTMLContentElement::getOwnPropertySlot(JSCell* cell, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    JSHTMLContentElement* thisObject = jsCast<JSHTMLContentElement*>(cell);
    ASSERT_GC_OBJECT_INHERITS(thisObject, &s_info);
    return getStaticValueSlot<JSHTMLContentElement, Base>(exec, &JSHTMLContentElementTable, thisObject, propertyName, slot);
}

bool JSHTMLContentElement::getOwnPropertyDescriptor(JSObject* object, ExecState* exec, PropertyName propertyName, PropertyDescriptor& descriptor)
{
    JSHTMLContentElement* thisObject = jsCast<JSHTMLContentElement*>(object);
    ASSERT_GC_OBJECT_INHERITS(thisObject, &s_info);
    return getStaticValueDescriptor<JSHTMLContentElement, Base>(exec, &JSHTMLContentElementTable, thisObject, propertyName, descriptor);
}

JSValue jsHTMLContentElementSelect(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSHTMLContentElement* castedThis = jsCast<JSHTMLContentElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    HTMLContentElement* impl = static_cast<HTMLContentElement*>(castedThis->impl());
    JSValue result = jsStringWithCache(exec, impl->fastGetAttribute(WebCore::HTMLNames::selectAttr));
    return result;
}


JSValue jsHTMLContentElementResetStyleInheritance(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSHTMLContentElement* castedThis = jsCast<JSHTMLContentElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    HTMLContentElement* impl = static_cast<HTMLContentElement*>(castedThis->impl());
    JSValue result = jsBoolean(impl->resetStyleInheritance());
    return result;
}


JSValue jsHTMLContentElementConstructor(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSHTMLContentElement* domObject = jsCast<JSHTMLContentElement*>(asObject(slotBase));
    return JSHTMLContentElement::getConstructor(exec, domObject->globalObject());
}

void JSHTMLContentElement::put(JSCell* cell, ExecState* exec, PropertyName propertyName, JSValue value, PutPropertySlot& slot)
{
    JSHTMLContentElement* thisObject = jsCast<JSHTMLContentElement*>(cell);
    ASSERT_GC_OBJECT_INHERITS(thisObject, &s_info);
    lookupPut<JSHTMLContentElement, Base>(exec, propertyName, value, &JSHTMLContentElementTable, thisObject, slot);
}

void setJSHTMLContentElementSelect(ExecState* exec, JSObject* thisObject, JSValue value)
{
    UNUSED_PARAM(exec);
    JSHTMLContentElement* castedThis = jsCast<JSHTMLContentElement*>(thisObject);
    HTMLContentElement* impl = static_cast<HTMLContentElement*>(castedThis->impl());
    const String& nativeValue(valueToStringWithNullCheck(exec, value));
    if (exec->hadException())
        return;
    impl->setAttribute(WebCore::HTMLNames::selectAttr, nativeValue);
}


void setJSHTMLContentElementResetStyleInheritance(ExecState* exec, JSObject* thisObject, JSValue value)
{
    UNUSED_PARAM(exec);
    JSHTMLContentElement* castedThis = jsCast<JSHTMLContentElement*>(thisObject);
    HTMLContentElement* impl = static_cast<HTMLContentElement*>(castedThis->impl());
    bool nativeValue(value.toBoolean(exec));
    if (exec->hadException())
        return;
    impl->setResetStyleInheritance(nativeValue);
}


JSValue JSHTMLContentElement::getConstructor(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSHTMLContentElementConstructor>(exec, jsCast<JSDOMGlobalObject*>(globalObject));
}


}

#endif // ENABLE(SHADOW_DOM)
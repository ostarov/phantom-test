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
#include "JSHTMLMapElement.h"

#include "HTMLCollection.h"
#include "HTMLMapElement.h"
#include "HTMLNames.h"
#include "JSHTMLCollection.h"
#include "KURL.h"
#include <runtime/JSString.h>
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

/* Hash table */

static const HashTableValue JSHTMLMapElementTableValues[] =
{
    { "areas", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLMapElementAreas), (intptr_t)0, NoIntrinsic },
    { "name", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLMapElementName), (intptr_t)setJSHTMLMapElementName, NoIntrinsic },
    { "constructor", DontEnum | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLMapElementConstructor), (intptr_t)0, NoIntrinsic },
    { 0, 0, 0, 0, NoIntrinsic }
};

static const HashTable JSHTMLMapElementTable = { 9, 7, JSHTMLMapElementTableValues, 0 };
/* Hash table for constructor */

static const HashTableValue JSHTMLMapElementConstructorTableValues[] =
{
    { 0, 0, 0, 0, NoIntrinsic }
};

static const HashTable JSHTMLMapElementConstructorTable = { 1, 0, JSHTMLMapElementConstructorTableValues, 0 };
const ClassInfo JSHTMLMapElementConstructor::s_info = { "HTMLMapElementConstructor", &Base::s_info, &JSHTMLMapElementConstructorTable, 0, CREATE_METHOD_TABLE(JSHTMLMapElementConstructor) };

JSHTMLMapElementConstructor::JSHTMLMapElementConstructor(Structure* structure, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(structure, globalObject)
{
}

void JSHTMLMapElementConstructor::finishCreation(ExecState* exec, JSDOMGlobalObject* globalObject)
{
    Base::finishCreation(exec->vm());
    ASSERT(inherits(&s_info));
    putDirect(exec->vm(), exec->propertyNames().prototype, JSHTMLMapElementPrototype::self(exec, globalObject), DontDelete | ReadOnly);
    putDirect(exec->vm(), exec->propertyNames().length, jsNumber(0), ReadOnly | DontDelete | DontEnum);
}

bool JSHTMLMapElementConstructor::getOwnPropertySlot(JSCell* cell, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSHTMLMapElementConstructor, JSDOMWrapper>(exec, &JSHTMLMapElementConstructorTable, jsCast<JSHTMLMapElementConstructor*>(cell), propertyName, slot);
}

bool JSHTMLMapElementConstructor::getOwnPropertyDescriptor(JSObject* object, ExecState* exec, PropertyName propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSHTMLMapElementConstructor, JSDOMWrapper>(exec, &JSHTMLMapElementConstructorTable, jsCast<JSHTMLMapElementConstructor*>(object), propertyName, descriptor);
}

/* Hash table for prototype */

static const HashTableValue JSHTMLMapElementPrototypeTableValues[] =
{
    { 0, 0, 0, 0, NoIntrinsic }
};

static const HashTable JSHTMLMapElementPrototypeTable = { 1, 0, JSHTMLMapElementPrototypeTableValues, 0 };
const ClassInfo JSHTMLMapElementPrototype::s_info = { "HTMLMapElementPrototype", &Base::s_info, &JSHTMLMapElementPrototypeTable, 0, CREATE_METHOD_TABLE(JSHTMLMapElementPrototype) };

JSObject* JSHTMLMapElementPrototype::self(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSHTMLMapElement>(exec, globalObject);
}

const ClassInfo JSHTMLMapElement::s_info = { "HTMLMapElement", &Base::s_info, &JSHTMLMapElementTable, 0 , CREATE_METHOD_TABLE(JSHTMLMapElement) };

JSHTMLMapElement::JSHTMLMapElement(Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<HTMLMapElement> impl)
    : JSHTMLElement(structure, globalObject, impl)
{
}

void JSHTMLMapElement::finishCreation(VM& vm)
{
    Base::finishCreation(vm);
    ASSERT(inherits(&s_info));
}

JSObject* JSHTMLMapElement::createPrototype(ExecState* exec, JSGlobalObject* globalObject)
{
    return JSHTMLMapElementPrototype::create(exec->vm(), globalObject, JSHTMLMapElementPrototype::createStructure(exec->vm(), globalObject, JSHTMLElementPrototype::self(exec, globalObject)));
}

bool JSHTMLMapElement::getOwnPropertySlot(JSCell* cell, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    JSHTMLMapElement* thisObject = jsCast<JSHTMLMapElement*>(cell);
    ASSERT_GC_OBJECT_INHERITS(thisObject, &s_info);
    return getStaticValueSlot<JSHTMLMapElement, Base>(exec, &JSHTMLMapElementTable, thisObject, propertyName, slot);
}

bool JSHTMLMapElement::getOwnPropertyDescriptor(JSObject* object, ExecState* exec, PropertyName propertyName, PropertyDescriptor& descriptor)
{
    JSHTMLMapElement* thisObject = jsCast<JSHTMLMapElement*>(object);
    ASSERT_GC_OBJECT_INHERITS(thisObject, &s_info);
    return getStaticValueDescriptor<JSHTMLMapElement, Base>(exec, &JSHTMLMapElementTable, thisObject, propertyName, descriptor);
}

JSValue jsHTMLMapElementAreas(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSHTMLMapElement* castedThis = jsCast<JSHTMLMapElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    HTMLMapElement* impl = static_cast<HTMLMapElement*>(castedThis->impl());
    JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(impl->areas()));
    return result;
}


JSValue jsHTMLMapElementName(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSHTMLMapElement* castedThis = jsCast<JSHTMLMapElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    HTMLMapElement* impl = static_cast<HTMLMapElement*>(castedThis->impl());
    JSValue result = jsStringWithCache(exec, impl->getNameAttribute());
    return result;
}


JSValue jsHTMLMapElementConstructor(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSHTMLMapElement* domObject = jsCast<JSHTMLMapElement*>(asObject(slotBase));
    return JSHTMLMapElement::getConstructor(exec, domObject->globalObject());
}

void JSHTMLMapElement::put(JSCell* cell, ExecState* exec, PropertyName propertyName, JSValue value, PutPropertySlot& slot)
{
    JSHTMLMapElement* thisObject = jsCast<JSHTMLMapElement*>(cell);
    ASSERT_GC_OBJECT_INHERITS(thisObject, &s_info);
    lookupPut<JSHTMLMapElement, Base>(exec, propertyName, value, &JSHTMLMapElementTable, thisObject, slot);
}

void setJSHTMLMapElementName(ExecState* exec, JSObject* thisObject, JSValue value)
{
    UNUSED_PARAM(exec);
    JSHTMLMapElement* castedThis = jsCast<JSHTMLMapElement*>(thisObject);
    HTMLMapElement* impl = static_cast<HTMLMapElement*>(castedThis->impl());
    const String& nativeValue(valueToStringWithNullCheck(exec, value));
    if (exec->hadException())
        return;
    impl->setAttribute(WebCore::HTMLNames::nameAttr, nativeValue);
}


JSValue JSHTMLMapElement::getConstructor(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSHTMLMapElementConstructor>(exec, jsCast<JSDOMGlobalObject*>(globalObject));
}


}

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

#if ENABLE(DETAILS_ELEMENT)

#include "JSHTMLDetailsElement.h"

#include "HTMLDetailsElement.h"
#include "HTMLNames.h"
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

/* Hash table */

static const HashTableValue JSHTMLDetailsElementTableValues[] =
{
    { "open", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLDetailsElementOpen), (intptr_t)setJSHTMLDetailsElementOpen, NoIntrinsic },
    { 0, 0, 0, 0, NoIntrinsic }
};

static const HashTable JSHTMLDetailsElementTable = { 2, 1, JSHTMLDetailsElementTableValues, 0 };
/* Hash table for prototype */

static const HashTableValue JSHTMLDetailsElementPrototypeTableValues[] =
{
    { 0, 0, 0, 0, NoIntrinsic }
};

static const HashTable JSHTMLDetailsElementPrototypeTable = { 1, 0, JSHTMLDetailsElementPrototypeTableValues, 0 };
const ClassInfo JSHTMLDetailsElementPrototype::s_info = { "HTMLDetailsElementPrototype", &Base::s_info, &JSHTMLDetailsElementPrototypeTable, 0, CREATE_METHOD_TABLE(JSHTMLDetailsElementPrototype) };

JSObject* JSHTMLDetailsElementPrototype::self(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSHTMLDetailsElement>(exec, globalObject);
}

const ClassInfo JSHTMLDetailsElement::s_info = { "HTMLDetailsElement", &Base::s_info, &JSHTMLDetailsElementTable, 0 , CREATE_METHOD_TABLE(JSHTMLDetailsElement) };

JSHTMLDetailsElement::JSHTMLDetailsElement(Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<HTMLDetailsElement> impl)
    : JSHTMLElement(structure, globalObject, impl)
{
}

void JSHTMLDetailsElement::finishCreation(VM& vm)
{
    Base::finishCreation(vm);
    ASSERT(inherits(&s_info));
}

JSObject* JSHTMLDetailsElement::createPrototype(ExecState* exec, JSGlobalObject* globalObject)
{
    return JSHTMLDetailsElementPrototype::create(exec->vm(), globalObject, JSHTMLDetailsElementPrototype::createStructure(exec->vm(), globalObject, JSHTMLElementPrototype::self(exec, globalObject)));
}

bool JSHTMLDetailsElement::getOwnPropertySlot(JSCell* cell, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    JSHTMLDetailsElement* thisObject = jsCast<JSHTMLDetailsElement*>(cell);
    ASSERT_GC_OBJECT_INHERITS(thisObject, &s_info);
    return getStaticValueSlot<JSHTMLDetailsElement, Base>(exec, &JSHTMLDetailsElementTable, thisObject, propertyName, slot);
}

bool JSHTMLDetailsElement::getOwnPropertyDescriptor(JSObject* object, ExecState* exec, PropertyName propertyName, PropertyDescriptor& descriptor)
{
    JSHTMLDetailsElement* thisObject = jsCast<JSHTMLDetailsElement*>(object);
    ASSERT_GC_OBJECT_INHERITS(thisObject, &s_info);
    return getStaticValueDescriptor<JSHTMLDetailsElement, Base>(exec, &JSHTMLDetailsElementTable, thisObject, propertyName, descriptor);
}

JSValue jsHTMLDetailsElementOpen(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSHTMLDetailsElement* castedThis = jsCast<JSHTMLDetailsElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    HTMLDetailsElement* impl = static_cast<HTMLDetailsElement*>(castedThis->impl());
    JSValue result = jsBoolean(impl->fastHasAttribute(WebCore::HTMLNames::openAttr));
    return result;
}


void JSHTMLDetailsElement::put(JSCell* cell, ExecState* exec, PropertyName propertyName, JSValue value, PutPropertySlot& slot)
{
    JSHTMLDetailsElement* thisObject = jsCast<JSHTMLDetailsElement*>(cell);
    ASSERT_GC_OBJECT_INHERITS(thisObject, &s_info);
    lookupPut<JSHTMLDetailsElement, Base>(exec, propertyName, value, &JSHTMLDetailsElementTable, thisObject, slot);
}

void setJSHTMLDetailsElementOpen(ExecState* exec, JSObject* thisObject, JSValue value)
{
    UNUSED_PARAM(exec);
    JSHTMLDetailsElement* castedThis = jsCast<JSHTMLDetailsElement*>(thisObject);
    HTMLDetailsElement* impl = static_cast<HTMLDetailsElement*>(castedThis->impl());
    bool nativeValue(value.toBoolean(exec));
    if (exec->hadException())
        return;
    impl->setBooleanAttribute(WebCore::HTMLNames::openAttr, nativeValue);
}



}

#endif // ENABLE(DETAILS_ELEMENT)
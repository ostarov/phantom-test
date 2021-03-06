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
#include "JSHTMLFrameSetElement.h"

#include "EventListener.h"
#include "HTMLFrameSetElement.h"
#include "HTMLNames.h"
#include "JSEventListener.h"
#include "KURL.h"
#include "wtf/text/AtomicString.h"
#include <runtime/JSString.h>
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

/* Hash table */

static const HashTableValue JSHTMLFrameSetElementTableValues[] =
{
    { "cols", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLFrameSetElementCols), (intptr_t)setJSHTMLFrameSetElementCols, NoIntrinsic },
    { "rows", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLFrameSetElementRows), (intptr_t)setJSHTMLFrameSetElementRows, NoIntrinsic },
    { "onbeforeunload", DontDelete | DontEnum, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLFrameSetElementOnbeforeunload), (intptr_t)setJSHTMLFrameSetElementOnbeforeunload, NoIntrinsic },
    { "onhashchange", DontDelete | DontEnum, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLFrameSetElementOnhashchange), (intptr_t)setJSHTMLFrameSetElementOnhashchange, NoIntrinsic },
    { "onmessage", DontDelete | DontEnum, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLFrameSetElementOnmessage), (intptr_t)setJSHTMLFrameSetElementOnmessage, NoIntrinsic },
    { "onoffline", DontDelete | DontEnum, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLFrameSetElementOnoffline), (intptr_t)setJSHTMLFrameSetElementOnoffline, NoIntrinsic },
    { "ononline", DontDelete | DontEnum, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLFrameSetElementOnonline), (intptr_t)setJSHTMLFrameSetElementOnonline, NoIntrinsic },
    { "onpopstate", DontDelete | DontEnum, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLFrameSetElementOnpopstate), (intptr_t)setJSHTMLFrameSetElementOnpopstate, NoIntrinsic },
    { "onresize", DontDelete | DontEnum, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLFrameSetElementOnresize), (intptr_t)setJSHTMLFrameSetElementOnresize, NoIntrinsic },
    { "onstorage", DontDelete | DontEnum, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLFrameSetElementOnstorage), (intptr_t)setJSHTMLFrameSetElementOnstorage, NoIntrinsic },
    { "onunload", DontDelete | DontEnum, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLFrameSetElementOnunload), (intptr_t)setJSHTMLFrameSetElementOnunload, NoIntrinsic },
#if ENABLE(ORIENTATION_EVENTS)
    { "onorientationchange", DontDelete | DontEnum, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLFrameSetElementOnorientationchange), (intptr_t)setJSHTMLFrameSetElementOnorientationchange, NoIntrinsic },
#endif
    { "onblur", DontDelete | DontEnum, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLFrameSetElementOnblur), (intptr_t)setJSHTMLFrameSetElementOnblur, NoIntrinsic },
    { "onerror", DontDelete | DontEnum, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLFrameSetElementOnerror), (intptr_t)setJSHTMLFrameSetElementOnerror, NoIntrinsic },
    { "onfocus", DontDelete | DontEnum, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLFrameSetElementOnfocus), (intptr_t)setJSHTMLFrameSetElementOnfocus, NoIntrinsic },
    { "onload", DontDelete | DontEnum, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLFrameSetElementOnload), (intptr_t)setJSHTMLFrameSetElementOnload, NoIntrinsic },
    { "constructor", DontEnum | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLFrameSetElementConstructor), (intptr_t)0, NoIntrinsic },
    { 0, 0, 0, 0, NoIntrinsic }
};

static const HashTable JSHTMLFrameSetElementTable = { 64, 63, JSHTMLFrameSetElementTableValues, 0 };
/* Hash table for constructor */

static const HashTableValue JSHTMLFrameSetElementConstructorTableValues[] =
{
    { 0, 0, 0, 0, NoIntrinsic }
};

static const HashTable JSHTMLFrameSetElementConstructorTable = { 1, 0, JSHTMLFrameSetElementConstructorTableValues, 0 };
const ClassInfo JSHTMLFrameSetElementConstructor::s_info = { "HTMLFrameSetElementConstructor", &Base::s_info, &JSHTMLFrameSetElementConstructorTable, 0, CREATE_METHOD_TABLE(JSHTMLFrameSetElementConstructor) };

JSHTMLFrameSetElementConstructor::JSHTMLFrameSetElementConstructor(Structure* structure, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(structure, globalObject)
{
}

void JSHTMLFrameSetElementConstructor::finishCreation(ExecState* exec, JSDOMGlobalObject* globalObject)
{
    Base::finishCreation(exec->vm());
    ASSERT(inherits(&s_info));
    putDirect(exec->vm(), exec->propertyNames().prototype, JSHTMLFrameSetElementPrototype::self(exec, globalObject), DontDelete | ReadOnly);
    putDirect(exec->vm(), exec->propertyNames().length, jsNumber(0), ReadOnly | DontDelete | DontEnum);
}

bool JSHTMLFrameSetElementConstructor::getOwnPropertySlot(JSCell* cell, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSHTMLFrameSetElementConstructor, JSDOMWrapper>(exec, &JSHTMLFrameSetElementConstructorTable, jsCast<JSHTMLFrameSetElementConstructor*>(cell), propertyName, slot);
}

bool JSHTMLFrameSetElementConstructor::getOwnPropertyDescriptor(JSObject* object, ExecState* exec, PropertyName propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSHTMLFrameSetElementConstructor, JSDOMWrapper>(exec, &JSHTMLFrameSetElementConstructorTable, jsCast<JSHTMLFrameSetElementConstructor*>(object), propertyName, descriptor);
}

/* Hash table for prototype */

static const HashTableValue JSHTMLFrameSetElementPrototypeTableValues[] =
{
    { 0, 0, 0, 0, NoIntrinsic }
};

static const HashTable JSHTMLFrameSetElementPrototypeTable = { 1, 0, JSHTMLFrameSetElementPrototypeTableValues, 0 };
const ClassInfo JSHTMLFrameSetElementPrototype::s_info = { "HTMLFrameSetElementPrototype", &Base::s_info, &JSHTMLFrameSetElementPrototypeTable, 0, CREATE_METHOD_TABLE(JSHTMLFrameSetElementPrototype) };

JSObject* JSHTMLFrameSetElementPrototype::self(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSHTMLFrameSetElement>(exec, globalObject);
}

const ClassInfo JSHTMLFrameSetElement::s_info = { "HTMLFrameSetElement", &Base::s_info, &JSHTMLFrameSetElementTable, 0 , CREATE_METHOD_TABLE(JSHTMLFrameSetElement) };

JSHTMLFrameSetElement::JSHTMLFrameSetElement(Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<HTMLFrameSetElement> impl)
    : JSHTMLElement(structure, globalObject, impl)
{
}

void JSHTMLFrameSetElement::finishCreation(VM& vm)
{
    Base::finishCreation(vm);
    ASSERT(inherits(&s_info));
}

JSObject* JSHTMLFrameSetElement::createPrototype(ExecState* exec, JSGlobalObject* globalObject)
{
    return JSHTMLFrameSetElementPrototype::create(exec->vm(), globalObject, JSHTMLFrameSetElementPrototype::createStructure(exec->vm(), globalObject, JSHTMLElementPrototype::self(exec, globalObject)));
}

bool JSHTMLFrameSetElement::getOwnPropertySlot(JSCell* cell, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    JSHTMLFrameSetElement* thisObject = jsCast<JSHTMLFrameSetElement*>(cell);
    ASSERT_GC_OBJECT_INHERITS(thisObject, &s_info);
    if (canGetItemsForName(exec, static_cast<HTMLFrameSetElement*>(thisObject->impl()), propertyName)) {
        slot.setCustom(thisObject, thisObject->nameGetter);
        return true;
    }
    return getStaticValueSlot<JSHTMLFrameSetElement, Base>(exec, &JSHTMLFrameSetElementTable, thisObject, propertyName, slot);
}

bool JSHTMLFrameSetElement::getOwnPropertyDescriptor(JSObject* object, ExecState* exec, PropertyName propertyName, PropertyDescriptor& descriptor)
{
    JSHTMLFrameSetElement* thisObject = jsCast<JSHTMLFrameSetElement*>(object);
    ASSERT_GC_OBJECT_INHERITS(thisObject, &s_info);
    if (canGetItemsForName(exec, static_cast<HTMLFrameSetElement*>(thisObject->impl()), propertyName)) {
        PropertySlot slot;
        slot.setCustom(thisObject, nameGetter);
        descriptor.setDescriptor(slot.getValue(exec, propertyName), ReadOnly | DontDelete | DontEnum);
        return true;
    }
    return getStaticValueDescriptor<JSHTMLFrameSetElement, Base>(exec, &JSHTMLFrameSetElementTable, thisObject, propertyName, descriptor);
}

bool JSHTMLFrameSetElement::getOwnPropertySlotByIndex(JSCell* cell, ExecState* exec, unsigned index, PropertySlot& slot)
{
    JSHTMLFrameSetElement* thisObject = jsCast<JSHTMLFrameSetElement*>(cell);
    ASSERT_GC_OBJECT_INHERITS(thisObject, &s_info);
    PropertyName propertyName = Identifier::from(exec, index);
    if (canGetItemsForName(exec, static_cast<HTMLFrameSetElement*>(thisObject->impl()), propertyName)) {
        slot.setCustom(thisObject, thisObject->nameGetter);
        return true;
    }
    return Base::getOwnPropertySlotByIndex(thisObject, exec, index, slot);
}

JSValue jsHTMLFrameSetElementCols(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSHTMLFrameSetElement* castedThis = jsCast<JSHTMLFrameSetElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    HTMLFrameSetElement* impl = static_cast<HTMLFrameSetElement*>(castedThis->impl());
    JSValue result = jsStringWithCache(exec, impl->fastGetAttribute(WebCore::HTMLNames::colsAttr));
    return result;
}


JSValue jsHTMLFrameSetElementRows(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSHTMLFrameSetElement* castedThis = jsCast<JSHTMLFrameSetElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    HTMLFrameSetElement* impl = static_cast<HTMLFrameSetElement*>(castedThis->impl());
    JSValue result = jsStringWithCache(exec, impl->fastGetAttribute(WebCore::HTMLNames::rowsAttr));
    return result;
}


JSValue jsHTMLFrameSetElementOnbeforeunload(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSHTMLFrameSetElement* castedThis = jsCast<JSHTMLFrameSetElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    HTMLFrameSetElement* impl = static_cast<HTMLFrameSetElement*>(castedThis->impl());
    if (EventListener* listener = impl->onbeforeunload()) {
        if (const JSEventListener* jsListener = JSEventListener::cast(listener)) {
            if (JSObject* jsFunction = jsListener->jsFunction(impl->scriptExecutionContext()))
                return jsFunction;
        }
    }
    return jsNull();
}


JSValue jsHTMLFrameSetElementOnhashchange(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSHTMLFrameSetElement* castedThis = jsCast<JSHTMLFrameSetElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    HTMLFrameSetElement* impl = static_cast<HTMLFrameSetElement*>(castedThis->impl());
    if (EventListener* listener = impl->onhashchange()) {
        if (const JSEventListener* jsListener = JSEventListener::cast(listener)) {
            if (JSObject* jsFunction = jsListener->jsFunction(impl->scriptExecutionContext()))
                return jsFunction;
        }
    }
    return jsNull();
}


JSValue jsHTMLFrameSetElementOnmessage(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSHTMLFrameSetElement* castedThis = jsCast<JSHTMLFrameSetElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    HTMLFrameSetElement* impl = static_cast<HTMLFrameSetElement*>(castedThis->impl());
    if (EventListener* listener = impl->onmessage()) {
        if (const JSEventListener* jsListener = JSEventListener::cast(listener)) {
            if (JSObject* jsFunction = jsListener->jsFunction(impl->scriptExecutionContext()))
                return jsFunction;
        }
    }
    return jsNull();
}


JSValue jsHTMLFrameSetElementOnoffline(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSHTMLFrameSetElement* castedThis = jsCast<JSHTMLFrameSetElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    HTMLFrameSetElement* impl = static_cast<HTMLFrameSetElement*>(castedThis->impl());
    if (EventListener* listener = impl->onoffline()) {
        if (const JSEventListener* jsListener = JSEventListener::cast(listener)) {
            if (JSObject* jsFunction = jsListener->jsFunction(impl->scriptExecutionContext()))
                return jsFunction;
        }
    }
    return jsNull();
}


JSValue jsHTMLFrameSetElementOnonline(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSHTMLFrameSetElement* castedThis = jsCast<JSHTMLFrameSetElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    HTMLFrameSetElement* impl = static_cast<HTMLFrameSetElement*>(castedThis->impl());
    if (EventListener* listener = impl->ononline()) {
        if (const JSEventListener* jsListener = JSEventListener::cast(listener)) {
            if (JSObject* jsFunction = jsListener->jsFunction(impl->scriptExecutionContext()))
                return jsFunction;
        }
    }
    return jsNull();
}


JSValue jsHTMLFrameSetElementOnpopstate(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSHTMLFrameSetElement* castedThis = jsCast<JSHTMLFrameSetElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    HTMLFrameSetElement* impl = static_cast<HTMLFrameSetElement*>(castedThis->impl());
    if (EventListener* listener = impl->onpopstate()) {
        if (const JSEventListener* jsListener = JSEventListener::cast(listener)) {
            if (JSObject* jsFunction = jsListener->jsFunction(impl->scriptExecutionContext()))
                return jsFunction;
        }
    }
    return jsNull();
}


JSValue jsHTMLFrameSetElementOnresize(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSHTMLFrameSetElement* castedThis = jsCast<JSHTMLFrameSetElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    HTMLFrameSetElement* impl = static_cast<HTMLFrameSetElement*>(castedThis->impl());
    if (EventListener* listener = impl->onresize()) {
        if (const JSEventListener* jsListener = JSEventListener::cast(listener)) {
            if (JSObject* jsFunction = jsListener->jsFunction(impl->scriptExecutionContext()))
                return jsFunction;
        }
    }
    return jsNull();
}


JSValue jsHTMLFrameSetElementOnstorage(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSHTMLFrameSetElement* castedThis = jsCast<JSHTMLFrameSetElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    HTMLFrameSetElement* impl = static_cast<HTMLFrameSetElement*>(castedThis->impl());
    if (EventListener* listener = impl->onstorage()) {
        if (const JSEventListener* jsListener = JSEventListener::cast(listener)) {
            if (JSObject* jsFunction = jsListener->jsFunction(impl->scriptExecutionContext()))
                return jsFunction;
        }
    }
    return jsNull();
}


JSValue jsHTMLFrameSetElementOnunload(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSHTMLFrameSetElement* castedThis = jsCast<JSHTMLFrameSetElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    HTMLFrameSetElement* impl = static_cast<HTMLFrameSetElement*>(castedThis->impl());
    if (EventListener* listener = impl->onunload()) {
        if (const JSEventListener* jsListener = JSEventListener::cast(listener)) {
            if (JSObject* jsFunction = jsListener->jsFunction(impl->scriptExecutionContext()))
                return jsFunction;
        }
    }
    return jsNull();
}


#if ENABLE(ORIENTATION_EVENTS)
JSValue jsHTMLFrameSetElementOnorientationchange(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSHTMLFrameSetElement* castedThis = jsCast<JSHTMLFrameSetElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    HTMLFrameSetElement* impl = static_cast<HTMLFrameSetElement*>(castedThis->impl());
    if (EventListener* listener = impl->onorientationchange()) {
        if (const JSEventListener* jsListener = JSEventListener::cast(listener)) {
            if (JSObject* jsFunction = jsListener->jsFunction(impl->scriptExecutionContext()))
                return jsFunction;
        }
    }
    return jsNull();
}

#endif

JSValue jsHTMLFrameSetElementOnblur(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSHTMLFrameSetElement* castedThis = jsCast<JSHTMLFrameSetElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    HTMLFrameSetElement* impl = static_cast<HTMLFrameSetElement*>(castedThis->impl());
    if (EventListener* listener = impl->onblur()) {
        if (const JSEventListener* jsListener = JSEventListener::cast(listener)) {
            if (JSObject* jsFunction = jsListener->jsFunction(impl->scriptExecutionContext()))
                return jsFunction;
        }
    }
    return jsNull();
}


JSValue jsHTMLFrameSetElementOnerror(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSHTMLFrameSetElement* castedThis = jsCast<JSHTMLFrameSetElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    HTMLFrameSetElement* impl = static_cast<HTMLFrameSetElement*>(castedThis->impl());
    if (EventListener* listener = impl->onerror()) {
        if (const JSEventListener* jsListener = JSEventListener::cast(listener)) {
            if (JSObject* jsFunction = jsListener->jsFunction(impl->scriptExecutionContext()))
                return jsFunction;
        }
    }
    return jsNull();
}


JSValue jsHTMLFrameSetElementOnfocus(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSHTMLFrameSetElement* castedThis = jsCast<JSHTMLFrameSetElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    HTMLFrameSetElement* impl = static_cast<HTMLFrameSetElement*>(castedThis->impl());
    if (EventListener* listener = impl->onfocus()) {
        if (const JSEventListener* jsListener = JSEventListener::cast(listener)) {
            if (JSObject* jsFunction = jsListener->jsFunction(impl->scriptExecutionContext()))
                return jsFunction;
        }
    }
    return jsNull();
}


JSValue jsHTMLFrameSetElementOnload(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSHTMLFrameSetElement* castedThis = jsCast<JSHTMLFrameSetElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    HTMLFrameSetElement* impl = static_cast<HTMLFrameSetElement*>(castedThis->impl());
    if (EventListener* listener = impl->onload()) {
        if (const JSEventListener* jsListener = JSEventListener::cast(listener)) {
            if (JSObject* jsFunction = jsListener->jsFunction(impl->scriptExecutionContext()))
                return jsFunction;
        }
    }
    return jsNull();
}


JSValue jsHTMLFrameSetElementConstructor(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSHTMLFrameSetElement* domObject = jsCast<JSHTMLFrameSetElement*>(asObject(slotBase));
    return JSHTMLFrameSetElement::getConstructor(exec, domObject->globalObject());
}

void JSHTMLFrameSetElement::put(JSCell* cell, ExecState* exec, PropertyName propertyName, JSValue value, PutPropertySlot& slot)
{
    JSHTMLFrameSetElement* thisObject = jsCast<JSHTMLFrameSetElement*>(cell);
    ASSERT_GC_OBJECT_INHERITS(thisObject, &s_info);
    lookupPut<JSHTMLFrameSetElement, Base>(exec, propertyName, value, &JSHTMLFrameSetElementTable, thisObject, slot);
}

void setJSHTMLFrameSetElementCols(ExecState* exec, JSObject* thisObject, JSValue value)
{
    UNUSED_PARAM(exec);
    JSHTMLFrameSetElement* castedThis = jsCast<JSHTMLFrameSetElement*>(thisObject);
    HTMLFrameSetElement* impl = static_cast<HTMLFrameSetElement*>(castedThis->impl());
    const String& nativeValue(valueToStringWithNullCheck(exec, value));
    if (exec->hadException())
        return;
    impl->setAttribute(WebCore::HTMLNames::colsAttr, nativeValue);
}


void setJSHTMLFrameSetElementRows(ExecState* exec, JSObject* thisObject, JSValue value)
{
    UNUSED_PARAM(exec);
    JSHTMLFrameSetElement* castedThis = jsCast<JSHTMLFrameSetElement*>(thisObject);
    HTMLFrameSetElement* impl = static_cast<HTMLFrameSetElement*>(castedThis->impl());
    const String& nativeValue(valueToStringWithNullCheck(exec, value));
    if (exec->hadException())
        return;
    impl->setAttribute(WebCore::HTMLNames::rowsAttr, nativeValue);
}


void setJSHTMLFrameSetElementOnbeforeunload(ExecState* exec, JSObject* thisObject, JSValue value)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(exec);
    JSHTMLFrameSetElement* castedThis = jsCast<JSHTMLFrameSetElement*>(thisObject);
    JSDOMGlobalObject* globalObject = castedThis->globalObject();
    HTMLFrameSetElement* impl = static_cast<HTMLFrameSetElement*>(castedThis->impl());
    impl->setOnbeforeunload(createJSAttributeEventListener(exec, value, globalObject));
}


void setJSHTMLFrameSetElementOnhashchange(ExecState* exec, JSObject* thisObject, JSValue value)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(exec);
    JSHTMLFrameSetElement* castedThis = jsCast<JSHTMLFrameSetElement*>(thisObject);
    JSDOMGlobalObject* globalObject = castedThis->globalObject();
    HTMLFrameSetElement* impl = static_cast<HTMLFrameSetElement*>(castedThis->impl());
    impl->setOnhashchange(createJSAttributeEventListener(exec, value, globalObject));
}


void setJSHTMLFrameSetElementOnmessage(ExecState* exec, JSObject* thisObject, JSValue value)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(exec);
    JSHTMLFrameSetElement* castedThis = jsCast<JSHTMLFrameSetElement*>(thisObject);
    JSDOMGlobalObject* globalObject = castedThis->globalObject();
    HTMLFrameSetElement* impl = static_cast<HTMLFrameSetElement*>(castedThis->impl());
    impl->setOnmessage(createJSAttributeEventListener(exec, value, globalObject));
}


void setJSHTMLFrameSetElementOnoffline(ExecState* exec, JSObject* thisObject, JSValue value)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(exec);
    JSHTMLFrameSetElement* castedThis = jsCast<JSHTMLFrameSetElement*>(thisObject);
    JSDOMGlobalObject* globalObject = castedThis->globalObject();
    HTMLFrameSetElement* impl = static_cast<HTMLFrameSetElement*>(castedThis->impl());
    impl->setOnoffline(createJSAttributeEventListener(exec, value, globalObject));
}


void setJSHTMLFrameSetElementOnonline(ExecState* exec, JSObject* thisObject, JSValue value)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(exec);
    JSHTMLFrameSetElement* castedThis = jsCast<JSHTMLFrameSetElement*>(thisObject);
    JSDOMGlobalObject* globalObject = castedThis->globalObject();
    HTMLFrameSetElement* impl = static_cast<HTMLFrameSetElement*>(castedThis->impl());
    impl->setOnonline(createJSAttributeEventListener(exec, value, globalObject));
}


void setJSHTMLFrameSetElementOnpopstate(ExecState* exec, JSObject* thisObject, JSValue value)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(exec);
    JSHTMLFrameSetElement* castedThis = jsCast<JSHTMLFrameSetElement*>(thisObject);
    JSDOMGlobalObject* globalObject = castedThis->globalObject();
    HTMLFrameSetElement* impl = static_cast<HTMLFrameSetElement*>(castedThis->impl());
    impl->setOnpopstate(createJSAttributeEventListener(exec, value, globalObject));
}


void setJSHTMLFrameSetElementOnresize(ExecState* exec, JSObject* thisObject, JSValue value)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(exec);
    JSHTMLFrameSetElement* castedThis = jsCast<JSHTMLFrameSetElement*>(thisObject);
    JSDOMGlobalObject* globalObject = castedThis->globalObject();
    HTMLFrameSetElement* impl = static_cast<HTMLFrameSetElement*>(castedThis->impl());
    impl->setOnresize(createJSAttributeEventListener(exec, value, globalObject));
}


void setJSHTMLFrameSetElementOnstorage(ExecState* exec, JSObject* thisObject, JSValue value)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(exec);
    JSHTMLFrameSetElement* castedThis = jsCast<JSHTMLFrameSetElement*>(thisObject);
    JSDOMGlobalObject* globalObject = castedThis->globalObject();
    HTMLFrameSetElement* impl = static_cast<HTMLFrameSetElement*>(castedThis->impl());
    impl->setOnstorage(createJSAttributeEventListener(exec, value, globalObject));
}


void setJSHTMLFrameSetElementOnunload(ExecState* exec, JSObject* thisObject, JSValue value)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(exec);
    JSHTMLFrameSetElement* castedThis = jsCast<JSHTMLFrameSetElement*>(thisObject);
    JSDOMGlobalObject* globalObject = castedThis->globalObject();
    HTMLFrameSetElement* impl = static_cast<HTMLFrameSetElement*>(castedThis->impl());
    impl->setOnunload(createJSAttributeEventListener(exec, value, globalObject));
}


#if ENABLE(ORIENTATION_EVENTS)
void setJSHTMLFrameSetElementOnorientationchange(ExecState* exec, JSObject* thisObject, JSValue value)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(exec);
    JSHTMLFrameSetElement* castedThis = jsCast<JSHTMLFrameSetElement*>(thisObject);
    JSDOMGlobalObject* globalObject = castedThis->globalObject();
    HTMLFrameSetElement* impl = static_cast<HTMLFrameSetElement*>(castedThis->impl());
    impl->setOnorientationchange(createJSAttributeEventListener(exec, value, globalObject));
}

#endif

void setJSHTMLFrameSetElementOnblur(ExecState* exec, JSObject* thisObject, JSValue value)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(exec);
    JSHTMLFrameSetElement* castedThis = jsCast<JSHTMLFrameSetElement*>(thisObject);
    JSDOMGlobalObject* globalObject = castedThis->globalObject();
    HTMLFrameSetElement* impl = static_cast<HTMLFrameSetElement*>(castedThis->impl());
    impl->setOnblur(createJSAttributeEventListener(exec, value, globalObject));
}


void setJSHTMLFrameSetElementOnerror(ExecState* exec, JSObject* thisObject, JSValue value)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(exec);
    JSHTMLFrameSetElement* castedThis = jsCast<JSHTMLFrameSetElement*>(thisObject);
    JSDOMGlobalObject* globalObject = castedThis->globalObject();
    HTMLFrameSetElement* impl = static_cast<HTMLFrameSetElement*>(castedThis->impl());
    impl->setOnerror(createJSAttributeEventListener(exec, value, globalObject));
}


void setJSHTMLFrameSetElementOnfocus(ExecState* exec, JSObject* thisObject, JSValue value)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(exec);
    JSHTMLFrameSetElement* castedThis = jsCast<JSHTMLFrameSetElement*>(thisObject);
    JSDOMGlobalObject* globalObject = castedThis->globalObject();
    HTMLFrameSetElement* impl = static_cast<HTMLFrameSetElement*>(castedThis->impl());
    impl->setOnfocus(createJSAttributeEventListener(exec, value, globalObject));
}


void setJSHTMLFrameSetElementOnload(ExecState* exec, JSObject* thisObject, JSValue value)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(exec);
    JSHTMLFrameSetElement* castedThis = jsCast<JSHTMLFrameSetElement*>(thisObject);
    JSDOMGlobalObject* globalObject = castedThis->globalObject();
    HTMLFrameSetElement* impl = static_cast<HTMLFrameSetElement*>(castedThis->impl());
    impl->setOnload(createJSAttributeEventListener(exec, value, globalObject));
}


JSValue JSHTMLFrameSetElement::getConstructor(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSHTMLFrameSetElementConstructor>(exec, jsCast<JSDOMGlobalObject*>(globalObject));
}


}

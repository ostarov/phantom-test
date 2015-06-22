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
#include "JSHTMLBodyElement.h"

#include "EventListener.h"
#include "HTMLBodyElement.h"
#include "HTMLNames.h"
#include "JSEventListener.h"
#include "KURL.h"
#include <runtime/JSString.h>
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

/* Hash table */

static const HashTableValue JSHTMLBodyElementTableValues[] =
{
    { "aLink", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLBodyElementALink), (intptr_t)setJSHTMLBodyElementALink, NoIntrinsic },
    { "background", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLBodyElementBackground), (intptr_t)setJSHTMLBodyElementBackground, NoIntrinsic },
    { "bgColor", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLBodyElementBgColor), (intptr_t)setJSHTMLBodyElementBgColor, NoIntrinsic },
    { "link", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLBodyElementLink), (intptr_t)setJSHTMLBodyElementLink, NoIntrinsic },
    { "text", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLBodyElementText), (intptr_t)setJSHTMLBodyElementText, NoIntrinsic },
    { "vLink", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLBodyElementVLink), (intptr_t)setJSHTMLBodyElementVLink, NoIntrinsic },
    { "onbeforeunload", DontDelete | DontEnum, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLBodyElementOnbeforeunload), (intptr_t)setJSHTMLBodyElementOnbeforeunload, NoIntrinsic },
    { "onhashchange", DontDelete | DontEnum, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLBodyElementOnhashchange), (intptr_t)setJSHTMLBodyElementOnhashchange, NoIntrinsic },
    { "onmessage", DontDelete | DontEnum, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLBodyElementOnmessage), (intptr_t)setJSHTMLBodyElementOnmessage, NoIntrinsic },
    { "onoffline", DontDelete | DontEnum, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLBodyElementOnoffline), (intptr_t)setJSHTMLBodyElementOnoffline, NoIntrinsic },
    { "ononline", DontDelete | DontEnum, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLBodyElementOnonline), (intptr_t)setJSHTMLBodyElementOnonline, NoIntrinsic },
    { "onpopstate", DontDelete | DontEnum, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLBodyElementOnpopstate), (intptr_t)setJSHTMLBodyElementOnpopstate, NoIntrinsic },
    { "onresize", DontDelete | DontEnum, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLBodyElementOnresize), (intptr_t)setJSHTMLBodyElementOnresize, NoIntrinsic },
    { "onstorage", DontDelete | DontEnum, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLBodyElementOnstorage), (intptr_t)setJSHTMLBodyElementOnstorage, NoIntrinsic },
    { "onunload", DontDelete | DontEnum, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLBodyElementOnunload), (intptr_t)setJSHTMLBodyElementOnunload, NoIntrinsic },
#if ENABLE(ORIENTATION_EVENTS)
    { "onorientationchange", DontDelete | DontEnum, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLBodyElementOnorientationchange), (intptr_t)setJSHTMLBodyElementOnorientationchange, NoIntrinsic },
#endif
    { "onblur", DontDelete | DontEnum, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLBodyElementOnblur), (intptr_t)setJSHTMLBodyElementOnblur, NoIntrinsic },
    { "onerror", DontDelete | DontEnum, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLBodyElementOnerror), (intptr_t)setJSHTMLBodyElementOnerror, NoIntrinsic },
    { "onfocus", DontDelete | DontEnum, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLBodyElementOnfocus), (intptr_t)setJSHTMLBodyElementOnfocus, NoIntrinsic },
    { "onload", DontDelete | DontEnum, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLBodyElementOnload), (intptr_t)setJSHTMLBodyElementOnload, NoIntrinsic },
    { "constructor", DontEnum | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLBodyElementConstructor), (intptr_t)0, NoIntrinsic },
    { 0, 0, 0, 0, NoIntrinsic }
};

static const HashTable JSHTMLBodyElementTable = { 64, 63, JSHTMLBodyElementTableValues, 0 };
/* Hash table for constructor */

static const HashTableValue JSHTMLBodyElementConstructorTableValues[] =
{
    { 0, 0, 0, 0, NoIntrinsic }
};

static const HashTable JSHTMLBodyElementConstructorTable = { 1, 0, JSHTMLBodyElementConstructorTableValues, 0 };
const ClassInfo JSHTMLBodyElementConstructor::s_info = { "HTMLBodyElementConstructor", &Base::s_info, &JSHTMLBodyElementConstructorTable, 0, CREATE_METHOD_TABLE(JSHTMLBodyElementConstructor) };

JSHTMLBodyElementConstructor::JSHTMLBodyElementConstructor(Structure* structure, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(structure, globalObject)
{
}

void JSHTMLBodyElementConstructor::finishCreation(ExecState* exec, JSDOMGlobalObject* globalObject)
{
    Base::finishCreation(exec->vm());
    ASSERT(inherits(&s_info));
    putDirect(exec->vm(), exec->propertyNames().prototype, JSHTMLBodyElementPrototype::self(exec, globalObject), DontDelete | ReadOnly);
    putDirect(exec->vm(), exec->propertyNames().length, jsNumber(0), ReadOnly | DontDelete | DontEnum);
}

bool JSHTMLBodyElementConstructor::getOwnPropertySlot(JSCell* cell, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSHTMLBodyElementConstructor, JSDOMWrapper>(exec, &JSHTMLBodyElementConstructorTable, jsCast<JSHTMLBodyElementConstructor*>(cell), propertyName, slot);
}

bool JSHTMLBodyElementConstructor::getOwnPropertyDescriptor(JSObject* object, ExecState* exec, PropertyName propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSHTMLBodyElementConstructor, JSDOMWrapper>(exec, &JSHTMLBodyElementConstructorTable, jsCast<JSHTMLBodyElementConstructor*>(object), propertyName, descriptor);
}

/* Hash table for prototype */

static const HashTableValue JSHTMLBodyElementPrototypeTableValues[] =
{
    { 0, 0, 0, 0, NoIntrinsic }
};

static const HashTable JSHTMLBodyElementPrototypeTable = { 1, 0, JSHTMLBodyElementPrototypeTableValues, 0 };
const ClassInfo JSHTMLBodyElementPrototype::s_info = { "HTMLBodyElementPrototype", &Base::s_info, &JSHTMLBodyElementPrototypeTable, 0, CREATE_METHOD_TABLE(JSHTMLBodyElementPrototype) };

JSObject* JSHTMLBodyElementPrototype::self(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSHTMLBodyElement>(exec, globalObject);
}

const ClassInfo JSHTMLBodyElement::s_info = { "HTMLBodyElement", &Base::s_info, &JSHTMLBodyElementTable, 0 , CREATE_METHOD_TABLE(JSHTMLBodyElement) };

JSHTMLBodyElement::JSHTMLBodyElement(Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<HTMLBodyElement> impl)
    : JSHTMLElement(structure, globalObject, impl)
{
}

void JSHTMLBodyElement::finishCreation(VM& vm)
{
    Base::finishCreation(vm);
    ASSERT(inherits(&s_info));
}

JSObject* JSHTMLBodyElement::createPrototype(ExecState* exec, JSGlobalObject* globalObject)
{
    return JSHTMLBodyElementPrototype::create(exec->vm(), globalObject, JSHTMLBodyElementPrototype::createStructure(exec->vm(), globalObject, JSHTMLElementPrototype::self(exec, globalObject)));
}

bool JSHTMLBodyElement::getOwnPropertySlot(JSCell* cell, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    JSHTMLBodyElement* thisObject = jsCast<JSHTMLBodyElement*>(cell);
    ASSERT_GC_OBJECT_INHERITS(thisObject, &s_info);
    return getStaticValueSlot<JSHTMLBodyElement, Base>(exec, &JSHTMLBodyElementTable, thisObject, propertyName, slot);
}

bool JSHTMLBodyElement::getOwnPropertyDescriptor(JSObject* object, ExecState* exec, PropertyName propertyName, PropertyDescriptor& descriptor)
{
    JSHTMLBodyElement* thisObject = jsCast<JSHTMLBodyElement*>(object);
    ASSERT_GC_OBJECT_INHERITS(thisObject, &s_info);
    return getStaticValueDescriptor<JSHTMLBodyElement, Base>(exec, &JSHTMLBodyElementTable, thisObject, propertyName, descriptor);
}

JSValue jsHTMLBodyElementALink(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSHTMLBodyElement* castedThis = jsCast<JSHTMLBodyElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    HTMLBodyElement* impl = static_cast<HTMLBodyElement*>(castedThis->impl());
    JSValue result = jsStringWithCache(exec, impl->fastGetAttribute(WebCore::HTMLNames::alinkAttr));
    return result;
}


JSValue jsHTMLBodyElementBackground(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSHTMLBodyElement* castedThis = jsCast<JSHTMLBodyElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    HTMLBodyElement* impl = static_cast<HTMLBodyElement*>(castedThis->impl());
    JSValue result = jsStringWithCache(exec, impl->fastGetAttribute(WebCore::HTMLNames::backgroundAttr));
    return result;
}


JSValue jsHTMLBodyElementBgColor(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSHTMLBodyElement* castedThis = jsCast<JSHTMLBodyElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    HTMLBodyElement* impl = static_cast<HTMLBodyElement*>(castedThis->impl());
    JSValue result = jsStringWithCache(exec, impl->fastGetAttribute(WebCore::HTMLNames::bgcolorAttr));
    return result;
}


JSValue jsHTMLBodyElementLink(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSHTMLBodyElement* castedThis = jsCast<JSHTMLBodyElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    HTMLBodyElement* impl = static_cast<HTMLBodyElement*>(castedThis->impl());
    JSValue result = jsStringWithCache(exec, impl->fastGetAttribute(WebCore::HTMLNames::linkAttr));
    return result;
}


JSValue jsHTMLBodyElementText(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSHTMLBodyElement* castedThis = jsCast<JSHTMLBodyElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    HTMLBodyElement* impl = static_cast<HTMLBodyElement*>(castedThis->impl());
    JSValue result = jsStringWithCache(exec, impl->fastGetAttribute(WebCore::HTMLNames::textAttr));
    return result;
}


JSValue jsHTMLBodyElementVLink(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSHTMLBodyElement* castedThis = jsCast<JSHTMLBodyElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    HTMLBodyElement* impl = static_cast<HTMLBodyElement*>(castedThis->impl());
    JSValue result = jsStringWithCache(exec, impl->fastGetAttribute(WebCore::HTMLNames::vlinkAttr));
    return result;
}


JSValue jsHTMLBodyElementOnbeforeunload(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSHTMLBodyElement* castedThis = jsCast<JSHTMLBodyElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    HTMLBodyElement* impl = static_cast<HTMLBodyElement*>(castedThis->impl());
    if (EventListener* listener = impl->onbeforeunload()) {
        if (const JSEventListener* jsListener = JSEventListener::cast(listener)) {
            if (JSObject* jsFunction = jsListener->jsFunction(impl->scriptExecutionContext()))
                return jsFunction;
        }
    }
    return jsNull();
}


JSValue jsHTMLBodyElementOnhashchange(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSHTMLBodyElement* castedThis = jsCast<JSHTMLBodyElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    HTMLBodyElement* impl = static_cast<HTMLBodyElement*>(castedThis->impl());
    if (EventListener* listener = impl->onhashchange()) {
        if (const JSEventListener* jsListener = JSEventListener::cast(listener)) {
            if (JSObject* jsFunction = jsListener->jsFunction(impl->scriptExecutionContext()))
                return jsFunction;
        }
    }
    return jsNull();
}


JSValue jsHTMLBodyElementOnmessage(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSHTMLBodyElement* castedThis = jsCast<JSHTMLBodyElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    HTMLBodyElement* impl = static_cast<HTMLBodyElement*>(castedThis->impl());
    if (EventListener* listener = impl->onmessage()) {
        if (const JSEventListener* jsListener = JSEventListener::cast(listener)) {
            if (JSObject* jsFunction = jsListener->jsFunction(impl->scriptExecutionContext()))
                return jsFunction;
        }
    }
    return jsNull();
}


JSValue jsHTMLBodyElementOnoffline(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSHTMLBodyElement* castedThis = jsCast<JSHTMLBodyElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    HTMLBodyElement* impl = static_cast<HTMLBodyElement*>(castedThis->impl());
    if (EventListener* listener = impl->onoffline()) {
        if (const JSEventListener* jsListener = JSEventListener::cast(listener)) {
            if (JSObject* jsFunction = jsListener->jsFunction(impl->scriptExecutionContext()))
                return jsFunction;
        }
    }
    return jsNull();
}


JSValue jsHTMLBodyElementOnonline(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSHTMLBodyElement* castedThis = jsCast<JSHTMLBodyElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    HTMLBodyElement* impl = static_cast<HTMLBodyElement*>(castedThis->impl());
    if (EventListener* listener = impl->ononline()) {
        if (const JSEventListener* jsListener = JSEventListener::cast(listener)) {
            if (JSObject* jsFunction = jsListener->jsFunction(impl->scriptExecutionContext()))
                return jsFunction;
        }
    }
    return jsNull();
}


JSValue jsHTMLBodyElementOnpopstate(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSHTMLBodyElement* castedThis = jsCast<JSHTMLBodyElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    HTMLBodyElement* impl = static_cast<HTMLBodyElement*>(castedThis->impl());
    if (EventListener* listener = impl->onpopstate()) {
        if (const JSEventListener* jsListener = JSEventListener::cast(listener)) {
            if (JSObject* jsFunction = jsListener->jsFunction(impl->scriptExecutionContext()))
                return jsFunction;
        }
    }
    return jsNull();
}


JSValue jsHTMLBodyElementOnresize(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSHTMLBodyElement* castedThis = jsCast<JSHTMLBodyElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    HTMLBodyElement* impl = static_cast<HTMLBodyElement*>(castedThis->impl());
    if (EventListener* listener = impl->onresize()) {
        if (const JSEventListener* jsListener = JSEventListener::cast(listener)) {
            if (JSObject* jsFunction = jsListener->jsFunction(impl->scriptExecutionContext()))
                return jsFunction;
        }
    }
    return jsNull();
}


JSValue jsHTMLBodyElementOnstorage(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSHTMLBodyElement* castedThis = jsCast<JSHTMLBodyElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    HTMLBodyElement* impl = static_cast<HTMLBodyElement*>(castedThis->impl());
    if (EventListener* listener = impl->onstorage()) {
        if (const JSEventListener* jsListener = JSEventListener::cast(listener)) {
            if (JSObject* jsFunction = jsListener->jsFunction(impl->scriptExecutionContext()))
                return jsFunction;
        }
    }
    return jsNull();
}


JSValue jsHTMLBodyElementOnunload(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSHTMLBodyElement* castedThis = jsCast<JSHTMLBodyElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    HTMLBodyElement* impl = static_cast<HTMLBodyElement*>(castedThis->impl());
    if (EventListener* listener = impl->onunload()) {
        if (const JSEventListener* jsListener = JSEventListener::cast(listener)) {
            if (JSObject* jsFunction = jsListener->jsFunction(impl->scriptExecutionContext()))
                return jsFunction;
        }
    }
    return jsNull();
}


#if ENABLE(ORIENTATION_EVENTS)
JSValue jsHTMLBodyElementOnorientationchange(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSHTMLBodyElement* castedThis = jsCast<JSHTMLBodyElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    HTMLBodyElement* impl = static_cast<HTMLBodyElement*>(castedThis->impl());
    if (EventListener* listener = impl->onorientationchange()) {
        if (const JSEventListener* jsListener = JSEventListener::cast(listener)) {
            if (JSObject* jsFunction = jsListener->jsFunction(impl->scriptExecutionContext()))
                return jsFunction;
        }
    }
    return jsNull();
}

#endif

JSValue jsHTMLBodyElementOnblur(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSHTMLBodyElement* castedThis = jsCast<JSHTMLBodyElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    HTMLBodyElement* impl = static_cast<HTMLBodyElement*>(castedThis->impl());
    if (EventListener* listener = impl->onblur()) {
        if (const JSEventListener* jsListener = JSEventListener::cast(listener)) {
            if (JSObject* jsFunction = jsListener->jsFunction(impl->scriptExecutionContext()))
                return jsFunction;
        }
    }
    return jsNull();
}


JSValue jsHTMLBodyElementOnerror(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSHTMLBodyElement* castedThis = jsCast<JSHTMLBodyElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    HTMLBodyElement* impl = static_cast<HTMLBodyElement*>(castedThis->impl());
    if (EventListener* listener = impl->onerror()) {
        if (const JSEventListener* jsListener = JSEventListener::cast(listener)) {
            if (JSObject* jsFunction = jsListener->jsFunction(impl->scriptExecutionContext()))
                return jsFunction;
        }
    }
    return jsNull();
}


JSValue jsHTMLBodyElementOnfocus(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSHTMLBodyElement* castedThis = jsCast<JSHTMLBodyElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    HTMLBodyElement* impl = static_cast<HTMLBodyElement*>(castedThis->impl());
    if (EventListener* listener = impl->onfocus()) {
        if (const JSEventListener* jsListener = JSEventListener::cast(listener)) {
            if (JSObject* jsFunction = jsListener->jsFunction(impl->scriptExecutionContext()))
                return jsFunction;
        }
    }
    return jsNull();
}


JSValue jsHTMLBodyElementOnload(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSHTMLBodyElement* castedThis = jsCast<JSHTMLBodyElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    HTMLBodyElement* impl = static_cast<HTMLBodyElement*>(castedThis->impl());
    if (EventListener* listener = impl->onload()) {
        if (const JSEventListener* jsListener = JSEventListener::cast(listener)) {
            if (JSObject* jsFunction = jsListener->jsFunction(impl->scriptExecutionContext()))
                return jsFunction;
        }
    }
    return jsNull();
}


JSValue jsHTMLBodyElementConstructor(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSHTMLBodyElement* domObject = jsCast<JSHTMLBodyElement*>(asObject(slotBase));
    return JSHTMLBodyElement::getConstructor(exec, domObject->globalObject());
}

void JSHTMLBodyElement::put(JSCell* cell, ExecState* exec, PropertyName propertyName, JSValue value, PutPropertySlot& slot)
{
    JSHTMLBodyElement* thisObject = jsCast<JSHTMLBodyElement*>(cell);
    ASSERT_GC_OBJECT_INHERITS(thisObject, &s_info);
    lookupPut<JSHTMLBodyElement, Base>(exec, propertyName, value, &JSHTMLBodyElementTable, thisObject, slot);
}

void setJSHTMLBodyElementALink(ExecState* exec, JSObject* thisObject, JSValue value)
{
    UNUSED_PARAM(exec);
    JSHTMLBodyElement* castedThis = jsCast<JSHTMLBodyElement*>(thisObject);
    HTMLBodyElement* impl = static_cast<HTMLBodyElement*>(castedThis->impl());
    const String& nativeValue(valueToStringWithNullCheck(exec, value));
    if (exec->hadException())
        return;
    impl->setAttribute(WebCore::HTMLNames::alinkAttr, nativeValue);
}


void setJSHTMLBodyElementBackground(ExecState* exec, JSObject* thisObject, JSValue value)
{
    UNUSED_PARAM(exec);
    JSHTMLBodyElement* castedThis = jsCast<JSHTMLBodyElement*>(thisObject);
    HTMLBodyElement* impl = static_cast<HTMLBodyElement*>(castedThis->impl());
    const String& nativeValue(valueToStringWithNullCheck(exec, value));
    if (exec->hadException())
        return;
    impl->setAttribute(WebCore::HTMLNames::backgroundAttr, nativeValue);
}


void setJSHTMLBodyElementBgColor(ExecState* exec, JSObject* thisObject, JSValue value)
{
    UNUSED_PARAM(exec);
    JSHTMLBodyElement* castedThis = jsCast<JSHTMLBodyElement*>(thisObject);
    HTMLBodyElement* impl = static_cast<HTMLBodyElement*>(castedThis->impl());
    const String& nativeValue(valueToStringWithNullCheck(exec, value));
    if (exec->hadException())
        return;
    impl->setAttribute(WebCore::HTMLNames::bgcolorAttr, nativeValue);
}


void setJSHTMLBodyElementLink(ExecState* exec, JSObject* thisObject, JSValue value)
{
    UNUSED_PARAM(exec);
    JSHTMLBodyElement* castedThis = jsCast<JSHTMLBodyElement*>(thisObject);
    HTMLBodyElement* impl = static_cast<HTMLBodyElement*>(castedThis->impl());
    const String& nativeValue(valueToStringWithNullCheck(exec, value));
    if (exec->hadException())
        return;
    impl->setAttribute(WebCore::HTMLNames::linkAttr, nativeValue);
}


void setJSHTMLBodyElementText(ExecState* exec, JSObject* thisObject, JSValue value)
{
    UNUSED_PARAM(exec);
    JSHTMLBodyElement* castedThis = jsCast<JSHTMLBodyElement*>(thisObject);
    HTMLBodyElement* impl = static_cast<HTMLBodyElement*>(castedThis->impl());
    const String& nativeValue(valueToStringWithNullCheck(exec, value));
    if (exec->hadException())
        return;
    impl->setAttribute(WebCore::HTMLNames::textAttr, nativeValue);
}


void setJSHTMLBodyElementVLink(ExecState* exec, JSObject* thisObject, JSValue value)
{
    UNUSED_PARAM(exec);
    JSHTMLBodyElement* castedThis = jsCast<JSHTMLBodyElement*>(thisObject);
    HTMLBodyElement* impl = static_cast<HTMLBodyElement*>(castedThis->impl());
    const String& nativeValue(valueToStringWithNullCheck(exec, value));
    if (exec->hadException())
        return;
    impl->setAttribute(WebCore::HTMLNames::vlinkAttr, nativeValue);
}


void setJSHTMLBodyElementOnbeforeunload(ExecState* exec, JSObject* thisObject, JSValue value)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(exec);
    JSHTMLBodyElement* castedThis = jsCast<JSHTMLBodyElement*>(thisObject);
    JSDOMGlobalObject* globalObject = castedThis->globalObject();
    HTMLBodyElement* impl = static_cast<HTMLBodyElement*>(castedThis->impl());
    impl->setOnbeforeunload(createJSAttributeEventListener(exec, value, globalObject));
}


void setJSHTMLBodyElementOnhashchange(ExecState* exec, JSObject* thisObject, JSValue value)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(exec);
    JSHTMLBodyElement* castedThis = jsCast<JSHTMLBodyElement*>(thisObject);
    JSDOMGlobalObject* globalObject = castedThis->globalObject();
    HTMLBodyElement* impl = static_cast<HTMLBodyElement*>(castedThis->impl());
    impl->setOnhashchange(createJSAttributeEventListener(exec, value, globalObject));
}


void setJSHTMLBodyElementOnmessage(ExecState* exec, JSObject* thisObject, JSValue value)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(exec);
    JSHTMLBodyElement* castedThis = jsCast<JSHTMLBodyElement*>(thisObject);
    JSDOMGlobalObject* globalObject = castedThis->globalObject();
    HTMLBodyElement* impl = static_cast<HTMLBodyElement*>(castedThis->impl());
    impl->setOnmessage(createJSAttributeEventListener(exec, value, globalObject));
}


void setJSHTMLBodyElementOnoffline(ExecState* exec, JSObject* thisObject, JSValue value)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(exec);
    JSHTMLBodyElement* castedThis = jsCast<JSHTMLBodyElement*>(thisObject);
    JSDOMGlobalObject* globalObject = castedThis->globalObject();
    HTMLBodyElement* impl = static_cast<HTMLBodyElement*>(castedThis->impl());
    impl->setOnoffline(createJSAttributeEventListener(exec, value, globalObject));
}


void setJSHTMLBodyElementOnonline(ExecState* exec, JSObject* thisObject, JSValue value)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(exec);
    JSHTMLBodyElement* castedThis = jsCast<JSHTMLBodyElement*>(thisObject);
    JSDOMGlobalObject* globalObject = castedThis->globalObject();
    HTMLBodyElement* impl = static_cast<HTMLBodyElement*>(castedThis->impl());
    impl->setOnonline(createJSAttributeEventListener(exec, value, globalObject));
}


void setJSHTMLBodyElementOnpopstate(ExecState* exec, JSObject* thisObject, JSValue value)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(exec);
    JSHTMLBodyElement* castedThis = jsCast<JSHTMLBodyElement*>(thisObject);
    JSDOMGlobalObject* globalObject = castedThis->globalObject();
    HTMLBodyElement* impl = static_cast<HTMLBodyElement*>(castedThis->impl());
    impl->setOnpopstate(createJSAttributeEventListener(exec, value, globalObject));
}


void setJSHTMLBodyElementOnresize(ExecState* exec, JSObject* thisObject, JSValue value)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(exec);
    JSHTMLBodyElement* castedThis = jsCast<JSHTMLBodyElement*>(thisObject);
    JSDOMGlobalObject* globalObject = castedThis->globalObject();
    HTMLBodyElement* impl = static_cast<HTMLBodyElement*>(castedThis->impl());
    impl->setOnresize(createJSAttributeEventListener(exec, value, globalObject));
}


void setJSHTMLBodyElementOnstorage(ExecState* exec, JSObject* thisObject, JSValue value)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(exec);
    JSHTMLBodyElement* castedThis = jsCast<JSHTMLBodyElement*>(thisObject);
    JSDOMGlobalObject* globalObject = castedThis->globalObject();
    HTMLBodyElement* impl = static_cast<HTMLBodyElement*>(castedThis->impl());
    impl->setOnstorage(createJSAttributeEventListener(exec, value, globalObject));
}


void setJSHTMLBodyElementOnunload(ExecState* exec, JSObject* thisObject, JSValue value)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(exec);
    JSHTMLBodyElement* castedThis = jsCast<JSHTMLBodyElement*>(thisObject);
    JSDOMGlobalObject* globalObject = castedThis->globalObject();
    HTMLBodyElement* impl = static_cast<HTMLBodyElement*>(castedThis->impl());
    impl->setOnunload(createJSAttributeEventListener(exec, value, globalObject));
}


#if ENABLE(ORIENTATION_EVENTS)
void setJSHTMLBodyElementOnorientationchange(ExecState* exec, JSObject* thisObject, JSValue value)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(exec);
    JSHTMLBodyElement* castedThis = jsCast<JSHTMLBodyElement*>(thisObject);
    JSDOMGlobalObject* globalObject = castedThis->globalObject();
    HTMLBodyElement* impl = static_cast<HTMLBodyElement*>(castedThis->impl());
    impl->setOnorientationchange(createJSAttributeEventListener(exec, value, globalObject));
}

#endif

void setJSHTMLBodyElementOnblur(ExecState* exec, JSObject* thisObject, JSValue value)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(exec);
    JSHTMLBodyElement* castedThis = jsCast<JSHTMLBodyElement*>(thisObject);
    JSDOMGlobalObject* globalObject = castedThis->globalObject();
    HTMLBodyElement* impl = static_cast<HTMLBodyElement*>(castedThis->impl());
    impl->setOnblur(createJSAttributeEventListener(exec, value, globalObject));
}


void setJSHTMLBodyElementOnerror(ExecState* exec, JSObject* thisObject, JSValue value)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(exec);
    JSHTMLBodyElement* castedThis = jsCast<JSHTMLBodyElement*>(thisObject);
    JSDOMGlobalObject* globalObject = castedThis->globalObject();
    HTMLBodyElement* impl = static_cast<HTMLBodyElement*>(castedThis->impl());
    impl->setOnerror(createJSAttributeEventListener(exec, value, globalObject));
}


void setJSHTMLBodyElementOnfocus(ExecState* exec, JSObject* thisObject, JSValue value)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(exec);
    JSHTMLBodyElement* castedThis = jsCast<JSHTMLBodyElement*>(thisObject);
    JSDOMGlobalObject* globalObject = castedThis->globalObject();
    HTMLBodyElement* impl = static_cast<HTMLBodyElement*>(castedThis->impl());
    impl->setOnfocus(createJSAttributeEventListener(exec, value, globalObject));
}


void setJSHTMLBodyElementOnload(ExecState* exec, JSObject* thisObject, JSValue value)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(exec);
    JSHTMLBodyElement* castedThis = jsCast<JSHTMLBodyElement*>(thisObject);
    JSDOMGlobalObject* globalObject = castedThis->globalObject();
    HTMLBodyElement* impl = static_cast<HTMLBodyElement*>(castedThis->impl());
    impl->setOnload(createJSAttributeEventListener(exec, value, globalObject));
}


JSValue JSHTMLBodyElement::getConstructor(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSHTMLBodyElementConstructor>(exec, jsCast<JSDOMGlobalObject*>(globalObject));
}


}
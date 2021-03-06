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

#if ENABLE(VIDEO)

#include "JSHTMLVideoElement.h"

#include "ExceptionCode.h"
#include "HTMLNames.h"
#include "HTMLVideoElement.h"
#include "JSDOMBinding.h"
#include "KURL.h"
#include <runtime/Error.h>
#include <runtime/JSString.h>
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

/* Hash table */

static const HashTableValue JSHTMLVideoElementTableValues[] =
{
    { "width", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLVideoElementWidth), (intptr_t)setJSHTMLVideoElementWidth, NoIntrinsic },
    { "height", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLVideoElementHeight), (intptr_t)setJSHTMLVideoElementHeight, NoIntrinsic },
    { "videoWidth", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLVideoElementVideoWidth), (intptr_t)0, NoIntrinsic },
    { "videoHeight", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLVideoElementVideoHeight), (intptr_t)0, NoIntrinsic },
    { "poster", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLVideoElementPoster), (intptr_t)setJSHTMLVideoElementPoster, NoIntrinsic },
    { "webkitSupportsFullscreen", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLVideoElementWebkitSupportsFullscreen), (intptr_t)0, NoIntrinsic },
    { "webkitDisplayingFullscreen", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLVideoElementWebkitDisplayingFullscreen), (intptr_t)0, NoIntrinsic },
#if ENABLE(MEDIA_STATISTICS)
    { "webkitDecodedFrameCount", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLVideoElementWebkitDecodedFrameCount), (intptr_t)0, NoIntrinsic },
#endif
#if ENABLE(MEDIA_STATISTICS)
    { "webkitDroppedFrameCount", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLVideoElementWebkitDroppedFrameCount), (intptr_t)0, NoIntrinsic },
#endif
    { "constructor", DontEnum | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLVideoElementConstructor), (intptr_t)0, NoIntrinsic },
    { 0, 0, 0, 0, NoIntrinsic }
};

static const HashTable JSHTMLVideoElementTable = { 32, 31, JSHTMLVideoElementTableValues, 0 };
/* Hash table for constructor */

static const HashTableValue JSHTMLVideoElementConstructorTableValues[] =
{
    { 0, 0, 0, 0, NoIntrinsic }
};

static const HashTable JSHTMLVideoElementConstructorTable = { 1, 0, JSHTMLVideoElementConstructorTableValues, 0 };
const ClassInfo JSHTMLVideoElementConstructor::s_info = { "HTMLVideoElementConstructor", &Base::s_info, &JSHTMLVideoElementConstructorTable, 0, CREATE_METHOD_TABLE(JSHTMLVideoElementConstructor) };

JSHTMLVideoElementConstructor::JSHTMLVideoElementConstructor(Structure* structure, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(structure, globalObject)
{
}

void JSHTMLVideoElementConstructor::finishCreation(ExecState* exec, JSDOMGlobalObject* globalObject)
{
    Base::finishCreation(exec->vm());
    ASSERT(inherits(&s_info));
    putDirect(exec->vm(), exec->propertyNames().prototype, JSHTMLVideoElementPrototype::self(exec, globalObject), DontDelete | ReadOnly);
    putDirect(exec->vm(), exec->propertyNames().length, jsNumber(0), ReadOnly | DontDelete | DontEnum);
}

bool JSHTMLVideoElementConstructor::getOwnPropertySlot(JSCell* cell, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSHTMLVideoElementConstructor, JSDOMWrapper>(exec, &JSHTMLVideoElementConstructorTable, jsCast<JSHTMLVideoElementConstructor*>(cell), propertyName, slot);
}

bool JSHTMLVideoElementConstructor::getOwnPropertyDescriptor(JSObject* object, ExecState* exec, PropertyName propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSHTMLVideoElementConstructor, JSDOMWrapper>(exec, &JSHTMLVideoElementConstructorTable, jsCast<JSHTMLVideoElementConstructor*>(object), propertyName, descriptor);
}

/* Hash table for prototype */

static const HashTableValue JSHTMLVideoElementPrototypeTableValues[] =
{
    { "webkitEnterFullscreen", DontDelete | JSC::Function, (intptr_t)static_cast<NativeFunction>(jsHTMLVideoElementPrototypeFunctionWebkitEnterFullscreen), (intptr_t)0, NoIntrinsic },
    { "webkitExitFullscreen", DontDelete | JSC::Function, (intptr_t)static_cast<NativeFunction>(jsHTMLVideoElementPrototypeFunctionWebkitExitFullscreen), (intptr_t)0, NoIntrinsic },
    { "webkitEnterFullScreen", DontDelete | JSC::Function, (intptr_t)static_cast<NativeFunction>(jsHTMLVideoElementPrototypeFunctionWebkitEnterFullScreen), (intptr_t)0, NoIntrinsic },
    { "webkitExitFullScreen", DontDelete | JSC::Function, (intptr_t)static_cast<NativeFunction>(jsHTMLVideoElementPrototypeFunctionWebkitExitFullScreen), (intptr_t)0, NoIntrinsic },
    { 0, 0, 0, 0, NoIntrinsic }
};

static const HashTable JSHTMLVideoElementPrototypeTable = { 8, 7, JSHTMLVideoElementPrototypeTableValues, 0 };
const ClassInfo JSHTMLVideoElementPrototype::s_info = { "HTMLVideoElementPrototype", &Base::s_info, &JSHTMLVideoElementPrototypeTable, 0, CREATE_METHOD_TABLE(JSHTMLVideoElementPrototype) };

JSObject* JSHTMLVideoElementPrototype::self(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSHTMLVideoElement>(exec, globalObject);
}

bool JSHTMLVideoElementPrototype::getOwnPropertySlot(JSCell* cell, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    JSHTMLVideoElementPrototype* thisObject = jsCast<JSHTMLVideoElementPrototype*>(cell);
    return getStaticFunctionSlot<JSObject>(exec, &JSHTMLVideoElementPrototypeTable, thisObject, propertyName, slot);
}

bool JSHTMLVideoElementPrototype::getOwnPropertyDescriptor(JSObject* object, ExecState* exec, PropertyName propertyName, PropertyDescriptor& descriptor)
{
    JSHTMLVideoElementPrototype* thisObject = jsCast<JSHTMLVideoElementPrototype*>(object);
    return getStaticFunctionDescriptor<JSObject>(exec, &JSHTMLVideoElementPrototypeTable, thisObject, propertyName, descriptor);
}

const ClassInfo JSHTMLVideoElement::s_info = { "HTMLVideoElement", &Base::s_info, &JSHTMLVideoElementTable, 0 , CREATE_METHOD_TABLE(JSHTMLVideoElement) };

JSHTMLVideoElement::JSHTMLVideoElement(Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<HTMLVideoElement> impl)
    : JSHTMLMediaElement(structure, globalObject, impl)
{
}

void JSHTMLVideoElement::finishCreation(VM& vm)
{
    Base::finishCreation(vm);
    ASSERT(inherits(&s_info));
}

JSObject* JSHTMLVideoElement::createPrototype(ExecState* exec, JSGlobalObject* globalObject)
{
    return JSHTMLVideoElementPrototype::create(exec->vm(), globalObject, JSHTMLVideoElementPrototype::createStructure(exec->vm(), globalObject, JSHTMLMediaElementPrototype::self(exec, globalObject)));
}

bool JSHTMLVideoElement::getOwnPropertySlot(JSCell* cell, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    JSHTMLVideoElement* thisObject = jsCast<JSHTMLVideoElement*>(cell);
    ASSERT_GC_OBJECT_INHERITS(thisObject, &s_info);
    return getStaticValueSlot<JSHTMLVideoElement, Base>(exec, &JSHTMLVideoElementTable, thisObject, propertyName, slot);
}

bool JSHTMLVideoElement::getOwnPropertyDescriptor(JSObject* object, ExecState* exec, PropertyName propertyName, PropertyDescriptor& descriptor)
{
    JSHTMLVideoElement* thisObject = jsCast<JSHTMLVideoElement*>(object);
    ASSERT_GC_OBJECT_INHERITS(thisObject, &s_info);
    return getStaticValueDescriptor<JSHTMLVideoElement, Base>(exec, &JSHTMLVideoElementTable, thisObject, propertyName, descriptor);
}

JSValue jsHTMLVideoElementWidth(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSHTMLVideoElement* castedThis = jsCast<JSHTMLVideoElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    HTMLVideoElement* impl = static_cast<HTMLVideoElement*>(castedThis->impl());
    JSValue result = jsNumber(std::max(0, impl->getIntegralAttribute(WebCore::HTMLNames::widthAttr)));
    return result;
}


JSValue jsHTMLVideoElementHeight(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSHTMLVideoElement* castedThis = jsCast<JSHTMLVideoElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    HTMLVideoElement* impl = static_cast<HTMLVideoElement*>(castedThis->impl());
    JSValue result = jsNumber(std::max(0, impl->getIntegralAttribute(WebCore::HTMLNames::heightAttr)));
    return result;
}


JSValue jsHTMLVideoElementVideoWidth(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSHTMLVideoElement* castedThis = jsCast<JSHTMLVideoElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    HTMLVideoElement* impl = static_cast<HTMLVideoElement*>(castedThis->impl());
    JSValue result = jsNumber(impl->videoWidth());
    return result;
}


JSValue jsHTMLVideoElementVideoHeight(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSHTMLVideoElement* castedThis = jsCast<JSHTMLVideoElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    HTMLVideoElement* impl = static_cast<HTMLVideoElement*>(castedThis->impl());
    JSValue result = jsNumber(impl->videoHeight());
    return result;
}


JSValue jsHTMLVideoElementPoster(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSHTMLVideoElement* castedThis = jsCast<JSHTMLVideoElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    HTMLVideoElement* impl = static_cast<HTMLVideoElement*>(castedThis->impl());
    JSValue result = jsStringWithCache(exec, impl->getURLAttribute(WebCore::HTMLNames::posterAttr));
    return result;
}


JSValue jsHTMLVideoElementWebkitSupportsFullscreen(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSHTMLVideoElement* castedThis = jsCast<JSHTMLVideoElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    HTMLVideoElement* impl = static_cast<HTMLVideoElement*>(castedThis->impl());
    JSValue result = jsBoolean(impl->webkitSupportsFullscreen());
    return result;
}


JSValue jsHTMLVideoElementWebkitDisplayingFullscreen(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSHTMLVideoElement* castedThis = jsCast<JSHTMLVideoElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    HTMLVideoElement* impl = static_cast<HTMLVideoElement*>(castedThis->impl());
    JSValue result = jsBoolean(impl->webkitDisplayingFullscreen());
    return result;
}


#if ENABLE(MEDIA_STATISTICS)
JSValue jsHTMLVideoElementWebkitDecodedFrameCount(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSHTMLVideoElement* castedThis = jsCast<JSHTMLVideoElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    HTMLVideoElement* impl = static_cast<HTMLVideoElement*>(castedThis->impl());
    JSValue result = jsNumber(impl->webkitDecodedFrameCount());
    return result;
}

#endif

#if ENABLE(MEDIA_STATISTICS)
JSValue jsHTMLVideoElementWebkitDroppedFrameCount(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSHTMLVideoElement* castedThis = jsCast<JSHTMLVideoElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    HTMLVideoElement* impl = static_cast<HTMLVideoElement*>(castedThis->impl());
    JSValue result = jsNumber(impl->webkitDroppedFrameCount());
    return result;
}

#endif

JSValue jsHTMLVideoElementConstructor(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSHTMLVideoElement* domObject = jsCast<JSHTMLVideoElement*>(asObject(slotBase));
    return JSHTMLVideoElement::getConstructor(exec, domObject->globalObject());
}

void JSHTMLVideoElement::put(JSCell* cell, ExecState* exec, PropertyName propertyName, JSValue value, PutPropertySlot& slot)
{
    JSHTMLVideoElement* thisObject = jsCast<JSHTMLVideoElement*>(cell);
    ASSERT_GC_OBJECT_INHERITS(thisObject, &s_info);
    lookupPut<JSHTMLVideoElement, Base>(exec, propertyName, value, &JSHTMLVideoElementTable, thisObject, slot);
}

void setJSHTMLVideoElementWidth(ExecState* exec, JSObject* thisObject, JSValue value)
{
    UNUSED_PARAM(exec);
    JSHTMLVideoElement* castedThis = jsCast<JSHTMLVideoElement*>(thisObject);
    HTMLVideoElement* impl = static_cast<HTMLVideoElement*>(castedThis->impl());
    unsigned nativeValue(toUInt32(exec, value, NormalConversion));
    if (exec->hadException())
        return;
    impl->setUnsignedIntegralAttribute(WebCore::HTMLNames::widthAttr, nativeValue);
}


void setJSHTMLVideoElementHeight(ExecState* exec, JSObject* thisObject, JSValue value)
{
    UNUSED_PARAM(exec);
    JSHTMLVideoElement* castedThis = jsCast<JSHTMLVideoElement*>(thisObject);
    HTMLVideoElement* impl = static_cast<HTMLVideoElement*>(castedThis->impl());
    unsigned nativeValue(toUInt32(exec, value, NormalConversion));
    if (exec->hadException())
        return;
    impl->setUnsignedIntegralAttribute(WebCore::HTMLNames::heightAttr, nativeValue);
}


void setJSHTMLVideoElementPoster(ExecState* exec, JSObject* thisObject, JSValue value)
{
    UNUSED_PARAM(exec);
    JSHTMLVideoElement* castedThis = jsCast<JSHTMLVideoElement*>(thisObject);
    HTMLVideoElement* impl = static_cast<HTMLVideoElement*>(castedThis->impl());
    const String& nativeValue(valueToStringWithNullCheck(exec, value));
    if (exec->hadException())
        return;
    impl->setAttribute(WebCore::HTMLNames::posterAttr, nativeValue);
}


JSValue JSHTMLVideoElement::getConstructor(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSHTMLVideoElementConstructor>(exec, jsCast<JSDOMGlobalObject*>(globalObject));
}

EncodedJSValue JSC_HOST_CALL jsHTMLVideoElementPrototypeFunctionWebkitEnterFullscreen(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSHTMLVideoElement::s_info))
        return throwVMTypeError(exec);
    JSHTMLVideoElement* castedThis = jsCast<JSHTMLVideoElement*>(asObject(thisValue));
    ASSERT_GC_OBJECT_INHERITS(castedThis, &JSHTMLVideoElement::s_info);
    HTMLVideoElement* impl = static_cast<HTMLVideoElement*>(castedThis->impl());
    ExceptionCode ec = 0;
    impl->webkitEnterFullscreen(ec);
    setDOMException(exec, ec);
    return JSValue::encode(jsUndefined());
}

EncodedJSValue JSC_HOST_CALL jsHTMLVideoElementPrototypeFunctionWebkitExitFullscreen(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSHTMLVideoElement::s_info))
        return throwVMTypeError(exec);
    JSHTMLVideoElement* castedThis = jsCast<JSHTMLVideoElement*>(asObject(thisValue));
    ASSERT_GC_OBJECT_INHERITS(castedThis, &JSHTMLVideoElement::s_info);
    HTMLVideoElement* impl = static_cast<HTMLVideoElement*>(castedThis->impl());
    impl->webkitExitFullscreen();
    return JSValue::encode(jsUndefined());
}

EncodedJSValue JSC_HOST_CALL jsHTMLVideoElementPrototypeFunctionWebkitEnterFullScreen(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSHTMLVideoElement::s_info))
        return throwVMTypeError(exec);
    JSHTMLVideoElement* castedThis = jsCast<JSHTMLVideoElement*>(asObject(thisValue));
    ASSERT_GC_OBJECT_INHERITS(castedThis, &JSHTMLVideoElement::s_info);
    HTMLVideoElement* impl = static_cast<HTMLVideoElement*>(castedThis->impl());
    ExceptionCode ec = 0;
    impl->webkitEnterFullScreen(ec);
    setDOMException(exec, ec);
    return JSValue::encode(jsUndefined());
}

EncodedJSValue JSC_HOST_CALL jsHTMLVideoElementPrototypeFunctionWebkitExitFullScreen(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSHTMLVideoElement::s_info))
        return throwVMTypeError(exec);
    JSHTMLVideoElement* castedThis = jsCast<JSHTMLVideoElement*>(asObject(thisValue));
    ASSERT_GC_OBJECT_INHERITS(castedThis, &JSHTMLVideoElement::s_info);
    HTMLVideoElement* impl = static_cast<HTMLVideoElement*>(castedThis->impl());
    impl->webkitExitFullScreen();
    return JSValue::encode(jsUndefined());
}

static inline bool isObservable(JSHTMLVideoElement* jsHTMLVideoElement)
{
    if (jsHTMLVideoElement->hasCustomProperties())
        return true;
    return false;
}

bool JSHTMLVideoElementOwner::isReachableFromOpaqueRoots(JSC::Handle<JSC::Unknown> handle, void*, SlotVisitor& visitor)
{
    JSHTMLVideoElement* jsHTMLVideoElement = jsCast<JSHTMLVideoElement*>(handle.get().asCell());
    if (jsHTMLVideoElement->impl()->hasPendingActivity())
        return true;
    if (jsHTMLVideoElement->impl()->isFiringEventListeners())
        return true;
    if (JSNodeOwner::isReachableFromOpaqueRoots(handle, 0, visitor))
        return true;
    if (!isObservable(jsHTMLVideoElement))
        return false;
    UNUSED_PARAM(visitor);
    return false;
}

void JSHTMLVideoElementOwner::finalize(JSC::Handle<JSC::Unknown> handle, void* context)
{
    JSHTMLVideoElement* jsHTMLVideoElement = jsCast<JSHTMLVideoElement*>(handle.get().asCell());
    DOMWrapperWorld* world = static_cast<DOMWrapperWorld*>(context);
    uncacheWrapper(world, jsHTMLVideoElement->impl(), jsHTMLVideoElement);
    jsHTMLVideoElement->releaseImpl();
}

HTMLVideoElement* toHTMLVideoElement(JSC::JSValue value)
{
    return value.inherits(&JSHTMLVideoElement::s_info) ? jsCast<JSHTMLVideoElement*>(asObject(value))->impl() : 0;
}

}

#endif // ENABLE(VIDEO)

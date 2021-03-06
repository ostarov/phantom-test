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
#include "JSHTMLFormElement.h"

#include "ExceptionCode.h"
#include "HTMLCollection.h"
#include "HTMLFormElement.h"
#include "HTMLNames.h"
#include "JSDOMBinding.h"
#include "JSHTMLCollection.h"
#include "KURL.h"
#include "wtf/text/AtomicString.h"
#include <runtime/Error.h>
#include <runtime/JSString.h>
#include <runtime/PropertyNameArray.h>
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

/* Hash table */

static const HashTableValue JSHTMLFormElementTableValues[] =
{
    { "acceptCharset", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLFormElementAcceptCharset), (intptr_t)setJSHTMLFormElementAcceptCharset, NoIntrinsic },
    { "action", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLFormElementAction), (intptr_t)setJSHTMLFormElementAction, NoIntrinsic },
    { "autocomplete", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLFormElementAutocomplete), (intptr_t)setJSHTMLFormElementAutocomplete, NoIntrinsic },
    { "enctype", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLFormElementEnctype), (intptr_t)setJSHTMLFormElementEnctype, NoIntrinsic },
    { "encoding", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLFormElementEncoding), (intptr_t)setJSHTMLFormElementEncoding, NoIntrinsic },
    { "method", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLFormElementMethod), (intptr_t)setJSHTMLFormElementMethod, NoIntrinsic },
    { "name", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLFormElementName), (intptr_t)setJSHTMLFormElementName, NoIntrinsic },
    { "noValidate", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLFormElementNoValidate), (intptr_t)setJSHTMLFormElementNoValidate, NoIntrinsic },
    { "target", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLFormElementTarget), (intptr_t)setJSHTMLFormElementTarget, NoIntrinsic },
    { "elements", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLFormElementElements), (intptr_t)0, NoIntrinsic },
    { "length", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLFormElementLength), (intptr_t)0, NoIntrinsic },
    { "constructor", DontEnum | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLFormElementConstructor), (intptr_t)0, NoIntrinsic },
    { 0, 0, 0, 0, NoIntrinsic }
};

static const HashTable JSHTMLFormElementTable = { 35, 31, JSHTMLFormElementTableValues, 0 };
/* Hash table for constructor */

static const HashTableValue JSHTMLFormElementConstructorTableValues[] =
{
    { 0, 0, 0, 0, NoIntrinsic }
};

static const HashTable JSHTMLFormElementConstructorTable = { 1, 0, JSHTMLFormElementConstructorTableValues, 0 };
const ClassInfo JSHTMLFormElementConstructor::s_info = { "HTMLFormElementConstructor", &Base::s_info, &JSHTMLFormElementConstructorTable, 0, CREATE_METHOD_TABLE(JSHTMLFormElementConstructor) };

JSHTMLFormElementConstructor::JSHTMLFormElementConstructor(Structure* structure, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(structure, globalObject)
{
}

void JSHTMLFormElementConstructor::finishCreation(ExecState* exec, JSDOMGlobalObject* globalObject)
{
    Base::finishCreation(exec->vm());
    ASSERT(inherits(&s_info));
    putDirect(exec->vm(), exec->propertyNames().prototype, JSHTMLFormElementPrototype::self(exec, globalObject), DontDelete | ReadOnly);
    putDirect(exec->vm(), exec->propertyNames().length, jsNumber(0), ReadOnly | DontDelete | DontEnum);
}

bool JSHTMLFormElementConstructor::getOwnPropertySlot(JSCell* cell, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSHTMLFormElementConstructor, JSDOMWrapper>(exec, &JSHTMLFormElementConstructorTable, jsCast<JSHTMLFormElementConstructor*>(cell), propertyName, slot);
}

bool JSHTMLFormElementConstructor::getOwnPropertyDescriptor(JSObject* object, ExecState* exec, PropertyName propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSHTMLFormElementConstructor, JSDOMWrapper>(exec, &JSHTMLFormElementConstructorTable, jsCast<JSHTMLFormElementConstructor*>(object), propertyName, descriptor);
}

/* Hash table for prototype */

static const HashTableValue JSHTMLFormElementPrototypeTableValues[] =
{
    { "submit", DontDelete | JSC::Function, (intptr_t)static_cast<NativeFunction>(jsHTMLFormElementPrototypeFunctionSubmit), (intptr_t)0, NoIntrinsic },
    { "reset", DontDelete | JSC::Function, (intptr_t)static_cast<NativeFunction>(jsHTMLFormElementPrototypeFunctionReset), (intptr_t)0, NoIntrinsic },
    { "checkValidity", DontDelete | JSC::Function, (intptr_t)static_cast<NativeFunction>(jsHTMLFormElementPrototypeFunctionCheckValidity), (intptr_t)0, NoIntrinsic },
    { 0, 0, 0, 0, NoIntrinsic }
};

static const HashTable JSHTMLFormElementPrototypeTable = { 9, 7, JSHTMLFormElementPrototypeTableValues, 0 };
const ClassInfo JSHTMLFormElementPrototype::s_info = { "HTMLFormElementPrototype", &Base::s_info, &JSHTMLFormElementPrototypeTable, 0, CREATE_METHOD_TABLE(JSHTMLFormElementPrototype) };

JSObject* JSHTMLFormElementPrototype::self(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSHTMLFormElement>(exec, globalObject);
}

bool JSHTMLFormElementPrototype::getOwnPropertySlot(JSCell* cell, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    JSHTMLFormElementPrototype* thisObject = jsCast<JSHTMLFormElementPrototype*>(cell);
    return getStaticFunctionSlot<JSObject>(exec, &JSHTMLFormElementPrototypeTable, thisObject, propertyName, slot);
}

bool JSHTMLFormElementPrototype::getOwnPropertyDescriptor(JSObject* object, ExecState* exec, PropertyName propertyName, PropertyDescriptor& descriptor)
{
    JSHTMLFormElementPrototype* thisObject = jsCast<JSHTMLFormElementPrototype*>(object);
    return getStaticFunctionDescriptor<JSObject>(exec, &JSHTMLFormElementPrototypeTable, thisObject, propertyName, descriptor);
}

const ClassInfo JSHTMLFormElement::s_info = { "HTMLFormElement", &Base::s_info, &JSHTMLFormElementTable, 0 , CREATE_METHOD_TABLE(JSHTMLFormElement) };

JSHTMLFormElement::JSHTMLFormElement(Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<HTMLFormElement> impl)
    : JSHTMLElement(structure, globalObject, impl)
{
}

void JSHTMLFormElement::finishCreation(VM& vm)
{
    Base::finishCreation(vm);
    ASSERT(inherits(&s_info));
}

JSObject* JSHTMLFormElement::createPrototype(ExecState* exec, JSGlobalObject* globalObject)
{
    return JSHTMLFormElementPrototype::create(exec->vm(), globalObject, JSHTMLFormElementPrototype::createStructure(exec->vm(), globalObject, JSHTMLElementPrototype::self(exec, globalObject)));
}

bool JSHTMLFormElement::getOwnPropertySlot(JSCell* cell, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    JSHTMLFormElement* thisObject = jsCast<JSHTMLFormElement*>(cell);
    ASSERT_GC_OBJECT_INHERITS(thisObject, &s_info);
    unsigned index = propertyName.asIndex();
    if (index != PropertyName::NotAnIndex && index < static_cast<HTMLFormElement*>(thisObject->impl())->length()) {
        slot.setCustomIndex(thisObject, index, indexGetter);
        return true;
    }
    if (canGetItemsForName(exec, static_cast<HTMLFormElement*>(thisObject->impl()), propertyName)) {
        slot.setCustom(thisObject, thisObject->nameGetter);
        return true;
    }
    const HashEntry* entry = getStaticValueSlotEntryWithoutCaching<JSHTMLFormElement>(exec, propertyName);
    if (entry) {
        slot.setCustom(thisObject, entry->propertyGetter());
        return true;
    }
    return getStaticValueSlot<JSHTMLFormElement, Base>(exec, &JSHTMLFormElementTable, thisObject, propertyName, slot);
}

bool JSHTMLFormElement::getOwnPropertyDescriptor(JSObject* object, ExecState* exec, PropertyName propertyName, PropertyDescriptor& descriptor)
{
    JSHTMLFormElement* thisObject = jsCast<JSHTMLFormElement*>(object);
    ASSERT_GC_OBJECT_INHERITS(thisObject, &s_info);
    unsigned index = propertyName.asIndex();
    if (index != PropertyName::NotAnIndex && index < static_cast<HTMLFormElement*>(thisObject->impl())->length()) {
        PropertySlot slot;
        slot.setCustomIndex(thisObject, index, indexGetter);
        descriptor.setDescriptor(slot.getValue(exec, propertyName), DontDelete | ReadOnly);
        return true;
    }
    if (canGetItemsForName(exec, static_cast<HTMLFormElement*>(thisObject->impl()), propertyName)) {
        PropertySlot slot;
        slot.setCustom(thisObject, nameGetter);
        descriptor.setDescriptor(slot.getValue(exec, propertyName), ReadOnly | DontDelete | DontEnum);
        return true;
    }
    const HashEntry* entry = JSHTMLFormElementTable.entry(exec, propertyName);
    if (entry) {
        PropertySlot slot;
        slot.setCustom(thisObject, entry->propertyGetter());
        descriptor.setDescriptor(slot.getValue(exec, propertyName), entry->attributes());
        return true;
    }
    return getStaticValueDescriptor<JSHTMLFormElement, Base>(exec, &JSHTMLFormElementTable, thisObject, propertyName, descriptor);
}

bool JSHTMLFormElement::getOwnPropertySlotByIndex(JSCell* cell, ExecState* exec, unsigned index, PropertySlot& slot)
{
    JSHTMLFormElement* thisObject = jsCast<JSHTMLFormElement*>(cell);
    ASSERT_GC_OBJECT_INHERITS(thisObject, &s_info);
    if (index < static_cast<HTMLFormElement*>(thisObject->impl())->length()) {
        slot.setCustomIndex(thisObject, index, thisObject->indexGetter);
        return true;
    }
    PropertyName propertyName = Identifier::from(exec, index);
    if (canGetItemsForName(exec, static_cast<HTMLFormElement*>(thisObject->impl()), propertyName)) {
        slot.setCustom(thisObject, thisObject->nameGetter);
        return true;
    }
    return Base::getOwnPropertySlotByIndex(thisObject, exec, index, slot);
}

JSValue jsHTMLFormElementAcceptCharset(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSHTMLFormElement* castedThis = jsCast<JSHTMLFormElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    HTMLFormElement* impl = static_cast<HTMLFormElement*>(castedThis->impl());
    JSValue result = jsStringWithCache(exec, impl->fastGetAttribute(WebCore::HTMLNames::accept_charsetAttr));
    return result;
}


JSValue jsHTMLFormElementAction(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSHTMLFormElement* castedThis = jsCast<JSHTMLFormElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    HTMLFormElement* impl = static_cast<HTMLFormElement*>(castedThis->impl());
    JSValue result = jsStringWithCache(exec, impl->getURLAttribute(WebCore::HTMLNames::actionAttr));
    return result;
}


JSValue jsHTMLFormElementAutocomplete(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSHTMLFormElement* castedThis = jsCast<JSHTMLFormElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    HTMLFormElement* impl = static_cast<HTMLFormElement*>(castedThis->impl());
    JSValue result = jsStringWithCache(exec, impl->fastGetAttribute(WebCore::HTMLNames::autocompleteAttr));
    return result;
}


JSValue jsHTMLFormElementEnctype(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSHTMLFormElement* castedThis = jsCast<JSHTMLFormElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    HTMLFormElement* impl = static_cast<HTMLFormElement*>(castedThis->impl());
    JSValue result = jsStringWithCache(exec, impl->enctype());
    return result;
}


JSValue jsHTMLFormElementEncoding(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSHTMLFormElement* castedThis = jsCast<JSHTMLFormElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    HTMLFormElement* impl = static_cast<HTMLFormElement*>(castedThis->impl());
    JSValue result = jsStringWithCache(exec, impl->encoding());
    return result;
}


JSValue jsHTMLFormElementMethod(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSHTMLFormElement* castedThis = jsCast<JSHTMLFormElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    HTMLFormElement* impl = static_cast<HTMLFormElement*>(castedThis->impl());
    JSValue result = jsStringWithCache(exec, impl->method());
    return result;
}


JSValue jsHTMLFormElementName(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSHTMLFormElement* castedThis = jsCast<JSHTMLFormElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    HTMLFormElement* impl = static_cast<HTMLFormElement*>(castedThis->impl());
    JSValue result = jsStringWithCache(exec, impl->getNameAttribute());
    return result;
}


JSValue jsHTMLFormElementNoValidate(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSHTMLFormElement* castedThis = jsCast<JSHTMLFormElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    HTMLFormElement* impl = static_cast<HTMLFormElement*>(castedThis->impl());
    JSValue result = jsBoolean(impl->fastHasAttribute(WebCore::HTMLNames::novalidateAttr));
    return result;
}


JSValue jsHTMLFormElementTarget(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSHTMLFormElement* castedThis = jsCast<JSHTMLFormElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    HTMLFormElement* impl = static_cast<HTMLFormElement*>(castedThis->impl());
    JSValue result = jsStringWithCache(exec, impl->fastGetAttribute(WebCore::HTMLNames::targetAttr));
    return result;
}


JSValue jsHTMLFormElementElements(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSHTMLFormElement* castedThis = jsCast<JSHTMLFormElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    HTMLFormElement* impl = static_cast<HTMLFormElement*>(castedThis->impl());
    JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(impl->elements()));
    return result;
}


JSValue jsHTMLFormElementLength(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSHTMLFormElement* castedThis = jsCast<JSHTMLFormElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    HTMLFormElement* impl = static_cast<HTMLFormElement*>(castedThis->impl());
    JSValue result = jsNumber(impl->length());
    return result;
}


JSValue jsHTMLFormElementConstructor(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSHTMLFormElement* domObject = jsCast<JSHTMLFormElement*>(asObject(slotBase));
    return JSHTMLFormElement::getConstructor(exec, domObject->globalObject());
}

void JSHTMLFormElement::put(JSCell* cell, ExecState* exec, PropertyName propertyName, JSValue value, PutPropertySlot& slot)
{
    JSHTMLFormElement* thisObject = jsCast<JSHTMLFormElement*>(cell);
    ASSERT_GC_OBJECT_INHERITS(thisObject, &s_info);
    lookupPut<JSHTMLFormElement, Base>(exec, propertyName, value, &JSHTMLFormElementTable, thisObject, slot);
}

void setJSHTMLFormElementAcceptCharset(ExecState* exec, JSObject* thisObject, JSValue value)
{
    UNUSED_PARAM(exec);
    JSHTMLFormElement* castedThis = jsCast<JSHTMLFormElement*>(thisObject);
    HTMLFormElement* impl = static_cast<HTMLFormElement*>(castedThis->impl());
    const String& nativeValue(valueToStringWithNullCheck(exec, value));
    if (exec->hadException())
        return;
    impl->setAttribute(WebCore::HTMLNames::accept_charsetAttr, nativeValue);
}


void setJSHTMLFormElementAction(ExecState* exec, JSObject* thisObject, JSValue value)
{
    UNUSED_PARAM(exec);
    JSHTMLFormElement* castedThis = jsCast<JSHTMLFormElement*>(thisObject);
    HTMLFormElement* impl = static_cast<HTMLFormElement*>(castedThis->impl());
    const String& nativeValue(valueToStringWithNullCheck(exec, value));
    if (exec->hadException())
        return;
    impl->setAttribute(WebCore::HTMLNames::actionAttr, nativeValue);
}


void setJSHTMLFormElementAutocomplete(ExecState* exec, JSObject* thisObject, JSValue value)
{
    UNUSED_PARAM(exec);
    JSHTMLFormElement* castedThis = jsCast<JSHTMLFormElement*>(thisObject);
    HTMLFormElement* impl = static_cast<HTMLFormElement*>(castedThis->impl());
    const String& nativeValue(valueToStringWithNullCheck(exec, value));
    if (exec->hadException())
        return;
    impl->setAttribute(WebCore::HTMLNames::autocompleteAttr, nativeValue);
}


void setJSHTMLFormElementEnctype(ExecState* exec, JSObject* thisObject, JSValue value)
{
    UNUSED_PARAM(exec);
    JSHTMLFormElement* castedThis = jsCast<JSHTMLFormElement*>(thisObject);
    HTMLFormElement* impl = static_cast<HTMLFormElement*>(castedThis->impl());
    const String& nativeValue(valueToStringWithNullCheck(exec, value));
    if (exec->hadException())
        return;
    impl->setEnctype(nativeValue);
}


void setJSHTMLFormElementEncoding(ExecState* exec, JSObject* thisObject, JSValue value)
{
    UNUSED_PARAM(exec);
    JSHTMLFormElement* castedThis = jsCast<JSHTMLFormElement*>(thisObject);
    HTMLFormElement* impl = static_cast<HTMLFormElement*>(castedThis->impl());
    const String& nativeValue(valueToStringWithNullCheck(exec, value));
    if (exec->hadException())
        return;
    impl->setEncoding(nativeValue);
}


void setJSHTMLFormElementMethod(ExecState* exec, JSObject* thisObject, JSValue value)
{
    UNUSED_PARAM(exec);
    JSHTMLFormElement* castedThis = jsCast<JSHTMLFormElement*>(thisObject);
    HTMLFormElement* impl = static_cast<HTMLFormElement*>(castedThis->impl());
    const String& nativeValue(valueToStringWithNullCheck(exec, value));
    if (exec->hadException())
        return;
    impl->setMethod(nativeValue);
}


void setJSHTMLFormElementName(ExecState* exec, JSObject* thisObject, JSValue value)
{
    UNUSED_PARAM(exec);
    JSHTMLFormElement* castedThis = jsCast<JSHTMLFormElement*>(thisObject);
    HTMLFormElement* impl = static_cast<HTMLFormElement*>(castedThis->impl());
    const String& nativeValue(valueToStringWithNullCheck(exec, value));
    if (exec->hadException())
        return;
    impl->setAttribute(WebCore::HTMLNames::nameAttr, nativeValue);
}


void setJSHTMLFormElementNoValidate(ExecState* exec, JSObject* thisObject, JSValue value)
{
    UNUSED_PARAM(exec);
    JSHTMLFormElement* castedThis = jsCast<JSHTMLFormElement*>(thisObject);
    HTMLFormElement* impl = static_cast<HTMLFormElement*>(castedThis->impl());
    bool nativeValue(value.toBoolean(exec));
    if (exec->hadException())
        return;
    impl->setBooleanAttribute(WebCore::HTMLNames::novalidateAttr, nativeValue);
}


void setJSHTMLFormElementTarget(ExecState* exec, JSObject* thisObject, JSValue value)
{
    UNUSED_PARAM(exec);
    JSHTMLFormElement* castedThis = jsCast<JSHTMLFormElement*>(thisObject);
    HTMLFormElement* impl = static_cast<HTMLFormElement*>(castedThis->impl());
    const String& nativeValue(valueToStringWithNullCheck(exec, value));
    if (exec->hadException())
        return;
    impl->setAttribute(WebCore::HTMLNames::targetAttr, nativeValue);
}


void JSHTMLFormElement::getOwnPropertyNames(JSObject* object, ExecState* exec, PropertyNameArray& propertyNames, EnumerationMode mode)
{
    JSHTMLFormElement* thisObject = jsCast<JSHTMLFormElement*>(object);
    ASSERT_GC_OBJECT_INHERITS(thisObject, &s_info);
    for (unsigned i = 0; i < static_cast<HTMLFormElement*>(thisObject->impl())->length(); ++i)
        propertyNames.add(Identifier::from(exec, i));
     Base::getOwnPropertyNames(thisObject, exec, propertyNames, mode);
}

JSValue JSHTMLFormElement::getConstructor(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSHTMLFormElementConstructor>(exec, jsCast<JSDOMGlobalObject*>(globalObject));
}

EncodedJSValue JSC_HOST_CALL jsHTMLFormElementPrototypeFunctionSubmit(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSHTMLFormElement::s_info))
        return throwVMTypeError(exec);
    JSHTMLFormElement* castedThis = jsCast<JSHTMLFormElement*>(asObject(thisValue));
    ASSERT_GC_OBJECT_INHERITS(castedThis, &JSHTMLFormElement::s_info);
    HTMLFormElement* impl = static_cast<HTMLFormElement*>(castedThis->impl());
    impl->submitFromJavaScript();
    return JSValue::encode(jsUndefined());
}

EncodedJSValue JSC_HOST_CALL jsHTMLFormElementPrototypeFunctionReset(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSHTMLFormElement::s_info))
        return throwVMTypeError(exec);
    JSHTMLFormElement* castedThis = jsCast<JSHTMLFormElement*>(asObject(thisValue));
    ASSERT_GC_OBJECT_INHERITS(castedThis, &JSHTMLFormElement::s_info);
    HTMLFormElement* impl = static_cast<HTMLFormElement*>(castedThis->impl());
    impl->reset();
    return JSValue::encode(jsUndefined());
}

EncodedJSValue JSC_HOST_CALL jsHTMLFormElementPrototypeFunctionCheckValidity(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSHTMLFormElement::s_info))
        return throwVMTypeError(exec);
    JSHTMLFormElement* castedThis = jsCast<JSHTMLFormElement*>(asObject(thisValue));
    ASSERT_GC_OBJECT_INHERITS(castedThis, &JSHTMLFormElement::s_info);
    HTMLFormElement* impl = static_cast<HTMLFormElement*>(castedThis->impl());

    JSC::JSValue result = jsBoolean(impl->checkValidity());
    return JSValue::encode(result);
}


JSValue JSHTMLFormElement::indexGetter(ExecState* exec, JSValue slotBase, unsigned index)
{
    JSHTMLFormElement* thisObj = jsCast<JSHTMLFormElement*>(asObject(slotBase));
    ASSERT_GC_OBJECT_INHERITS(thisObj, &s_info);
    return toJS(exec, thisObj->globalObject(), static_cast<HTMLFormElement*>(thisObj->impl())->item(index));
}


}

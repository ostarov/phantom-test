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
#include "JSHashChangeEvent.h"

#include "ExceptionCode.h"
#include "HashChangeEvent.h"
#include "JSDOMBinding.h"
#include "JSDictionary.h"
#include "KURL.h"
#include <runtime/Error.h>
#include <runtime/JSString.h>
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

/* Hash table */

static const HashTableValue JSHashChangeEventTableValues[] =
{
    { "oldURL", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHashChangeEventOldURL), (intptr_t)0, NoIntrinsic },
    { "newURL", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHashChangeEventNewURL), (intptr_t)0, NoIntrinsic },
    { "constructor", DontEnum | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHashChangeEventConstructor), (intptr_t)0, NoIntrinsic },
    { 0, 0, 0, 0, NoIntrinsic }
};

static const HashTable JSHashChangeEventTable = { 8, 7, JSHashChangeEventTableValues, 0 };
/* Hash table for constructor */

static const HashTableValue JSHashChangeEventConstructorTableValues[] =
{
    { 0, 0, 0, 0, NoIntrinsic }
};

static const HashTable JSHashChangeEventConstructorTable = { 1, 0, JSHashChangeEventConstructorTableValues, 0 };
EncodedJSValue JSC_HOST_CALL JSHashChangeEventConstructor::constructJSHashChangeEvent(ExecState* exec)
{
    JSHashChangeEventConstructor* jsConstructor = jsCast<JSHashChangeEventConstructor*>(exec->callee());

    ScriptExecutionContext* executionContext = jsConstructor->scriptExecutionContext();
    if (!executionContext)
        return throwVMError(exec, createReferenceError(exec, "Constructor associated execution context is unavailable"));

    AtomicString eventType = exec->argument(0).toString(exec)->value(exec);
    if (exec->hadException())
        return JSValue::encode(jsUndefined());

    HashChangeEventInit eventInit;

    JSValue initializerValue = exec->argument(1);
    if (!initializerValue.isUndefinedOrNull()) {
        // Given the above test, this will always yield an object.
        JSObject* initializerObject = initializerValue.toObject(exec);

        // Create the dictionary wrapper from the initializer object.
        JSDictionary dictionary(exec, initializerObject);

        // Attempt to fill in the EventInit.
        if (!fillHashChangeEventInit(eventInit, dictionary))
            return JSValue::encode(jsUndefined());
    }

    RefPtr<HashChangeEvent> event = HashChangeEvent::create(eventType, eventInit);
    return JSValue::encode(toJS(exec, jsConstructor->globalObject(), event.get()));
}

bool fillHashChangeEventInit(HashChangeEventInit& eventInit, JSDictionary& dictionary)
{
    if (!fillEventInit(eventInit, dictionary))
        return false;

    if (!dictionary.tryGetProperty("oldURL", eventInit.oldURL))
        return false;
    if (!dictionary.tryGetProperty("newURL", eventInit.newURL))
        return false;
    return true;
}

const ClassInfo JSHashChangeEventConstructor::s_info = { "HashChangeEventConstructor", &Base::s_info, &JSHashChangeEventConstructorTable, 0, CREATE_METHOD_TABLE(JSHashChangeEventConstructor) };

JSHashChangeEventConstructor::JSHashChangeEventConstructor(Structure* structure, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(structure, globalObject)
{
}

void JSHashChangeEventConstructor::finishCreation(ExecState* exec, JSDOMGlobalObject* globalObject)
{
    Base::finishCreation(exec->vm());
    ASSERT(inherits(&s_info));
    putDirect(exec->vm(), exec->propertyNames().prototype, JSHashChangeEventPrototype::self(exec, globalObject), DontDelete | ReadOnly);
    putDirect(exec->vm(), exec->propertyNames().length, jsNumber(1), ReadOnly | DontDelete | DontEnum);
}

bool JSHashChangeEventConstructor::getOwnPropertySlot(JSCell* cell, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSHashChangeEventConstructor, JSDOMWrapper>(exec, &JSHashChangeEventConstructorTable, jsCast<JSHashChangeEventConstructor*>(cell), propertyName, slot);
}

bool JSHashChangeEventConstructor::getOwnPropertyDescriptor(JSObject* object, ExecState* exec, PropertyName propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSHashChangeEventConstructor, JSDOMWrapper>(exec, &JSHashChangeEventConstructorTable, jsCast<JSHashChangeEventConstructor*>(object), propertyName, descriptor);
}

ConstructType JSHashChangeEventConstructor::getConstructData(JSCell*, ConstructData& constructData)
{
    constructData.native.function = constructJSHashChangeEvent;
    return ConstructTypeHost;
}

/* Hash table for prototype */

static const HashTableValue JSHashChangeEventPrototypeTableValues[] =
{
    { "initHashChangeEvent", DontDelete | JSC::Function, (intptr_t)static_cast<NativeFunction>(jsHashChangeEventPrototypeFunctionInitHashChangeEvent), (intptr_t)0, NoIntrinsic },
    { 0, 0, 0, 0, NoIntrinsic }
};

static const HashTable JSHashChangeEventPrototypeTable = { 2, 1, JSHashChangeEventPrototypeTableValues, 0 };
const ClassInfo JSHashChangeEventPrototype::s_info = { "HashChangeEventPrototype", &Base::s_info, &JSHashChangeEventPrototypeTable, 0, CREATE_METHOD_TABLE(JSHashChangeEventPrototype) };

JSObject* JSHashChangeEventPrototype::self(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSHashChangeEvent>(exec, globalObject);
}

bool JSHashChangeEventPrototype::getOwnPropertySlot(JSCell* cell, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    JSHashChangeEventPrototype* thisObject = jsCast<JSHashChangeEventPrototype*>(cell);
    return getStaticFunctionSlot<JSObject>(exec, &JSHashChangeEventPrototypeTable, thisObject, propertyName, slot);
}

bool JSHashChangeEventPrototype::getOwnPropertyDescriptor(JSObject* object, ExecState* exec, PropertyName propertyName, PropertyDescriptor& descriptor)
{
    JSHashChangeEventPrototype* thisObject = jsCast<JSHashChangeEventPrototype*>(object);
    return getStaticFunctionDescriptor<JSObject>(exec, &JSHashChangeEventPrototypeTable, thisObject, propertyName, descriptor);
}

const ClassInfo JSHashChangeEvent::s_info = { "HashChangeEvent", &Base::s_info, &JSHashChangeEventTable, 0 , CREATE_METHOD_TABLE(JSHashChangeEvent) };

JSHashChangeEvent::JSHashChangeEvent(Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<HashChangeEvent> impl)
    : JSEvent(structure, globalObject, impl)
{
}

void JSHashChangeEvent::finishCreation(VM& vm)
{
    Base::finishCreation(vm);
    ASSERT(inherits(&s_info));
}

JSObject* JSHashChangeEvent::createPrototype(ExecState* exec, JSGlobalObject* globalObject)
{
    return JSHashChangeEventPrototype::create(exec->vm(), globalObject, JSHashChangeEventPrototype::createStructure(exec->vm(), globalObject, JSEventPrototype::self(exec, globalObject)));
}

bool JSHashChangeEvent::getOwnPropertySlot(JSCell* cell, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    JSHashChangeEvent* thisObject = jsCast<JSHashChangeEvent*>(cell);
    ASSERT_GC_OBJECT_INHERITS(thisObject, &s_info);
    return getStaticValueSlot<JSHashChangeEvent, Base>(exec, &JSHashChangeEventTable, thisObject, propertyName, slot);
}

bool JSHashChangeEvent::getOwnPropertyDescriptor(JSObject* object, ExecState* exec, PropertyName propertyName, PropertyDescriptor& descriptor)
{
    JSHashChangeEvent* thisObject = jsCast<JSHashChangeEvent*>(object);
    ASSERT_GC_OBJECT_INHERITS(thisObject, &s_info);
    return getStaticValueDescriptor<JSHashChangeEvent, Base>(exec, &JSHashChangeEventTable, thisObject, propertyName, descriptor);
}

JSValue jsHashChangeEventOldURL(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSHashChangeEvent* castedThis = jsCast<JSHashChangeEvent*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    HashChangeEvent* impl = static_cast<HashChangeEvent*>(castedThis->impl());
    JSValue result = jsStringWithCache(exec, impl->oldURL());
    return result;
}


JSValue jsHashChangeEventNewURL(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSHashChangeEvent* castedThis = jsCast<JSHashChangeEvent*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    HashChangeEvent* impl = static_cast<HashChangeEvent*>(castedThis->impl());
    JSValue result = jsStringWithCache(exec, impl->newURL());
    return result;
}


JSValue jsHashChangeEventConstructor(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSHashChangeEvent* domObject = jsCast<JSHashChangeEvent*>(asObject(slotBase));
    return JSHashChangeEvent::getConstructor(exec, domObject->globalObject());
}

JSValue JSHashChangeEvent::getConstructor(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSHashChangeEventConstructor>(exec, jsCast<JSDOMGlobalObject*>(globalObject));
}

EncodedJSValue JSC_HOST_CALL jsHashChangeEventPrototypeFunctionInitHashChangeEvent(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSHashChangeEvent::s_info))
        return throwVMTypeError(exec);
    JSHashChangeEvent* castedThis = jsCast<JSHashChangeEvent*>(asObject(thisValue));
    ASSERT_GC_OBJECT_INHERITS(castedThis, &JSHashChangeEvent::s_info);
    HashChangeEvent* impl = static_cast<HashChangeEvent*>(castedThis->impl());
    const String& type(exec->argument(0).isEmpty() ? String() : exec->argument(0).toString(exec)->value(exec));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());
    bool canBubble(exec->argument(1).toBoolean(exec));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());
    bool cancelable(exec->argument(2).toBoolean(exec));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());
    const String& oldURL(exec->argument(3).isEmpty() ? String() : exec->argument(3).toString(exec)->value(exec));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());
    const String& newURL(exec->argument(4).isEmpty() ? String() : exec->argument(4).toString(exec)->value(exec));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());
    impl->initHashChangeEvent(type, canBubble, cancelable, oldURL, newURL);
    return JSValue::encode(jsUndefined());
}


}

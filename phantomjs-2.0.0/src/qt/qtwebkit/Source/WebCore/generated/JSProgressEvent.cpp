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
#include "JSProgressEvent.h"

#include "JSDictionary.h"
#include "ProgressEvent.h"
#include <runtime/Error.h>
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

/* Hash table */

static const HashTableValue JSProgressEventTableValues[] =
{
    { "lengthComputable", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsProgressEventLengthComputable), (intptr_t)0, NoIntrinsic },
    { "loaded", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsProgressEventLoaded), (intptr_t)0, NoIntrinsic },
    { "total", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsProgressEventTotal), (intptr_t)0, NoIntrinsic },
    { "constructor", DontEnum | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsProgressEventConstructor), (intptr_t)0, NoIntrinsic },
    { 0, 0, 0, 0, NoIntrinsic }
};

static const HashTable JSProgressEventTable = { 9, 7, JSProgressEventTableValues, 0 };
/* Hash table for constructor */

static const HashTableValue JSProgressEventConstructorTableValues[] =
{
    { 0, 0, 0, 0, NoIntrinsic }
};

static const HashTable JSProgressEventConstructorTable = { 1, 0, JSProgressEventConstructorTableValues, 0 };
EncodedJSValue JSC_HOST_CALL JSProgressEventConstructor::constructJSProgressEvent(ExecState* exec)
{
    JSProgressEventConstructor* jsConstructor = jsCast<JSProgressEventConstructor*>(exec->callee());

    ScriptExecutionContext* executionContext = jsConstructor->scriptExecutionContext();
    if (!executionContext)
        return throwVMError(exec, createReferenceError(exec, "Constructor associated execution context is unavailable"));

    AtomicString eventType = exec->argument(0).toString(exec)->value(exec);
    if (exec->hadException())
        return JSValue::encode(jsUndefined());

    ProgressEventInit eventInit;

    JSValue initializerValue = exec->argument(1);
    if (!initializerValue.isUndefinedOrNull()) {
        // Given the above test, this will always yield an object.
        JSObject* initializerObject = initializerValue.toObject(exec);

        // Create the dictionary wrapper from the initializer object.
        JSDictionary dictionary(exec, initializerObject);

        // Attempt to fill in the EventInit.
        if (!fillProgressEventInit(eventInit, dictionary))
            return JSValue::encode(jsUndefined());
    }

    RefPtr<ProgressEvent> event = ProgressEvent::create(eventType, eventInit);
    return JSValue::encode(toJS(exec, jsConstructor->globalObject(), event.get()));
}

bool fillProgressEventInit(ProgressEventInit& eventInit, JSDictionary& dictionary)
{
    if (!fillEventInit(eventInit, dictionary))
        return false;

    if (!dictionary.tryGetProperty("lengthComputable", eventInit.lengthComputable))
        return false;
    if (!dictionary.tryGetProperty("loaded", eventInit.loaded))
        return false;
    if (!dictionary.tryGetProperty("total", eventInit.total))
        return false;
    return true;
}

static const HashTable* getJSProgressEventConstructorTable(ExecState* exec)
{
    return getHashTableForGlobalData(exec->vm(), &JSProgressEventConstructorTable);
}

const ClassInfo JSProgressEventConstructor::s_info = { "ProgressEventConstructor", &Base::s_info, 0, getJSProgressEventConstructorTable, CREATE_METHOD_TABLE(JSProgressEventConstructor) };

JSProgressEventConstructor::JSProgressEventConstructor(Structure* structure, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(structure, globalObject)
{
}

void JSProgressEventConstructor::finishCreation(ExecState* exec, JSDOMGlobalObject* globalObject)
{
    Base::finishCreation(exec->vm());
    ASSERT(inherits(&s_info));
    putDirect(exec->vm(), exec->propertyNames().prototype, JSProgressEventPrototype::self(exec, globalObject), DontDelete | ReadOnly);
    putDirect(exec->vm(), exec->propertyNames().length, jsNumber(1), ReadOnly | DontDelete | DontEnum);
}

bool JSProgressEventConstructor::getOwnPropertySlot(JSCell* cell, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSProgressEventConstructor, JSDOMWrapper>(exec, getJSProgressEventConstructorTable(exec), jsCast<JSProgressEventConstructor*>(cell), propertyName, slot);
}

bool JSProgressEventConstructor::getOwnPropertyDescriptor(JSObject* object, ExecState* exec, PropertyName propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSProgressEventConstructor, JSDOMWrapper>(exec, getJSProgressEventConstructorTable(exec), jsCast<JSProgressEventConstructor*>(object), propertyName, descriptor);
}

ConstructType JSProgressEventConstructor::getConstructData(JSCell*, ConstructData& constructData)
{
    constructData.native.function = constructJSProgressEvent;
    return ConstructTypeHost;
}

/* Hash table for prototype */

static const HashTableValue JSProgressEventPrototypeTableValues[] =
{
    { 0, 0, 0, 0, NoIntrinsic }
};

static const HashTable JSProgressEventPrototypeTable = { 1, 0, JSProgressEventPrototypeTableValues, 0 };
static const HashTable* getJSProgressEventPrototypeTable(ExecState* exec)
{
    return getHashTableForGlobalData(exec->vm(), &JSProgressEventPrototypeTable);
}

const ClassInfo JSProgressEventPrototype::s_info = { "ProgressEventPrototype", &Base::s_info, 0, getJSProgressEventPrototypeTable, CREATE_METHOD_TABLE(JSProgressEventPrototype) };

JSObject* JSProgressEventPrototype::self(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSProgressEvent>(exec, globalObject);
}

static const HashTable* getJSProgressEventTable(ExecState* exec)
{
    return getHashTableForGlobalData(exec->vm(), &JSProgressEventTable);
}

const ClassInfo JSProgressEvent::s_info = { "ProgressEvent", &Base::s_info, 0, getJSProgressEventTable , CREATE_METHOD_TABLE(JSProgressEvent) };

JSProgressEvent::JSProgressEvent(Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<ProgressEvent> impl)
    : JSEvent(structure, globalObject, impl)
{
}

void JSProgressEvent::finishCreation(VM& vm)
{
    Base::finishCreation(vm);
    ASSERT(inherits(&s_info));
}

JSObject* JSProgressEvent::createPrototype(ExecState* exec, JSGlobalObject* globalObject)
{
    return JSProgressEventPrototype::create(exec->vm(), globalObject, JSProgressEventPrototype::createStructure(exec->vm(), globalObject, JSEventPrototype::self(exec, globalObject)));
}

bool JSProgressEvent::getOwnPropertySlot(JSCell* cell, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    JSProgressEvent* thisObject = jsCast<JSProgressEvent*>(cell);
    ASSERT_GC_OBJECT_INHERITS(thisObject, &s_info);
    return getStaticValueSlot<JSProgressEvent, Base>(exec, getJSProgressEventTable(exec), thisObject, propertyName, slot);
}

bool JSProgressEvent::getOwnPropertyDescriptor(JSObject* object, ExecState* exec, PropertyName propertyName, PropertyDescriptor& descriptor)
{
    JSProgressEvent* thisObject = jsCast<JSProgressEvent*>(object);
    ASSERT_GC_OBJECT_INHERITS(thisObject, &s_info);
    return getStaticValueDescriptor<JSProgressEvent, Base>(exec, getJSProgressEventTable(exec), thisObject, propertyName, descriptor);
}

JSValue jsProgressEventLengthComputable(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSProgressEvent* castedThis = jsCast<JSProgressEvent*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    ProgressEvent* impl = static_cast<ProgressEvent*>(castedThis->impl());
    JSValue result = jsBoolean(impl->lengthComputable());
    return result;
}


JSValue jsProgressEventLoaded(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSProgressEvent* castedThis = jsCast<JSProgressEvent*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    ProgressEvent* impl = static_cast<ProgressEvent*>(castedThis->impl());
    JSValue result = jsNumber(impl->loaded());
    return result;
}


JSValue jsProgressEventTotal(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSProgressEvent* castedThis = jsCast<JSProgressEvent*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    ProgressEvent* impl = static_cast<ProgressEvent*>(castedThis->impl());
    JSValue result = jsNumber(impl->total());
    return result;
}


JSValue jsProgressEventConstructor(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSProgressEvent* domObject = jsCast<JSProgressEvent*>(asObject(slotBase));
    return JSProgressEvent::getConstructor(exec, domObject->globalObject());
}

JSValue JSProgressEvent::getConstructor(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSProgressEventConstructor>(exec, jsCast<JSDOMGlobalObject*>(globalObject));
}


}

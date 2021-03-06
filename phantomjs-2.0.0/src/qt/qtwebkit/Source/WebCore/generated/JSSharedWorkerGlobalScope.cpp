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

#if ENABLE(SHARED_WORKERS)

#include "JSSharedWorkerGlobalScope.h"

#include "EventListener.h"
#include "JSEventListener.h"
#include "KURL.h"
#include "SharedWorkerGlobalScope.h"
#include <runtime/JSString.h>
#include <wtf/GetPtr.h>

#if ENABLE(SHARED_WORKERS)
#include "JSSharedWorkerGlobalScope.h"
#endif

using namespace JSC;

namespace WebCore {

/* Hash table */

static const HashTableValue JSSharedWorkerGlobalScopeTableValues[] =
{
    { "name", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSharedWorkerGlobalScopeName), (intptr_t)0, NoIntrinsic },
    { "onconnect", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSharedWorkerGlobalScopeOnconnect), (intptr_t)setJSSharedWorkerGlobalScopeOnconnect, NoIntrinsic },
#if ENABLE(SHARED_WORKERS)
    { "SharedWorkerGlobalScope", DontEnum, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSharedWorkerGlobalScopeSharedWorkerGlobalScopeConstructor), (intptr_t)setJSSharedWorkerGlobalScopeSharedWorkerGlobalScopeConstructor, NoIntrinsic },
#endif
    { "constructor", DontEnum | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSharedWorkerGlobalScopeConstructor), (intptr_t)0, NoIntrinsic },
    { 0, 0, 0, 0, NoIntrinsic }
};

static const HashTable JSSharedWorkerGlobalScopeTable = { 9, 7, JSSharedWorkerGlobalScopeTableValues, 0 };
/* Hash table for constructor */

static const HashTableValue JSSharedWorkerGlobalScopeConstructorTableValues[] =
{
    { 0, 0, 0, 0, NoIntrinsic }
};

static const HashTable JSSharedWorkerGlobalScopeConstructorTable = { 1, 0, JSSharedWorkerGlobalScopeConstructorTableValues, 0 };
static const HashTable* getJSSharedWorkerGlobalScopeConstructorTable(ExecState* exec)
{
    return getHashTableForGlobalData(exec->vm(), &JSSharedWorkerGlobalScopeConstructorTable);
}

const ClassInfo JSSharedWorkerGlobalScopeConstructor::s_info = { "SharedWorkerGlobalScopeConstructor", &Base::s_info, 0, getJSSharedWorkerGlobalScopeConstructorTable, CREATE_METHOD_TABLE(JSSharedWorkerGlobalScopeConstructor) };

JSSharedWorkerGlobalScopeConstructor::JSSharedWorkerGlobalScopeConstructor(Structure* structure, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(structure, globalObject)
{
}

void JSSharedWorkerGlobalScopeConstructor::finishCreation(ExecState* exec, JSDOMGlobalObject* globalObject)
{
    Base::finishCreation(exec->vm());
    ASSERT(inherits(&s_info));
    putDirect(exec->vm(), exec->propertyNames().prototype, globalObject->prototype(), DontDelete | ReadOnly);
    putDirect(exec->vm(), exec->propertyNames().length, jsNumber(0), ReadOnly | DontDelete | DontEnum);
}

bool JSSharedWorkerGlobalScopeConstructor::getOwnPropertySlot(JSCell* cell, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSSharedWorkerGlobalScopeConstructor, JSDOMWrapper>(exec, getJSSharedWorkerGlobalScopeConstructorTable(exec), jsCast<JSSharedWorkerGlobalScopeConstructor*>(cell), propertyName, slot);
}

bool JSSharedWorkerGlobalScopeConstructor::getOwnPropertyDescriptor(JSObject* object, ExecState* exec, PropertyName propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSSharedWorkerGlobalScopeConstructor, JSDOMWrapper>(exec, getJSSharedWorkerGlobalScopeConstructorTable(exec), jsCast<JSSharedWorkerGlobalScopeConstructor*>(object), propertyName, descriptor);
}

/* Hash table for prototype */

static const HashTableValue JSSharedWorkerGlobalScopePrototypeTableValues[] =
{
    { 0, 0, 0, 0, NoIntrinsic }
};

static const HashTable JSSharedWorkerGlobalScopePrototypeTable = { 1, 0, JSSharedWorkerGlobalScopePrototypeTableValues, 0 };
static const HashTable* getJSSharedWorkerGlobalScopePrototypeTable(ExecState* exec)
{
    return getHashTableForGlobalData(exec->vm(), &JSSharedWorkerGlobalScopePrototypeTable);
}

const ClassInfo JSSharedWorkerGlobalScopePrototype::s_info = { "SharedWorkerGlobalScopePrototype", &Base::s_info, 0, getJSSharedWorkerGlobalScopePrototypeTable, CREATE_METHOD_TABLE(JSSharedWorkerGlobalScopePrototype) };

static const HashTable* getJSSharedWorkerGlobalScopeTable(ExecState* exec)
{
    return getHashTableForGlobalData(exec->vm(), &JSSharedWorkerGlobalScopeTable);
}

const ClassInfo JSSharedWorkerGlobalScope::s_info = { "SharedWorkerGlobalScope", &Base::s_info, 0, getJSSharedWorkerGlobalScopeTable , CREATE_METHOD_TABLE(JSSharedWorkerGlobalScope) };

JSSharedWorkerGlobalScope::JSSharedWorkerGlobalScope(VM& vm, Structure* structure, PassRefPtr<SharedWorkerGlobalScope> impl)
    : JSWorkerGlobalScope(vm, structure, impl)
{
}

bool JSSharedWorkerGlobalScope::getOwnPropertySlot(JSCell* cell, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    JSSharedWorkerGlobalScope* thisObject = jsCast<JSSharedWorkerGlobalScope*>(cell);
    ASSERT_GC_OBJECT_INHERITS(thisObject, &s_info);
    return getStaticValueSlot<JSSharedWorkerGlobalScope, Base>(exec, getJSSharedWorkerGlobalScopeTable(exec), thisObject, propertyName, slot);
}

bool JSSharedWorkerGlobalScope::getOwnPropertyDescriptor(JSObject* object, ExecState* exec, PropertyName propertyName, PropertyDescriptor& descriptor)
{
    JSSharedWorkerGlobalScope* thisObject = jsCast<JSSharedWorkerGlobalScope*>(object);
    ASSERT_GC_OBJECT_INHERITS(thisObject, &s_info);
    return getStaticValueDescriptor<JSSharedWorkerGlobalScope, Base>(exec, getJSSharedWorkerGlobalScopeTable(exec), thisObject, propertyName, descriptor);
}

JSValue jsSharedWorkerGlobalScopeName(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSSharedWorkerGlobalScope* castedThis = jsCast<JSSharedWorkerGlobalScope*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SharedWorkerGlobalScope* impl = static_cast<SharedWorkerGlobalScope*>(castedThis->impl());
    JSValue result = jsStringWithCache(exec, impl->name());
    return result;
}


JSValue jsSharedWorkerGlobalScopeOnconnect(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSSharedWorkerGlobalScope* castedThis = jsCast<JSSharedWorkerGlobalScope*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SharedWorkerGlobalScope* impl = static_cast<SharedWorkerGlobalScope*>(castedThis->impl());
    if (EventListener* listener = impl->onconnect()) {
        if (const JSEventListener* jsListener = JSEventListener::cast(listener)) {
            if (JSObject* jsFunction = jsListener->jsFunction(impl))
                return jsFunction;
        }
    }
    return jsNull();
}


#if ENABLE(SHARED_WORKERS)
JSValue jsSharedWorkerGlobalScopeSharedWorkerGlobalScopeConstructor(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSSharedWorkerGlobalScope* castedThis = jsCast<JSSharedWorkerGlobalScope*>(asObject(slotBase));
    return JSSharedWorkerGlobalScope::getConstructor(exec, castedThis->globalObject());
}

#endif

JSValue jsSharedWorkerGlobalScopeConstructor(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSSharedWorkerGlobalScope* domObject = jsCast<JSSharedWorkerGlobalScope*>(asObject(slotBase));
    return JSSharedWorkerGlobalScope::getConstructor(exec, domObject->globalObject());
}

void JSSharedWorkerGlobalScope::put(JSCell* cell, ExecState* exec, PropertyName propertyName, JSValue value, PutPropertySlot& slot)
{
    JSSharedWorkerGlobalScope* thisObject = jsCast<JSSharedWorkerGlobalScope*>(cell);
    ASSERT_GC_OBJECT_INHERITS(thisObject, &s_info);
    lookupPut<JSSharedWorkerGlobalScope, Base>(exec, propertyName, value, getJSSharedWorkerGlobalScopeTable(exec), thisObject, slot);
}

void setJSSharedWorkerGlobalScopeOnconnect(ExecState* exec, JSObject* thisObject, JSValue value)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(exec);
    JSSharedWorkerGlobalScope* castedThis = jsCast<JSSharedWorkerGlobalScope*>(thisObject);
    SharedWorkerGlobalScope* impl = static_cast<SharedWorkerGlobalScope*>(castedThis->impl());
    impl->setOnconnect(createJSAttributeEventListener(exec, value, thisObject));
}


#if ENABLE(SHARED_WORKERS)
void setJSSharedWorkerGlobalScopeSharedWorkerGlobalScopeConstructor(ExecState* exec, JSObject* thisObject, JSValue value)
{
    UNUSED_PARAM(exec);
    // Shadowing a built-in constructor
    jsCast<JSSharedWorkerGlobalScope*>(thisObject)->putDirect(exec->vm(), Identifier(exec, "SharedWorkerGlobalScope"), value);
}

#endif

JSValue JSSharedWorkerGlobalScope::getConstructor(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSSharedWorkerGlobalScopeConstructor>(exec, jsCast<JSDOMGlobalObject*>(globalObject));
}

SharedWorkerGlobalScope* toSharedWorkerGlobalScope(JSC::JSValue value)
{
    return value.inherits(&JSSharedWorkerGlobalScope::s_info) ? jsCast<JSSharedWorkerGlobalScope*>(asObject(value))->impl() : 0;
}

}

#endif // ENABLE(SHARED_WORKERS)

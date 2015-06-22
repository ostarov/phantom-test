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
#include "JSBlob.h"

#include "Blob.h"
#include "ExceptionCode.h"
#include "JSBlob.h"
#include "JSDOMBinding.h"
#include "KURL.h"
#include <runtime/Error.h>
#include <runtime/JSString.h>
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

/* Hash table */

static const HashTableValue JSBlobTableValues[] =
{
    { "size", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsBlobSize), (intptr_t)0, NoIntrinsic },
    { "type", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsBlobType), (intptr_t)0, NoIntrinsic },
    { "constructor", DontEnum | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsBlobConstructor), (intptr_t)0, NoIntrinsic },
    { 0, 0, 0, 0, NoIntrinsic }
};

static const HashTable JSBlobTable = { 8, 7, JSBlobTableValues, 0 };
/* Hash table for constructor */

static const HashTableValue JSBlobConstructorTableValues[] =
{
    { 0, 0, 0, 0, NoIntrinsic }
};

static const HashTable JSBlobConstructorTable = { 1, 0, JSBlobConstructorTableValues, 0 };
static const HashTable* getJSBlobConstructorTable(ExecState* exec)
{
    return getHashTableForGlobalData(exec->vm(), &JSBlobConstructorTable);
}

const ClassInfo JSBlobConstructor::s_info = { "BlobConstructor", &Base::s_info, 0, getJSBlobConstructorTable, CREATE_METHOD_TABLE(JSBlobConstructor) };

JSBlobConstructor::JSBlobConstructor(Structure* structure, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(structure, globalObject)
{
}

void JSBlobConstructor::finishCreation(ExecState* exec, JSDOMGlobalObject* globalObject)
{
    Base::finishCreation(exec->vm());
    ASSERT(inherits(&s_info));
    putDirect(exec->vm(), exec->propertyNames().prototype, JSBlobPrototype::self(exec, globalObject), DontDelete | ReadOnly);
    putDirect(exec->vm(), exec->propertyNames().length, jsNumber(0), ReadOnly | DontDelete | DontEnum);
}

bool JSBlobConstructor::getOwnPropertySlot(JSCell* cell, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSBlobConstructor, JSDOMWrapper>(exec, getJSBlobConstructorTable(exec), jsCast<JSBlobConstructor*>(cell), propertyName, slot);
}

bool JSBlobConstructor::getOwnPropertyDescriptor(JSObject* object, ExecState* exec, PropertyName propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSBlobConstructor, JSDOMWrapper>(exec, getJSBlobConstructorTable(exec), jsCast<JSBlobConstructor*>(object), propertyName, descriptor);
}

ConstructType JSBlobConstructor::getConstructData(JSCell*, ConstructData& constructData)
{
    constructData.native.function = constructJSBlob;
    return ConstructTypeHost;
}

/* Hash table for prototype */

static const HashTableValue JSBlobPrototypeTableValues[] =
{
    { "slice", DontDelete | JSC::Function, (intptr_t)static_cast<NativeFunction>(jsBlobPrototypeFunctionSlice), (intptr_t)0, NoIntrinsic },
    { 0, 0, 0, 0, NoIntrinsic }
};

static const HashTable JSBlobPrototypeTable = { 2, 1, JSBlobPrototypeTableValues, 0 };
static const HashTable* getJSBlobPrototypeTable(ExecState* exec)
{
    return getHashTableForGlobalData(exec->vm(), &JSBlobPrototypeTable);
}

const ClassInfo JSBlobPrototype::s_info = { "BlobPrototype", &Base::s_info, 0, getJSBlobPrototypeTable, CREATE_METHOD_TABLE(JSBlobPrototype) };

JSObject* JSBlobPrototype::self(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSBlob>(exec, globalObject);
}

bool JSBlobPrototype::getOwnPropertySlot(JSCell* cell, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    JSBlobPrototype* thisObject = jsCast<JSBlobPrototype*>(cell);
    return getStaticFunctionSlot<JSObject>(exec, getJSBlobPrototypeTable(exec), thisObject, propertyName, slot);
}

bool JSBlobPrototype::getOwnPropertyDescriptor(JSObject* object, ExecState* exec, PropertyName propertyName, PropertyDescriptor& descriptor)
{
    JSBlobPrototype* thisObject = jsCast<JSBlobPrototype*>(object);
    return getStaticFunctionDescriptor<JSObject>(exec, getJSBlobPrototypeTable(exec), thisObject, propertyName, descriptor);
}

static const HashTable* getJSBlobTable(ExecState* exec)
{
    return getHashTableForGlobalData(exec->vm(), &JSBlobTable);
}

const ClassInfo JSBlob::s_info = { "Blob", &Base::s_info, 0, getJSBlobTable , CREATE_METHOD_TABLE(JSBlob) };

JSBlob::JSBlob(Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<Blob> impl)
    : JSDOMWrapper(structure, globalObject)
    , m_impl(impl.leakRef())
{
}

void JSBlob::finishCreation(VM& vm)
{
    Base::finishCreation(vm);
    ASSERT(inherits(&s_info));
}

JSObject* JSBlob::createPrototype(ExecState* exec, JSGlobalObject* globalObject)
{
    return JSBlobPrototype::create(exec->vm(), globalObject, JSBlobPrototype::createStructure(globalObject->vm(), globalObject, globalObject->objectPrototype()));
}

void JSBlob::destroy(JSC::JSCell* cell)
{
    JSBlob* thisObject = static_cast<JSBlob*>(cell);
    thisObject->JSBlob::~JSBlob();
}

JSBlob::~JSBlob()
{
    releaseImplIfNotNull();
}

bool JSBlob::getOwnPropertySlot(JSCell* cell, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    JSBlob* thisObject = jsCast<JSBlob*>(cell);
    ASSERT_GC_OBJECT_INHERITS(thisObject, &s_info);
    return getStaticValueSlot<JSBlob, Base>(exec, getJSBlobTable(exec), thisObject, propertyName, slot);
}

bool JSBlob::getOwnPropertyDescriptor(JSObject* object, ExecState* exec, PropertyName propertyName, PropertyDescriptor& descriptor)
{
    JSBlob* thisObject = jsCast<JSBlob*>(object);
    ASSERT_GC_OBJECT_INHERITS(thisObject, &s_info);
    return getStaticValueDescriptor<JSBlob, Base>(exec, getJSBlobTable(exec), thisObject, propertyName, descriptor);
}

JSValue jsBlobSize(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSBlob* castedThis = jsCast<JSBlob*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    Blob* impl = static_cast<Blob*>(castedThis->impl());
    JSValue result = jsNumber(impl->size());
    return result;
}


JSValue jsBlobType(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSBlob* castedThis = jsCast<JSBlob*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    Blob* impl = static_cast<Blob*>(castedThis->impl());
    JSValue result = jsStringWithCache(exec, impl->type());
    return result;
}


JSValue jsBlobConstructor(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSBlob* domObject = jsCast<JSBlob*>(asObject(slotBase));
    return JSBlob::getConstructor(exec, domObject->globalObject());
}

JSValue JSBlob::getConstructor(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSBlobConstructor>(exec, jsCast<JSDOMGlobalObject*>(globalObject));
}

EncodedJSValue JSC_HOST_CALL jsBlobPrototypeFunctionSlice(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSBlob::s_info))
        return throwVMTypeError(exec);
    JSBlob* castedThis = jsCast<JSBlob*>(asObject(thisValue));
    ASSERT_GC_OBJECT_INHERITS(castedThis, &JSBlob::s_info);
    Blob* impl = static_cast<Blob*>(castedThis->impl());

    size_t argsCount = exec->argumentCount();
    if (argsCount <= 0) {

        JSC::JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(impl->slice()));
        return JSValue::encode(result);
    }

    long long start(toInt64(exec, exec->argument(0), NormalConversion));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());
    if (argsCount <= 1) {

        JSC::JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(impl->slice(start)));
        return JSValue::encode(result);
    }

    long long end(toInt64(exec, exec->argument(1), NormalConversion));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());
    if (argsCount <= 2) {

        JSC::JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(impl->slice(start, end)));
        return JSValue::encode(result);
    }

    const String& contentType(valueToStringWithUndefinedOrNullCheck(exec, exec->argument(2)));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());

    JSC::JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(impl->slice(start, end, contentType)));
    return JSValue::encode(result);
}

static inline bool isObservable(JSBlob* jsBlob)
{
    if (jsBlob->hasCustomProperties())
        return true;
    return false;
}

bool JSBlobOwner::isReachableFromOpaqueRoots(JSC::Handle<JSC::Unknown> handle, void*, SlotVisitor& visitor)
{
    JSBlob* jsBlob = jsCast<JSBlob*>(handle.get().asCell());
    if (!isObservable(jsBlob))
        return false;
    Blob* root = jsBlob->impl();
    return visitor.containsOpaqueRoot(root);
}

void JSBlobOwner::finalize(JSC::Handle<JSC::Unknown> handle, void* context)
{
    JSBlob* jsBlob = jsCast<JSBlob*>(handle.get().asCell());
    DOMWrapperWorld* world = static_cast<DOMWrapperWorld*>(context);
    uncacheWrapper(world, jsBlob->impl(), jsBlob);
    jsBlob->releaseImpl();
}

Blob* toBlob(JSC::JSValue value)
{
    return value.inherits(&JSBlob::s_info) ? jsCast<JSBlob*>(asObject(value))->impl() : 0;
}

}

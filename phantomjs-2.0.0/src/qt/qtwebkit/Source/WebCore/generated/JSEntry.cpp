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

#if ENABLE(FILE_SYSTEM)

#include "JSEntry.h"

#include "DOMFileSystem.h"
#include "Entry.h"
#include "ExceptionCode.h"
#include "JSDOMBinding.h"
#include "JSDOMFileSystem.h"
#include "JSDirectoryEntry.h"
#include "JSEntryCallback.h"
#include "JSErrorCallback.h"
#include "JSMetadataCallback.h"
#include "JSVoidCallback.h"
#include "KURL.h"
#include <runtime/Error.h>
#include <runtime/JSString.h>
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

/* Hash table */

static const HashTableValue JSEntryTableValues[] =
{
    { "isFile", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsEntryIsFile), (intptr_t)0, NoIntrinsic },
    { "isDirectory", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsEntryIsDirectory), (intptr_t)0, NoIntrinsic },
    { "name", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsEntryName), (intptr_t)0, NoIntrinsic },
    { "fullPath", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsEntryFullPath), (intptr_t)0, NoIntrinsic },
    { "filesystem", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsEntryFilesystem), (intptr_t)0, NoIntrinsic },
    { 0, 0, 0, 0, NoIntrinsic }
};

static const HashTable JSEntryTable = { 16, 15, JSEntryTableValues, 0 };
/* Hash table for prototype */

static const HashTableValue JSEntryPrototypeTableValues[] =
{
    { "getMetadata", DontDelete | JSC::Function, (intptr_t)static_cast<NativeFunction>(jsEntryPrototypeFunctionGetMetadata), (intptr_t)1, NoIntrinsic },
    { "moveTo", DontDelete | JSC::Function, (intptr_t)static_cast<NativeFunction>(jsEntryPrototypeFunctionMoveTo), (intptr_t)1, NoIntrinsic },
    { "copyTo", DontDelete | JSC::Function, (intptr_t)static_cast<NativeFunction>(jsEntryPrototypeFunctionCopyTo), (intptr_t)1, NoIntrinsic },
    { "toURL", DontDelete | JSC::Function, (intptr_t)static_cast<NativeFunction>(jsEntryPrototypeFunctionToURL), (intptr_t)0, NoIntrinsic },
    { "remove", DontDelete | JSC::Function, (intptr_t)static_cast<NativeFunction>(jsEntryPrototypeFunctionRemove), (intptr_t)1, NoIntrinsic },
    { "getParent", DontDelete | JSC::Function, (intptr_t)static_cast<NativeFunction>(jsEntryPrototypeFunctionGetParent), (intptr_t)0, NoIntrinsic },
    { 0, 0, 0, 0, NoIntrinsic }
};

static const HashTable JSEntryPrototypeTable = { 17, 15, JSEntryPrototypeTableValues, 0 };
static const HashTable* getJSEntryPrototypeTable(ExecState* exec)
{
    return getHashTableForGlobalData(exec->vm(), &JSEntryPrototypeTable);
}

const ClassInfo JSEntryPrototype::s_info = { "EntryPrototype", &Base::s_info, 0, getJSEntryPrototypeTable, CREATE_METHOD_TABLE(JSEntryPrototype) };

JSObject* JSEntryPrototype::self(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSEntry>(exec, globalObject);
}

bool JSEntryPrototype::getOwnPropertySlot(JSCell* cell, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    JSEntryPrototype* thisObject = jsCast<JSEntryPrototype*>(cell);
    return getStaticFunctionSlot<JSObject>(exec, getJSEntryPrototypeTable(exec), thisObject, propertyName, slot);
}

bool JSEntryPrototype::getOwnPropertyDescriptor(JSObject* object, ExecState* exec, PropertyName propertyName, PropertyDescriptor& descriptor)
{
    JSEntryPrototype* thisObject = jsCast<JSEntryPrototype*>(object);
    return getStaticFunctionDescriptor<JSObject>(exec, getJSEntryPrototypeTable(exec), thisObject, propertyName, descriptor);
}

static const HashTable* getJSEntryTable(ExecState* exec)
{
    return getHashTableForGlobalData(exec->vm(), &JSEntryTable);
}

const ClassInfo JSEntry::s_info = { "Entry", &Base::s_info, 0, getJSEntryTable , CREATE_METHOD_TABLE(JSEntry) };

JSEntry::JSEntry(Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<Entry> impl)
    : JSDOMWrapper(structure, globalObject)
    , m_impl(impl.leakRef())
{
}

void JSEntry::finishCreation(VM& vm)
{
    Base::finishCreation(vm);
    ASSERT(inherits(&s_info));
}

JSObject* JSEntry::createPrototype(ExecState* exec, JSGlobalObject* globalObject)
{
    return JSEntryPrototype::create(exec->vm(), globalObject, JSEntryPrototype::createStructure(globalObject->vm(), globalObject, globalObject->objectPrototype()));
}

void JSEntry::destroy(JSC::JSCell* cell)
{
    JSEntry* thisObject = static_cast<JSEntry*>(cell);
    thisObject->JSEntry::~JSEntry();
}

JSEntry::~JSEntry()
{
    releaseImplIfNotNull();
}

bool JSEntry::getOwnPropertySlot(JSCell* cell, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    JSEntry* thisObject = jsCast<JSEntry*>(cell);
    ASSERT_GC_OBJECT_INHERITS(thisObject, &s_info);
    return getStaticValueSlot<JSEntry, Base>(exec, getJSEntryTable(exec), thisObject, propertyName, slot);
}

bool JSEntry::getOwnPropertyDescriptor(JSObject* object, ExecState* exec, PropertyName propertyName, PropertyDescriptor& descriptor)
{
    JSEntry* thisObject = jsCast<JSEntry*>(object);
    ASSERT_GC_OBJECT_INHERITS(thisObject, &s_info);
    return getStaticValueDescriptor<JSEntry, Base>(exec, getJSEntryTable(exec), thisObject, propertyName, descriptor);
}

JSValue jsEntryIsFile(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSEntry* castedThis = jsCast<JSEntry*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    Entry* impl = static_cast<Entry*>(castedThis->impl());
    JSValue result = jsBoolean(impl->isFile());
    return result;
}


JSValue jsEntryIsDirectory(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSEntry* castedThis = jsCast<JSEntry*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    Entry* impl = static_cast<Entry*>(castedThis->impl());
    JSValue result = jsBoolean(impl->isDirectory());
    return result;
}


JSValue jsEntryName(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSEntry* castedThis = jsCast<JSEntry*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    Entry* impl = static_cast<Entry*>(castedThis->impl());
    JSValue result = jsStringWithCache(exec, impl->name());
    return result;
}


JSValue jsEntryFullPath(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSEntry* castedThis = jsCast<JSEntry*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    Entry* impl = static_cast<Entry*>(castedThis->impl());
    JSValue result = jsStringWithCache(exec, impl->fullPath());
    return result;
}


JSValue jsEntryFilesystem(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSEntry* castedThis = jsCast<JSEntry*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    Entry* impl = static_cast<Entry*>(castedThis->impl());
    JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(impl->filesystem()));
    return result;
}


EncodedJSValue JSC_HOST_CALL jsEntryPrototypeFunctionGetMetadata(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSEntry::s_info))
        return throwVMTypeError(exec);
    JSEntry* castedThis = jsCast<JSEntry*>(asObject(thisValue));
    ASSERT_GC_OBJECT_INHERITS(castedThis, &JSEntry::s_info);
    Entry* impl = static_cast<Entry*>(castedThis->impl());
    if (exec->argumentCount() < 1)
        return throwVMError(exec, createNotEnoughArgumentsError(exec));
    if (exec->argumentCount() <= 0 || !exec->argument(0).isFunction())
        return throwVMTypeError(exec);
    RefPtr<MetadataCallback> successCallback = JSMetadataCallback::create(asObject(exec->argument(0)), castedThis->globalObject());
    RefPtr<ErrorCallback> errorCallback;
    if (exec->argumentCount() > 1 && !exec->argument(1).isUndefinedOrNull()) {
        if (!exec->argument(1).isFunction())
            return throwVMTypeError(exec);
        errorCallback = JSErrorCallback::create(asObject(exec->argument(1)), castedThis->globalObject());
    }
    impl->getMetadata(successCallback, errorCallback);
    return JSValue::encode(jsUndefined());
}

EncodedJSValue JSC_HOST_CALL jsEntryPrototypeFunctionMoveTo(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSEntry::s_info))
        return throwVMTypeError(exec);
    JSEntry* castedThis = jsCast<JSEntry*>(asObject(thisValue));
    ASSERT_GC_OBJECT_INHERITS(castedThis, &JSEntry::s_info);
    Entry* impl = static_cast<Entry*>(castedThis->impl());
    if (exec->argumentCount() < 1)
        return throwVMError(exec, createNotEnoughArgumentsError(exec));
    DirectoryEntry* parent(toDirectoryEntry(exec->argument(0)));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());

    size_t argsCount = exec->argumentCount();
    if (argsCount <= 1) {
        impl->moveTo(parent);
        return JSValue::encode(jsUndefined());
    }

    const String& name(valueToStringWithUndefinedOrNullCheck(exec, exec->argument(1)));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());
    RefPtr<EntryCallback> successCallback;
    if (exec->argumentCount() > 2 && !exec->argument(2).isUndefinedOrNull()) {
        if (!exec->argument(2).isFunction())
            return throwVMTypeError(exec);
        successCallback = JSEntryCallback::create(asObject(exec->argument(2)), castedThis->globalObject());
    }
    RefPtr<ErrorCallback> errorCallback;
    if (exec->argumentCount() > 3 && !exec->argument(3).isUndefinedOrNull()) {
        if (!exec->argument(3).isFunction())
            return throwVMTypeError(exec);
        errorCallback = JSErrorCallback::create(asObject(exec->argument(3)), castedThis->globalObject());
    }
    impl->moveTo(parent, name, successCallback, errorCallback);
    return JSValue::encode(jsUndefined());
}

EncodedJSValue JSC_HOST_CALL jsEntryPrototypeFunctionCopyTo(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSEntry::s_info))
        return throwVMTypeError(exec);
    JSEntry* castedThis = jsCast<JSEntry*>(asObject(thisValue));
    ASSERT_GC_OBJECT_INHERITS(castedThis, &JSEntry::s_info);
    Entry* impl = static_cast<Entry*>(castedThis->impl());
    if (exec->argumentCount() < 1)
        return throwVMError(exec, createNotEnoughArgumentsError(exec));
    DirectoryEntry* parent(toDirectoryEntry(exec->argument(0)));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());

    size_t argsCount = exec->argumentCount();
    if (argsCount <= 1) {
        impl->copyTo(parent);
        return JSValue::encode(jsUndefined());
    }

    const String& name(valueToStringWithUndefinedOrNullCheck(exec, exec->argument(1)));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());
    RefPtr<EntryCallback> successCallback;
    if (exec->argumentCount() > 2 && !exec->argument(2).isUndefinedOrNull()) {
        if (!exec->argument(2).isFunction())
            return throwVMTypeError(exec);
        successCallback = JSEntryCallback::create(asObject(exec->argument(2)), castedThis->globalObject());
    }
    RefPtr<ErrorCallback> errorCallback;
    if (exec->argumentCount() > 3 && !exec->argument(3).isUndefinedOrNull()) {
        if (!exec->argument(3).isFunction())
            return throwVMTypeError(exec);
        errorCallback = JSErrorCallback::create(asObject(exec->argument(3)), castedThis->globalObject());
    }
    impl->copyTo(parent, name, successCallback, errorCallback);
    return JSValue::encode(jsUndefined());
}

EncodedJSValue JSC_HOST_CALL jsEntryPrototypeFunctionToURL(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSEntry::s_info))
        return throwVMTypeError(exec);
    JSEntry* castedThis = jsCast<JSEntry*>(asObject(thisValue));
    ASSERT_GC_OBJECT_INHERITS(castedThis, &JSEntry::s_info);
    Entry* impl = static_cast<Entry*>(castedThis->impl());

    JSC::JSValue result = jsStringWithCache(exec, impl->toURL());
    return JSValue::encode(result);
}

EncodedJSValue JSC_HOST_CALL jsEntryPrototypeFunctionRemove(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSEntry::s_info))
        return throwVMTypeError(exec);
    JSEntry* castedThis = jsCast<JSEntry*>(asObject(thisValue));
    ASSERT_GC_OBJECT_INHERITS(castedThis, &JSEntry::s_info);
    Entry* impl = static_cast<Entry*>(castedThis->impl());
    if (exec->argumentCount() < 1)
        return throwVMError(exec, createNotEnoughArgumentsError(exec));
    if (exec->argumentCount() <= 0 || !exec->argument(0).isFunction())
        return throwVMTypeError(exec);
    RefPtr<VoidCallback> successCallback = JSVoidCallback::create(asObject(exec->argument(0)), castedThis->globalObject());
    RefPtr<ErrorCallback> errorCallback;
    if (exec->argumentCount() > 1 && !exec->argument(1).isUndefinedOrNull()) {
        if (!exec->argument(1).isFunction())
            return throwVMTypeError(exec);
        errorCallback = JSErrorCallback::create(asObject(exec->argument(1)), castedThis->globalObject());
    }
    impl->remove(successCallback, errorCallback);
    return JSValue::encode(jsUndefined());
}

EncodedJSValue JSC_HOST_CALL jsEntryPrototypeFunctionGetParent(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSEntry::s_info))
        return throwVMTypeError(exec);
    JSEntry* castedThis = jsCast<JSEntry*>(asObject(thisValue));
    ASSERT_GC_OBJECT_INHERITS(castedThis, &JSEntry::s_info);
    Entry* impl = static_cast<Entry*>(castedThis->impl());
    RefPtr<EntryCallback> successCallback;
    if (exec->argumentCount() > 0 && !exec->argument(0).isUndefinedOrNull()) {
        if (!exec->argument(0).isFunction())
            return throwVMTypeError(exec);
        successCallback = JSEntryCallback::create(asObject(exec->argument(0)), castedThis->globalObject());
    }
    RefPtr<ErrorCallback> errorCallback;
    if (exec->argumentCount() > 1 && !exec->argument(1).isUndefinedOrNull()) {
        if (!exec->argument(1).isFunction())
            return throwVMTypeError(exec);
        errorCallback = JSErrorCallback::create(asObject(exec->argument(1)), castedThis->globalObject());
    }
    impl->getParent(successCallback, errorCallback);
    return JSValue::encode(jsUndefined());
}

static inline bool isObservable(JSEntry* jsEntry)
{
    if (jsEntry->hasCustomProperties())
        return true;
    return false;
}

bool JSEntryOwner::isReachableFromOpaqueRoots(JSC::Handle<JSC::Unknown> handle, void*, SlotVisitor& visitor)
{
    JSEntry* jsEntry = jsCast<JSEntry*>(handle.get().asCell());
    if (!isObservable(jsEntry))
        return false;
    UNUSED_PARAM(visitor);
    return false;
}

void JSEntryOwner::finalize(JSC::Handle<JSC::Unknown> handle, void* context)
{
    JSEntry* jsEntry = jsCast<JSEntry*>(handle.get().asCell());
    DOMWrapperWorld* world = static_cast<DOMWrapperWorld*>(context);
    uncacheWrapper(world, jsEntry->impl(), jsEntry);
    jsEntry->releaseImpl();
}

Entry* toEntry(JSC::JSValue value)
{
    return value.inherits(&JSEntry::s_info) ? jsCast<JSEntry*>(asObject(value))->impl() : 0;
}

}

#endif // ENABLE(FILE_SYSTEM)

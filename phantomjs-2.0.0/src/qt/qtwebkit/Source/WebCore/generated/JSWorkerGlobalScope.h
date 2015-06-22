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

#ifndef JSWorkerGlobalScope_h
#define JSWorkerGlobalScope_h

#if ENABLE(WORKERS)

#include "JSDOMBinding.h"
#include "JSWorkerGlobalScopeBase.h"
#include <runtime/JSObject.h>

namespace WebCore {

class WorkerGlobalScope;

class JSWorkerGlobalScope : public JSWorkerGlobalScopeBase {
public:
    typedef JSWorkerGlobalScopeBase Base;
    static JSWorkerGlobalScope* create(JSC::VM& vm, JSC::Structure* structure, PassRefPtr<WorkerGlobalScope> impl)
    {
        JSWorkerGlobalScope* ptr = new (NotNull, JSC::allocateCell<JSWorkerGlobalScope>(vm.heap)) JSWorkerGlobalScope(vm, structure, impl);
        ptr->finishCreation(vm);
        vm.heap.addFinalizer(ptr, destroy);
        return ptr;
    }

    static const bool needsDestruction = false;

    static bool getOwnPropertySlot(JSC::JSCell*, JSC::ExecState*, JSC::PropertyName, JSC::PropertySlot&);
    static bool getOwnPropertyDescriptor(JSC::JSObject*, JSC::ExecState*, JSC::PropertyName, JSC::PropertyDescriptor&);
    static bool getOwnPropertySlotByIndex(JSC::JSCell*, JSC::ExecState*, unsigned propertyName, JSC::PropertySlot&);
    bool getOwnPropertySlotDelegate(JSC::ExecState*, JSC::PropertyName, JSC::PropertySlot&);
    bool getOwnPropertyDescriptorDelegate(JSC::ExecState*, JSC::PropertyName, JSC::PropertyDescriptor&);
    static void put(JSC::JSCell*, JSC::ExecState*, JSC::PropertyName, JSC::JSValue, JSC::PutPropertySlot&);
    static const JSC::ClassInfo s_info;

    static JSC::Structure* createStructure(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(vm, globalObject, prototype, JSC::TypeInfo(JSC::GlobalObjectType, StructureFlags), &s_info);
    }

    static JSC::JSValue getConstructor(JSC::ExecState*, JSC::JSGlobalObject*);
    static void visitChildren(JSCell*, JSC::SlotVisitor&);


    // Custom functions
    JSC::JSValue importScripts(JSC::ExecState*);
    JSC::JSValue setTimeout(JSC::ExecState*);
    JSC::JSValue setInterval(JSC::ExecState*);
protected:
    JSWorkerGlobalScope(JSC::VM&, JSC::Structure*, PassRefPtr<WorkerGlobalScope>);
    static const unsigned StructureFlags = JSC::OverridesGetOwnPropertySlot | JSC::InterceptsGetOwnPropertySlotByIndexEvenWhenLengthIsNotZero | JSC::OverridesVisitChildren | Base::StructureFlags;
};


class JSWorkerGlobalScopePrototype : public JSC::JSNonFinalObject {
public:
    typedef JSC::JSNonFinalObject Base;
    static JSWorkerGlobalScopePrototype* create(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::Structure* structure)
    {
        JSWorkerGlobalScopePrototype* ptr = new (NotNull, JSC::allocateCell<JSWorkerGlobalScopePrototype>(vm.heap)) JSWorkerGlobalScopePrototype(vm, globalObject, structure);
        ptr->finishCreation(vm);
        return ptr;
    }

    static const JSC::ClassInfo s_info;
    static bool getOwnPropertySlot(JSC::JSCell*, JSC::ExecState*, JSC::PropertyName, JSC::PropertySlot&);
    static bool getOwnPropertyDescriptor(JSC::JSObject*, JSC::ExecState*, JSC::PropertyName, JSC::PropertyDescriptor&);
    static JSC::Structure* createStructure(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(vm, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), &s_info);
    }

private:
    JSWorkerGlobalScopePrototype(JSC::VM& vm, JSC::JSGlobalObject*, JSC::Structure* structure) : JSC::JSNonFinalObject(vm, structure) { }
protected:
    static const unsigned StructureFlags = JSC::OverridesGetOwnPropertySlot | JSC::OverridesVisitChildren | Base::StructureFlags;
};

class JSWorkerGlobalScopeConstructor : public DOMConstructorObject {
private:
    JSWorkerGlobalScopeConstructor(JSC::Structure*, JSDOMGlobalObject*);
    void finishCreation(JSC::ExecState*, JSDOMGlobalObject*);

public:
    typedef DOMConstructorObject Base;
    static JSWorkerGlobalScopeConstructor* create(JSC::ExecState* exec, JSC::Structure* structure, JSDOMGlobalObject* globalObject)
    {
        JSWorkerGlobalScopeConstructor* ptr = new (NotNull, JSC::allocateCell<JSWorkerGlobalScopeConstructor>(*exec->heap())) JSWorkerGlobalScopeConstructor(structure, globalObject);
        ptr->finishCreation(exec, globalObject);
        return ptr;
    }

    static bool getOwnPropertySlot(JSC::JSCell*, JSC::ExecState*, JSC::PropertyName, JSC::PropertySlot&);
    static bool getOwnPropertyDescriptor(JSC::JSObject*, JSC::ExecState*, JSC::PropertyName, JSC::PropertyDescriptor&);
    static const JSC::ClassInfo s_info;
    static JSC::Structure* createStructure(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(vm, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), &s_info);
    }
protected:
    static const unsigned StructureFlags = JSC::OverridesGetOwnPropertySlot | JSC::ImplementsHasInstance | DOMConstructorObject::StructureFlags;
};

// Functions

JSC::EncodedJSValue JSC_HOST_CALL jsWorkerGlobalScopePrototypeFunctionClose(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsWorkerGlobalScopePrototypeFunctionImportScripts(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsWorkerGlobalScopePrototypeFunctionAddEventListener(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsWorkerGlobalScopePrototypeFunctionRemoveEventListener(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsWorkerGlobalScopePrototypeFunctionDispatchEvent(JSC::ExecState*);
#if ENABLE(FILE_SYSTEM)
JSC::EncodedJSValue JSC_HOST_CALL jsWorkerGlobalScopePrototypeFunctionWebkitRequestFileSystem(JSC::ExecState*);
#endif
#if ENABLE(FILE_SYSTEM)
JSC::EncodedJSValue JSC_HOST_CALL jsWorkerGlobalScopePrototypeFunctionWebkitRequestFileSystemSync(JSC::ExecState*);
#endif
#if ENABLE(FILE_SYSTEM)
JSC::EncodedJSValue JSC_HOST_CALL jsWorkerGlobalScopePrototypeFunctionWebkitResolveLocalFileSystemURL(JSC::ExecState*);
#endif
#if ENABLE(FILE_SYSTEM)
JSC::EncodedJSValue JSC_HOST_CALL jsWorkerGlobalScopePrototypeFunctionWebkitResolveLocalFileSystemSyncURL(JSC::ExecState*);
#endif
#if ENABLE(SQL_DATABASE)
JSC::EncodedJSValue JSC_HOST_CALL jsWorkerGlobalScopePrototypeFunctionOpenDatabase(JSC::ExecState*);
#endif
#if ENABLE(SQL_DATABASE)
JSC::EncodedJSValue JSC_HOST_CALL jsWorkerGlobalScopePrototypeFunctionOpenDatabaseSync(JSC::ExecState*);
#endif
JSC::EncodedJSValue JSC_HOST_CALL jsWorkerGlobalScopePrototypeFunctionSetTimeout(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsWorkerGlobalScopePrototypeFunctionClearTimeout(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsWorkerGlobalScopePrototypeFunctionSetInterval(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsWorkerGlobalScopePrototypeFunctionClearInterval(JSC::ExecState*);
// Attributes

JSC::JSValue jsWorkerGlobalScopeSelf(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
void setJSWorkerGlobalScopeSelf(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsWorkerGlobalScopeLocation(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
void setJSWorkerGlobalScopeLocation(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsWorkerGlobalScopeOnerror(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
void setJSWorkerGlobalScopeOnerror(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsWorkerGlobalScopeOnoffline(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
void setJSWorkerGlobalScopeOnoffline(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsWorkerGlobalScopeOnonline(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
void setJSWorkerGlobalScopeOnonline(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsWorkerGlobalScopeNavigator(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
void setJSWorkerGlobalScopeNavigator(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
#if ENABLE(BLOB)
JSC::JSValue jsWorkerGlobalScopeWebkitURLConstructor(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
void setJSWorkerGlobalScopeWebkitURLConstructor(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
#endif
#if ENABLE(FILE_SYSTEM)
JSC::JSValue jsWorkerGlobalScopeFileErrorConstructor(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
void setJSWorkerGlobalScopeFileErrorConstructor(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
#endif
#if ENABLE(FILE_SYSTEM)
JSC::JSValue jsWorkerGlobalScopeFileExceptionConstructor(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
void setJSWorkerGlobalScopeFileExceptionConstructor(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
#endif
#if ENABLE(INDEXED_DATABASE)
JSC::JSValue jsWorkerGlobalScopeWebkitIndexedDB(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
#endif
#if ENABLE(INDEXED_DATABASE)
JSC::JSValue jsWorkerGlobalScopeWebkitIDBCursorConstructor(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
void setJSWorkerGlobalScopeWebkitIDBCursorConstructor(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
#endif
#if ENABLE(INDEXED_DATABASE)
JSC::JSValue jsWorkerGlobalScopeWebkitIDBDatabaseConstructor(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
void setJSWorkerGlobalScopeWebkitIDBDatabaseConstructor(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
#endif
#if ENABLE(INDEXED_DATABASE)
JSC::JSValue jsWorkerGlobalScopeWebkitIDBFactoryConstructor(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
void setJSWorkerGlobalScopeWebkitIDBFactoryConstructor(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
#endif
#if ENABLE(INDEXED_DATABASE)
JSC::JSValue jsWorkerGlobalScopeWebkitIDBIndexConstructor(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
void setJSWorkerGlobalScopeWebkitIDBIndexConstructor(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
#endif
#if ENABLE(INDEXED_DATABASE)
JSC::JSValue jsWorkerGlobalScopeWebkitIDBKeyRangeConstructor(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
void setJSWorkerGlobalScopeWebkitIDBKeyRangeConstructor(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
#endif
#if ENABLE(INDEXED_DATABASE)
JSC::JSValue jsWorkerGlobalScopeWebkitIDBObjectStoreConstructor(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
void setJSWorkerGlobalScopeWebkitIDBObjectStoreConstructor(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
#endif
#if ENABLE(INDEXED_DATABASE)
JSC::JSValue jsWorkerGlobalScopeWebkitIDBRequestConstructor(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
void setJSWorkerGlobalScopeWebkitIDBRequestConstructor(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
#endif
#if ENABLE(INDEXED_DATABASE)
JSC::JSValue jsWorkerGlobalScopeWebkitIDBTransactionConstructor(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
void setJSWorkerGlobalScopeWebkitIDBTransactionConstructor(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
#endif
#if ENABLE(INDEXED_DATABASE)
JSC::JSValue jsWorkerGlobalScopeIndexedDB(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
#endif
#if ENABLE(INDEXED_DATABASE)
JSC::JSValue jsWorkerGlobalScopeIDBCursorConstructor(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
void setJSWorkerGlobalScopeIDBCursorConstructor(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
#endif
#if ENABLE(INDEXED_DATABASE)
JSC::JSValue jsWorkerGlobalScopeIDBCursorWithValueConstructor(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
void setJSWorkerGlobalScopeIDBCursorWithValueConstructor(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
#endif
#if ENABLE(INDEXED_DATABASE)
JSC::JSValue jsWorkerGlobalScopeIDBDatabaseConstructor(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
void setJSWorkerGlobalScopeIDBDatabaseConstructor(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
#endif
#if ENABLE(INDEXED_DATABASE)
JSC::JSValue jsWorkerGlobalScopeIDBFactoryConstructor(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
void setJSWorkerGlobalScopeIDBFactoryConstructor(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
#endif
#if ENABLE(INDEXED_DATABASE)
JSC::JSValue jsWorkerGlobalScopeIDBIndexConstructor(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
void setJSWorkerGlobalScopeIDBIndexConstructor(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
#endif
#if ENABLE(INDEXED_DATABASE)
JSC::JSValue jsWorkerGlobalScopeIDBKeyRangeConstructor(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
void setJSWorkerGlobalScopeIDBKeyRangeConstructor(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
#endif
#if ENABLE(INDEXED_DATABASE)
JSC::JSValue jsWorkerGlobalScopeIDBObjectStoreConstructor(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
void setJSWorkerGlobalScopeIDBObjectStoreConstructor(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
#endif
#if ENABLE(INDEXED_DATABASE)
JSC::JSValue jsWorkerGlobalScopeIDBOpenDBRequestConstructor(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
void setJSWorkerGlobalScopeIDBOpenDBRequestConstructor(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
#endif
#if ENABLE(INDEXED_DATABASE)
JSC::JSValue jsWorkerGlobalScopeIDBRequestConstructor(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
void setJSWorkerGlobalScopeIDBRequestConstructor(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
#endif
#if ENABLE(INDEXED_DATABASE)
JSC::JSValue jsWorkerGlobalScopeIDBTransactionConstructor(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
void setJSWorkerGlobalScopeIDBTransactionConstructor(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
#endif
#if ENABLE(INDEXED_DATABASE)
JSC::JSValue jsWorkerGlobalScopeIDBVersionChangeEventConstructor(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
void setJSWorkerGlobalScopeIDBVersionChangeEventConstructor(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
#endif
#if ENABLE(LEGACY_NOTIFICATIONS) || ENABLE(NOTIFICATIONS)
JSC::JSValue jsWorkerGlobalScopeWebkitNotifications(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
#endif
#if ENABLE(WEB_SOCKETS)
JSC::JSValue jsWorkerGlobalScopeWebSocketConstructor(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
void setJSWorkerGlobalScopeWebSocketConstructor(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
#endif
#if ENABLE(CHANNEL_MESSAGING)
JSC::JSValue jsWorkerGlobalScopeMessageChannelConstructor(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
void setJSWorkerGlobalScopeMessageChannelConstructor(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
#endif
JSC::JSValue jsWorkerGlobalScopeMessageEventConstructor(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
void setJSWorkerGlobalScopeMessageEventConstructor(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsWorkerGlobalScopeBlobConstructor(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
void setJSWorkerGlobalScopeBlobConstructor(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
#if ENABLE(BLOB)
JSC::JSValue jsWorkerGlobalScopeFileReaderConstructor(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
void setJSWorkerGlobalScopeFileReaderConstructor(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
#endif
#if ENABLE(BLOB)
JSC::JSValue jsWorkerGlobalScopeFileReaderSyncConstructor(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
void setJSWorkerGlobalScopeFileReaderSyncConstructor(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
#endif
#if ENABLE(BLOB)
JSC::JSValue jsWorkerGlobalScopeURLConstructor(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
void setJSWorkerGlobalScopeURLConstructor(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
#endif
JSC::JSValue jsWorkerGlobalScopeArrayBufferConstructor(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
void setJSWorkerGlobalScopeArrayBufferConstructor(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsWorkerGlobalScopeDataViewConstructor(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
void setJSWorkerGlobalScopeDataViewConstructor(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsWorkerGlobalScopeFloat32ArrayConstructor(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
void setJSWorkerGlobalScopeFloat32ArrayConstructor(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsWorkerGlobalScopeFloat64ArrayConstructor(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
void setJSWorkerGlobalScopeFloat64ArrayConstructor(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsWorkerGlobalScopeInt16ArrayConstructor(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
void setJSWorkerGlobalScopeInt16ArrayConstructor(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsWorkerGlobalScopeInt32ArrayConstructor(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
void setJSWorkerGlobalScopeInt32ArrayConstructor(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsWorkerGlobalScopeInt8ArrayConstructor(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
void setJSWorkerGlobalScopeInt8ArrayConstructor(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsWorkerGlobalScopeUint16ArrayConstructor(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
void setJSWorkerGlobalScopeUint16ArrayConstructor(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsWorkerGlobalScopeUint32ArrayConstructor(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
void setJSWorkerGlobalScopeUint32ArrayConstructor(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsWorkerGlobalScopeUint8ArrayConstructor(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
void setJSWorkerGlobalScopeUint8ArrayConstructor(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsWorkerGlobalScopeUint8ClampedArrayConstructor(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
void setJSWorkerGlobalScopeUint8ClampedArrayConstructor(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsWorkerGlobalScopeEventSourceConstructor(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
void setJSWorkerGlobalScopeEventSourceConstructor(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
#if ENABLE(WORKERS)
JSC::JSValue jsWorkerGlobalScopeWorkerGlobalScopeConstructor(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
void setJSWorkerGlobalScopeWorkerGlobalScopeConstructor(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
#endif
#if ENABLE(WORKERS)
JSC::JSValue jsWorkerGlobalScopeWorkerLocationConstructor(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
void setJSWorkerGlobalScopeWorkerLocationConstructor(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
#endif
JSC::JSValue jsWorkerGlobalScopeXMLHttpRequestConstructor(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
void setJSWorkerGlobalScopeXMLHttpRequestConstructor(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsWorkerGlobalScopeConstructor(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
// Constants

#if ENABLE(FILE_SYSTEM)
JSC::JSValue jsWorkerGlobalScopeTEMPORARY(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
#endif
#if ENABLE(FILE_SYSTEM)
JSC::JSValue jsWorkerGlobalScopePERSISTENT(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
#endif

} // namespace WebCore

#endif // ENABLE(WORKERS)

#endif

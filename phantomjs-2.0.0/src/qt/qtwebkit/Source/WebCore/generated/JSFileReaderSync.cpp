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

#if ENABLE(BLOB)

#include "JSFileReaderSync.h"

#include "ExceptionCode.h"
#include "FileReaderSync.h"
#include "JSArrayBuffer.h"
#include "JSBlob.h"
#include "JSDOMBinding.h"
#include "KURL.h"
#include <runtime/Error.h>
#include <runtime/JSString.h>
#include <wtf/ArrayBuffer.h>
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

/* Hash table */

static const HashTableValue JSFileReaderSyncTableValues[] =
{
    { "constructor", DontEnum | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsFileReaderSyncConstructor), (intptr_t)0, NoIntrinsic },
    { 0, 0, 0, 0, NoIntrinsic }
};

static const HashTable JSFileReaderSyncTable = { 2, 1, JSFileReaderSyncTableValues, 0 };
/* Hash table for constructor */

static const HashTableValue JSFileReaderSyncConstructorTableValues[] =
{
    { 0, 0, 0, 0, NoIntrinsic }
};

static const HashTable JSFileReaderSyncConstructorTable = { 1, 0, JSFileReaderSyncConstructorTableValues, 0 };
EncodedJSValue JSC_HOST_CALL JSFileReaderSyncConstructor::constructJSFileReaderSync(ExecState* exec)
{
    JSFileReaderSyncConstructor* castedThis = jsCast<JSFileReaderSyncConstructor*>(exec->callee());
    RefPtr<FileReaderSync> object = FileReaderSync::create();
    return JSValue::encode(asObject(toJS(exec, castedThis->globalObject(), object.get())));
}

static const HashTable* getJSFileReaderSyncConstructorTable(ExecState* exec)
{
    return getHashTableForGlobalData(exec->vm(), &JSFileReaderSyncConstructorTable);
}

const ClassInfo JSFileReaderSyncConstructor::s_info = { "FileReaderSyncConstructor", &Base::s_info, 0, getJSFileReaderSyncConstructorTable, CREATE_METHOD_TABLE(JSFileReaderSyncConstructor) };

JSFileReaderSyncConstructor::JSFileReaderSyncConstructor(Structure* structure, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(structure, globalObject)
{
}

void JSFileReaderSyncConstructor::finishCreation(ExecState* exec, JSDOMGlobalObject* globalObject)
{
    Base::finishCreation(exec->vm());
    ASSERT(inherits(&s_info));
    putDirect(exec->vm(), exec->propertyNames().prototype, JSFileReaderSyncPrototype::self(exec, globalObject), DontDelete | ReadOnly);
    putDirect(exec->vm(), exec->propertyNames().length, jsNumber(0), ReadOnly | DontDelete | DontEnum);
}

bool JSFileReaderSyncConstructor::getOwnPropertySlot(JSCell* cell, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSFileReaderSyncConstructor, JSDOMWrapper>(exec, getJSFileReaderSyncConstructorTable(exec), jsCast<JSFileReaderSyncConstructor*>(cell), propertyName, slot);
}

bool JSFileReaderSyncConstructor::getOwnPropertyDescriptor(JSObject* object, ExecState* exec, PropertyName propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSFileReaderSyncConstructor, JSDOMWrapper>(exec, getJSFileReaderSyncConstructorTable(exec), jsCast<JSFileReaderSyncConstructor*>(object), propertyName, descriptor);
}

ConstructType JSFileReaderSyncConstructor::getConstructData(JSCell*, ConstructData& constructData)
{
    constructData.native.function = constructJSFileReaderSync;
    return ConstructTypeHost;
}

/* Hash table for prototype */

static const HashTableValue JSFileReaderSyncPrototypeTableValues[] =
{
    { "readAsArrayBuffer", DontDelete | JSC::Function, (intptr_t)static_cast<NativeFunction>(jsFileReaderSyncPrototypeFunctionReadAsArrayBuffer), (intptr_t)1, NoIntrinsic },
    { "readAsBinaryString", DontDelete | JSC::Function, (intptr_t)static_cast<NativeFunction>(jsFileReaderSyncPrototypeFunctionReadAsBinaryString), (intptr_t)1, NoIntrinsic },
    { "readAsText", DontDelete | JSC::Function, (intptr_t)static_cast<NativeFunction>(jsFileReaderSyncPrototypeFunctionReadAsText), (intptr_t)1, NoIntrinsic },
    { "readAsDataURL", DontDelete | JSC::Function, (intptr_t)static_cast<NativeFunction>(jsFileReaderSyncPrototypeFunctionReadAsDataURL), (intptr_t)1, NoIntrinsic },
    { 0, 0, 0, 0, NoIntrinsic }
};

static const HashTable JSFileReaderSyncPrototypeTable = { 9, 7, JSFileReaderSyncPrototypeTableValues, 0 };
static const HashTable* getJSFileReaderSyncPrototypeTable(ExecState* exec)
{
    return getHashTableForGlobalData(exec->vm(), &JSFileReaderSyncPrototypeTable);
}

const ClassInfo JSFileReaderSyncPrototype::s_info = { "FileReaderSyncPrototype", &Base::s_info, 0, getJSFileReaderSyncPrototypeTable, CREATE_METHOD_TABLE(JSFileReaderSyncPrototype) };

JSObject* JSFileReaderSyncPrototype::self(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSFileReaderSync>(exec, globalObject);
}

bool JSFileReaderSyncPrototype::getOwnPropertySlot(JSCell* cell, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    JSFileReaderSyncPrototype* thisObject = jsCast<JSFileReaderSyncPrototype*>(cell);
    return getStaticFunctionSlot<JSObject>(exec, getJSFileReaderSyncPrototypeTable(exec), thisObject, propertyName, slot);
}

bool JSFileReaderSyncPrototype::getOwnPropertyDescriptor(JSObject* object, ExecState* exec, PropertyName propertyName, PropertyDescriptor& descriptor)
{
    JSFileReaderSyncPrototype* thisObject = jsCast<JSFileReaderSyncPrototype*>(object);
    return getStaticFunctionDescriptor<JSObject>(exec, getJSFileReaderSyncPrototypeTable(exec), thisObject, propertyName, descriptor);
}

static const HashTable* getJSFileReaderSyncTable(ExecState* exec)
{
    return getHashTableForGlobalData(exec->vm(), &JSFileReaderSyncTable);
}

const ClassInfo JSFileReaderSync::s_info = { "FileReaderSync", &Base::s_info, 0, getJSFileReaderSyncTable , CREATE_METHOD_TABLE(JSFileReaderSync) };

JSFileReaderSync::JSFileReaderSync(Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<FileReaderSync> impl)
    : JSDOMWrapper(structure, globalObject)
    , m_impl(impl.leakRef())
{
}

void JSFileReaderSync::finishCreation(VM& vm)
{
    Base::finishCreation(vm);
    ASSERT(inherits(&s_info));
}

JSObject* JSFileReaderSync::createPrototype(ExecState* exec, JSGlobalObject* globalObject)
{
    return JSFileReaderSyncPrototype::create(exec->vm(), globalObject, JSFileReaderSyncPrototype::createStructure(globalObject->vm(), globalObject, globalObject->objectPrototype()));
}

void JSFileReaderSync::destroy(JSC::JSCell* cell)
{
    JSFileReaderSync* thisObject = static_cast<JSFileReaderSync*>(cell);
    thisObject->JSFileReaderSync::~JSFileReaderSync();
}

JSFileReaderSync::~JSFileReaderSync()
{
    releaseImplIfNotNull();
}

bool JSFileReaderSync::getOwnPropertySlot(JSCell* cell, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    JSFileReaderSync* thisObject = jsCast<JSFileReaderSync*>(cell);
    ASSERT_GC_OBJECT_INHERITS(thisObject, &s_info);
    return getStaticValueSlot<JSFileReaderSync, Base>(exec, getJSFileReaderSyncTable(exec), thisObject, propertyName, slot);
}

bool JSFileReaderSync::getOwnPropertyDescriptor(JSObject* object, ExecState* exec, PropertyName propertyName, PropertyDescriptor& descriptor)
{
    JSFileReaderSync* thisObject = jsCast<JSFileReaderSync*>(object);
    ASSERT_GC_OBJECT_INHERITS(thisObject, &s_info);
    return getStaticValueDescriptor<JSFileReaderSync, Base>(exec, getJSFileReaderSyncTable(exec), thisObject, propertyName, descriptor);
}

JSValue jsFileReaderSyncConstructor(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSFileReaderSync* domObject = jsCast<JSFileReaderSync*>(asObject(slotBase));
    return JSFileReaderSync::getConstructor(exec, domObject->globalObject());
}

JSValue JSFileReaderSync::getConstructor(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSFileReaderSyncConstructor>(exec, jsCast<JSDOMGlobalObject*>(globalObject));
}

EncodedJSValue JSC_HOST_CALL jsFileReaderSyncPrototypeFunctionReadAsArrayBuffer(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSFileReaderSync::s_info))
        return throwVMTypeError(exec);
    JSFileReaderSync* castedThis = jsCast<JSFileReaderSync*>(asObject(thisValue));
    ASSERT_GC_OBJECT_INHERITS(castedThis, &JSFileReaderSync::s_info);
    FileReaderSync* impl = static_cast<FileReaderSync*>(castedThis->impl());
    if (exec->argumentCount() < 1)
        return throwVMError(exec, createNotEnoughArgumentsError(exec));
    ExceptionCode ec = 0;
    ScriptExecutionContext* scriptContext = jsCast<JSDOMGlobalObject*>(exec->lexicalGlobalObject())->scriptExecutionContext();
    if (!scriptContext)
        return JSValue::encode(jsUndefined());
    Blob* blob(toBlob(exec->argument(0)));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());

    JSC::JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(impl->readAsArrayBuffer(scriptContext, blob, ec)));
    setDOMException(exec, ec);
    return JSValue::encode(result);
}

EncodedJSValue JSC_HOST_CALL jsFileReaderSyncPrototypeFunctionReadAsBinaryString(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSFileReaderSync::s_info))
        return throwVMTypeError(exec);
    JSFileReaderSync* castedThis = jsCast<JSFileReaderSync*>(asObject(thisValue));
    ASSERT_GC_OBJECT_INHERITS(castedThis, &JSFileReaderSync::s_info);
    FileReaderSync* impl = static_cast<FileReaderSync*>(castedThis->impl());
    if (exec->argumentCount() < 1)
        return throwVMError(exec, createNotEnoughArgumentsError(exec));
    ExceptionCode ec = 0;
    ScriptExecutionContext* scriptContext = jsCast<JSDOMGlobalObject*>(exec->lexicalGlobalObject())->scriptExecutionContext();
    if (!scriptContext)
        return JSValue::encode(jsUndefined());
    Blob* blob(toBlob(exec->argument(0)));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());

    JSC::JSValue result = jsStringWithCache(exec, impl->readAsBinaryString(scriptContext, blob, ec));
    setDOMException(exec, ec);
    return JSValue::encode(result);
}

EncodedJSValue JSC_HOST_CALL jsFileReaderSyncPrototypeFunctionReadAsText(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSFileReaderSync::s_info))
        return throwVMTypeError(exec);
    JSFileReaderSync* castedThis = jsCast<JSFileReaderSync*>(asObject(thisValue));
    ASSERT_GC_OBJECT_INHERITS(castedThis, &JSFileReaderSync::s_info);
    FileReaderSync* impl = static_cast<FileReaderSync*>(castedThis->impl());
    if (exec->argumentCount() < 1)
        return throwVMError(exec, createNotEnoughArgumentsError(exec));
    ExceptionCode ec = 0;
    ScriptExecutionContext* scriptContext = jsCast<JSDOMGlobalObject*>(exec->lexicalGlobalObject())->scriptExecutionContext();
    if (!scriptContext)
        return JSValue::encode(jsUndefined());
    Blob* blob(toBlob(exec->argument(0)));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());

    size_t argsCount = exec->argumentCount();
    if (argsCount <= 1) {

        JSC::JSValue result = jsStringWithCache(exec, impl->readAsText(scriptContext, blob, ec));
        setDOMException(exec, ec);
        return JSValue::encode(result);
    }

    const String& encoding(exec->argument(1).isEmpty() ? String() : exec->argument(1).toString(exec)->value(exec));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());

    JSC::JSValue result = jsStringWithCache(exec, impl->readAsText(scriptContext, blob, encoding, ec));
    setDOMException(exec, ec);
    return JSValue::encode(result);
}

EncodedJSValue JSC_HOST_CALL jsFileReaderSyncPrototypeFunctionReadAsDataURL(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSFileReaderSync::s_info))
        return throwVMTypeError(exec);
    JSFileReaderSync* castedThis = jsCast<JSFileReaderSync*>(asObject(thisValue));
    ASSERT_GC_OBJECT_INHERITS(castedThis, &JSFileReaderSync::s_info);
    FileReaderSync* impl = static_cast<FileReaderSync*>(castedThis->impl());
    if (exec->argumentCount() < 1)
        return throwVMError(exec, createNotEnoughArgumentsError(exec));
    ExceptionCode ec = 0;
    ScriptExecutionContext* scriptContext = jsCast<JSDOMGlobalObject*>(exec->lexicalGlobalObject())->scriptExecutionContext();
    if (!scriptContext)
        return JSValue::encode(jsUndefined());
    Blob* blob(toBlob(exec->argument(0)));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());

    JSC::JSValue result = jsStringWithCache(exec, impl->readAsDataURL(scriptContext, blob, ec));
    setDOMException(exec, ec);
    return JSValue::encode(result);
}

static inline bool isObservable(JSFileReaderSync* jsFileReaderSync)
{
    if (jsFileReaderSync->hasCustomProperties())
        return true;
    return false;
}

bool JSFileReaderSyncOwner::isReachableFromOpaqueRoots(JSC::Handle<JSC::Unknown> handle, void*, SlotVisitor& visitor)
{
    JSFileReaderSync* jsFileReaderSync = jsCast<JSFileReaderSync*>(handle.get().asCell());
    if (!isObservable(jsFileReaderSync))
        return false;
    UNUSED_PARAM(visitor);
    return false;
}

void JSFileReaderSyncOwner::finalize(JSC::Handle<JSC::Unknown> handle, void* context)
{
    JSFileReaderSync* jsFileReaderSync = jsCast<JSFileReaderSync*>(handle.get().asCell());
    DOMWrapperWorld* world = static_cast<DOMWrapperWorld*>(context);
    uncacheWrapper(world, jsFileReaderSync->impl(), jsFileReaderSync);
    jsFileReaderSync->releaseImpl();
}

#if ENABLE(BINDING_INTEGRITY)
#if PLATFORM(WIN)
#pragma warning(disable: 4483)
extern "C" { extern void (*const __identifier("??_7FileReaderSync@WebCore@@6B@")[])(); }
#else
extern "C" { extern void* _ZTVN7WebCore14FileReaderSyncE[]; }
#endif
#endif
JSC::JSValue toJS(JSC::ExecState* exec, JSDOMGlobalObject* globalObject, FileReaderSync* impl)
{
    if (!impl)
        return jsNull();
    if (JSValue result = getExistingWrapper<JSFileReaderSync>(exec, impl))
        return result;

#if ENABLE(BINDING_INTEGRITY)
    void* actualVTablePointer = *(reinterpret_cast<void**>(impl));
#if PLATFORM(WIN)
    void* expectedVTablePointer = reinterpret_cast<void*>(__identifier("??_7FileReaderSync@WebCore@@6B@"));
#else
    void* expectedVTablePointer = &_ZTVN7WebCore14FileReaderSyncE[2];
#if COMPILER(CLANG) && COMPILER_SUPPORTS(CXX_STATIC_ASSERT)
    // If this fails FileReaderSync does not have a vtable, so you need to add the
    // ImplementationLacksVTable attribute to the interface definition
    COMPILE_ASSERT(__is_polymorphic(FileReaderSync), FileReaderSync_is_not_polymorphic);
#endif
#endif
    // If you hit this assertion you either have a use after free bug, or
    // FileReaderSync has subclasses. If FileReaderSync has subclasses that get passed
    // to toJS() we currently require FileReaderSync you to opt out of binding hardening
    // by adding the SkipVTableValidation attribute to the interface IDL definition
    RELEASE_ASSERT(actualVTablePointer == expectedVTablePointer);
#endif
    ReportMemoryCost<FileReaderSync>::reportMemoryCost(exec, impl);
    return createNewWrapper<JSFileReaderSync>(exec, globalObject, impl);
}

FileReaderSync* toFileReaderSync(JSC::JSValue value)
{
    return value.inherits(&JSFileReaderSync::s_info) ? jsCast<JSFileReaderSync*>(asObject(value))->impl() : 0;
}

}

#endif // ENABLE(BLOB)

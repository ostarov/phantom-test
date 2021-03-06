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

#include "JSFileEntry.h"

#include "ExceptionCode.h"
#include "FileEntry.h"
#include "JSDOMBinding.h"
#include "JSErrorCallback.h"
#include "JSFileCallback.h"
#include "JSFileWriterCallback.h"
#include <runtime/Error.h>
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

/* Hash table for prototype */

static const HashTableValue JSFileEntryPrototypeTableValues[] =
{
    { "createWriter", DontDelete | JSC::Function, (intptr_t)static_cast<NativeFunction>(jsFileEntryPrototypeFunctionCreateWriter), (intptr_t)1, NoIntrinsic },
    { "file", DontDelete | JSC::Function, (intptr_t)static_cast<NativeFunction>(jsFileEntryPrototypeFunctionFile), (intptr_t)1, NoIntrinsic },
    { 0, 0, 0, 0, NoIntrinsic }
};

static const HashTable JSFileEntryPrototypeTable = { 5, 3, JSFileEntryPrototypeTableValues, 0 };
static const HashTable* getJSFileEntryPrototypeTable(ExecState* exec)
{
    return getHashTableForGlobalData(exec->vm(), &JSFileEntryPrototypeTable);
}

const ClassInfo JSFileEntryPrototype::s_info = { "FileEntryPrototype", &Base::s_info, 0, getJSFileEntryPrototypeTable, CREATE_METHOD_TABLE(JSFileEntryPrototype) };

JSObject* JSFileEntryPrototype::self(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSFileEntry>(exec, globalObject);
}

bool JSFileEntryPrototype::getOwnPropertySlot(JSCell* cell, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    JSFileEntryPrototype* thisObject = jsCast<JSFileEntryPrototype*>(cell);
    return getStaticFunctionSlot<JSObject>(exec, getJSFileEntryPrototypeTable(exec), thisObject, propertyName, slot);
}

bool JSFileEntryPrototype::getOwnPropertyDescriptor(JSObject* object, ExecState* exec, PropertyName propertyName, PropertyDescriptor& descriptor)
{
    JSFileEntryPrototype* thisObject = jsCast<JSFileEntryPrototype*>(object);
    return getStaticFunctionDescriptor<JSObject>(exec, getJSFileEntryPrototypeTable(exec), thisObject, propertyName, descriptor);
}

const ClassInfo JSFileEntry::s_info = { "FileEntry", &Base::s_info, 0, 0 , CREATE_METHOD_TABLE(JSFileEntry) };

JSFileEntry::JSFileEntry(Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<FileEntry> impl)
    : JSEntry(structure, globalObject, impl)
{
}

void JSFileEntry::finishCreation(VM& vm)
{
    Base::finishCreation(vm);
    ASSERT(inherits(&s_info));
}

JSObject* JSFileEntry::createPrototype(ExecState* exec, JSGlobalObject* globalObject)
{
    return JSFileEntryPrototype::create(exec->vm(), globalObject, JSFileEntryPrototype::createStructure(exec->vm(), globalObject, JSEntryPrototype::self(exec, globalObject)));
}

EncodedJSValue JSC_HOST_CALL jsFileEntryPrototypeFunctionCreateWriter(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSFileEntry::s_info))
        return throwVMTypeError(exec);
    JSFileEntry* castedThis = jsCast<JSFileEntry*>(asObject(thisValue));
    ASSERT_GC_OBJECT_INHERITS(castedThis, &JSFileEntry::s_info);
    FileEntry* impl = static_cast<FileEntry*>(castedThis->impl());
    if (exec->argumentCount() < 1)
        return throwVMError(exec, createNotEnoughArgumentsError(exec));
    if (exec->argumentCount() <= 0 || !exec->argument(0).isFunction())
        return throwVMTypeError(exec);
    RefPtr<FileWriterCallback> successCallback = JSFileWriterCallback::create(asObject(exec->argument(0)), castedThis->globalObject());
    RefPtr<ErrorCallback> errorCallback;
    if (exec->argumentCount() > 1 && !exec->argument(1).isUndefinedOrNull()) {
        if (!exec->argument(1).isFunction())
            return throwVMTypeError(exec);
        errorCallback = JSErrorCallback::create(asObject(exec->argument(1)), castedThis->globalObject());
    }
    impl->createWriter(successCallback, errorCallback);
    return JSValue::encode(jsUndefined());
}

EncodedJSValue JSC_HOST_CALL jsFileEntryPrototypeFunctionFile(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSFileEntry::s_info))
        return throwVMTypeError(exec);
    JSFileEntry* castedThis = jsCast<JSFileEntry*>(asObject(thisValue));
    ASSERT_GC_OBJECT_INHERITS(castedThis, &JSFileEntry::s_info);
    FileEntry* impl = static_cast<FileEntry*>(castedThis->impl());
    if (exec->argumentCount() < 1)
        return throwVMError(exec, createNotEnoughArgumentsError(exec));
    if (exec->argumentCount() <= 0 || !exec->argument(0).isFunction())
        return throwVMTypeError(exec);
    RefPtr<FileCallback> successCallback = JSFileCallback::create(asObject(exec->argument(0)), castedThis->globalObject());
    RefPtr<ErrorCallback> errorCallback;
    if (exec->argumentCount() > 1 && !exec->argument(1).isUndefinedOrNull()) {
        if (!exec->argument(1).isFunction())
            return throwVMTypeError(exec);
        errorCallback = JSErrorCallback::create(asObject(exec->argument(1)), castedThis->globalObject());
    }
    impl->file(successCallback, errorCallback);
    return JSValue::encode(jsUndefined());
}

#if ENABLE(BINDING_INTEGRITY)
#if PLATFORM(WIN)
#pragma warning(disable: 4483)
extern "C" { extern void (*const __identifier("??_7FileEntry@WebCore@@6B@")[])(); }
#else
extern "C" { extern void* _ZTVN7WebCore9FileEntryE[]; }
#endif
#endif
JSC::JSValue toJS(JSC::ExecState* exec, JSDOMGlobalObject* globalObject, FileEntry* impl)
{
    if (!impl)
        return jsNull();
    if (JSValue result = getExistingWrapper<JSFileEntry>(exec, impl))
        return result;

#if ENABLE(BINDING_INTEGRITY)
    void* actualVTablePointer = *(reinterpret_cast<void**>(impl));
#if PLATFORM(WIN)
    void* expectedVTablePointer = reinterpret_cast<void*>(__identifier("??_7FileEntry@WebCore@@6B@"));
#else
    void* expectedVTablePointer = &_ZTVN7WebCore9FileEntryE[2];
#if COMPILER(CLANG) && COMPILER_SUPPORTS(CXX_STATIC_ASSERT)
    // If this fails FileEntry does not have a vtable, so you need to add the
    // ImplementationLacksVTable attribute to the interface definition
    COMPILE_ASSERT(__is_polymorphic(FileEntry), FileEntry_is_not_polymorphic);
#endif
#endif
    // If you hit this assertion you either have a use after free bug, or
    // FileEntry has subclasses. If FileEntry has subclasses that get passed
    // to toJS() we currently require FileEntry you to opt out of binding hardening
    // by adding the SkipVTableValidation attribute to the interface IDL definition
    RELEASE_ASSERT(actualVTablePointer == expectedVTablePointer);
#endif
    ReportMemoryCost<FileEntry>::reportMemoryCost(exec, impl);
    return createNewWrapper<JSFileEntry>(exec, globalObject, impl);
}

FileEntry* toFileEntry(JSC::JSValue value)
{
    return value.inherits(&JSFileEntry::s_info) ? jsCast<JSFileEntry*>(asObject(value))->impl() : 0;
}

}

#endif // ENABLE(FILE_SYSTEM)

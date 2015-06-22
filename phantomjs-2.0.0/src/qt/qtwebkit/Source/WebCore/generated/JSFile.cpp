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
#include "JSFile.h"

#include "File.h"
#include "KURL.h"
#include <runtime/JSString.h>
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

/* Hash table */

static const HashTableValue JSFileTableValues[] =
{
    { "name", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsFileName), (intptr_t)0, NoIntrinsic },
    { "lastModifiedDate", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsFileLastModifiedDate), (intptr_t)0, NoIntrinsic },
#if ENABLE(DIRECTORY_UPLOAD)
    { "webkitRelativePath", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsFileWebkitRelativePath), (intptr_t)0, NoIntrinsic },
#endif
    { "constructor", DontEnum | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsFileConstructor), (intptr_t)0, NoIntrinsic },
    { 0, 0, 0, 0, NoIntrinsic }
};

static const HashTable JSFileTable = { 9, 7, JSFileTableValues, 0 };
/* Hash table for constructor */

static const HashTableValue JSFileConstructorTableValues[] =
{
    { 0, 0, 0, 0, NoIntrinsic }
};

static const HashTable JSFileConstructorTable = { 1, 0, JSFileConstructorTableValues, 0 };
static const HashTable* getJSFileConstructorTable(ExecState* exec)
{
    return getHashTableForGlobalData(exec->vm(), &JSFileConstructorTable);
}

const ClassInfo JSFileConstructor::s_info = { "FileConstructor", &Base::s_info, 0, getJSFileConstructorTable, CREATE_METHOD_TABLE(JSFileConstructor) };

JSFileConstructor::JSFileConstructor(Structure* structure, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(structure, globalObject)
{
}

void JSFileConstructor::finishCreation(ExecState* exec, JSDOMGlobalObject* globalObject)
{
    Base::finishCreation(exec->vm());
    ASSERT(inherits(&s_info));
    putDirect(exec->vm(), exec->propertyNames().prototype, JSFilePrototype::self(exec, globalObject), DontDelete | ReadOnly);
    putDirect(exec->vm(), exec->propertyNames().length, jsNumber(0), ReadOnly | DontDelete | DontEnum);
}

bool JSFileConstructor::getOwnPropertySlot(JSCell* cell, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSFileConstructor, JSDOMWrapper>(exec, getJSFileConstructorTable(exec), jsCast<JSFileConstructor*>(cell), propertyName, slot);
}

bool JSFileConstructor::getOwnPropertyDescriptor(JSObject* object, ExecState* exec, PropertyName propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSFileConstructor, JSDOMWrapper>(exec, getJSFileConstructorTable(exec), jsCast<JSFileConstructor*>(object), propertyName, descriptor);
}

/* Hash table for prototype */

static const HashTableValue JSFilePrototypeTableValues[] =
{
    { 0, 0, 0, 0, NoIntrinsic }
};

static const HashTable JSFilePrototypeTable = { 1, 0, JSFilePrototypeTableValues, 0 };
static const HashTable* getJSFilePrototypeTable(ExecState* exec)
{
    return getHashTableForGlobalData(exec->vm(), &JSFilePrototypeTable);
}

const ClassInfo JSFilePrototype::s_info = { "FilePrototype", &Base::s_info, 0, getJSFilePrototypeTable, CREATE_METHOD_TABLE(JSFilePrototype) };

JSObject* JSFilePrototype::self(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSFile>(exec, globalObject);
}

static const HashTable* getJSFileTable(ExecState* exec)
{
    return getHashTableForGlobalData(exec->vm(), &JSFileTable);
}

const ClassInfo JSFile::s_info = { "File", &Base::s_info, 0, getJSFileTable , CREATE_METHOD_TABLE(JSFile) };

JSFile::JSFile(Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<File> impl)
    : JSBlob(structure, globalObject, impl)
{
}

void JSFile::finishCreation(VM& vm)
{
    Base::finishCreation(vm);
    ASSERT(inherits(&s_info));
}

JSObject* JSFile::createPrototype(ExecState* exec, JSGlobalObject* globalObject)
{
    return JSFilePrototype::create(exec->vm(), globalObject, JSFilePrototype::createStructure(exec->vm(), globalObject, JSBlobPrototype::self(exec, globalObject)));
}

bool JSFile::getOwnPropertySlot(JSCell* cell, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    JSFile* thisObject = jsCast<JSFile*>(cell);
    ASSERT_GC_OBJECT_INHERITS(thisObject, &s_info);
    return getStaticValueSlot<JSFile, Base>(exec, getJSFileTable(exec), thisObject, propertyName, slot);
}

bool JSFile::getOwnPropertyDescriptor(JSObject* object, ExecState* exec, PropertyName propertyName, PropertyDescriptor& descriptor)
{
    JSFile* thisObject = jsCast<JSFile*>(object);
    ASSERT_GC_OBJECT_INHERITS(thisObject, &s_info);
    return getStaticValueDescriptor<JSFile, Base>(exec, getJSFileTable(exec), thisObject, propertyName, descriptor);
}

JSValue jsFileName(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSFile* castedThis = jsCast<JSFile*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    File* impl = static_cast<File*>(castedThis->impl());
    JSValue result = jsStringWithCache(exec, impl->name());
    return result;
}


JSValue jsFileLastModifiedDate(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSFile* castedThis = jsCast<JSFile*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    File* impl = static_cast<File*>(castedThis->impl());
    JSValue result = jsDateOrNull(exec, impl->lastModifiedDate());
    return result;
}


#if ENABLE(DIRECTORY_UPLOAD)
JSValue jsFileWebkitRelativePath(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSFile* castedThis = jsCast<JSFile*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    File* impl = static_cast<File*>(castedThis->impl());
    JSValue result = jsStringWithCache(exec, impl->webkitRelativePath());
    return result;
}

#endif

JSValue jsFileConstructor(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSFile* domObject = jsCast<JSFile*>(asObject(slotBase));
    return JSFile::getConstructor(exec, domObject->globalObject());
}

JSValue JSFile::getConstructor(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSFileConstructor>(exec, jsCast<JSDOMGlobalObject*>(globalObject));
}

#if ENABLE(BINDING_INTEGRITY)
#if PLATFORM(WIN)
#pragma warning(disable: 4483)
extern "C" { extern void (*const __identifier("??_7File@WebCore@@6B@")[])(); }
#else
extern "C" { extern void* _ZTVN7WebCore4FileE[]; }
#endif
#endif
JSC::JSValue toJS(JSC::ExecState* exec, JSDOMGlobalObject* globalObject, File* impl)
{
    if (!impl)
        return jsNull();
    if (JSValue result = getExistingWrapper<JSFile>(exec, impl))
        return result;

#if ENABLE(BINDING_INTEGRITY)
    void* actualVTablePointer = *(reinterpret_cast<void**>(impl));
#if PLATFORM(WIN)
    void* expectedVTablePointer = reinterpret_cast<void*>(__identifier("??_7File@WebCore@@6B@"));
#else
    void* expectedVTablePointer = &_ZTVN7WebCore4FileE[2];
#if COMPILER(CLANG) && COMPILER_SUPPORTS(CXX_STATIC_ASSERT)
    // If this fails File does not have a vtable, so you need to add the
    // ImplementationLacksVTable attribute to the interface definition
    COMPILE_ASSERT(__is_polymorphic(File), File_is_not_polymorphic);
#endif
#endif
    // If you hit this assertion you either have a use after free bug, or
    // File has subclasses. If File has subclasses that get passed
    // to toJS() we currently require File you to opt out of binding hardening
    // by adding the SkipVTableValidation attribute to the interface IDL definition
    RELEASE_ASSERT(actualVTablePointer == expectedVTablePointer);
#endif
    ReportMemoryCost<File>::reportMemoryCost(exec, impl);
    return createNewWrapper<JSFile>(exec, globalObject, impl);
}

File* toFile(JSC::JSValue value)
{
    return value.inherits(&JSFile::s_info) ? jsCast<JSFile*>(asObject(value))->impl() : 0;
}

}

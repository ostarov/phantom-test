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

#if ENABLE(BLOB) || ENABLE(FILE_SYSTEM)

#include "JSFileError.h"

#include "FileError.h"
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

/* Hash table */

static const HashTableValue JSFileErrorTableValues[] =
{
    { "code", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsFileErrorCode), (intptr_t)0, NoIntrinsic },
    { "constructor", DontEnum | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsFileErrorConstructor), (intptr_t)0, NoIntrinsic },
    { 0, 0, 0, 0, NoIntrinsic }
};

static const HashTable JSFileErrorTable = { 5, 3, JSFileErrorTableValues, 0 };
/* Hash table for constructor */

static const HashTableValue JSFileErrorConstructorTableValues[] =
{
    { "NOT_FOUND_ERR", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsFileErrorNOT_FOUND_ERR), (intptr_t)0, NoIntrinsic },
    { "SECURITY_ERR", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsFileErrorSECURITY_ERR), (intptr_t)0, NoIntrinsic },
    { "ABORT_ERR", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsFileErrorABORT_ERR), (intptr_t)0, NoIntrinsic },
    { "NOT_READABLE_ERR", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsFileErrorNOT_READABLE_ERR), (intptr_t)0, NoIntrinsic },
    { "ENCODING_ERR", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsFileErrorENCODING_ERR), (intptr_t)0, NoIntrinsic },
    { "NO_MODIFICATION_ALLOWED_ERR", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsFileErrorNO_MODIFICATION_ALLOWED_ERR), (intptr_t)0, NoIntrinsic },
    { "INVALID_STATE_ERR", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsFileErrorINVALID_STATE_ERR), (intptr_t)0, NoIntrinsic },
    { "SYNTAX_ERR", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsFileErrorSYNTAX_ERR), (intptr_t)0, NoIntrinsic },
    { "INVALID_MODIFICATION_ERR", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsFileErrorINVALID_MODIFICATION_ERR), (intptr_t)0, NoIntrinsic },
    { "QUOTA_EXCEEDED_ERR", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsFileErrorQUOTA_EXCEEDED_ERR), (intptr_t)0, NoIntrinsic },
    { "TYPE_MISMATCH_ERR", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsFileErrorTYPE_MISMATCH_ERR), (intptr_t)0, NoIntrinsic },
    { "PATH_EXISTS_ERR", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsFileErrorPATH_EXISTS_ERR), (intptr_t)0, NoIntrinsic },
    { 0, 0, 0, 0, NoIntrinsic }
};

static const HashTable JSFileErrorConstructorTable = { 34, 31, JSFileErrorConstructorTableValues, 0 };

COMPILE_ASSERT(1 == FileError::NOT_FOUND_ERR, FileErrorEnumNOT_FOUND_ERRIsWrongUseDoNotCheckConstants);
COMPILE_ASSERT(2 == FileError::SECURITY_ERR, FileErrorEnumSECURITY_ERRIsWrongUseDoNotCheckConstants);
COMPILE_ASSERT(3 == FileError::ABORT_ERR, FileErrorEnumABORT_ERRIsWrongUseDoNotCheckConstants);
COMPILE_ASSERT(4 == FileError::NOT_READABLE_ERR, FileErrorEnumNOT_READABLE_ERRIsWrongUseDoNotCheckConstants);
COMPILE_ASSERT(5 == FileError::ENCODING_ERR, FileErrorEnumENCODING_ERRIsWrongUseDoNotCheckConstants);
COMPILE_ASSERT(6 == FileError::NO_MODIFICATION_ALLOWED_ERR, FileErrorEnumNO_MODIFICATION_ALLOWED_ERRIsWrongUseDoNotCheckConstants);
COMPILE_ASSERT(7 == FileError::INVALID_STATE_ERR, FileErrorEnumINVALID_STATE_ERRIsWrongUseDoNotCheckConstants);
COMPILE_ASSERT(8 == FileError::SYNTAX_ERR, FileErrorEnumSYNTAX_ERRIsWrongUseDoNotCheckConstants);
COMPILE_ASSERT(9 == FileError::INVALID_MODIFICATION_ERR, FileErrorEnumINVALID_MODIFICATION_ERRIsWrongUseDoNotCheckConstants);
COMPILE_ASSERT(10 == FileError::QUOTA_EXCEEDED_ERR, FileErrorEnumQUOTA_EXCEEDED_ERRIsWrongUseDoNotCheckConstants);
COMPILE_ASSERT(11 == FileError::TYPE_MISMATCH_ERR, FileErrorEnumTYPE_MISMATCH_ERRIsWrongUseDoNotCheckConstants);
COMPILE_ASSERT(12 == FileError::PATH_EXISTS_ERR, FileErrorEnumPATH_EXISTS_ERRIsWrongUseDoNotCheckConstants);

static const HashTable* getJSFileErrorConstructorTable(ExecState* exec)
{
    return getHashTableForGlobalData(exec->vm(), &JSFileErrorConstructorTable);
}

const ClassInfo JSFileErrorConstructor::s_info = { "FileErrorConstructor", &Base::s_info, 0, getJSFileErrorConstructorTable, CREATE_METHOD_TABLE(JSFileErrorConstructor) };

JSFileErrorConstructor::JSFileErrorConstructor(Structure* structure, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(structure, globalObject)
{
}

void JSFileErrorConstructor::finishCreation(ExecState* exec, JSDOMGlobalObject* globalObject)
{
    Base::finishCreation(exec->vm());
    ASSERT(inherits(&s_info));
    putDirect(exec->vm(), exec->propertyNames().prototype, JSFileErrorPrototype::self(exec, globalObject), DontDelete | ReadOnly);
    putDirect(exec->vm(), exec->propertyNames().length, jsNumber(0), ReadOnly | DontDelete | DontEnum);
}

bool JSFileErrorConstructor::getOwnPropertySlot(JSCell* cell, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSFileErrorConstructor, JSDOMWrapper>(exec, getJSFileErrorConstructorTable(exec), jsCast<JSFileErrorConstructor*>(cell), propertyName, slot);
}

bool JSFileErrorConstructor::getOwnPropertyDescriptor(JSObject* object, ExecState* exec, PropertyName propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSFileErrorConstructor, JSDOMWrapper>(exec, getJSFileErrorConstructorTable(exec), jsCast<JSFileErrorConstructor*>(object), propertyName, descriptor);
}

/* Hash table for prototype */

static const HashTableValue JSFileErrorPrototypeTableValues[] =
{
    { "NOT_FOUND_ERR", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsFileErrorNOT_FOUND_ERR), (intptr_t)0, NoIntrinsic },
    { "SECURITY_ERR", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsFileErrorSECURITY_ERR), (intptr_t)0, NoIntrinsic },
    { "ABORT_ERR", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsFileErrorABORT_ERR), (intptr_t)0, NoIntrinsic },
    { "NOT_READABLE_ERR", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsFileErrorNOT_READABLE_ERR), (intptr_t)0, NoIntrinsic },
    { "ENCODING_ERR", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsFileErrorENCODING_ERR), (intptr_t)0, NoIntrinsic },
    { "NO_MODIFICATION_ALLOWED_ERR", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsFileErrorNO_MODIFICATION_ALLOWED_ERR), (intptr_t)0, NoIntrinsic },
    { "INVALID_STATE_ERR", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsFileErrorINVALID_STATE_ERR), (intptr_t)0, NoIntrinsic },
    { "SYNTAX_ERR", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsFileErrorSYNTAX_ERR), (intptr_t)0, NoIntrinsic },
    { "INVALID_MODIFICATION_ERR", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsFileErrorINVALID_MODIFICATION_ERR), (intptr_t)0, NoIntrinsic },
    { "QUOTA_EXCEEDED_ERR", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsFileErrorQUOTA_EXCEEDED_ERR), (intptr_t)0, NoIntrinsic },
    { "TYPE_MISMATCH_ERR", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsFileErrorTYPE_MISMATCH_ERR), (intptr_t)0, NoIntrinsic },
    { "PATH_EXISTS_ERR", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsFileErrorPATH_EXISTS_ERR), (intptr_t)0, NoIntrinsic },
    { 0, 0, 0, 0, NoIntrinsic }
};

static const HashTable JSFileErrorPrototypeTable = { 34, 31, JSFileErrorPrototypeTableValues, 0 };
static const HashTable* getJSFileErrorPrototypeTable(ExecState* exec)
{
    return getHashTableForGlobalData(exec->vm(), &JSFileErrorPrototypeTable);
}

const ClassInfo JSFileErrorPrototype::s_info = { "FileErrorPrototype", &Base::s_info, 0, getJSFileErrorPrototypeTable, CREATE_METHOD_TABLE(JSFileErrorPrototype) };

JSObject* JSFileErrorPrototype::self(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSFileError>(exec, globalObject);
}

bool JSFileErrorPrototype::getOwnPropertySlot(JSCell* cell, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    JSFileErrorPrototype* thisObject = jsCast<JSFileErrorPrototype*>(cell);
    return getStaticValueSlot<JSFileErrorPrototype, JSObject>(exec, getJSFileErrorPrototypeTable(exec), thisObject, propertyName, slot);
}

bool JSFileErrorPrototype::getOwnPropertyDescriptor(JSObject* object, ExecState* exec, PropertyName propertyName, PropertyDescriptor& descriptor)
{
    JSFileErrorPrototype* thisObject = jsCast<JSFileErrorPrototype*>(object);
    return getStaticValueDescriptor<JSFileErrorPrototype, JSObject>(exec, getJSFileErrorPrototypeTable(exec), thisObject, propertyName, descriptor);
}

static const HashTable* getJSFileErrorTable(ExecState* exec)
{
    return getHashTableForGlobalData(exec->vm(), &JSFileErrorTable);
}

const ClassInfo JSFileError::s_info = { "FileError", &Base::s_info, 0, getJSFileErrorTable , CREATE_METHOD_TABLE(JSFileError) };

JSFileError::JSFileError(Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<FileError> impl)
    : JSDOMWrapper(structure, globalObject)
    , m_impl(impl.leakRef())
{
}

void JSFileError::finishCreation(VM& vm)
{
    Base::finishCreation(vm);
    ASSERT(inherits(&s_info));
}

JSObject* JSFileError::createPrototype(ExecState* exec, JSGlobalObject* globalObject)
{
    return JSFileErrorPrototype::create(exec->vm(), globalObject, JSFileErrorPrototype::createStructure(globalObject->vm(), globalObject, globalObject->objectPrototype()));
}

void JSFileError::destroy(JSC::JSCell* cell)
{
    JSFileError* thisObject = static_cast<JSFileError*>(cell);
    thisObject->JSFileError::~JSFileError();
}

JSFileError::~JSFileError()
{
    releaseImplIfNotNull();
}

bool JSFileError::getOwnPropertySlot(JSCell* cell, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    JSFileError* thisObject = jsCast<JSFileError*>(cell);
    ASSERT_GC_OBJECT_INHERITS(thisObject, &s_info);
    return getStaticValueSlot<JSFileError, Base>(exec, getJSFileErrorTable(exec), thisObject, propertyName, slot);
}

bool JSFileError::getOwnPropertyDescriptor(JSObject* object, ExecState* exec, PropertyName propertyName, PropertyDescriptor& descriptor)
{
    JSFileError* thisObject = jsCast<JSFileError*>(object);
    ASSERT_GC_OBJECT_INHERITS(thisObject, &s_info);
    return getStaticValueDescriptor<JSFileError, Base>(exec, getJSFileErrorTable(exec), thisObject, propertyName, descriptor);
}

JSValue jsFileErrorCode(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSFileError* castedThis = jsCast<JSFileError*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    FileError* impl = static_cast<FileError*>(castedThis->impl());
    JSValue result = jsNumber(impl->code());
    return result;
}


JSValue jsFileErrorConstructor(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSFileError* domObject = jsCast<JSFileError*>(asObject(slotBase));
    return JSFileError::getConstructor(exec, domObject->globalObject());
}

JSValue JSFileError::getConstructor(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSFileErrorConstructor>(exec, jsCast<JSDOMGlobalObject*>(globalObject));
}

// Constant getters

JSValue jsFileErrorNOT_FOUND_ERR(ExecState* exec, JSValue, PropertyName)
{
    UNUSED_PARAM(exec);
    return jsNumber(static_cast<int>(1));
}

JSValue jsFileErrorSECURITY_ERR(ExecState* exec, JSValue, PropertyName)
{
    UNUSED_PARAM(exec);
    return jsNumber(static_cast<int>(2));
}

JSValue jsFileErrorABORT_ERR(ExecState* exec, JSValue, PropertyName)
{
    UNUSED_PARAM(exec);
    return jsNumber(static_cast<int>(3));
}

JSValue jsFileErrorNOT_READABLE_ERR(ExecState* exec, JSValue, PropertyName)
{
    UNUSED_PARAM(exec);
    return jsNumber(static_cast<int>(4));
}

JSValue jsFileErrorENCODING_ERR(ExecState* exec, JSValue, PropertyName)
{
    UNUSED_PARAM(exec);
    return jsNumber(static_cast<int>(5));
}

JSValue jsFileErrorNO_MODIFICATION_ALLOWED_ERR(ExecState* exec, JSValue, PropertyName)
{
    UNUSED_PARAM(exec);
    return jsNumber(static_cast<int>(6));
}

JSValue jsFileErrorINVALID_STATE_ERR(ExecState* exec, JSValue, PropertyName)
{
    UNUSED_PARAM(exec);
    return jsNumber(static_cast<int>(7));
}

JSValue jsFileErrorSYNTAX_ERR(ExecState* exec, JSValue, PropertyName)
{
    UNUSED_PARAM(exec);
    return jsNumber(static_cast<int>(8));
}

JSValue jsFileErrorINVALID_MODIFICATION_ERR(ExecState* exec, JSValue, PropertyName)
{
    UNUSED_PARAM(exec);
    return jsNumber(static_cast<int>(9));
}

JSValue jsFileErrorQUOTA_EXCEEDED_ERR(ExecState* exec, JSValue, PropertyName)
{
    UNUSED_PARAM(exec);
    return jsNumber(static_cast<int>(10));
}

JSValue jsFileErrorTYPE_MISMATCH_ERR(ExecState* exec, JSValue, PropertyName)
{
    UNUSED_PARAM(exec);
    return jsNumber(static_cast<int>(11));
}

JSValue jsFileErrorPATH_EXISTS_ERR(ExecState* exec, JSValue, PropertyName)
{
    UNUSED_PARAM(exec);
    return jsNumber(static_cast<int>(12));
}

static inline bool isObservable(JSFileError* jsFileError)
{
    if (jsFileError->hasCustomProperties())
        return true;
    return false;
}

bool JSFileErrorOwner::isReachableFromOpaqueRoots(JSC::Handle<JSC::Unknown> handle, void*, SlotVisitor& visitor)
{
    JSFileError* jsFileError = jsCast<JSFileError*>(handle.get().asCell());
    if (!isObservable(jsFileError))
        return false;
    UNUSED_PARAM(visitor);
    return false;
}

void JSFileErrorOwner::finalize(JSC::Handle<JSC::Unknown> handle, void* context)
{
    JSFileError* jsFileError = jsCast<JSFileError*>(handle.get().asCell());
    DOMWrapperWorld* world = static_cast<DOMWrapperWorld*>(context);
    uncacheWrapper(world, jsFileError->impl(), jsFileError);
    jsFileError->releaseImpl();
}

JSC::JSValue toJS(JSC::ExecState* exec, JSDOMGlobalObject* globalObject, FileError* impl)
{
    if (!impl)
        return jsNull();
    if (JSValue result = getExistingWrapper<JSFileError>(exec, impl))
        return result;
#if COMPILER(CLANG) && COMPILER_SUPPORTS(CXX_STATIC_ASSERT)
    // If you hit this failure the interface definition has the ImplementationLacksVTable
    // attribute. You should remove that attribute. If the class has subclasses
    // that may be passed through this toJS() function you should use the SkipVTableValidation
    // attribute to FileError.
    COMPILE_ASSERT(!__is_polymorphic(FileError), FileError_is_polymorphic_but_idl_claims_not_to_be);
#endif
    ReportMemoryCost<FileError>::reportMemoryCost(exec, impl);
    return createNewWrapper<JSFileError>(exec, globalObject, impl);
}

FileError* toFileError(JSC::JSValue value)
{
    return value.inherits(&JSFileError::s_info) ? jsCast<JSFileError*>(asObject(value))->impl() : 0;
}

}

#endif // ENABLE(BLOB) || ENABLE(FILE_SYSTEM)

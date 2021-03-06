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
#include "JSDOMCoreException.h"

#include "DOMCoreException.h"
#include "ExceptionCode.h"
#include "JSDOMBinding.h"
#include "KURL.h"
#include <runtime/Error.h>
#include <runtime/JSString.h>
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

/* Hash table */

static const HashTableValue JSDOMCoreExceptionTableValues[] =
{
    { "code", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsDOMCoreExceptionCode), (intptr_t)0, NoIntrinsic },
    { "name", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsDOMCoreExceptionName), (intptr_t)0, NoIntrinsic },
    { "message", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsDOMCoreExceptionMessage), (intptr_t)0, NoIntrinsic },
    { "constructor", DontEnum | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsDOMCoreExceptionConstructor), (intptr_t)0, NoIntrinsic },
    { 0, 0, 0, 0, NoIntrinsic }
};

static const HashTable JSDOMCoreExceptionTable = { 10, 7, JSDOMCoreExceptionTableValues, 0 };
/* Hash table for constructor */

static const HashTableValue JSDOMCoreExceptionConstructorTableValues[] =
{
    { "INDEX_SIZE_ERR", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsDOMCoreExceptionINDEX_SIZE_ERR), (intptr_t)0, NoIntrinsic },
    { "DOMSTRING_SIZE_ERR", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsDOMCoreExceptionDOMSTRING_SIZE_ERR), (intptr_t)0, NoIntrinsic },
    { "HIERARCHY_REQUEST_ERR", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsDOMCoreExceptionHIERARCHY_REQUEST_ERR), (intptr_t)0, NoIntrinsic },
    { "WRONG_DOCUMENT_ERR", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsDOMCoreExceptionWRONG_DOCUMENT_ERR), (intptr_t)0, NoIntrinsic },
    { "INVALID_CHARACTER_ERR", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsDOMCoreExceptionINVALID_CHARACTER_ERR), (intptr_t)0, NoIntrinsic },
    { "NO_DATA_ALLOWED_ERR", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsDOMCoreExceptionNO_DATA_ALLOWED_ERR), (intptr_t)0, NoIntrinsic },
    { "NO_MODIFICATION_ALLOWED_ERR", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsDOMCoreExceptionNO_MODIFICATION_ALLOWED_ERR), (intptr_t)0, NoIntrinsic },
    { "NOT_FOUND_ERR", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsDOMCoreExceptionNOT_FOUND_ERR), (intptr_t)0, NoIntrinsic },
    { "NOT_SUPPORTED_ERR", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsDOMCoreExceptionNOT_SUPPORTED_ERR), (intptr_t)0, NoIntrinsic },
    { "INUSE_ATTRIBUTE_ERR", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsDOMCoreExceptionINUSE_ATTRIBUTE_ERR), (intptr_t)0, NoIntrinsic },
    { "INVALID_STATE_ERR", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsDOMCoreExceptionINVALID_STATE_ERR), (intptr_t)0, NoIntrinsic },
    { "SYNTAX_ERR", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsDOMCoreExceptionSYNTAX_ERR), (intptr_t)0, NoIntrinsic },
    { "INVALID_MODIFICATION_ERR", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsDOMCoreExceptionINVALID_MODIFICATION_ERR), (intptr_t)0, NoIntrinsic },
    { "NAMESPACE_ERR", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsDOMCoreExceptionNAMESPACE_ERR), (intptr_t)0, NoIntrinsic },
    { "INVALID_ACCESS_ERR", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsDOMCoreExceptionINVALID_ACCESS_ERR), (intptr_t)0, NoIntrinsic },
    { "VALIDATION_ERR", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsDOMCoreExceptionVALIDATION_ERR), (intptr_t)0, NoIntrinsic },
    { "TYPE_MISMATCH_ERR", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsDOMCoreExceptionTYPE_MISMATCH_ERR), (intptr_t)0, NoIntrinsic },
    { "SECURITY_ERR", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsDOMCoreExceptionSECURITY_ERR), (intptr_t)0, NoIntrinsic },
    { "NETWORK_ERR", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsDOMCoreExceptionNETWORK_ERR), (intptr_t)0, NoIntrinsic },
    { "ABORT_ERR", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsDOMCoreExceptionABORT_ERR), (intptr_t)0, NoIntrinsic },
    { "URL_MISMATCH_ERR", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsDOMCoreExceptionURL_MISMATCH_ERR), (intptr_t)0, NoIntrinsic },
    { "QUOTA_EXCEEDED_ERR", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsDOMCoreExceptionQUOTA_EXCEEDED_ERR), (intptr_t)0, NoIntrinsic },
    { "TIMEOUT_ERR", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsDOMCoreExceptionTIMEOUT_ERR), (intptr_t)0, NoIntrinsic },
    { "INVALID_NODE_TYPE_ERR", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsDOMCoreExceptionINVALID_NODE_TYPE_ERR), (intptr_t)0, NoIntrinsic },
    { "DATA_CLONE_ERR", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsDOMCoreExceptionDATA_CLONE_ERR), (intptr_t)0, NoIntrinsic },
    { 0, 0, 0, 0, NoIntrinsic }
};

static const HashTable JSDOMCoreExceptionConstructorTable = { 68, 63, JSDOMCoreExceptionConstructorTableValues, 0 };
static const HashTable* getJSDOMCoreExceptionConstructorTable(ExecState* exec)
{
    return getHashTableForGlobalData(exec->vm(), &JSDOMCoreExceptionConstructorTable);
}

const ClassInfo JSDOMCoreExceptionConstructor::s_info = { "DOMExceptionConstructor", &Base::s_info, 0, getJSDOMCoreExceptionConstructorTable, CREATE_METHOD_TABLE(JSDOMCoreExceptionConstructor) };

JSDOMCoreExceptionConstructor::JSDOMCoreExceptionConstructor(Structure* structure, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(structure, globalObject)
{
}

void JSDOMCoreExceptionConstructor::finishCreation(ExecState* exec, JSDOMGlobalObject* globalObject)
{
    Base::finishCreation(exec->vm());
    ASSERT(inherits(&s_info));
    putDirect(exec->vm(), exec->propertyNames().prototype, JSDOMCoreExceptionPrototype::self(exec, globalObject), DontDelete | ReadOnly);
    putDirect(exec->vm(), exec->propertyNames().length, jsNumber(0), ReadOnly | DontDelete | DontEnum);
}

bool JSDOMCoreExceptionConstructor::getOwnPropertySlot(JSCell* cell, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSDOMCoreExceptionConstructor, JSDOMWrapper>(exec, getJSDOMCoreExceptionConstructorTable(exec), jsCast<JSDOMCoreExceptionConstructor*>(cell), propertyName, slot);
}

bool JSDOMCoreExceptionConstructor::getOwnPropertyDescriptor(JSObject* object, ExecState* exec, PropertyName propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSDOMCoreExceptionConstructor, JSDOMWrapper>(exec, getJSDOMCoreExceptionConstructorTable(exec), jsCast<JSDOMCoreExceptionConstructor*>(object), propertyName, descriptor);
}

/* Hash table for prototype */

static const HashTableValue JSDOMCoreExceptionPrototypeTableValues[] =
{
    { "INDEX_SIZE_ERR", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsDOMCoreExceptionINDEX_SIZE_ERR), (intptr_t)0, NoIntrinsic },
    { "DOMSTRING_SIZE_ERR", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsDOMCoreExceptionDOMSTRING_SIZE_ERR), (intptr_t)0, NoIntrinsic },
    { "HIERARCHY_REQUEST_ERR", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsDOMCoreExceptionHIERARCHY_REQUEST_ERR), (intptr_t)0, NoIntrinsic },
    { "WRONG_DOCUMENT_ERR", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsDOMCoreExceptionWRONG_DOCUMENT_ERR), (intptr_t)0, NoIntrinsic },
    { "INVALID_CHARACTER_ERR", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsDOMCoreExceptionINVALID_CHARACTER_ERR), (intptr_t)0, NoIntrinsic },
    { "NO_DATA_ALLOWED_ERR", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsDOMCoreExceptionNO_DATA_ALLOWED_ERR), (intptr_t)0, NoIntrinsic },
    { "NO_MODIFICATION_ALLOWED_ERR", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsDOMCoreExceptionNO_MODIFICATION_ALLOWED_ERR), (intptr_t)0, NoIntrinsic },
    { "NOT_FOUND_ERR", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsDOMCoreExceptionNOT_FOUND_ERR), (intptr_t)0, NoIntrinsic },
    { "NOT_SUPPORTED_ERR", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsDOMCoreExceptionNOT_SUPPORTED_ERR), (intptr_t)0, NoIntrinsic },
    { "INUSE_ATTRIBUTE_ERR", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsDOMCoreExceptionINUSE_ATTRIBUTE_ERR), (intptr_t)0, NoIntrinsic },
    { "INVALID_STATE_ERR", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsDOMCoreExceptionINVALID_STATE_ERR), (intptr_t)0, NoIntrinsic },
    { "SYNTAX_ERR", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsDOMCoreExceptionSYNTAX_ERR), (intptr_t)0, NoIntrinsic },
    { "INVALID_MODIFICATION_ERR", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsDOMCoreExceptionINVALID_MODIFICATION_ERR), (intptr_t)0, NoIntrinsic },
    { "NAMESPACE_ERR", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsDOMCoreExceptionNAMESPACE_ERR), (intptr_t)0, NoIntrinsic },
    { "INVALID_ACCESS_ERR", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsDOMCoreExceptionINVALID_ACCESS_ERR), (intptr_t)0, NoIntrinsic },
    { "VALIDATION_ERR", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsDOMCoreExceptionVALIDATION_ERR), (intptr_t)0, NoIntrinsic },
    { "TYPE_MISMATCH_ERR", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsDOMCoreExceptionTYPE_MISMATCH_ERR), (intptr_t)0, NoIntrinsic },
    { "SECURITY_ERR", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsDOMCoreExceptionSECURITY_ERR), (intptr_t)0, NoIntrinsic },
    { "NETWORK_ERR", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsDOMCoreExceptionNETWORK_ERR), (intptr_t)0, NoIntrinsic },
    { "ABORT_ERR", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsDOMCoreExceptionABORT_ERR), (intptr_t)0, NoIntrinsic },
    { "URL_MISMATCH_ERR", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsDOMCoreExceptionURL_MISMATCH_ERR), (intptr_t)0, NoIntrinsic },
    { "QUOTA_EXCEEDED_ERR", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsDOMCoreExceptionQUOTA_EXCEEDED_ERR), (intptr_t)0, NoIntrinsic },
    { "TIMEOUT_ERR", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsDOMCoreExceptionTIMEOUT_ERR), (intptr_t)0, NoIntrinsic },
    { "INVALID_NODE_TYPE_ERR", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsDOMCoreExceptionINVALID_NODE_TYPE_ERR), (intptr_t)0, NoIntrinsic },
    { "DATA_CLONE_ERR", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsDOMCoreExceptionDATA_CLONE_ERR), (intptr_t)0, NoIntrinsic },
    { "toString", DontDelete | DontEnum | JSC::Function, (intptr_t)static_cast<NativeFunction>(jsDOMCoreExceptionPrototypeFunctionToString), (intptr_t)0, NoIntrinsic },
    { 0, 0, 0, 0, NoIntrinsic }
};

static const HashTable JSDOMCoreExceptionPrototypeTable = { 69, 63, JSDOMCoreExceptionPrototypeTableValues, 0 };
static const HashTable* getJSDOMCoreExceptionPrototypeTable(ExecState* exec)
{
    return getHashTableForGlobalData(exec->vm(), &JSDOMCoreExceptionPrototypeTable);
}

const ClassInfo JSDOMCoreExceptionPrototype::s_info = { "DOMExceptionPrototype", &Base::s_info, 0, getJSDOMCoreExceptionPrototypeTable, CREATE_METHOD_TABLE(JSDOMCoreExceptionPrototype) };

JSObject* JSDOMCoreExceptionPrototype::self(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSDOMCoreException>(exec, globalObject);
}

bool JSDOMCoreExceptionPrototype::getOwnPropertySlot(JSCell* cell, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    JSDOMCoreExceptionPrototype* thisObject = jsCast<JSDOMCoreExceptionPrototype*>(cell);
    return getStaticPropertySlot<JSDOMCoreExceptionPrototype, JSObject>(exec, getJSDOMCoreExceptionPrototypeTable(exec), thisObject, propertyName, slot);
}

bool JSDOMCoreExceptionPrototype::getOwnPropertyDescriptor(JSObject* object, ExecState* exec, PropertyName propertyName, PropertyDescriptor& descriptor)
{
    JSDOMCoreExceptionPrototype* thisObject = jsCast<JSDOMCoreExceptionPrototype*>(object);
    return getStaticPropertyDescriptor<JSDOMCoreExceptionPrototype, JSObject>(exec, getJSDOMCoreExceptionPrototypeTable(exec), thisObject, propertyName, descriptor);
}

static const HashTable* getJSDOMCoreExceptionTable(ExecState* exec)
{
    return getHashTableForGlobalData(exec->vm(), &JSDOMCoreExceptionTable);
}

const ClassInfo JSDOMCoreException::s_info = { "DOMException", &Base::s_info, 0, getJSDOMCoreExceptionTable , CREATE_METHOD_TABLE(JSDOMCoreException) };

JSDOMCoreException::JSDOMCoreException(Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<DOMCoreException> impl)
    : JSDOMWrapper(structure, globalObject)
    , m_impl(impl.leakRef())
{
}

void JSDOMCoreException::finishCreation(VM& vm)
{
    Base::finishCreation(vm);
    ASSERT(inherits(&s_info));
}

JSObject* JSDOMCoreException::createPrototype(ExecState* exec, JSGlobalObject* globalObject)
{
    return JSDOMCoreExceptionPrototype::create(exec->vm(), globalObject, JSDOMCoreExceptionPrototype::createStructure(globalObject->vm(), globalObject, globalObject->errorPrototype()));
}

void JSDOMCoreException::destroy(JSC::JSCell* cell)
{
    JSDOMCoreException* thisObject = static_cast<JSDOMCoreException*>(cell);
    thisObject->JSDOMCoreException::~JSDOMCoreException();
}

JSDOMCoreException::~JSDOMCoreException()
{
    releaseImplIfNotNull();
}

bool JSDOMCoreException::getOwnPropertySlot(JSCell* cell, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    JSDOMCoreException* thisObject = jsCast<JSDOMCoreException*>(cell);
    ASSERT_GC_OBJECT_INHERITS(thisObject, &s_info);
    return getStaticValueSlot<JSDOMCoreException, Base>(exec, getJSDOMCoreExceptionTable(exec), thisObject, propertyName, slot);
}

bool JSDOMCoreException::getOwnPropertyDescriptor(JSObject* object, ExecState* exec, PropertyName propertyName, PropertyDescriptor& descriptor)
{
    JSDOMCoreException* thisObject = jsCast<JSDOMCoreException*>(object);
    ASSERT_GC_OBJECT_INHERITS(thisObject, &s_info);
    return getStaticValueDescriptor<JSDOMCoreException, Base>(exec, getJSDOMCoreExceptionTable(exec), thisObject, propertyName, descriptor);
}

JSValue jsDOMCoreExceptionCode(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSDOMCoreException* castedThis = jsCast<JSDOMCoreException*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    DOMCoreException* impl = static_cast<DOMCoreException*>(castedThis->impl());
    JSValue result = jsNumber(impl->code());
    return result;
}


JSValue jsDOMCoreExceptionName(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSDOMCoreException* castedThis = jsCast<JSDOMCoreException*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    DOMCoreException* impl = static_cast<DOMCoreException*>(castedThis->impl());
    JSValue result = jsStringWithCache(exec, impl->name());
    return result;
}


JSValue jsDOMCoreExceptionMessage(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSDOMCoreException* castedThis = jsCast<JSDOMCoreException*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    DOMCoreException* impl = static_cast<DOMCoreException*>(castedThis->impl());
    JSValue result = jsStringWithCache(exec, impl->message());
    return result;
}


JSValue jsDOMCoreExceptionConstructor(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSDOMCoreException* domObject = jsCast<JSDOMCoreException*>(asObject(slotBase));
    return JSDOMCoreException::getConstructor(exec, domObject->globalObject());
}

JSValue JSDOMCoreException::getConstructor(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSDOMCoreExceptionConstructor>(exec, jsCast<JSDOMGlobalObject*>(globalObject));
}

EncodedJSValue JSC_HOST_CALL jsDOMCoreExceptionPrototypeFunctionToString(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSDOMCoreException::s_info))
        return throwVMTypeError(exec);
    JSDOMCoreException* castedThis = jsCast<JSDOMCoreException*>(asObject(thisValue));
    ASSERT_GC_OBJECT_INHERITS(castedThis, &JSDOMCoreException::s_info);
    DOMCoreException* impl = static_cast<DOMCoreException*>(castedThis->impl());

    JSC::JSValue result = jsStringWithCache(exec, impl->toString());
    return JSValue::encode(result);
}

// Constant getters

JSValue jsDOMCoreExceptionINDEX_SIZE_ERR(ExecState* exec, JSValue, PropertyName)
{
    UNUSED_PARAM(exec);
    return jsNumber(static_cast<int>(1));
}

JSValue jsDOMCoreExceptionDOMSTRING_SIZE_ERR(ExecState* exec, JSValue, PropertyName)
{
    UNUSED_PARAM(exec);
    return jsNumber(static_cast<int>(2));
}

JSValue jsDOMCoreExceptionHIERARCHY_REQUEST_ERR(ExecState* exec, JSValue, PropertyName)
{
    UNUSED_PARAM(exec);
    return jsNumber(static_cast<int>(3));
}

JSValue jsDOMCoreExceptionWRONG_DOCUMENT_ERR(ExecState* exec, JSValue, PropertyName)
{
    UNUSED_PARAM(exec);
    return jsNumber(static_cast<int>(4));
}

JSValue jsDOMCoreExceptionINVALID_CHARACTER_ERR(ExecState* exec, JSValue, PropertyName)
{
    UNUSED_PARAM(exec);
    return jsNumber(static_cast<int>(5));
}

JSValue jsDOMCoreExceptionNO_DATA_ALLOWED_ERR(ExecState* exec, JSValue, PropertyName)
{
    UNUSED_PARAM(exec);
    return jsNumber(static_cast<int>(6));
}

JSValue jsDOMCoreExceptionNO_MODIFICATION_ALLOWED_ERR(ExecState* exec, JSValue, PropertyName)
{
    UNUSED_PARAM(exec);
    return jsNumber(static_cast<int>(7));
}

JSValue jsDOMCoreExceptionNOT_FOUND_ERR(ExecState* exec, JSValue, PropertyName)
{
    UNUSED_PARAM(exec);
    return jsNumber(static_cast<int>(8));
}

JSValue jsDOMCoreExceptionNOT_SUPPORTED_ERR(ExecState* exec, JSValue, PropertyName)
{
    UNUSED_PARAM(exec);
    return jsNumber(static_cast<int>(9));
}

JSValue jsDOMCoreExceptionINUSE_ATTRIBUTE_ERR(ExecState* exec, JSValue, PropertyName)
{
    UNUSED_PARAM(exec);
    return jsNumber(static_cast<int>(10));
}

JSValue jsDOMCoreExceptionINVALID_STATE_ERR(ExecState* exec, JSValue, PropertyName)
{
    UNUSED_PARAM(exec);
    return jsNumber(static_cast<int>(11));
}

JSValue jsDOMCoreExceptionSYNTAX_ERR(ExecState* exec, JSValue, PropertyName)
{
    UNUSED_PARAM(exec);
    return jsNumber(static_cast<int>(12));
}

JSValue jsDOMCoreExceptionINVALID_MODIFICATION_ERR(ExecState* exec, JSValue, PropertyName)
{
    UNUSED_PARAM(exec);
    return jsNumber(static_cast<int>(13));
}

JSValue jsDOMCoreExceptionNAMESPACE_ERR(ExecState* exec, JSValue, PropertyName)
{
    UNUSED_PARAM(exec);
    return jsNumber(static_cast<int>(14));
}

JSValue jsDOMCoreExceptionINVALID_ACCESS_ERR(ExecState* exec, JSValue, PropertyName)
{
    UNUSED_PARAM(exec);
    return jsNumber(static_cast<int>(15));
}

JSValue jsDOMCoreExceptionVALIDATION_ERR(ExecState* exec, JSValue, PropertyName)
{
    UNUSED_PARAM(exec);
    return jsNumber(static_cast<int>(16));
}

JSValue jsDOMCoreExceptionTYPE_MISMATCH_ERR(ExecState* exec, JSValue, PropertyName)
{
    UNUSED_PARAM(exec);
    return jsNumber(static_cast<int>(17));
}

JSValue jsDOMCoreExceptionSECURITY_ERR(ExecState* exec, JSValue, PropertyName)
{
    UNUSED_PARAM(exec);
    return jsNumber(static_cast<int>(18));
}

JSValue jsDOMCoreExceptionNETWORK_ERR(ExecState* exec, JSValue, PropertyName)
{
    UNUSED_PARAM(exec);
    return jsNumber(static_cast<int>(19));
}

JSValue jsDOMCoreExceptionABORT_ERR(ExecState* exec, JSValue, PropertyName)
{
    UNUSED_PARAM(exec);
    return jsNumber(static_cast<int>(20));
}

JSValue jsDOMCoreExceptionURL_MISMATCH_ERR(ExecState* exec, JSValue, PropertyName)
{
    UNUSED_PARAM(exec);
    return jsNumber(static_cast<int>(21));
}

JSValue jsDOMCoreExceptionQUOTA_EXCEEDED_ERR(ExecState* exec, JSValue, PropertyName)
{
    UNUSED_PARAM(exec);
    return jsNumber(static_cast<int>(22));
}

JSValue jsDOMCoreExceptionTIMEOUT_ERR(ExecState* exec, JSValue, PropertyName)
{
    UNUSED_PARAM(exec);
    return jsNumber(static_cast<int>(23));
}

JSValue jsDOMCoreExceptionINVALID_NODE_TYPE_ERR(ExecState* exec, JSValue, PropertyName)
{
    UNUSED_PARAM(exec);
    return jsNumber(static_cast<int>(24));
}

JSValue jsDOMCoreExceptionDATA_CLONE_ERR(ExecState* exec, JSValue, PropertyName)
{
    UNUSED_PARAM(exec);
    return jsNumber(static_cast<int>(25));
}

static inline bool isObservable(JSDOMCoreException* jsDOMCoreException)
{
    if (jsDOMCoreException->hasCustomProperties())
        return true;
    return false;
}

bool JSDOMCoreExceptionOwner::isReachableFromOpaqueRoots(JSC::Handle<JSC::Unknown> handle, void*, SlotVisitor& visitor)
{
    JSDOMCoreException* jsDOMCoreException = jsCast<JSDOMCoreException*>(handle.get().asCell());
    if (!isObservable(jsDOMCoreException))
        return false;
    UNUSED_PARAM(visitor);
    return false;
}

void JSDOMCoreExceptionOwner::finalize(JSC::Handle<JSC::Unknown> handle, void* context)
{
    JSDOMCoreException* jsDOMCoreException = jsCast<JSDOMCoreException*>(handle.get().asCell());
    DOMWrapperWorld* world = static_cast<DOMWrapperWorld*>(context);
    uncacheWrapper(world, jsDOMCoreException->impl(), jsDOMCoreException);
    jsDOMCoreException->releaseImpl();
}

JSC::JSValue toJS(JSC::ExecState* exec, JSDOMGlobalObject* globalObject, DOMCoreException* impl)
{
    if (!impl)
        return jsNull();
    if (JSValue result = getExistingWrapper<JSDOMCoreException>(exec, impl))
        return result;
#if COMPILER(CLANG) && COMPILER_SUPPORTS(CXX_STATIC_ASSERT)
    // If you hit this failure the interface definition has the ImplementationLacksVTable
    // attribute. You should remove that attribute. If the class has subclasses
    // that may be passed through this toJS() function you should use the SkipVTableValidation
    // attribute to DOMCoreException.
    COMPILE_ASSERT(!__is_polymorphic(DOMCoreException), DOMCoreException_is_polymorphic_but_idl_claims_not_to_be);
#endif
    ReportMemoryCost<DOMCoreException>::reportMemoryCost(exec, impl);
    return createNewWrapper<JSDOMCoreException>(exec, globalObject, impl);
}

DOMCoreException* toDOMCoreException(JSC::JSValue value)
{
    return value.inherits(&JSDOMCoreException::s_info) ? jsCast<JSDOMCoreException*>(asObject(value))->impl() : 0;
}

}

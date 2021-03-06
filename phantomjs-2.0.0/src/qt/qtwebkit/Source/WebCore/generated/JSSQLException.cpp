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

#if ENABLE(SQL_DATABASE)

#include "JSSQLException.h"

#include "KURL.h"
#include "SQLException.h"
#include <runtime/JSString.h>
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

/* Hash table */

static const HashTableValue JSSQLExceptionTableValues[] =
{
    { "code", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSQLExceptionCode), (intptr_t)0, NoIntrinsic },
    { "message", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSQLExceptionMessage), (intptr_t)0, NoIntrinsic },
    { "constructor", DontEnum | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSQLExceptionConstructor), (intptr_t)0, NoIntrinsic },
    { 0, 0, 0, 0, NoIntrinsic }
};

static const HashTable JSSQLExceptionTable = { 9, 7, JSSQLExceptionTableValues, 0 };
/* Hash table for constructor */

static const HashTableValue JSSQLExceptionConstructorTableValues[] =
{
    { "UNKNOWN_ERR", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSQLExceptionUNKNOWN_ERR), (intptr_t)0, NoIntrinsic },
    { "DATABASE_ERR", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSQLExceptionDATABASE_ERR), (intptr_t)0, NoIntrinsic },
    { "VERSION_ERR", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSQLExceptionVERSION_ERR), (intptr_t)0, NoIntrinsic },
    { "TOO_LARGE_ERR", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSQLExceptionTOO_LARGE_ERR), (intptr_t)0, NoIntrinsic },
    { "QUOTA_ERR", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSQLExceptionQUOTA_ERR), (intptr_t)0, NoIntrinsic },
    { "SYNTAX_ERR", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSQLExceptionSYNTAX_ERR), (intptr_t)0, NoIntrinsic },
    { "CONSTRAINT_ERR", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSQLExceptionCONSTRAINT_ERR), (intptr_t)0, NoIntrinsic },
    { "TIMEOUT_ERR", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSQLExceptionTIMEOUT_ERR), (intptr_t)0, NoIntrinsic },
    { 0, 0, 0, 0, NoIntrinsic }
};

static const HashTable JSSQLExceptionConstructorTable = { 16, 15, JSSQLExceptionConstructorTableValues, 0 };
static const HashTable* getJSSQLExceptionConstructorTable(ExecState* exec)
{
    return getHashTableForGlobalData(exec->vm(), &JSSQLExceptionConstructorTable);
}

const ClassInfo JSSQLExceptionConstructor::s_info = { "SQLExceptionConstructor", &Base::s_info, 0, getJSSQLExceptionConstructorTable, CREATE_METHOD_TABLE(JSSQLExceptionConstructor) };

JSSQLExceptionConstructor::JSSQLExceptionConstructor(Structure* structure, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(structure, globalObject)
{
}

void JSSQLExceptionConstructor::finishCreation(ExecState* exec, JSDOMGlobalObject* globalObject)
{
    Base::finishCreation(exec->vm());
    ASSERT(inherits(&s_info));
    putDirect(exec->vm(), exec->propertyNames().prototype, JSSQLExceptionPrototype::self(exec, globalObject), DontDelete | ReadOnly);
    putDirect(exec->vm(), exec->propertyNames().length, jsNumber(0), ReadOnly | DontDelete | DontEnum);
}

bool JSSQLExceptionConstructor::getOwnPropertySlot(JSCell* cell, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSSQLExceptionConstructor, JSDOMWrapper>(exec, getJSSQLExceptionConstructorTable(exec), jsCast<JSSQLExceptionConstructor*>(cell), propertyName, slot);
}

bool JSSQLExceptionConstructor::getOwnPropertyDescriptor(JSObject* object, ExecState* exec, PropertyName propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSSQLExceptionConstructor, JSDOMWrapper>(exec, getJSSQLExceptionConstructorTable(exec), jsCast<JSSQLExceptionConstructor*>(object), propertyName, descriptor);
}

/* Hash table for prototype */

static const HashTableValue JSSQLExceptionPrototypeTableValues[] =
{
    { "UNKNOWN_ERR", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSQLExceptionUNKNOWN_ERR), (intptr_t)0, NoIntrinsic },
    { "DATABASE_ERR", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSQLExceptionDATABASE_ERR), (intptr_t)0, NoIntrinsic },
    { "VERSION_ERR", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSQLExceptionVERSION_ERR), (intptr_t)0, NoIntrinsic },
    { "TOO_LARGE_ERR", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSQLExceptionTOO_LARGE_ERR), (intptr_t)0, NoIntrinsic },
    { "QUOTA_ERR", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSQLExceptionQUOTA_ERR), (intptr_t)0, NoIntrinsic },
    { "SYNTAX_ERR", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSQLExceptionSYNTAX_ERR), (intptr_t)0, NoIntrinsic },
    { "CONSTRAINT_ERR", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSQLExceptionCONSTRAINT_ERR), (intptr_t)0, NoIntrinsic },
    { "TIMEOUT_ERR", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSQLExceptionTIMEOUT_ERR), (intptr_t)0, NoIntrinsic },
    { 0, 0, 0, 0, NoIntrinsic }
};

static const HashTable JSSQLExceptionPrototypeTable = { 16, 15, JSSQLExceptionPrototypeTableValues, 0 };
static const HashTable* getJSSQLExceptionPrototypeTable(ExecState* exec)
{
    return getHashTableForGlobalData(exec->vm(), &JSSQLExceptionPrototypeTable);
}

const ClassInfo JSSQLExceptionPrototype::s_info = { "SQLExceptionPrototype", &Base::s_info, 0, getJSSQLExceptionPrototypeTable, CREATE_METHOD_TABLE(JSSQLExceptionPrototype) };

JSObject* JSSQLExceptionPrototype::self(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSSQLException>(exec, globalObject);
}

bool JSSQLExceptionPrototype::getOwnPropertySlot(JSCell* cell, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    JSSQLExceptionPrototype* thisObject = jsCast<JSSQLExceptionPrototype*>(cell);
    return getStaticValueSlot<JSSQLExceptionPrototype, JSObject>(exec, getJSSQLExceptionPrototypeTable(exec), thisObject, propertyName, slot);
}

bool JSSQLExceptionPrototype::getOwnPropertyDescriptor(JSObject* object, ExecState* exec, PropertyName propertyName, PropertyDescriptor& descriptor)
{
    JSSQLExceptionPrototype* thisObject = jsCast<JSSQLExceptionPrototype*>(object);
    return getStaticValueDescriptor<JSSQLExceptionPrototype, JSObject>(exec, getJSSQLExceptionPrototypeTable(exec), thisObject, propertyName, descriptor);
}

static const HashTable* getJSSQLExceptionTable(ExecState* exec)
{
    return getHashTableForGlobalData(exec->vm(), &JSSQLExceptionTable);
}

const ClassInfo JSSQLException::s_info = { "SQLException", &Base::s_info, 0, getJSSQLExceptionTable , CREATE_METHOD_TABLE(JSSQLException) };

JSSQLException::JSSQLException(Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<SQLException> impl)
    : JSDOMWrapper(structure, globalObject)
    , m_impl(impl.leakRef())
{
}

void JSSQLException::finishCreation(VM& vm)
{
    Base::finishCreation(vm);
    ASSERT(inherits(&s_info));
}

JSObject* JSSQLException::createPrototype(ExecState* exec, JSGlobalObject* globalObject)
{
    return JSSQLExceptionPrototype::create(exec->vm(), globalObject, JSSQLExceptionPrototype::createStructure(globalObject->vm(), globalObject, globalObject->errorPrototype()));
}

void JSSQLException::destroy(JSC::JSCell* cell)
{
    JSSQLException* thisObject = static_cast<JSSQLException*>(cell);
    thisObject->JSSQLException::~JSSQLException();
}

JSSQLException::~JSSQLException()
{
    releaseImplIfNotNull();
}

bool JSSQLException::getOwnPropertySlot(JSCell* cell, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    JSSQLException* thisObject = jsCast<JSSQLException*>(cell);
    ASSERT_GC_OBJECT_INHERITS(thisObject, &s_info);
    return getStaticValueSlot<JSSQLException, Base>(exec, getJSSQLExceptionTable(exec), thisObject, propertyName, slot);
}

bool JSSQLException::getOwnPropertyDescriptor(JSObject* object, ExecState* exec, PropertyName propertyName, PropertyDescriptor& descriptor)
{
    JSSQLException* thisObject = jsCast<JSSQLException*>(object);
    ASSERT_GC_OBJECT_INHERITS(thisObject, &s_info);
    return getStaticValueDescriptor<JSSQLException, Base>(exec, getJSSQLExceptionTable(exec), thisObject, propertyName, descriptor);
}

JSValue jsSQLExceptionCode(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSSQLException* castedThis = jsCast<JSSQLException*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SQLException* impl = static_cast<SQLException*>(castedThis->impl());
    JSValue result = jsNumber(impl->code());
    return result;
}


JSValue jsSQLExceptionMessage(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSSQLException* castedThis = jsCast<JSSQLException*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SQLException* impl = static_cast<SQLException*>(castedThis->impl());
    JSValue result = jsStringWithCache(exec, impl->message());
    return result;
}


JSValue jsSQLExceptionConstructor(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSSQLException* domObject = jsCast<JSSQLException*>(asObject(slotBase));
    return JSSQLException::getConstructor(exec, domObject->globalObject());
}

JSValue JSSQLException::getConstructor(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSSQLExceptionConstructor>(exec, jsCast<JSDOMGlobalObject*>(globalObject));
}

// Constant getters

JSValue jsSQLExceptionUNKNOWN_ERR(ExecState* exec, JSValue, PropertyName)
{
    UNUSED_PARAM(exec);
    return jsNumber(static_cast<int>(0));
}

JSValue jsSQLExceptionDATABASE_ERR(ExecState* exec, JSValue, PropertyName)
{
    UNUSED_PARAM(exec);
    return jsNumber(static_cast<int>(1));
}

JSValue jsSQLExceptionVERSION_ERR(ExecState* exec, JSValue, PropertyName)
{
    UNUSED_PARAM(exec);
    return jsNumber(static_cast<int>(2));
}

JSValue jsSQLExceptionTOO_LARGE_ERR(ExecState* exec, JSValue, PropertyName)
{
    UNUSED_PARAM(exec);
    return jsNumber(static_cast<int>(3));
}

JSValue jsSQLExceptionQUOTA_ERR(ExecState* exec, JSValue, PropertyName)
{
    UNUSED_PARAM(exec);
    return jsNumber(static_cast<int>(4));
}

JSValue jsSQLExceptionSYNTAX_ERR(ExecState* exec, JSValue, PropertyName)
{
    UNUSED_PARAM(exec);
    return jsNumber(static_cast<int>(5));
}

JSValue jsSQLExceptionCONSTRAINT_ERR(ExecState* exec, JSValue, PropertyName)
{
    UNUSED_PARAM(exec);
    return jsNumber(static_cast<int>(6));
}

JSValue jsSQLExceptionTIMEOUT_ERR(ExecState* exec, JSValue, PropertyName)
{
    UNUSED_PARAM(exec);
    return jsNumber(static_cast<int>(7));
}

static inline bool isObservable(JSSQLException* jsSQLException)
{
    if (jsSQLException->hasCustomProperties())
        return true;
    return false;
}

bool JSSQLExceptionOwner::isReachableFromOpaqueRoots(JSC::Handle<JSC::Unknown> handle, void*, SlotVisitor& visitor)
{
    JSSQLException* jsSQLException = jsCast<JSSQLException*>(handle.get().asCell());
    if (!isObservable(jsSQLException))
        return false;
    UNUSED_PARAM(visitor);
    return false;
}

void JSSQLExceptionOwner::finalize(JSC::Handle<JSC::Unknown> handle, void* context)
{
    JSSQLException* jsSQLException = jsCast<JSSQLException*>(handle.get().asCell());
    DOMWrapperWorld* world = static_cast<DOMWrapperWorld*>(context);
    uncacheWrapper(world, jsSQLException->impl(), jsSQLException);
    jsSQLException->releaseImpl();
}

JSC::JSValue toJS(JSC::ExecState* exec, JSDOMGlobalObject* globalObject, SQLException* impl)
{
    if (!impl)
        return jsNull();
    if (JSValue result = getExistingWrapper<JSSQLException>(exec, impl))
        return result;
#if COMPILER(CLANG) && COMPILER_SUPPORTS(CXX_STATIC_ASSERT)
    // If you hit this failure the interface definition has the ImplementationLacksVTable
    // attribute. You should remove that attribute. If the class has subclasses
    // that may be passed through this toJS() function you should use the SkipVTableValidation
    // attribute to SQLException.
    COMPILE_ASSERT(!__is_polymorphic(SQLException), SQLException_is_polymorphic_but_idl_claims_not_to_be);
#endif
    ReportMemoryCost<SQLException>::reportMemoryCost(exec, impl);
    return createNewWrapper<JSSQLException>(exec, globalObject, impl);
}

SQLException* toSQLException(JSC::JSValue value)
{
    return value.inherits(&JSSQLException::s_info) ? jsCast<JSSQLException*>(asObject(value))->impl() : 0;
}

}

#endif // ENABLE(SQL_DATABASE)

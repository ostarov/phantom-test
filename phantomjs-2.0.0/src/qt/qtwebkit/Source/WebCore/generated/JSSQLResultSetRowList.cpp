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

#include "JSSQLResultSetRowList.h"

#include "SQLResultSetRowList.h"
#include <runtime/Error.h>
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

/* Hash table */

static const HashTableValue JSSQLResultSetRowListTableValues[] =
{
    { "length", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSQLResultSetRowListLength), (intptr_t)0, NoIntrinsic },
    { 0, 0, 0, 0, NoIntrinsic }
};

static const HashTable JSSQLResultSetRowListTable = { 2, 1, JSSQLResultSetRowListTableValues, 0 };
/* Hash table for prototype */

static const HashTableValue JSSQLResultSetRowListPrototypeTableValues[] =
{
    { "item", DontDelete | JSC::Function, (intptr_t)static_cast<NativeFunction>(jsSQLResultSetRowListPrototypeFunctionItem), (intptr_t)1, NoIntrinsic },
    { 0, 0, 0, 0, NoIntrinsic }
};

static const HashTable JSSQLResultSetRowListPrototypeTable = { 2, 1, JSSQLResultSetRowListPrototypeTableValues, 0 };
static const HashTable* getJSSQLResultSetRowListPrototypeTable(ExecState* exec)
{
    return getHashTableForGlobalData(exec->vm(), &JSSQLResultSetRowListPrototypeTable);
}

const ClassInfo JSSQLResultSetRowListPrototype::s_info = { "SQLResultSetRowListPrototype", &Base::s_info, 0, getJSSQLResultSetRowListPrototypeTable, CREATE_METHOD_TABLE(JSSQLResultSetRowListPrototype) };

JSObject* JSSQLResultSetRowListPrototype::self(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSSQLResultSetRowList>(exec, globalObject);
}

bool JSSQLResultSetRowListPrototype::getOwnPropertySlot(JSCell* cell, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    JSSQLResultSetRowListPrototype* thisObject = jsCast<JSSQLResultSetRowListPrototype*>(cell);
    return getStaticFunctionSlot<JSObject>(exec, getJSSQLResultSetRowListPrototypeTable(exec), thisObject, propertyName, slot);
}

bool JSSQLResultSetRowListPrototype::getOwnPropertyDescriptor(JSObject* object, ExecState* exec, PropertyName propertyName, PropertyDescriptor& descriptor)
{
    JSSQLResultSetRowListPrototype* thisObject = jsCast<JSSQLResultSetRowListPrototype*>(object);
    return getStaticFunctionDescriptor<JSObject>(exec, getJSSQLResultSetRowListPrototypeTable(exec), thisObject, propertyName, descriptor);
}

static const HashTable* getJSSQLResultSetRowListTable(ExecState* exec)
{
    return getHashTableForGlobalData(exec->vm(), &JSSQLResultSetRowListTable);
}

const ClassInfo JSSQLResultSetRowList::s_info = { "SQLResultSetRowList", &Base::s_info, 0, getJSSQLResultSetRowListTable , CREATE_METHOD_TABLE(JSSQLResultSetRowList) };

JSSQLResultSetRowList::JSSQLResultSetRowList(Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<SQLResultSetRowList> impl)
    : JSDOMWrapper(structure, globalObject)
    , m_impl(impl.leakRef())
{
}

void JSSQLResultSetRowList::finishCreation(VM& vm)
{
    Base::finishCreation(vm);
    ASSERT(inherits(&s_info));
}

JSObject* JSSQLResultSetRowList::createPrototype(ExecState* exec, JSGlobalObject* globalObject)
{
    return JSSQLResultSetRowListPrototype::create(exec->vm(), globalObject, JSSQLResultSetRowListPrototype::createStructure(globalObject->vm(), globalObject, globalObject->objectPrototype()));
}

void JSSQLResultSetRowList::destroy(JSC::JSCell* cell)
{
    JSSQLResultSetRowList* thisObject = static_cast<JSSQLResultSetRowList*>(cell);
    thisObject->JSSQLResultSetRowList::~JSSQLResultSetRowList();
}

JSSQLResultSetRowList::~JSSQLResultSetRowList()
{
    releaseImplIfNotNull();
}

bool JSSQLResultSetRowList::getOwnPropertySlot(JSCell* cell, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    JSSQLResultSetRowList* thisObject = jsCast<JSSQLResultSetRowList*>(cell);
    ASSERT_GC_OBJECT_INHERITS(thisObject, &s_info);
    return getStaticValueSlot<JSSQLResultSetRowList, Base>(exec, getJSSQLResultSetRowListTable(exec), thisObject, propertyName, slot);
}

bool JSSQLResultSetRowList::getOwnPropertyDescriptor(JSObject* object, ExecState* exec, PropertyName propertyName, PropertyDescriptor& descriptor)
{
    JSSQLResultSetRowList* thisObject = jsCast<JSSQLResultSetRowList*>(object);
    ASSERT_GC_OBJECT_INHERITS(thisObject, &s_info);
    return getStaticValueDescriptor<JSSQLResultSetRowList, Base>(exec, getJSSQLResultSetRowListTable(exec), thisObject, propertyName, descriptor);
}

JSValue jsSQLResultSetRowListLength(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSSQLResultSetRowList* castedThis = jsCast<JSSQLResultSetRowList*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SQLResultSetRowList* impl = static_cast<SQLResultSetRowList*>(castedThis->impl());
    JSValue result = jsNumber(impl->length());
    return result;
}


EncodedJSValue JSC_HOST_CALL jsSQLResultSetRowListPrototypeFunctionItem(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSSQLResultSetRowList::s_info))
        return throwVMTypeError(exec);
    JSSQLResultSetRowList* castedThis = jsCast<JSSQLResultSetRowList*>(asObject(thisValue));
    ASSERT_GC_OBJECT_INHERITS(castedThis, &JSSQLResultSetRowList::s_info);
    return JSValue::encode(castedThis->item(exec));
}

static inline bool isObservable(JSSQLResultSetRowList* jsSQLResultSetRowList)
{
    if (jsSQLResultSetRowList->hasCustomProperties())
        return true;
    return false;
}

bool JSSQLResultSetRowListOwner::isReachableFromOpaqueRoots(JSC::Handle<JSC::Unknown> handle, void*, SlotVisitor& visitor)
{
    JSSQLResultSetRowList* jsSQLResultSetRowList = jsCast<JSSQLResultSetRowList*>(handle.get().asCell());
    if (!isObservable(jsSQLResultSetRowList))
        return false;
    UNUSED_PARAM(visitor);
    return false;
}

void JSSQLResultSetRowListOwner::finalize(JSC::Handle<JSC::Unknown> handle, void* context)
{
    JSSQLResultSetRowList* jsSQLResultSetRowList = jsCast<JSSQLResultSetRowList*>(handle.get().asCell());
    DOMWrapperWorld* world = static_cast<DOMWrapperWorld*>(context);
    uncacheWrapper(world, jsSQLResultSetRowList->impl(), jsSQLResultSetRowList);
    jsSQLResultSetRowList->releaseImpl();
}

JSC::JSValue toJS(JSC::ExecState* exec, JSDOMGlobalObject* globalObject, SQLResultSetRowList* impl)
{
    if (!impl)
        return jsNull();
    if (JSValue result = getExistingWrapper<JSSQLResultSetRowList>(exec, impl))
        return result;
#if COMPILER(CLANG) && COMPILER_SUPPORTS(CXX_STATIC_ASSERT)
    // If you hit this failure the interface definition has the ImplementationLacksVTable
    // attribute. You should remove that attribute. If the class has subclasses
    // that may be passed through this toJS() function you should use the SkipVTableValidation
    // attribute to SQLResultSetRowList.
    COMPILE_ASSERT(!__is_polymorphic(SQLResultSetRowList), SQLResultSetRowList_is_polymorphic_but_idl_claims_not_to_be);
#endif
    ReportMemoryCost<SQLResultSetRowList>::reportMemoryCost(exec, impl);
    return createNewWrapper<JSSQLResultSetRowList>(exec, globalObject, impl);
}

SQLResultSetRowList* toSQLResultSetRowList(JSC::JSValue value)
{
    return value.inherits(&JSSQLResultSetRowList::s_info) ? jsCast<JSSQLResultSetRowList*>(asObject(value))->impl() : 0;
}

}

#endif // ENABLE(SQL_DATABASE)
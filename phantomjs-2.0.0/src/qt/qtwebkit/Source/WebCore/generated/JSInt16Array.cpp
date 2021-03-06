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
#include "JSInt16Array.h"

#include "ExceptionCode.h"
#include "JSArrayBufferViewHelper.h"
#include "JSDOMBinding.h"
#include "JSInt16Array.h"
#include <runtime/Error.h>
#include <runtime/PropertyNameArray.h>
#include <wtf/GetPtr.h>
#include <wtf/Int16Array.h>

using namespace JSC;

namespace WebCore {

/* Hash table */

static const HashTableValue JSInt16ArrayTableValues[] =
{
    { "length", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsInt16ArrayLength), (intptr_t)0, NoIntrinsic },
    { "constructor", DontEnum | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsInt16ArrayConstructor), (intptr_t)0, NoIntrinsic },
    { 0, 0, 0, 0, NoIntrinsic }
};

static const HashTable JSInt16ArrayTable = { 5, 3, JSInt16ArrayTableValues, 0 };
/* Hash table for constructor */

static const HashTableValue JSInt16ArrayConstructorTableValues[] =
{
    { "BYTES_PER_ELEMENT", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsInt16ArrayBYTES_PER_ELEMENT), (intptr_t)0, NoIntrinsic },
    { 0, 0, 0, 0, NoIntrinsic }
};

static const HashTable JSInt16ArrayConstructorTable = { 2, 1, JSInt16ArrayConstructorTableValues, 0 };
EncodedJSValue JSC_HOST_CALL JSInt16ArrayConstructor::constructJSInt16Array(ExecState* exec)
{
    JSInt16ArrayConstructor* jsConstructor = jsCast<JSInt16ArrayConstructor*>(exec->callee());
    RefPtr<Int16Array> array = constructArrayBufferView<Int16Array, short>(exec);
    if (!array.get())
        // Exception has already been thrown.
        return JSValue::encode(JSValue());
    return JSValue::encode(asObject(toJS(exec, jsConstructor->globalObject(), array.get())));
}

JSC::JSValue toJS(JSC::ExecState* exec, JSDOMGlobalObject* globalObject, Int16Array* object)
{
    return toJSArrayBufferView<JSInt16Array>(exec, globalObject, object);
}

void JSInt16Array::indexSetter(JSC::ExecState* exec, unsigned index, JSC::JSValue value)
{
    impl()->set(index, value.toNumber(exec));
}

static const HashTable* getJSInt16ArrayConstructorTable(ExecState* exec)
{
    return getHashTableForGlobalData(exec->vm(), &JSInt16ArrayConstructorTable);
}

const ClassInfo JSInt16ArrayConstructor::s_info = { "Int16ArrayConstructor", &Base::s_info, 0, getJSInt16ArrayConstructorTable, CREATE_METHOD_TABLE(JSInt16ArrayConstructor) };

JSInt16ArrayConstructor::JSInt16ArrayConstructor(Structure* structure, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(structure, globalObject)
{
}

void JSInt16ArrayConstructor::finishCreation(ExecState* exec, JSDOMGlobalObject* globalObject)
{
    Base::finishCreation(exec->vm());
    ASSERT(inherits(&s_info));
    putDirect(exec->vm(), exec->propertyNames().prototype, JSInt16ArrayPrototype::self(exec, globalObject), DontDelete | ReadOnly);
    putDirect(exec->vm(), exec->propertyNames().length, jsNumber(1), ReadOnly | DontDelete | DontEnum);
}

bool JSInt16ArrayConstructor::getOwnPropertySlot(JSCell* cell, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSInt16ArrayConstructor, JSDOMWrapper>(exec, getJSInt16ArrayConstructorTable(exec), jsCast<JSInt16ArrayConstructor*>(cell), propertyName, slot);
}

bool JSInt16ArrayConstructor::getOwnPropertyDescriptor(JSObject* object, ExecState* exec, PropertyName propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSInt16ArrayConstructor, JSDOMWrapper>(exec, getJSInt16ArrayConstructorTable(exec), jsCast<JSInt16ArrayConstructor*>(object), propertyName, descriptor);
}

ConstructType JSInt16ArrayConstructor::getConstructData(JSCell*, ConstructData& constructData)
{
    constructData.native.function = constructJSInt16Array;
    return ConstructTypeHost;
}

/* Hash table for prototype */

static const HashTableValue JSInt16ArrayPrototypeTableValues[] =
{
    { "BYTES_PER_ELEMENT", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsInt16ArrayBYTES_PER_ELEMENT), (intptr_t)0, NoIntrinsic },
    { "subarray", DontDelete | JSC::Function, (intptr_t)static_cast<NativeFunction>(jsInt16ArrayPrototypeFunctionSubarray), (intptr_t)0, NoIntrinsic },
    { "set", DontDelete | JSC::Function, (intptr_t)static_cast<NativeFunction>(jsInt16ArrayPrototypeFunctionSet), (intptr_t)0, NoIntrinsic },
    { 0, 0, 0, 0, NoIntrinsic }
};

static const HashTable JSInt16ArrayPrototypeTable = { 8, 7, JSInt16ArrayPrototypeTableValues, 0 };
static const HashTable* getJSInt16ArrayPrototypeTable(ExecState* exec)
{
    return getHashTableForGlobalData(exec->vm(), &JSInt16ArrayPrototypeTable);
}

const ClassInfo JSInt16ArrayPrototype::s_info = { "Int16ArrayPrototype", &Base::s_info, 0, getJSInt16ArrayPrototypeTable, CREATE_METHOD_TABLE(JSInt16ArrayPrototype) };

JSObject* JSInt16ArrayPrototype::self(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSInt16Array>(exec, globalObject);
}

bool JSInt16ArrayPrototype::getOwnPropertySlot(JSCell* cell, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    JSInt16ArrayPrototype* thisObject = jsCast<JSInt16ArrayPrototype*>(cell);
    return getStaticPropertySlot<JSInt16ArrayPrototype, JSObject>(exec, getJSInt16ArrayPrototypeTable(exec), thisObject, propertyName, slot);
}

bool JSInt16ArrayPrototype::getOwnPropertyDescriptor(JSObject* object, ExecState* exec, PropertyName propertyName, PropertyDescriptor& descriptor)
{
    JSInt16ArrayPrototype* thisObject = jsCast<JSInt16ArrayPrototype*>(object);
    return getStaticPropertyDescriptor<JSInt16ArrayPrototype, JSObject>(exec, getJSInt16ArrayPrototypeTable(exec), thisObject, propertyName, descriptor);
}

static const HashTable* getJSInt16ArrayTable(ExecState* exec)
{
    return getHashTableForGlobalData(exec->vm(), &JSInt16ArrayTable);
}

const ClassInfo JSInt16Array::s_info = { "Int16Array", &Base::s_info, 0, getJSInt16ArrayTable , CREATE_METHOD_TABLE(JSInt16Array) };

JSInt16Array::JSInt16Array(Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<Int16Array> impl)
    : JSArrayBufferView(structure, globalObject, impl)
{
}

void JSInt16Array::finishCreation(VM& vm)
{
    Base::finishCreation(vm);
    TypedArrayDescriptor descriptor(&JSInt16Array::s_info, OBJECT_OFFSETOF(JSInt16Array, m_storage), OBJECT_OFFSETOF(JSInt16Array, m_storageLength));
    vm.registerTypedArrayDescriptor(impl(), descriptor);
    m_storage = impl()->data();
    m_storageLength = impl()->length();
    ASSERT(inherits(&s_info));
}

JSObject* JSInt16Array::createPrototype(ExecState* exec, JSGlobalObject* globalObject)
{
    return JSInt16ArrayPrototype::create(exec->vm(), globalObject, JSInt16ArrayPrototype::createStructure(exec->vm(), globalObject, JSArrayBufferViewPrototype::self(exec, globalObject)));
}

bool JSInt16Array::getOwnPropertySlot(JSCell* cell, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    JSInt16Array* thisObject = jsCast<JSInt16Array*>(cell);
    ASSERT_GC_OBJECT_INHERITS(thisObject, &s_info);
    unsigned index = propertyName.asIndex();
    if (index != PropertyName::NotAnIndex && index < static_cast<Int16Array*>(thisObject->impl())->length()) {
        slot.setValue(thisObject->getByIndex(exec, index));
        return true;
    }
    return getStaticValueSlot<JSInt16Array, Base>(exec, getJSInt16ArrayTable(exec), thisObject, propertyName, slot);
}

bool JSInt16Array::getOwnPropertyDescriptor(JSObject* object, ExecState* exec, PropertyName propertyName, PropertyDescriptor& descriptor)
{
    JSInt16Array* thisObject = jsCast<JSInt16Array*>(object);
    ASSERT_GC_OBJECT_INHERITS(thisObject, &s_info);
    unsigned index = propertyName.asIndex();
    if (index != PropertyName::NotAnIndex && index < static_cast<Int16Array*>(thisObject->impl())->length()) {
        descriptor.setDescriptor(thisObject->getByIndex(exec, index), DontDelete);
        return true;
    }
    return getStaticValueDescriptor<JSInt16Array, Base>(exec, getJSInt16ArrayTable(exec), thisObject, propertyName, descriptor);
}

bool JSInt16Array::getOwnPropertySlotByIndex(JSCell* cell, ExecState* exec, unsigned index, PropertySlot& slot)
{
    JSInt16Array* thisObject = jsCast<JSInt16Array*>(cell);
    ASSERT_GC_OBJECT_INHERITS(thisObject, &s_info);
    if (index < static_cast<Int16Array*>(thisObject->impl())->length()) {
        slot.setValue(thisObject->getByIndex(exec, index));
        return true;
    }
    return Base::getOwnPropertySlotByIndex(thisObject, exec, index, slot);
}

JSValue jsInt16ArrayLength(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSInt16Array* castedThis = jsCast<JSInt16Array*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    Int16Array* impl = static_cast<Int16Array*>(castedThis->impl());
    JSValue result = jsNumber(impl->length());
    return result;
}


JSValue jsInt16ArrayConstructor(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSInt16Array* domObject = jsCast<JSInt16Array*>(asObject(slotBase));
    return JSInt16Array::getConstructor(exec, domObject->globalObject());
}

void JSInt16Array::put(JSCell* cell, ExecState* exec, PropertyName propertyName, JSValue value, PutPropertySlot& slot)
{
    JSInt16Array* thisObject = jsCast<JSInt16Array*>(cell);
    ASSERT_GC_OBJECT_INHERITS(thisObject, &s_info);
    unsigned index = propertyName.asIndex();
    if (index != PropertyName::NotAnIndex) {
        thisObject->indexSetter(exec, index, value);
        return;
    }
    Base::put(thisObject, exec, propertyName, value, slot);
}

void JSInt16Array::putByIndex(JSCell* cell, ExecState* exec, unsigned index, JSValue value, bool shouldThrow)
{
    JSInt16Array* thisObject = jsCast<JSInt16Array*>(cell);
    ASSERT_GC_OBJECT_INHERITS(thisObject, &s_info);
    if (index <= MAX_ARRAY_INDEX) {
        UNUSED_PARAM(shouldThrow);
        thisObject->indexSetter(exec, index, value);
        return;
    }
    Base::putByIndex(cell, exec, index, value, shouldThrow);
}

void JSInt16Array::getOwnPropertyNames(JSObject* object, ExecState* exec, PropertyNameArray& propertyNames, EnumerationMode mode)
{
    JSInt16Array* thisObject = jsCast<JSInt16Array*>(object);
    ASSERT_GC_OBJECT_INHERITS(thisObject, &s_info);
    for (unsigned i = 0; i < static_cast<Int16Array*>(thisObject->impl())->length(); ++i)
        propertyNames.add(Identifier::from(exec, i));
     Base::getOwnPropertyNames(thisObject, exec, propertyNames, mode);
}

JSValue JSInt16Array::getConstructor(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSInt16ArrayConstructor>(exec, jsCast<JSDOMGlobalObject*>(globalObject));
}

EncodedJSValue JSC_HOST_CALL jsInt16ArrayPrototypeFunctionSubarray(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSInt16Array::s_info))
        return throwVMTypeError(exec);
    JSInt16Array* castedThis = jsCast<JSInt16Array*>(asObject(thisValue));
    ASSERT_GC_OBJECT_INHERITS(castedThis, &JSInt16Array::s_info);
    Int16Array* impl = static_cast<Int16Array*>(castedThis->impl());
    int start(toInt32(exec, exec->argument(0), NormalConversion));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());

    size_t argsCount = exec->argumentCount();
    if (argsCount <= 1) {

        JSC::JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(impl->subarray(start)));
        return JSValue::encode(result);
    }

    int end(toInt32(exec, exec->argument(1), NormalConversion));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());

    JSC::JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(impl->subarray(start, end)));
    return JSValue::encode(result);
}

EncodedJSValue JSC_HOST_CALL jsInt16ArrayPrototypeFunctionSet(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSInt16Array::s_info))
        return throwVMTypeError(exec);
    JSInt16Array* castedThis = jsCast<JSInt16Array*>(asObject(thisValue));
    ASSERT_GC_OBJECT_INHERITS(castedThis, &JSInt16Array::s_info);
    return JSValue::encode(setWebGLArrayHelper<Int16Array, short>(exec, castedThis->impl()));
}

// Constant getters

JSValue jsInt16ArrayBYTES_PER_ELEMENT(ExecState* exec, JSValue, PropertyName)
{
    UNUSED_PARAM(exec);
    return jsNumber(static_cast<int>(2));
}


JSValue JSInt16Array::getByIndex(ExecState*, unsigned index)
{
    ASSERT_GC_OBJECT_INHERITS(this, &s_info);
    double result = static_cast<Int16Array*>(impl())->item(index);
    if (std::isnan(result))
        return jsNaN();
    return JSValue(result);
}

Int16Array* toInt16Array(JSC::JSValue value)
{
    return value.inherits(&JSInt16Array::s_info) ? jsCast<JSInt16Array*>(asObject(value))->impl() : 0;
}

}

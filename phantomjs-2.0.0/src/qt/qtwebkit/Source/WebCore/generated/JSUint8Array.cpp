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
#include "JSUint8Array.h"

#include "ExceptionCode.h"
#include "JSArrayBufferViewHelper.h"
#include "JSDOMBinding.h"
#include "JSUint8Array.h"
#include <runtime/Error.h>
#include <runtime/PropertyNameArray.h>
#include <wtf/GetPtr.h>
#include <wtf/Uint8Array.h>

using namespace JSC;

namespace WebCore {

/* Hash table */

static const HashTableValue JSUint8ArrayTableValues[] =
{
    { "length", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsUint8ArrayLength), (intptr_t)0, NoIntrinsic },
    { "constructor", DontEnum | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsUint8ArrayConstructor), (intptr_t)0, NoIntrinsic },
    { 0, 0, 0, 0, NoIntrinsic }
};

static const HashTable JSUint8ArrayTable = { 5, 3, JSUint8ArrayTableValues, 0 };
/* Hash table for constructor */

static const HashTableValue JSUint8ArrayConstructorTableValues[] =
{
    { "BYTES_PER_ELEMENT", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsUint8ArrayBYTES_PER_ELEMENT), (intptr_t)0, NoIntrinsic },
    { 0, 0, 0, 0, NoIntrinsic }
};

static const HashTable JSUint8ArrayConstructorTable = { 2, 1, JSUint8ArrayConstructorTableValues, 0 };
EncodedJSValue JSC_HOST_CALL JSUint8ArrayConstructor::constructJSUint8Array(ExecState* exec)
{
    JSUint8ArrayConstructor* jsConstructor = jsCast<JSUint8ArrayConstructor*>(exec->callee());
    RefPtr<Uint8Array> array = constructArrayBufferView<Uint8Array, unsigned char>(exec);
    if (!array.get())
        // Exception has already been thrown.
        return JSValue::encode(JSValue());
    return JSValue::encode(asObject(toJS(exec, jsConstructor->globalObject(), array.get())));
}

JSC::JSValue toJS(JSC::ExecState* exec, JSDOMGlobalObject* globalObject, Uint8Array* object)
{
    return toJSArrayBufferView<JSUint8Array>(exec, globalObject, object);
}

void JSUint8Array::indexSetter(JSC::ExecState* exec, unsigned index, JSC::JSValue value)
{
    impl()->set(index, value.toNumber(exec));
}

static const HashTable* getJSUint8ArrayConstructorTable(ExecState* exec)
{
    return getHashTableForGlobalData(exec->vm(), &JSUint8ArrayConstructorTable);
}

const ClassInfo JSUint8ArrayConstructor::s_info = { "Uint8ArrayConstructor", &Base::s_info, 0, getJSUint8ArrayConstructorTable, CREATE_METHOD_TABLE(JSUint8ArrayConstructor) };

JSUint8ArrayConstructor::JSUint8ArrayConstructor(Structure* structure, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(structure, globalObject)
{
}

void JSUint8ArrayConstructor::finishCreation(ExecState* exec, JSDOMGlobalObject* globalObject)
{
    Base::finishCreation(exec->vm());
    ASSERT(inherits(&s_info));
    putDirect(exec->vm(), exec->propertyNames().prototype, JSUint8ArrayPrototype::self(exec, globalObject), DontDelete | ReadOnly);
    putDirect(exec->vm(), exec->propertyNames().length, jsNumber(1), ReadOnly | DontDelete | DontEnum);
}

bool JSUint8ArrayConstructor::getOwnPropertySlot(JSCell* cell, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSUint8ArrayConstructor, JSDOMWrapper>(exec, getJSUint8ArrayConstructorTable(exec), jsCast<JSUint8ArrayConstructor*>(cell), propertyName, slot);
}

bool JSUint8ArrayConstructor::getOwnPropertyDescriptor(JSObject* object, ExecState* exec, PropertyName propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSUint8ArrayConstructor, JSDOMWrapper>(exec, getJSUint8ArrayConstructorTable(exec), jsCast<JSUint8ArrayConstructor*>(object), propertyName, descriptor);
}

ConstructType JSUint8ArrayConstructor::getConstructData(JSCell*, ConstructData& constructData)
{
    constructData.native.function = constructJSUint8Array;
    return ConstructTypeHost;
}

/* Hash table for prototype */

static const HashTableValue JSUint8ArrayPrototypeTableValues[] =
{
    { "BYTES_PER_ELEMENT", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsUint8ArrayBYTES_PER_ELEMENT), (intptr_t)0, NoIntrinsic },
    { "subarray", DontDelete | JSC::Function, (intptr_t)static_cast<NativeFunction>(jsUint8ArrayPrototypeFunctionSubarray), (intptr_t)0, NoIntrinsic },
    { "set", DontDelete | JSC::Function, (intptr_t)static_cast<NativeFunction>(jsUint8ArrayPrototypeFunctionSet), (intptr_t)0, NoIntrinsic },
    { 0, 0, 0, 0, NoIntrinsic }
};

static const HashTable JSUint8ArrayPrototypeTable = { 8, 7, JSUint8ArrayPrototypeTableValues, 0 };
static const HashTable* getJSUint8ArrayPrototypeTable(ExecState* exec)
{
    return getHashTableForGlobalData(exec->vm(), &JSUint8ArrayPrototypeTable);
}

const ClassInfo JSUint8ArrayPrototype::s_info = { "Uint8ArrayPrototype", &Base::s_info, 0, getJSUint8ArrayPrototypeTable, CREATE_METHOD_TABLE(JSUint8ArrayPrototype) };

JSObject* JSUint8ArrayPrototype::self(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSUint8Array>(exec, globalObject);
}

bool JSUint8ArrayPrototype::getOwnPropertySlot(JSCell* cell, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    JSUint8ArrayPrototype* thisObject = jsCast<JSUint8ArrayPrototype*>(cell);
    return getStaticPropertySlot<JSUint8ArrayPrototype, JSObject>(exec, getJSUint8ArrayPrototypeTable(exec), thisObject, propertyName, slot);
}

bool JSUint8ArrayPrototype::getOwnPropertyDescriptor(JSObject* object, ExecState* exec, PropertyName propertyName, PropertyDescriptor& descriptor)
{
    JSUint8ArrayPrototype* thisObject = jsCast<JSUint8ArrayPrototype*>(object);
    return getStaticPropertyDescriptor<JSUint8ArrayPrototype, JSObject>(exec, getJSUint8ArrayPrototypeTable(exec), thisObject, propertyName, descriptor);
}

static const HashTable* getJSUint8ArrayTable(ExecState* exec)
{
    return getHashTableForGlobalData(exec->vm(), &JSUint8ArrayTable);
}

const ClassInfo JSUint8Array::s_info = { "Uint8Array", &Base::s_info, 0, getJSUint8ArrayTable , CREATE_METHOD_TABLE(JSUint8Array) };

JSUint8Array::JSUint8Array(Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<Uint8Array> impl)
    : JSArrayBufferView(structure, globalObject, impl)
{
}

void JSUint8Array::finishCreation(VM& vm)
{
    Base::finishCreation(vm);
    TypedArrayDescriptor descriptor(&JSUint8Array::s_info, OBJECT_OFFSETOF(JSUint8Array, m_storage), OBJECT_OFFSETOF(JSUint8Array, m_storageLength));
    vm.registerTypedArrayDescriptor(impl(), descriptor);
    m_storage = impl()->data();
    m_storageLength = impl()->length();
    ASSERT(inherits(&s_info));
}

JSObject* JSUint8Array::createPrototype(ExecState* exec, JSGlobalObject* globalObject)
{
    return JSUint8ArrayPrototype::create(exec->vm(), globalObject, JSUint8ArrayPrototype::createStructure(exec->vm(), globalObject, JSArrayBufferViewPrototype::self(exec, globalObject)));
}

bool JSUint8Array::getOwnPropertySlot(JSCell* cell, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    JSUint8Array* thisObject = jsCast<JSUint8Array*>(cell);
    ASSERT_GC_OBJECT_INHERITS(thisObject, &s_info);
    unsigned index = propertyName.asIndex();
    if (index != PropertyName::NotAnIndex && index < static_cast<Uint8Array*>(thisObject->impl())->length()) {
        slot.setValue(thisObject->getByIndex(exec, index));
        return true;
    }
    return getStaticValueSlot<JSUint8Array, Base>(exec, getJSUint8ArrayTable(exec), thisObject, propertyName, slot);
}

bool JSUint8Array::getOwnPropertyDescriptor(JSObject* object, ExecState* exec, PropertyName propertyName, PropertyDescriptor& descriptor)
{
    JSUint8Array* thisObject = jsCast<JSUint8Array*>(object);
    ASSERT_GC_OBJECT_INHERITS(thisObject, &s_info);
    unsigned index = propertyName.asIndex();
    if (index != PropertyName::NotAnIndex && index < static_cast<Uint8Array*>(thisObject->impl())->length()) {
        descriptor.setDescriptor(thisObject->getByIndex(exec, index), DontDelete);
        return true;
    }
    return getStaticValueDescriptor<JSUint8Array, Base>(exec, getJSUint8ArrayTable(exec), thisObject, propertyName, descriptor);
}

bool JSUint8Array::getOwnPropertySlotByIndex(JSCell* cell, ExecState* exec, unsigned index, PropertySlot& slot)
{
    JSUint8Array* thisObject = jsCast<JSUint8Array*>(cell);
    ASSERT_GC_OBJECT_INHERITS(thisObject, &s_info);
    if (index < static_cast<Uint8Array*>(thisObject->impl())->length()) {
        slot.setValue(thisObject->getByIndex(exec, index));
        return true;
    }
    return Base::getOwnPropertySlotByIndex(thisObject, exec, index, slot);
}

JSValue jsUint8ArrayLength(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSUint8Array* castedThis = jsCast<JSUint8Array*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    Uint8Array* impl = static_cast<Uint8Array*>(castedThis->impl());
    JSValue result = jsNumber(impl->length());
    return result;
}


JSValue jsUint8ArrayConstructor(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSUint8Array* domObject = jsCast<JSUint8Array*>(asObject(slotBase));
    return JSUint8Array::getConstructor(exec, domObject->globalObject());
}

void JSUint8Array::put(JSCell* cell, ExecState* exec, PropertyName propertyName, JSValue value, PutPropertySlot& slot)
{
    JSUint8Array* thisObject = jsCast<JSUint8Array*>(cell);
    ASSERT_GC_OBJECT_INHERITS(thisObject, &s_info);
    unsigned index = propertyName.asIndex();
    if (index != PropertyName::NotAnIndex) {
        thisObject->indexSetter(exec, index, value);
        return;
    }
    Base::put(thisObject, exec, propertyName, value, slot);
}

void JSUint8Array::putByIndex(JSCell* cell, ExecState* exec, unsigned index, JSValue value, bool shouldThrow)
{
    JSUint8Array* thisObject = jsCast<JSUint8Array*>(cell);
    ASSERT_GC_OBJECT_INHERITS(thisObject, &s_info);
    if (index <= MAX_ARRAY_INDEX) {
        UNUSED_PARAM(shouldThrow);
        thisObject->indexSetter(exec, index, value);
        return;
    }
    Base::putByIndex(cell, exec, index, value, shouldThrow);
}

void JSUint8Array::getOwnPropertyNames(JSObject* object, ExecState* exec, PropertyNameArray& propertyNames, EnumerationMode mode)
{
    JSUint8Array* thisObject = jsCast<JSUint8Array*>(object);
    ASSERT_GC_OBJECT_INHERITS(thisObject, &s_info);
    for (unsigned i = 0; i < static_cast<Uint8Array*>(thisObject->impl())->length(); ++i)
        propertyNames.add(Identifier::from(exec, i));
     Base::getOwnPropertyNames(thisObject, exec, propertyNames, mode);
}

JSValue JSUint8Array::getConstructor(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSUint8ArrayConstructor>(exec, jsCast<JSDOMGlobalObject*>(globalObject));
}

EncodedJSValue JSC_HOST_CALL jsUint8ArrayPrototypeFunctionSubarray(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSUint8Array::s_info))
        return throwVMTypeError(exec);
    JSUint8Array* castedThis = jsCast<JSUint8Array*>(asObject(thisValue));
    ASSERT_GC_OBJECT_INHERITS(castedThis, &JSUint8Array::s_info);
    Uint8Array* impl = static_cast<Uint8Array*>(castedThis->impl());
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

EncodedJSValue JSC_HOST_CALL jsUint8ArrayPrototypeFunctionSet(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSUint8Array::s_info))
        return throwVMTypeError(exec);
    JSUint8Array* castedThis = jsCast<JSUint8Array*>(asObject(thisValue));
    ASSERT_GC_OBJECT_INHERITS(castedThis, &JSUint8Array::s_info);
    return JSValue::encode(setWebGLArrayHelper<Uint8Array, unsigned char>(exec, castedThis->impl()));
}

// Constant getters

JSValue jsUint8ArrayBYTES_PER_ELEMENT(ExecState* exec, JSValue, PropertyName)
{
    UNUSED_PARAM(exec);
    return jsNumber(static_cast<int>(1));
}


JSValue JSUint8Array::getByIndex(ExecState*, unsigned index)
{
    ASSERT_GC_OBJECT_INHERITS(this, &s_info);
    double result = static_cast<Uint8Array*>(impl())->item(index);
    if (std::isnan(result))
        return jsNaN();
    return JSValue(result);
}

Uint8Array* toUint8Array(JSC::JSValue value)
{
    return value.inherits(&JSUint8Array::s_info) ? jsCast<JSUint8Array*>(asObject(value))->impl() : 0;
}

}

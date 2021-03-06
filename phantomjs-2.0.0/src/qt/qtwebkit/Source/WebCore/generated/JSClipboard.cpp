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
#include "JSClipboard.h"

#include "Clipboard.h"
#include "ExceptionCode.h"
#include "FileList.h"
#include "JSDOMBinding.h"
#include "JSElement.h"
#include "JSFileList.h"
#include "KURL.h"
#include <runtime/Error.h>
#include <runtime/JSString.h>
#include <wtf/GetPtr.h>

#if ENABLE(DATA_TRANSFER_ITEMS)
#include "DataTransferItemList.h"
#include "JSDataTransferItemList.h"
#endif

using namespace JSC;

namespace WebCore {

/* Hash table */

static const HashTableValue JSClipboardTableValues[] =
{
    { "dropEffect", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsClipboardDropEffect), (intptr_t)setJSClipboardDropEffect, NoIntrinsic },
    { "effectAllowed", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsClipboardEffectAllowed), (intptr_t)setJSClipboardEffectAllowed, NoIntrinsic },
    { "types", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsClipboardTypes), (intptr_t)0, NoIntrinsic },
    { "files", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsClipboardFiles), (intptr_t)0, NoIntrinsic },
#if ENABLE(DATA_TRANSFER_ITEMS)
    { "items", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsClipboardItems), (intptr_t)0, NoIntrinsic },
#endif
    { "constructor", DontEnum | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsClipboardConstructor), (intptr_t)0, NoIntrinsic },
    { 0, 0, 0, 0, NoIntrinsic }
};

static const HashTable JSClipboardTable = { 17, 15, JSClipboardTableValues, 0 };
/* Hash table for constructor */

static const HashTableValue JSClipboardConstructorTableValues[] =
{
    { 0, 0, 0, 0, NoIntrinsic }
};

static const HashTable JSClipboardConstructorTable = { 1, 0, JSClipboardConstructorTableValues, 0 };
const ClassInfo JSClipboardConstructor::s_info = { "ClipboardConstructor", &Base::s_info, &JSClipboardConstructorTable, 0, CREATE_METHOD_TABLE(JSClipboardConstructor) };

JSClipboardConstructor::JSClipboardConstructor(Structure* structure, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(structure, globalObject)
{
}

void JSClipboardConstructor::finishCreation(ExecState* exec, JSDOMGlobalObject* globalObject)
{
    Base::finishCreation(exec->vm());
    ASSERT(inherits(&s_info));
    putDirect(exec->vm(), exec->propertyNames().prototype, JSClipboardPrototype::self(exec, globalObject), DontDelete | ReadOnly);
    putDirect(exec->vm(), exec->propertyNames().length, jsNumber(0), ReadOnly | DontDelete | DontEnum);
}

bool JSClipboardConstructor::getOwnPropertySlot(JSCell* cell, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSClipboardConstructor, JSDOMWrapper>(exec, &JSClipboardConstructorTable, jsCast<JSClipboardConstructor*>(cell), propertyName, slot);
}

bool JSClipboardConstructor::getOwnPropertyDescriptor(JSObject* object, ExecState* exec, PropertyName propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSClipboardConstructor, JSDOMWrapper>(exec, &JSClipboardConstructorTable, jsCast<JSClipboardConstructor*>(object), propertyName, descriptor);
}

/* Hash table for prototype */

static const HashTableValue JSClipboardPrototypeTableValues[] =
{
    { "clearData", DontDelete | JSC::Function, (intptr_t)static_cast<NativeFunction>(jsClipboardPrototypeFunctionClearData), (intptr_t)0, NoIntrinsic },
    { "getData", DontDelete | JSC::Function, (intptr_t)static_cast<NativeFunction>(jsClipboardPrototypeFunctionGetData), (intptr_t)1, NoIntrinsic },
    { "setData", DontDelete | JSC::Function, (intptr_t)static_cast<NativeFunction>(jsClipboardPrototypeFunctionSetData), (intptr_t)2, NoIntrinsic },
    { "setDragImage", DontDelete | JSC::Function, (intptr_t)static_cast<NativeFunction>(jsClipboardPrototypeFunctionSetDragImage), (intptr_t)3, NoIntrinsic },
    { 0, 0, 0, 0, NoIntrinsic }
};

static const HashTable JSClipboardPrototypeTable = { 8, 7, JSClipboardPrototypeTableValues, 0 };
const ClassInfo JSClipboardPrototype::s_info = { "ClipboardPrototype", &Base::s_info, &JSClipboardPrototypeTable, 0, CREATE_METHOD_TABLE(JSClipboardPrototype) };

JSObject* JSClipboardPrototype::self(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSClipboard>(exec, globalObject);
}

bool JSClipboardPrototype::getOwnPropertySlot(JSCell* cell, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    JSClipboardPrototype* thisObject = jsCast<JSClipboardPrototype*>(cell);
    return getStaticFunctionSlot<JSObject>(exec, &JSClipboardPrototypeTable, thisObject, propertyName, slot);
}

bool JSClipboardPrototype::getOwnPropertyDescriptor(JSObject* object, ExecState* exec, PropertyName propertyName, PropertyDescriptor& descriptor)
{
    JSClipboardPrototype* thisObject = jsCast<JSClipboardPrototype*>(object);
    return getStaticFunctionDescriptor<JSObject>(exec, &JSClipboardPrototypeTable, thisObject, propertyName, descriptor);
}

const ClassInfo JSClipboard::s_info = { "Clipboard", &Base::s_info, &JSClipboardTable, 0 , CREATE_METHOD_TABLE(JSClipboard) };

JSClipboard::JSClipboard(Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<Clipboard> impl)
    : JSDOMWrapper(structure, globalObject)
    , m_impl(impl.leakRef())
{
}

void JSClipboard::finishCreation(VM& vm)
{
    Base::finishCreation(vm);
    ASSERT(inherits(&s_info));
}

JSObject* JSClipboard::createPrototype(ExecState* exec, JSGlobalObject* globalObject)
{
    return JSClipboardPrototype::create(exec->vm(), globalObject, JSClipboardPrototype::createStructure(globalObject->vm(), globalObject, globalObject->objectPrototype()));
}

void JSClipboard::destroy(JSC::JSCell* cell)
{
    JSClipboard* thisObject = static_cast<JSClipboard*>(cell);
    thisObject->JSClipboard::~JSClipboard();
}

JSClipboard::~JSClipboard()
{
    releaseImplIfNotNull();
}

bool JSClipboard::getOwnPropertySlot(JSCell* cell, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    JSClipboard* thisObject = jsCast<JSClipboard*>(cell);
    ASSERT_GC_OBJECT_INHERITS(thisObject, &s_info);
    return getStaticValueSlot<JSClipboard, Base>(exec, &JSClipboardTable, thisObject, propertyName, slot);
}

bool JSClipboard::getOwnPropertyDescriptor(JSObject* object, ExecState* exec, PropertyName propertyName, PropertyDescriptor& descriptor)
{
    JSClipboard* thisObject = jsCast<JSClipboard*>(object);
    ASSERT_GC_OBJECT_INHERITS(thisObject, &s_info);
    return getStaticValueDescriptor<JSClipboard, Base>(exec, &JSClipboardTable, thisObject, propertyName, descriptor);
}

JSValue jsClipboardDropEffect(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSClipboard* castedThis = jsCast<JSClipboard*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    Clipboard* impl = static_cast<Clipboard*>(castedThis->impl());
    JSValue result = jsStringOrUndefined(exec, impl->dropEffect());
    return result;
}


JSValue jsClipboardEffectAllowed(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSClipboard* castedThis = jsCast<JSClipboard*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    Clipboard* impl = static_cast<Clipboard*>(castedThis->impl());
    JSValue result = jsStringOrUndefined(exec, impl->effectAllowed());
    return result;
}


JSValue jsClipboardTypes(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSClipboard* castedThis = jsCast<JSClipboard*>(asObject(slotBase));
    return castedThis->types(exec);
}


JSValue jsClipboardFiles(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSClipboard* castedThis = jsCast<JSClipboard*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    Clipboard* impl = static_cast<Clipboard*>(castedThis->impl());
    JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(impl->files()));
    return result;
}


#if ENABLE(DATA_TRANSFER_ITEMS)
JSValue jsClipboardItems(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSClipboard* castedThis = jsCast<JSClipboard*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    Clipboard* impl = static_cast<Clipboard*>(castedThis->impl());
    JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(impl->items()));
    return result;
}

#endif

JSValue jsClipboardConstructor(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSClipboard* domObject = jsCast<JSClipboard*>(asObject(slotBase));
    return JSClipboard::getConstructor(exec, domObject->globalObject());
}

void JSClipboard::put(JSCell* cell, ExecState* exec, PropertyName propertyName, JSValue value, PutPropertySlot& slot)
{
    JSClipboard* thisObject = jsCast<JSClipboard*>(cell);
    ASSERT_GC_OBJECT_INHERITS(thisObject, &s_info);
    lookupPut<JSClipboard, Base>(exec, propertyName, value, &JSClipboardTable, thisObject, slot);
}

void setJSClipboardDropEffect(ExecState* exec, JSObject* thisObject, JSValue value)
{
    UNUSED_PARAM(exec);
    JSClipboard* castedThis = jsCast<JSClipboard*>(thisObject);
    Clipboard* impl = static_cast<Clipboard*>(castedThis->impl());
    const String& nativeValue(value.isEmpty() ? String() : value.toString(exec)->value(exec));
    if (exec->hadException())
        return;
    impl->setDropEffect(nativeValue);
}


void setJSClipboardEffectAllowed(ExecState* exec, JSObject* thisObject, JSValue value)
{
    UNUSED_PARAM(exec);
    JSClipboard* castedThis = jsCast<JSClipboard*>(thisObject);
    Clipboard* impl = static_cast<Clipboard*>(castedThis->impl());
    const String& nativeValue(value.isEmpty() ? String() : value.toString(exec)->value(exec));
    if (exec->hadException())
        return;
    impl->setEffectAllowed(nativeValue);
}


JSValue JSClipboard::getConstructor(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSClipboardConstructor>(exec, jsCast<JSDOMGlobalObject*>(globalObject));
}

EncodedJSValue JSC_HOST_CALL jsClipboardPrototypeFunctionClearData(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSClipboard::s_info))
        return throwVMTypeError(exec);
    JSClipboard* castedThis = jsCast<JSClipboard*>(asObject(thisValue));
    ASSERT_GC_OBJECT_INHERITS(castedThis, &JSClipboard::s_info);
    Clipboard* impl = static_cast<Clipboard*>(castedThis->impl());

    size_t argsCount = exec->argumentCount();
    if (argsCount <= 0) {
        impl->clearData();
        return JSValue::encode(jsUndefined());
    }

    const String& type(exec->argument(0).isEmpty() ? String() : exec->argument(0).toString(exec)->value(exec));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());
    impl->clearData(type);
    return JSValue::encode(jsUndefined());
}

EncodedJSValue JSC_HOST_CALL jsClipboardPrototypeFunctionGetData(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSClipboard::s_info))
        return throwVMTypeError(exec);
    JSClipboard* castedThis = jsCast<JSClipboard*>(asObject(thisValue));
    ASSERT_GC_OBJECT_INHERITS(castedThis, &JSClipboard::s_info);
    Clipboard* impl = static_cast<Clipboard*>(castedThis->impl());
    if (exec->argumentCount() < 1)
        return throwVMError(exec, createNotEnoughArgumentsError(exec));
    const String& type(exec->argument(0).isEmpty() ? String() : exec->argument(0).toString(exec)->value(exec));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());

    JSC::JSValue result = jsStringWithCache(exec, impl->getData(type));
    return JSValue::encode(result);
}

EncodedJSValue JSC_HOST_CALL jsClipboardPrototypeFunctionSetData(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSClipboard::s_info))
        return throwVMTypeError(exec);
    JSClipboard* castedThis = jsCast<JSClipboard*>(asObject(thisValue));
    ASSERT_GC_OBJECT_INHERITS(castedThis, &JSClipboard::s_info);
    Clipboard* impl = static_cast<Clipboard*>(castedThis->impl());
    if (exec->argumentCount() < 2)
        return throwVMError(exec, createNotEnoughArgumentsError(exec));
    const String& type(exec->argument(0).isEmpty() ? String() : exec->argument(0).toString(exec)->value(exec));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());
    const String& data(exec->argument(1).isEmpty() ? String() : exec->argument(1).toString(exec)->value(exec));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());

    JSC::JSValue result = jsBoolean(impl->setData(type, data));
    return JSValue::encode(result);
}

EncodedJSValue JSC_HOST_CALL jsClipboardPrototypeFunctionSetDragImage(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSClipboard::s_info))
        return throwVMTypeError(exec);
    JSClipboard* castedThis = jsCast<JSClipboard*>(asObject(thisValue));
    ASSERT_GC_OBJECT_INHERITS(castedThis, &JSClipboard::s_info);
    Clipboard* impl = static_cast<Clipboard*>(castedThis->impl());
    if (exec->argumentCount() < 3)
        return throwVMError(exec, createNotEnoughArgumentsError(exec));
    Element* image(toElement(exec->argument(0)));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());
    int x(toInt32(exec, exec->argument(1), NormalConversion));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());
    int y(toInt32(exec, exec->argument(2), NormalConversion));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());
    impl->setDragImage(image, x, y);
    return JSValue::encode(jsUndefined());
}

static inline bool isObservable(JSClipboard* jsClipboard)
{
    if (jsClipboard->hasCustomProperties())
        return true;
    return false;
}

bool JSClipboardOwner::isReachableFromOpaqueRoots(JSC::Handle<JSC::Unknown> handle, void*, SlotVisitor& visitor)
{
    JSClipboard* jsClipboard = jsCast<JSClipboard*>(handle.get().asCell());
    if (!isObservable(jsClipboard))
        return false;
    UNUSED_PARAM(visitor);
    return false;
}

void JSClipboardOwner::finalize(JSC::Handle<JSC::Unknown> handle, void* context)
{
    JSClipboard* jsClipboard = jsCast<JSClipboard*>(handle.get().asCell());
    DOMWrapperWorld* world = static_cast<DOMWrapperWorld*>(context);
    uncacheWrapper(world, jsClipboard->impl(), jsClipboard);
    jsClipboard->releaseImpl();
}

JSC::JSValue toJS(JSC::ExecState* exec, JSDOMGlobalObject* globalObject, Clipboard* impl)
{
    if (!impl)
        return jsNull();
    if (JSValue result = getExistingWrapper<JSClipboard>(exec, impl))
        return result;
    ReportMemoryCost<Clipboard>::reportMemoryCost(exec, impl);
    return createNewWrapper<JSClipboard>(exec, globalObject, impl);
}

Clipboard* toClipboard(JSC::JSValue value)
{
    return value.inherits(&JSClipboard::s_info) ? jsCast<JSClipboard*>(asObject(value))->impl() : 0;
}

}

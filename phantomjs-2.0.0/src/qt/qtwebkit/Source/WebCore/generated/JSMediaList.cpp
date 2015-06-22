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
#include "JSMediaList.h"

#include "ExceptionCode.h"
#include "JSDOMBinding.h"
#include "KURL.h"
#include "MediaList.h"
#include <runtime/Error.h>
#include <runtime/PropertyNameArray.h>
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

/* Hash table */

static const HashTableValue JSMediaListTableValues[] =
{
    { "mediaText", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsMediaListMediaText), (intptr_t)setJSMediaListMediaText, NoIntrinsic },
    { "length", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsMediaListLength), (intptr_t)0, NoIntrinsic },
    { "constructor", DontEnum | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsMediaListConstructor), (intptr_t)0, NoIntrinsic },
    { 0, 0, 0, 0, NoIntrinsic }
};

static const HashTable JSMediaListTable = { 9, 7, JSMediaListTableValues, 0 };
/* Hash table for constructor */

static const HashTableValue JSMediaListConstructorTableValues[] =
{
    { 0, 0, 0, 0, NoIntrinsic }
};

static const HashTable JSMediaListConstructorTable = { 1, 0, JSMediaListConstructorTableValues, 0 };
const ClassInfo JSMediaListConstructor::s_info = { "MediaListConstructor", &Base::s_info, &JSMediaListConstructorTable, 0, CREATE_METHOD_TABLE(JSMediaListConstructor) };

JSMediaListConstructor::JSMediaListConstructor(Structure* structure, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(structure, globalObject)
{
}

void JSMediaListConstructor::finishCreation(ExecState* exec, JSDOMGlobalObject* globalObject)
{
    Base::finishCreation(exec->vm());
    ASSERT(inherits(&s_info));
    putDirect(exec->vm(), exec->propertyNames().prototype, JSMediaListPrototype::self(exec, globalObject), DontDelete | ReadOnly);
    putDirect(exec->vm(), exec->propertyNames().length, jsNumber(0), ReadOnly | DontDelete | DontEnum);
}

bool JSMediaListConstructor::getOwnPropertySlot(JSCell* cell, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSMediaListConstructor, JSDOMWrapper>(exec, &JSMediaListConstructorTable, jsCast<JSMediaListConstructor*>(cell), propertyName, slot);
}

bool JSMediaListConstructor::getOwnPropertyDescriptor(JSObject* object, ExecState* exec, PropertyName propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSMediaListConstructor, JSDOMWrapper>(exec, &JSMediaListConstructorTable, jsCast<JSMediaListConstructor*>(object), propertyName, descriptor);
}

/* Hash table for prototype */

static const HashTableValue JSMediaListPrototypeTableValues[] =
{
    { "item", DontDelete | JSC::Function, (intptr_t)static_cast<NativeFunction>(jsMediaListPrototypeFunctionItem), (intptr_t)0, NoIntrinsic },
    { "deleteMedium", DontDelete | JSC::Function, (intptr_t)static_cast<NativeFunction>(jsMediaListPrototypeFunctionDeleteMedium), (intptr_t)0, NoIntrinsic },
    { "appendMedium", DontDelete | JSC::Function, (intptr_t)static_cast<NativeFunction>(jsMediaListPrototypeFunctionAppendMedium), (intptr_t)0, NoIntrinsic },
    { 0, 0, 0, 0, NoIntrinsic }
};

static const HashTable JSMediaListPrototypeTable = { 8, 7, JSMediaListPrototypeTableValues, 0 };
const ClassInfo JSMediaListPrototype::s_info = { "MediaListPrototype", &Base::s_info, &JSMediaListPrototypeTable, 0, CREATE_METHOD_TABLE(JSMediaListPrototype) };

JSObject* JSMediaListPrototype::self(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSMediaList>(exec, globalObject);
}

bool JSMediaListPrototype::getOwnPropertySlot(JSCell* cell, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    JSMediaListPrototype* thisObject = jsCast<JSMediaListPrototype*>(cell);
    return getStaticFunctionSlot<JSObject>(exec, &JSMediaListPrototypeTable, thisObject, propertyName, slot);
}

bool JSMediaListPrototype::getOwnPropertyDescriptor(JSObject* object, ExecState* exec, PropertyName propertyName, PropertyDescriptor& descriptor)
{
    JSMediaListPrototype* thisObject = jsCast<JSMediaListPrototype*>(object);
    return getStaticFunctionDescriptor<JSObject>(exec, &JSMediaListPrototypeTable, thisObject, propertyName, descriptor);
}

const ClassInfo JSMediaList::s_info = { "MediaList", &Base::s_info, &JSMediaListTable, 0 , CREATE_METHOD_TABLE(JSMediaList) };

JSMediaList::JSMediaList(Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<MediaList> impl)
    : JSDOMWrapper(structure, globalObject)
    , m_impl(impl.leakRef())
{
}

void JSMediaList::finishCreation(VM& vm)
{
    Base::finishCreation(vm);
    ASSERT(inherits(&s_info));
}

JSObject* JSMediaList::createPrototype(ExecState* exec, JSGlobalObject* globalObject)
{
    return JSMediaListPrototype::create(exec->vm(), globalObject, JSMediaListPrototype::createStructure(globalObject->vm(), globalObject, globalObject->objectPrototype()));
}

void JSMediaList::destroy(JSC::JSCell* cell)
{
    JSMediaList* thisObject = static_cast<JSMediaList*>(cell);
    thisObject->JSMediaList::~JSMediaList();
}

JSMediaList::~JSMediaList()
{
    releaseImplIfNotNull();
}

bool JSMediaList::getOwnPropertySlot(JSCell* cell, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    JSMediaList* thisObject = jsCast<JSMediaList*>(cell);
    ASSERT_GC_OBJECT_INHERITS(thisObject, &s_info);
    const HashEntry* entry = getStaticValueSlotEntryWithoutCaching<JSMediaList>(exec, propertyName);
    if (entry) {
        slot.setCustom(thisObject, entry->propertyGetter());
        return true;
    }
    unsigned index = propertyName.asIndex();
    if (index != PropertyName::NotAnIndex) {
        slot.setCustomIndex(thisObject, index, indexGetter);
        return true;
    }
    return getStaticValueSlot<JSMediaList, Base>(exec, &JSMediaListTable, thisObject, propertyName, slot);
}

bool JSMediaList::getOwnPropertyDescriptor(JSObject* object, ExecState* exec, PropertyName propertyName, PropertyDescriptor& descriptor)
{
    JSMediaList* thisObject = jsCast<JSMediaList*>(object);
    ASSERT_GC_OBJECT_INHERITS(thisObject, &s_info);
    const HashEntry* entry = JSMediaListTable.entry(exec, propertyName);
    if (entry) {
        PropertySlot slot;
        slot.setCustom(thisObject, entry->propertyGetter());
        descriptor.setDescriptor(slot.getValue(exec, propertyName), entry->attributes());
        return true;
    }
    unsigned index = propertyName.asIndex();
    if (index != PropertyName::NotAnIndex && index < static_cast<MediaList*>(thisObject->impl())->length()) {
        PropertySlot slot;
        slot.setCustomIndex(thisObject, index, indexGetter);
        descriptor.setDescriptor(slot.getValue(exec, propertyName), DontDelete | ReadOnly);
        return true;
    }
    return getStaticValueDescriptor<JSMediaList, Base>(exec, &JSMediaListTable, thisObject, propertyName, descriptor);
}

bool JSMediaList::getOwnPropertySlotByIndex(JSCell* cell, ExecState* exec, unsigned index, PropertySlot& slot)
{
    JSMediaList* thisObject = jsCast<JSMediaList*>(cell);
    ASSERT_GC_OBJECT_INHERITS(thisObject, &s_info);
    if (index <= MAX_ARRAY_INDEX) {
        slot.setCustomIndex(thisObject, index, thisObject->indexGetter);
        return true;
    }
    return Base::getOwnPropertySlotByIndex(thisObject, exec, index, slot);
}

JSValue jsMediaListMediaText(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSMediaList* castedThis = jsCast<JSMediaList*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    MediaList* impl = static_cast<MediaList*>(castedThis->impl());
    JSValue result = jsStringOrNull(exec, impl->mediaText());
    return result;
}


JSValue jsMediaListLength(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSMediaList* castedThis = jsCast<JSMediaList*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    MediaList* impl = static_cast<MediaList*>(castedThis->impl());
    JSValue result = jsNumber(impl->length());
    return result;
}


JSValue jsMediaListConstructor(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSMediaList* domObject = jsCast<JSMediaList*>(asObject(slotBase));
    return JSMediaList::getConstructor(exec, domObject->globalObject());
}

void JSMediaList::put(JSCell* cell, ExecState* exec, PropertyName propertyName, JSValue value, PutPropertySlot& slot)
{
    JSMediaList* thisObject = jsCast<JSMediaList*>(cell);
    ASSERT_GC_OBJECT_INHERITS(thisObject, &s_info);
    lookupPut<JSMediaList, Base>(exec, propertyName, value, &JSMediaListTable, thisObject, slot);
}

void setJSMediaListMediaText(ExecState* exec, JSObject* thisObject, JSValue value)
{
    UNUSED_PARAM(exec);
    JSMediaList* castedThis = jsCast<JSMediaList*>(thisObject);
    MediaList* impl = static_cast<MediaList*>(castedThis->impl());
    ExceptionCode ec = 0;
    const String& nativeValue(valueToStringWithNullCheck(exec, value));
    if (exec->hadException())
        return;
    impl->setMediaText(nativeValue, ec);
    setDOMException(exec, ec);
}


void JSMediaList::getOwnPropertyNames(JSObject* object, ExecState* exec, PropertyNameArray& propertyNames, EnumerationMode mode)
{
    JSMediaList* thisObject = jsCast<JSMediaList*>(object);
    ASSERT_GC_OBJECT_INHERITS(thisObject, &s_info);
    for (unsigned i = 0; i < static_cast<MediaList*>(thisObject->impl())->length(); ++i)
        propertyNames.add(Identifier::from(exec, i));
     Base::getOwnPropertyNames(thisObject, exec, propertyNames, mode);
}

JSValue JSMediaList::getConstructor(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSMediaListConstructor>(exec, jsCast<JSDOMGlobalObject*>(globalObject));
}

EncodedJSValue JSC_HOST_CALL jsMediaListPrototypeFunctionItem(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSMediaList::s_info))
        return throwVMTypeError(exec);
    JSMediaList* castedThis = jsCast<JSMediaList*>(asObject(thisValue));
    ASSERT_GC_OBJECT_INHERITS(castedThis, &JSMediaList::s_info);
    MediaList* impl = static_cast<MediaList*>(castedThis->impl());
    unsigned index(toUInt32(exec, exec->argument(0), NormalConversion));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());

    JSC::JSValue result = jsStringOrNull(exec, impl->item(index));
    return JSValue::encode(result);
}

EncodedJSValue JSC_HOST_CALL jsMediaListPrototypeFunctionDeleteMedium(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSMediaList::s_info))
        return throwVMTypeError(exec);
    JSMediaList* castedThis = jsCast<JSMediaList*>(asObject(thisValue));
    ASSERT_GC_OBJECT_INHERITS(castedThis, &JSMediaList::s_info);
    MediaList* impl = static_cast<MediaList*>(castedThis->impl());
    ExceptionCode ec = 0;
    const String& oldMedium(exec->argument(0).isEmpty() ? String() : exec->argument(0).toString(exec)->value(exec));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());
    impl->deleteMedium(oldMedium, ec);
    setDOMException(exec, ec);
    return JSValue::encode(jsUndefined());
}

EncodedJSValue JSC_HOST_CALL jsMediaListPrototypeFunctionAppendMedium(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSMediaList::s_info))
        return throwVMTypeError(exec);
    JSMediaList* castedThis = jsCast<JSMediaList*>(asObject(thisValue));
    ASSERT_GC_OBJECT_INHERITS(castedThis, &JSMediaList::s_info);
    MediaList* impl = static_cast<MediaList*>(castedThis->impl());
    ExceptionCode ec = 0;
    const String& newMedium(exec->argument(0).isEmpty() ? String() : exec->argument(0).toString(exec)->value(exec));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());
    impl->appendMedium(newMedium, ec);
    setDOMException(exec, ec);
    return JSValue::encode(jsUndefined());
}


JSValue JSMediaList::indexGetter(ExecState* exec, JSValue slotBase, unsigned index)
{
    JSMediaList* thisObj = jsCast<JSMediaList*>(asObject(slotBase));
    ASSERT_GC_OBJECT_INHERITS(thisObj, &s_info);
    return jsStringOrUndefined(exec, thisObj->impl()->item(index));
}

static inline bool isObservable(JSMediaList* jsMediaList)
{
    if (jsMediaList->hasCustomProperties())
        return true;
    return false;
}

bool JSMediaListOwner::isReachableFromOpaqueRoots(JSC::Handle<JSC::Unknown> handle, void*, SlotVisitor& visitor)
{
    JSMediaList* jsMediaList = jsCast<JSMediaList*>(handle.get().asCell());
    if (!isObservable(jsMediaList))
        return false;
    void* root = WebCore::root(jsMediaList->impl());
    return visitor.containsOpaqueRoot(root);
}

void JSMediaListOwner::finalize(JSC::Handle<JSC::Unknown> handle, void* context)
{
    JSMediaList* jsMediaList = jsCast<JSMediaList*>(handle.get().asCell());
    DOMWrapperWorld* world = static_cast<DOMWrapperWorld*>(context);
    uncacheWrapper(world, jsMediaList->impl(), jsMediaList);
    jsMediaList->releaseImpl();
}

JSC::JSValue toJS(JSC::ExecState* exec, JSDOMGlobalObject* globalObject, MediaList* impl)
{
    if (!impl)
        return jsNull();
    if (JSValue result = getExistingWrapper<JSMediaList>(exec, impl))
        return result;
#if COMPILER(CLANG) && COMPILER_SUPPORTS(CXX_STATIC_ASSERT)
    // If you hit this failure the interface definition has the ImplementationLacksVTable
    // attribute. You should remove that attribute. If the class has subclasses
    // that may be passed through this toJS() function you should use the SkipVTableValidation
    // attribute to MediaList.
    COMPILE_ASSERT(!__is_polymorphic(MediaList), MediaList_is_polymorphic_but_idl_claims_not_to_be);
#endif
    ReportMemoryCost<MediaList>::reportMemoryCost(exec, impl);
    return createNewWrapper<JSMediaList>(exec, globalObject, impl);
}

MediaList* toMediaList(JSC::JSValue value)
{
    return value.inherits(&JSMediaList::s_info) ? jsCast<JSMediaList*>(asObject(value))->impl() : 0;
}

}

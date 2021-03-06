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
#include "JSRadioNodeList.h"

#include "JSNode.h"
#include "KURL.h"
#include "Node.h"
#include "RadioNodeList.h"
#include <runtime/JSString.h>
#include <runtime/PropertyNameArray.h>
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

/* Hash table */

static const HashTableValue JSRadioNodeListTableValues[] =
{
    { "value", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsRadioNodeListValue), (intptr_t)setJSRadioNodeListValue, NoIntrinsic },
    { 0, 0, 0, 0, NoIntrinsic }
};

static const HashTable JSRadioNodeListTable = { 2, 1, JSRadioNodeListTableValues, 0 };
/* Hash table for prototype */

static const HashTableValue JSRadioNodeListPrototypeTableValues[] =
{
    { 0, 0, 0, 0, NoIntrinsic }
};

static const HashTable JSRadioNodeListPrototypeTable = { 1, 0, JSRadioNodeListPrototypeTableValues, 0 };
const ClassInfo JSRadioNodeListPrototype::s_info = { "RadioNodeListPrototype", &Base::s_info, &JSRadioNodeListPrototypeTable, 0, CREATE_METHOD_TABLE(JSRadioNodeListPrototype) };

JSObject* JSRadioNodeListPrototype::self(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSRadioNodeList>(exec, globalObject);
}

const ClassInfo JSRadioNodeList::s_info = { "RadioNodeList", &Base::s_info, &JSRadioNodeListTable, 0 , CREATE_METHOD_TABLE(JSRadioNodeList) };

JSRadioNodeList::JSRadioNodeList(Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<RadioNodeList> impl)
    : JSNodeList(structure, globalObject, impl)
{
}

void JSRadioNodeList::finishCreation(VM& vm)
{
    Base::finishCreation(vm);
    ASSERT(inherits(&s_info));
}

JSObject* JSRadioNodeList::createPrototype(ExecState* exec, JSGlobalObject* globalObject)
{
    return JSRadioNodeListPrototype::create(exec->vm(), globalObject, JSRadioNodeListPrototype::createStructure(exec->vm(), globalObject, JSNodeListPrototype::self(exec, globalObject)));
}

bool JSRadioNodeList::getOwnPropertySlot(JSCell* cell, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    JSRadioNodeList* thisObject = jsCast<JSRadioNodeList*>(cell);
    ASSERT_GC_OBJECT_INHERITS(thisObject, &s_info);
    const HashEntry* entry = getStaticValueSlotEntryWithoutCaching<JSRadioNodeList>(exec, propertyName);
    if (entry) {
        slot.setCustom(thisObject, entry->propertyGetter());
        return true;
    }
    unsigned index = propertyName.asIndex();
    if (index != PropertyName::NotAnIndex && index < static_cast<RadioNodeList*>(thisObject->impl())->length()) {
        slot.setCustomIndex(thisObject, index, indexGetter);
        return true;
    }
    return getStaticValueSlot<JSRadioNodeList, Base>(exec, &JSRadioNodeListTable, thisObject, propertyName, slot);
}

bool JSRadioNodeList::getOwnPropertyDescriptor(JSObject* object, ExecState* exec, PropertyName propertyName, PropertyDescriptor& descriptor)
{
    JSRadioNodeList* thisObject = jsCast<JSRadioNodeList*>(object);
    ASSERT_GC_OBJECT_INHERITS(thisObject, &s_info);
    const HashEntry* entry = JSRadioNodeListTable.entry(exec, propertyName);
    if (entry) {
        PropertySlot slot;
        slot.setCustom(thisObject, entry->propertyGetter());
        descriptor.setDescriptor(slot.getValue(exec, propertyName), entry->attributes());
        return true;
    }
    unsigned index = propertyName.asIndex();
    if (index != PropertyName::NotAnIndex && index < static_cast<RadioNodeList*>(thisObject->impl())->length()) {
        PropertySlot slot;
        slot.setCustomIndex(thisObject, index, indexGetter);
        descriptor.setDescriptor(slot.getValue(exec, propertyName), DontDelete | ReadOnly);
        return true;
    }
    return getStaticValueDescriptor<JSRadioNodeList, Base>(exec, &JSRadioNodeListTable, thisObject, propertyName, descriptor);
}

bool JSRadioNodeList::getOwnPropertySlotByIndex(JSCell* cell, ExecState* exec, unsigned index, PropertySlot& slot)
{
    JSRadioNodeList* thisObject = jsCast<JSRadioNodeList*>(cell);
    ASSERT_GC_OBJECT_INHERITS(thisObject, &s_info);
    if (index < static_cast<RadioNodeList*>(thisObject->impl())->length()) {
        slot.setCustomIndex(thisObject, index, thisObject->indexGetter);
        return true;
    }
    return Base::getOwnPropertySlotByIndex(thisObject, exec, index, slot);
}

JSValue jsRadioNodeListValue(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSRadioNodeList* castedThis = jsCast<JSRadioNodeList*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    RadioNodeList* impl = static_cast<RadioNodeList*>(castedThis->impl());
    JSValue result = jsStringWithCache(exec, impl->value());
    return result;
}


void JSRadioNodeList::put(JSCell* cell, ExecState* exec, PropertyName propertyName, JSValue value, PutPropertySlot& slot)
{
    JSRadioNodeList* thisObject = jsCast<JSRadioNodeList*>(cell);
    ASSERT_GC_OBJECT_INHERITS(thisObject, &s_info);
    lookupPut<JSRadioNodeList, Base>(exec, propertyName, value, &JSRadioNodeListTable, thisObject, slot);
}

void setJSRadioNodeListValue(ExecState* exec, JSObject* thisObject, JSValue value)
{
    UNUSED_PARAM(exec);
    JSRadioNodeList* castedThis = jsCast<JSRadioNodeList*>(thisObject);
    RadioNodeList* impl = static_cast<RadioNodeList*>(castedThis->impl());
    const String& nativeValue(value.isEmpty() ? String() : value.toString(exec)->value(exec));
    if (exec->hadException())
        return;
    impl->setValue(nativeValue);
}


void JSRadioNodeList::getOwnPropertyNames(JSObject* object, ExecState* exec, PropertyNameArray& propertyNames, EnumerationMode mode)
{
    JSRadioNodeList* thisObject = jsCast<JSRadioNodeList*>(object);
    ASSERT_GC_OBJECT_INHERITS(thisObject, &s_info);
    for (unsigned i = 0; i < static_cast<RadioNodeList*>(thisObject->impl())->length(); ++i)
        propertyNames.add(Identifier::from(exec, i));
     Base::getOwnPropertyNames(thisObject, exec, propertyNames, mode);
}


JSValue JSRadioNodeList::indexGetter(ExecState* exec, JSValue slotBase, unsigned index)
{
    JSRadioNodeList* thisObj = jsCast<JSRadioNodeList*>(asObject(slotBase));
    ASSERT_GC_OBJECT_INHERITS(thisObj, &s_info);
    return toJS(exec, thisObj->globalObject(), static_cast<RadioNodeList*>(thisObj->impl())->item(index));
}

#if ENABLE(BINDING_INTEGRITY)
#if PLATFORM(WIN)
#pragma warning(disable: 4483)
extern "C" { extern void (*const __identifier("??_7RadioNodeList@WebCore@@6B@")[])(); }
#else
extern "C" { extern void* _ZTVN7WebCore13RadioNodeListE[]; }
#endif
#endif
JSC::JSValue toJS(JSC::ExecState* exec, JSDOMGlobalObject* globalObject, RadioNodeList* impl)
{
    if (!impl)
        return jsNull();
    if (JSValue result = getExistingWrapper<JSRadioNodeList>(exec, impl))
        return result;

#if ENABLE(BINDING_INTEGRITY)
    void* actualVTablePointer = *(reinterpret_cast<void**>(impl));
#if PLATFORM(WIN)
    void* expectedVTablePointer = reinterpret_cast<void*>(__identifier("??_7RadioNodeList@WebCore@@6B@"));
#else
    void* expectedVTablePointer = &_ZTVN7WebCore13RadioNodeListE[2];
#if COMPILER(CLANG) && COMPILER_SUPPORTS(CXX_STATIC_ASSERT)
    // If this fails RadioNodeList does not have a vtable, so you need to add the
    // ImplementationLacksVTable attribute to the interface definition
    COMPILE_ASSERT(__is_polymorphic(RadioNodeList), RadioNodeList_is_not_polymorphic);
#endif
#endif
    // If you hit this assertion you either have a use after free bug, or
    // RadioNodeList has subclasses. If RadioNodeList has subclasses that get passed
    // to toJS() we currently require RadioNodeList you to opt out of binding hardening
    // by adding the SkipVTableValidation attribute to the interface IDL definition
    RELEASE_ASSERT(actualVTablePointer == expectedVTablePointer);
#endif
    ReportMemoryCost<RadioNodeList>::reportMemoryCost(exec, impl);
    return createNewWrapper<JSRadioNodeList>(exec, globalObject, impl);
}


}

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
#include "JSHTMLAllCollection.h"

#include "Element.h"
#include "ExceptionCode.h"
#include "HTMLAllCollection.h"
#include "JSDOMBinding.h"
#include "JSNode.h"
#include "JSNodeCustom.h"
#include "JSNodeList.h"
#include "NameNodeList.h"
#include "Node.h"
#include "NodeList.h"
#include "wtf/text/AtomicString.h"
#include <runtime/Error.h>
#include <runtime/PropertyNameArray.h>
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

/* Hash table */

static const HashTableValue JSHTMLAllCollectionTableValues[] =
{
    { "length", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLAllCollectionLength), (intptr_t)0, NoIntrinsic },
    { "constructor", DontEnum | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLAllCollectionConstructor), (intptr_t)0, NoIntrinsic },
    { 0, 0, 0, 0, NoIntrinsic }
};

static const HashTable JSHTMLAllCollectionTable = { 5, 3, JSHTMLAllCollectionTableValues, 0 };
/* Hash table for constructor */

static const HashTableValue JSHTMLAllCollectionConstructorTableValues[] =
{
    { 0, 0, 0, 0, NoIntrinsic }
};

static const HashTable JSHTMLAllCollectionConstructorTable = { 1, 0, JSHTMLAllCollectionConstructorTableValues, 0 };
const ClassInfo JSHTMLAllCollectionConstructor::s_info = { "HTMLAllCollectionConstructor", &Base::s_info, &JSHTMLAllCollectionConstructorTable, 0, CREATE_METHOD_TABLE(JSHTMLAllCollectionConstructor) };

JSHTMLAllCollectionConstructor::JSHTMLAllCollectionConstructor(Structure* structure, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(structure, globalObject)
{
}

void JSHTMLAllCollectionConstructor::finishCreation(ExecState* exec, JSDOMGlobalObject* globalObject)
{
    Base::finishCreation(exec->vm());
    ASSERT(inherits(&s_info));
    putDirect(exec->vm(), exec->propertyNames().prototype, JSHTMLAllCollectionPrototype::self(exec, globalObject), DontDelete | ReadOnly);
    putDirect(exec->vm(), exec->propertyNames().length, jsNumber(0), ReadOnly | DontDelete | DontEnum);
}

bool JSHTMLAllCollectionConstructor::getOwnPropertySlot(JSCell* cell, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSHTMLAllCollectionConstructor, JSDOMWrapper>(exec, &JSHTMLAllCollectionConstructorTable, jsCast<JSHTMLAllCollectionConstructor*>(cell), propertyName, slot);
}

bool JSHTMLAllCollectionConstructor::getOwnPropertyDescriptor(JSObject* object, ExecState* exec, PropertyName propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSHTMLAllCollectionConstructor, JSDOMWrapper>(exec, &JSHTMLAllCollectionConstructorTable, jsCast<JSHTMLAllCollectionConstructor*>(object), propertyName, descriptor);
}

/* Hash table for prototype */

static const HashTableValue JSHTMLAllCollectionPrototypeTableValues[] =
{
    { "item", DontDelete | JSC::Function, (intptr_t)static_cast<NativeFunction>(jsHTMLAllCollectionPrototypeFunctionItem), (intptr_t)0, NoIntrinsic },
    { "namedItem", DontDelete | JSC::Function, (intptr_t)static_cast<NativeFunction>(jsHTMLAllCollectionPrototypeFunctionNamedItem), (intptr_t)1, NoIntrinsic },
    { "tags", DontDelete | JSC::Function, (intptr_t)static_cast<NativeFunction>(jsHTMLAllCollectionPrototypeFunctionTags), (intptr_t)1, NoIntrinsic },
    { 0, 0, 0, 0, NoIntrinsic }
};

static const HashTable JSHTMLAllCollectionPrototypeTable = { 8, 7, JSHTMLAllCollectionPrototypeTableValues, 0 };
const ClassInfo JSHTMLAllCollectionPrototype::s_info = { "HTMLAllCollectionPrototype", &Base::s_info, &JSHTMLAllCollectionPrototypeTable, 0, CREATE_METHOD_TABLE(JSHTMLAllCollectionPrototype) };

JSObject* JSHTMLAllCollectionPrototype::self(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSHTMLAllCollection>(exec, globalObject);
}

bool JSHTMLAllCollectionPrototype::getOwnPropertySlot(JSCell* cell, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    JSHTMLAllCollectionPrototype* thisObject = jsCast<JSHTMLAllCollectionPrototype*>(cell);
    return getStaticFunctionSlot<JSObject>(exec, &JSHTMLAllCollectionPrototypeTable, thisObject, propertyName, slot);
}

bool JSHTMLAllCollectionPrototype::getOwnPropertyDescriptor(JSObject* object, ExecState* exec, PropertyName propertyName, PropertyDescriptor& descriptor)
{
    JSHTMLAllCollectionPrototype* thisObject = jsCast<JSHTMLAllCollectionPrototype*>(object);
    return getStaticFunctionDescriptor<JSObject>(exec, &JSHTMLAllCollectionPrototypeTable, thisObject, propertyName, descriptor);
}

const ClassInfo JSHTMLAllCollection::s_info = { "HTMLAllCollection", &Base::s_info, &JSHTMLAllCollectionTable, 0 , CREATE_METHOD_TABLE(JSHTMLAllCollection) };

JSHTMLAllCollection::JSHTMLAllCollection(Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<HTMLAllCollection> impl)
    : JSDOMWrapper(structure, globalObject)
    , m_impl(impl.leakRef())
{
}

void JSHTMLAllCollection::finishCreation(VM& vm)
{
    Base::finishCreation(vm);
    ASSERT(inherits(&s_info));
}

JSObject* JSHTMLAllCollection::createPrototype(ExecState* exec, JSGlobalObject* globalObject)
{
    return JSHTMLAllCollectionPrototype::create(exec->vm(), globalObject, JSHTMLAllCollectionPrototype::createStructure(globalObject->vm(), globalObject, globalObject->objectPrototype()));
}

void JSHTMLAllCollection::destroy(JSC::JSCell* cell)
{
    JSHTMLAllCollection* thisObject = static_cast<JSHTMLAllCollection*>(cell);
    thisObject->JSHTMLAllCollection::~JSHTMLAllCollection();
}

JSHTMLAllCollection::~JSHTMLAllCollection()
{
    releaseImplIfNotNull();
}

bool JSHTMLAllCollection::getOwnPropertySlot(JSCell* cell, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    JSHTMLAllCollection* thisObject = jsCast<JSHTMLAllCollection*>(cell);
    ASSERT_GC_OBJECT_INHERITS(thisObject, &s_info);
    JSValue proto = thisObject->prototype();
    if (proto.isObject() && jsCast<JSObject*>(asObject(proto))->hasProperty(exec, propertyName))
        return false;

    const HashEntry* entry = getStaticValueSlotEntryWithoutCaching<JSHTMLAllCollection>(exec, propertyName);
    if (entry) {
        slot.setCustom(thisObject, entry->propertyGetter());
        return true;
    }
    unsigned index = propertyName.asIndex();
    if (index != PropertyName::NotAnIndex && index < static_cast<HTMLAllCollection*>(thisObject->impl())->length()) {
        slot.setCustomIndex(thisObject, index, indexGetter);
        return true;
    }
    if (canGetItemsForName(exec, static_cast<HTMLAllCollection*>(thisObject->impl()), propertyName)) {
        slot.setCustom(thisObject, thisObject->nameGetter);
        return true;
    }
    return getStaticValueSlot<JSHTMLAllCollection, Base>(exec, &JSHTMLAllCollectionTable, thisObject, propertyName, slot);
}

bool JSHTMLAllCollection::getOwnPropertyDescriptor(JSObject* object, ExecState* exec, PropertyName propertyName, PropertyDescriptor& descriptor)
{
    JSHTMLAllCollection* thisObject = jsCast<JSHTMLAllCollection*>(object);
    ASSERT_GC_OBJECT_INHERITS(thisObject, &s_info);
    JSValue proto = thisObject->prototype();
    if (proto.isObject() && jsCast<JSObject*>(asObject(proto))->hasProperty(exec, propertyName))
        return false;

    const HashEntry* entry = JSHTMLAllCollectionTable.entry(exec, propertyName);
    if (entry) {
        PropertySlot slot;
        slot.setCustom(thisObject, entry->propertyGetter());
        descriptor.setDescriptor(slot.getValue(exec, propertyName), entry->attributes());
        return true;
    }
    unsigned index = propertyName.asIndex();
    if (index != PropertyName::NotAnIndex && index < static_cast<HTMLAllCollection*>(thisObject->impl())->length()) {
        PropertySlot slot;
        slot.setCustomIndex(thisObject, index, indexGetter);
        descriptor.setDescriptor(slot.getValue(exec, propertyName), DontDelete | ReadOnly);
        return true;
    }
    if (canGetItemsForName(exec, static_cast<HTMLAllCollection*>(thisObject->impl()), propertyName)) {
        PropertySlot slot;
        slot.setCustom(thisObject, nameGetter);
        descriptor.setDescriptor(slot.getValue(exec, propertyName), ReadOnly | DontDelete | DontEnum);
        return true;
    }
    return getStaticValueDescriptor<JSHTMLAllCollection, Base>(exec, &JSHTMLAllCollectionTable, thisObject, propertyName, descriptor);
}

bool JSHTMLAllCollection::getOwnPropertySlotByIndex(JSCell* cell, ExecState* exec, unsigned index, PropertySlot& slot)
{
    JSHTMLAllCollection* thisObject = jsCast<JSHTMLAllCollection*>(cell);
    ASSERT_GC_OBJECT_INHERITS(thisObject, &s_info);
    if (index < static_cast<HTMLAllCollection*>(thisObject->impl())->length()) {
        slot.setCustomIndex(thisObject, index, thisObject->indexGetter);
        return true;
    }
    PropertyName propertyName = Identifier::from(exec, index);
    if (canGetItemsForName(exec, static_cast<HTMLAllCollection*>(thisObject->impl()), propertyName)) {
        slot.setCustom(thisObject, thisObject->nameGetter);
        return true;
    }
    return Base::getOwnPropertySlotByIndex(thisObject, exec, index, slot);
}

JSValue jsHTMLAllCollectionLength(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSHTMLAllCollection* castedThis = jsCast<JSHTMLAllCollection*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    HTMLAllCollection* impl = static_cast<HTMLAllCollection*>(castedThis->impl());
    JSValue result = jsNumber(impl->length());
    return result;
}


JSValue jsHTMLAllCollectionConstructor(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSHTMLAllCollection* domObject = jsCast<JSHTMLAllCollection*>(asObject(slotBase));
    return JSHTMLAllCollection::getConstructor(exec, domObject->globalObject());
}

void JSHTMLAllCollection::getOwnPropertyNames(JSObject* object, ExecState* exec, PropertyNameArray& propertyNames, EnumerationMode mode)
{
    JSHTMLAllCollection* thisObject = jsCast<JSHTMLAllCollection*>(object);
    ASSERT_GC_OBJECT_INHERITS(thisObject, &s_info);
    for (unsigned i = 0; i < static_cast<HTMLAllCollection*>(thisObject->impl())->length(); ++i)
        propertyNames.add(Identifier::from(exec, i));
     Base::getOwnPropertyNames(thisObject, exec, propertyNames, mode);
}

JSValue JSHTMLAllCollection::getConstructor(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSHTMLAllCollectionConstructor>(exec, jsCast<JSDOMGlobalObject*>(globalObject));
}

EncodedJSValue JSC_HOST_CALL jsHTMLAllCollectionPrototypeFunctionItem(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSHTMLAllCollection::s_info))
        return throwVMTypeError(exec);
    JSHTMLAllCollection* castedThis = jsCast<JSHTMLAllCollection*>(asObject(thisValue));
    ASSERT_GC_OBJECT_INHERITS(castedThis, &JSHTMLAllCollection::s_info);
    return JSValue::encode(castedThis->item(exec));
}

EncodedJSValue JSC_HOST_CALL jsHTMLAllCollectionPrototypeFunctionNamedItem(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSHTMLAllCollection::s_info))
        return throwVMTypeError(exec);
    JSHTMLAllCollection* castedThis = jsCast<JSHTMLAllCollection*>(asObject(thisValue));
    ASSERT_GC_OBJECT_INHERITS(castedThis, &JSHTMLAllCollection::s_info);
    return JSValue::encode(castedThis->namedItem(exec));
}

EncodedJSValue JSC_HOST_CALL jsHTMLAllCollectionPrototypeFunctionTags(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSHTMLAllCollection::s_info))
        return throwVMTypeError(exec);
    JSHTMLAllCollection* castedThis = jsCast<JSHTMLAllCollection*>(asObject(thisValue));
    ASSERT_GC_OBJECT_INHERITS(castedThis, &JSHTMLAllCollection::s_info);
    HTMLAllCollection* impl = static_cast<HTMLAllCollection*>(castedThis->impl());
    if (exec->argumentCount() < 1)
        return throwVMError(exec, createNotEnoughArgumentsError(exec));
    const String& name(exec->argument(0).isEmpty() ? String() : exec->argument(0).toString(exec)->value(exec));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());

    JSC::JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(impl->tags(name)));
    return JSValue::encode(result);
}


JSValue JSHTMLAllCollection::indexGetter(ExecState* exec, JSValue slotBase, unsigned index)
{
    JSHTMLAllCollection* thisObj = jsCast<JSHTMLAllCollection*>(asObject(slotBase));
    ASSERT_GC_OBJECT_INHERITS(thisObj, &s_info);
    return toJS(exec, thisObj->globalObject(), static_cast<HTMLAllCollection*>(thisObj->impl())->item(index));
}

static inline bool isObservable(JSHTMLAllCollection* jsHTMLAllCollection)
{
    if (jsHTMLAllCollection->hasCustomProperties())
        return true;
    return false;
}

bool JSHTMLAllCollectionOwner::isReachableFromOpaqueRoots(JSC::Handle<JSC::Unknown> handle, void*, SlotVisitor& visitor)
{
    JSHTMLAllCollection* jsHTMLAllCollection = jsCast<JSHTMLAllCollection*>(handle.get().asCell());
    if (!isObservable(jsHTMLAllCollection))
        return false;
    void* root = WebCore::root(jsHTMLAllCollection->impl()->ownerNode());
    return visitor.containsOpaqueRoot(root);
}

void JSHTMLAllCollectionOwner::finalize(JSC::Handle<JSC::Unknown> handle, void* context)
{
    JSHTMLAllCollection* jsHTMLAllCollection = jsCast<JSHTMLAllCollection*>(handle.get().asCell());
    DOMWrapperWorld* world = static_cast<DOMWrapperWorld*>(context);
    uncacheWrapper(world, jsHTMLAllCollection->impl(), jsHTMLAllCollection);
    jsHTMLAllCollection->releaseImpl();
}

#if ENABLE(BINDING_INTEGRITY)
#if PLATFORM(WIN)
#pragma warning(disable: 4483)
extern "C" { extern void (*const __identifier("??_7HTMLAllCollection@WebCore@@6B@")[])(); }
#else
extern "C" { extern void* _ZTVN7WebCore17HTMLAllCollectionE[]; }
#endif
#endif
JSC::JSValue toJS(JSC::ExecState* exec, JSDOMGlobalObject* globalObject, HTMLAllCollection* impl)
{
    if (!impl)
        return jsNull();
    if (JSValue result = getExistingWrapper<JSHTMLAllCollection>(exec, impl))
        return result;

#if ENABLE(BINDING_INTEGRITY)
    void* actualVTablePointer = *(reinterpret_cast<void**>(impl));
#if PLATFORM(WIN)
    void* expectedVTablePointer = reinterpret_cast<void*>(__identifier("??_7HTMLAllCollection@WebCore@@6B@"));
#else
    void* expectedVTablePointer = &_ZTVN7WebCore17HTMLAllCollectionE[2];
#if COMPILER(CLANG) && COMPILER_SUPPORTS(CXX_STATIC_ASSERT)
    // If this fails HTMLAllCollection does not have a vtable, so you need to add the
    // ImplementationLacksVTable attribute to the interface definition
    COMPILE_ASSERT(__is_polymorphic(HTMLAllCollection), HTMLAllCollection_is_not_polymorphic);
#endif
#endif
    // If you hit this assertion you either have a use after free bug, or
    // HTMLAllCollection has subclasses. If HTMLAllCollection has subclasses that get passed
    // to toJS() we currently require HTMLAllCollection you to opt out of binding hardening
    // by adding the SkipVTableValidation attribute to the interface IDL definition
    RELEASE_ASSERT(actualVTablePointer == expectedVTablePointer);
#endif
    ReportMemoryCost<HTMLAllCollection>::reportMemoryCost(exec, impl);
    return createNewWrapper<JSHTMLAllCollection>(exec, globalObject, impl);
}

HTMLAllCollection* toHTMLAllCollection(JSC::JSValue value)
{
    return value.inherits(&JSHTMLAllCollection::s_info) ? jsCast<JSHTMLAllCollection*>(asObject(value))->impl() : 0;
}

}

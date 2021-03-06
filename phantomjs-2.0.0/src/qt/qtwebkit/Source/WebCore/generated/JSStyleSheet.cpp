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
#include "JSStyleSheet.h"

#include "JSMediaList.h"
#include "JSNode.h"
#include "JSStyleSheet.h"
#include "KURL.h"
#include "MediaList.h"
#include "Node.h"
#include "StyleSheet.h"
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

/* Hash table */

static const HashTableValue JSStyleSheetTableValues[] =
{
    { "type", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsStyleSheetType), (intptr_t)0, NoIntrinsic },
    { "disabled", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsStyleSheetDisabled), (intptr_t)setJSStyleSheetDisabled, NoIntrinsic },
    { "ownerNode", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsStyleSheetOwnerNode), (intptr_t)0, NoIntrinsic },
    { "parentStyleSheet", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsStyleSheetParentStyleSheet), (intptr_t)0, NoIntrinsic },
    { "href", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsStyleSheetHref), (intptr_t)0, NoIntrinsic },
    { "title", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsStyleSheetTitle), (intptr_t)0, NoIntrinsic },
    { "media", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsStyleSheetMedia), (intptr_t)0, NoIntrinsic },
    { "constructor", DontEnum | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsStyleSheetConstructor), (intptr_t)0, NoIntrinsic },
    { 0, 0, 0, 0, NoIntrinsic }
};

static const HashTable JSStyleSheetTable = { 17, 15, JSStyleSheetTableValues, 0 };
/* Hash table for constructor */

static const HashTableValue JSStyleSheetConstructorTableValues[] =
{
    { 0, 0, 0, 0, NoIntrinsic }
};

static const HashTable JSStyleSheetConstructorTable = { 1, 0, JSStyleSheetConstructorTableValues, 0 };
const ClassInfo JSStyleSheetConstructor::s_info = { "StyleSheetConstructor", &Base::s_info, &JSStyleSheetConstructorTable, 0, CREATE_METHOD_TABLE(JSStyleSheetConstructor) };

JSStyleSheetConstructor::JSStyleSheetConstructor(Structure* structure, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(structure, globalObject)
{
}

void JSStyleSheetConstructor::finishCreation(ExecState* exec, JSDOMGlobalObject* globalObject)
{
    Base::finishCreation(exec->vm());
    ASSERT(inherits(&s_info));
    putDirect(exec->vm(), exec->propertyNames().prototype, JSStyleSheetPrototype::self(exec, globalObject), DontDelete | ReadOnly);
    putDirect(exec->vm(), exec->propertyNames().length, jsNumber(0), ReadOnly | DontDelete | DontEnum);
}

bool JSStyleSheetConstructor::getOwnPropertySlot(JSCell* cell, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSStyleSheetConstructor, JSDOMWrapper>(exec, &JSStyleSheetConstructorTable, jsCast<JSStyleSheetConstructor*>(cell), propertyName, slot);
}

bool JSStyleSheetConstructor::getOwnPropertyDescriptor(JSObject* object, ExecState* exec, PropertyName propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSStyleSheetConstructor, JSDOMWrapper>(exec, &JSStyleSheetConstructorTable, jsCast<JSStyleSheetConstructor*>(object), propertyName, descriptor);
}

/* Hash table for prototype */

static const HashTableValue JSStyleSheetPrototypeTableValues[] =
{
    { 0, 0, 0, 0, NoIntrinsic }
};

static const HashTable JSStyleSheetPrototypeTable = { 1, 0, JSStyleSheetPrototypeTableValues, 0 };
const ClassInfo JSStyleSheetPrototype::s_info = { "StyleSheetPrototype", &Base::s_info, &JSStyleSheetPrototypeTable, 0, CREATE_METHOD_TABLE(JSStyleSheetPrototype) };

JSObject* JSStyleSheetPrototype::self(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSStyleSheet>(exec, globalObject);
}

const ClassInfo JSStyleSheet::s_info = { "StyleSheet", &Base::s_info, &JSStyleSheetTable, 0 , CREATE_METHOD_TABLE(JSStyleSheet) };

JSStyleSheet::JSStyleSheet(Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<StyleSheet> impl)
    : JSDOMWrapper(structure, globalObject)
    , m_impl(impl.leakRef())
{
}

void JSStyleSheet::finishCreation(VM& vm)
{
    Base::finishCreation(vm);
    ASSERT(inherits(&s_info));
}

JSObject* JSStyleSheet::createPrototype(ExecState* exec, JSGlobalObject* globalObject)
{
    return JSStyleSheetPrototype::create(exec->vm(), globalObject, JSStyleSheetPrototype::createStructure(globalObject->vm(), globalObject, globalObject->objectPrototype()));
}

void JSStyleSheet::destroy(JSC::JSCell* cell)
{
    JSStyleSheet* thisObject = static_cast<JSStyleSheet*>(cell);
    thisObject->JSStyleSheet::~JSStyleSheet();
}

JSStyleSheet::~JSStyleSheet()
{
    releaseImplIfNotNull();
}

bool JSStyleSheet::getOwnPropertySlot(JSCell* cell, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    JSStyleSheet* thisObject = jsCast<JSStyleSheet*>(cell);
    ASSERT_GC_OBJECT_INHERITS(thisObject, &s_info);
    return getStaticValueSlot<JSStyleSheet, Base>(exec, &JSStyleSheetTable, thisObject, propertyName, slot);
}

bool JSStyleSheet::getOwnPropertyDescriptor(JSObject* object, ExecState* exec, PropertyName propertyName, PropertyDescriptor& descriptor)
{
    JSStyleSheet* thisObject = jsCast<JSStyleSheet*>(object);
    ASSERT_GC_OBJECT_INHERITS(thisObject, &s_info);
    return getStaticValueDescriptor<JSStyleSheet, Base>(exec, &JSStyleSheetTable, thisObject, propertyName, descriptor);
}

JSValue jsStyleSheetType(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSStyleSheet* castedThis = jsCast<JSStyleSheet*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    StyleSheet* impl = static_cast<StyleSheet*>(castedThis->impl());
    JSValue result = jsStringOrNull(exec, impl->type());
    return result;
}


JSValue jsStyleSheetDisabled(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSStyleSheet* castedThis = jsCast<JSStyleSheet*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    StyleSheet* impl = static_cast<StyleSheet*>(castedThis->impl());
    JSValue result = jsBoolean(impl->disabled());
    return result;
}


JSValue jsStyleSheetOwnerNode(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSStyleSheet* castedThis = jsCast<JSStyleSheet*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    StyleSheet* impl = static_cast<StyleSheet*>(castedThis->impl());
    JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(impl->ownerNode()));
    return result;
}


JSValue jsStyleSheetParentStyleSheet(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSStyleSheet* castedThis = jsCast<JSStyleSheet*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    StyleSheet* impl = static_cast<StyleSheet*>(castedThis->impl());
    JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(impl->parentStyleSheet()));
    return result;
}


JSValue jsStyleSheetHref(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSStyleSheet* castedThis = jsCast<JSStyleSheet*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    StyleSheet* impl = static_cast<StyleSheet*>(castedThis->impl());
    JSValue result = jsStringOrNull(exec, impl->href());
    return result;
}


JSValue jsStyleSheetTitle(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSStyleSheet* castedThis = jsCast<JSStyleSheet*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    StyleSheet* impl = static_cast<StyleSheet*>(castedThis->impl());
    JSValue result = jsStringOrNull(exec, impl->title());
    return result;
}


JSValue jsStyleSheetMedia(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSStyleSheet* castedThis = jsCast<JSStyleSheet*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    StyleSheet* impl = static_cast<StyleSheet*>(castedThis->impl());
    JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(impl->media()));
    return result;
}


JSValue jsStyleSheetConstructor(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSStyleSheet* domObject = jsCast<JSStyleSheet*>(asObject(slotBase));
    return JSStyleSheet::getConstructor(exec, domObject->globalObject());
}

void JSStyleSheet::put(JSCell* cell, ExecState* exec, PropertyName propertyName, JSValue value, PutPropertySlot& slot)
{
    JSStyleSheet* thisObject = jsCast<JSStyleSheet*>(cell);
    ASSERT_GC_OBJECT_INHERITS(thisObject, &s_info);
    lookupPut<JSStyleSheet, Base>(exec, propertyName, value, &JSStyleSheetTable, thisObject, slot);
}

void setJSStyleSheetDisabled(ExecState* exec, JSObject* thisObject, JSValue value)
{
    UNUSED_PARAM(exec);
    JSStyleSheet* castedThis = jsCast<JSStyleSheet*>(thisObject);
    StyleSheet* impl = static_cast<StyleSheet*>(castedThis->impl());
    bool nativeValue(value.toBoolean(exec));
    if (exec->hadException())
        return;
    impl->setDisabled(nativeValue);
}


JSValue JSStyleSheet::getConstructor(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSStyleSheetConstructor>(exec, jsCast<JSDOMGlobalObject*>(globalObject));
}

static inline bool isObservable(JSStyleSheet* jsStyleSheet)
{
    if (jsStyleSheet->hasCustomProperties())
        return true;
    return false;
}

bool JSStyleSheetOwner::isReachableFromOpaqueRoots(JSC::Handle<JSC::Unknown> handle, void*, SlotVisitor& visitor)
{
    JSStyleSheet* jsStyleSheet = jsCast<JSStyleSheet*>(handle.get().asCell());
    if (!isObservable(jsStyleSheet))
        return false;
    void* root = WebCore::root(jsStyleSheet->impl());
    return visitor.containsOpaqueRoot(root);
}

void JSStyleSheetOwner::finalize(JSC::Handle<JSC::Unknown> handle, void* context)
{
    JSStyleSheet* jsStyleSheet = jsCast<JSStyleSheet*>(handle.get().asCell());
    DOMWrapperWorld* world = static_cast<DOMWrapperWorld*>(context);
    uncacheWrapper(world, jsStyleSheet->impl(), jsStyleSheet);
    jsStyleSheet->releaseImpl();
}

StyleSheet* toStyleSheet(JSC::JSValue value)
{
    return value.inherits(&JSStyleSheet::s_info) ? jsCast<JSStyleSheet*>(asObject(value))->impl() : 0;
}

}

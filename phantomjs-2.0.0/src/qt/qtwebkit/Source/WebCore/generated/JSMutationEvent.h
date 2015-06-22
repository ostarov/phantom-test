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

#ifndef JSMutationEvent_h
#define JSMutationEvent_h

#include "JSDOMBinding.h"
#include "JSEvent.h"
#include "MutationEvent.h"
#include <runtime/JSObject.h>

namespace WebCore {

class JSMutationEvent : public JSEvent {
public:
    typedef JSEvent Base;
    static JSMutationEvent* create(JSC::Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<MutationEvent> impl)
    {
        JSMutationEvent* ptr = new (NotNull, JSC::allocateCell<JSMutationEvent>(globalObject->vm().heap)) JSMutationEvent(structure, globalObject, impl);
        ptr->finishCreation(globalObject->vm());
        return ptr;
    }

    static JSC::JSObject* createPrototype(JSC::ExecState*, JSC::JSGlobalObject*);
    static bool getOwnPropertySlot(JSC::JSCell*, JSC::ExecState*, JSC::PropertyName, JSC::PropertySlot&);
    static bool getOwnPropertyDescriptor(JSC::JSObject*, JSC::ExecState*, JSC::PropertyName, JSC::PropertyDescriptor&);
    static const JSC::ClassInfo s_info;

    static JSC::Structure* createStructure(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(vm, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), &s_info);
    }

    static JSC::JSValue getConstructor(JSC::ExecState*, JSC::JSGlobalObject*);
protected:
    JSMutationEvent(JSC::Structure*, JSDOMGlobalObject*, PassRefPtr<MutationEvent>);
    void finishCreation(JSC::VM&);
    static const unsigned StructureFlags = JSC::OverridesGetOwnPropertySlot | JSC::InterceptsGetOwnPropertySlotByIndexEvenWhenLengthIsNotZero | Base::StructureFlags;
};


class JSMutationEventPrototype : public JSC::JSNonFinalObject {
public:
    typedef JSC::JSNonFinalObject Base;
    static JSC::JSObject* self(JSC::ExecState*, JSC::JSGlobalObject*);
    static JSMutationEventPrototype* create(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::Structure* structure)
    {
        JSMutationEventPrototype* ptr = new (NotNull, JSC::allocateCell<JSMutationEventPrototype>(vm.heap)) JSMutationEventPrototype(vm, globalObject, structure);
        ptr->finishCreation(vm);
        return ptr;
    }

    static const JSC::ClassInfo s_info;
    static bool getOwnPropertySlot(JSC::JSCell*, JSC::ExecState*, JSC::PropertyName, JSC::PropertySlot&);
    static bool getOwnPropertyDescriptor(JSC::JSObject*, JSC::ExecState*, JSC::PropertyName, JSC::PropertyDescriptor&);
    static JSC::Structure* createStructure(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(vm, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), &s_info);
    }

private:
    JSMutationEventPrototype(JSC::VM& vm, JSC::JSGlobalObject*, JSC::Structure* structure) : JSC::JSNonFinalObject(vm, structure) { }
protected:
    static const unsigned StructureFlags = JSC::OverridesGetOwnPropertySlot | Base::StructureFlags;
};

class JSMutationEventConstructor : public DOMConstructorObject {
private:
    JSMutationEventConstructor(JSC::Structure*, JSDOMGlobalObject*);
    void finishCreation(JSC::ExecState*, JSDOMGlobalObject*);

public:
    typedef DOMConstructorObject Base;
    static JSMutationEventConstructor* create(JSC::ExecState* exec, JSC::Structure* structure, JSDOMGlobalObject* globalObject)
    {
        JSMutationEventConstructor* ptr = new (NotNull, JSC::allocateCell<JSMutationEventConstructor>(*exec->heap())) JSMutationEventConstructor(structure, globalObject);
        ptr->finishCreation(exec, globalObject);
        return ptr;
    }

    static bool getOwnPropertySlot(JSC::JSCell*, JSC::ExecState*, JSC::PropertyName, JSC::PropertySlot&);
    static bool getOwnPropertyDescriptor(JSC::JSObject*, JSC::ExecState*, JSC::PropertyName, JSC::PropertyDescriptor&);
    static const JSC::ClassInfo s_info;
    static JSC::Structure* createStructure(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(vm, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), &s_info);
    }
protected:
    static const unsigned StructureFlags = JSC::OverridesGetOwnPropertySlot | JSC::ImplementsHasInstance | DOMConstructorObject::StructureFlags;
};

// Functions

JSC::EncodedJSValue JSC_HOST_CALL jsMutationEventPrototypeFunctionInitMutationEvent(JSC::ExecState*);
// Attributes

JSC::JSValue jsMutationEventRelatedNode(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsMutationEventPrevValue(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsMutationEventNewValue(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsMutationEventAttrName(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsMutationEventAttrChange(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsMutationEventConstructor(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
// Constants

JSC::JSValue jsMutationEventMODIFICATION(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsMutationEventADDITION(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsMutationEventREMOVAL(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);

} // namespace WebCore

#endif

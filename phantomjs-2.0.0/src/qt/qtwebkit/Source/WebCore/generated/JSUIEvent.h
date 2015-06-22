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

#ifndef JSUIEvent_h
#define JSUIEvent_h

#include "JSDOMBinding.h"
#include "JSEvent.h"
#include "UIEvent.h"
#include <runtime/JSObject.h>

namespace WebCore {

class JSDictionary;

class JSUIEvent : public JSEvent {
public:
    typedef JSEvent Base;
    static JSUIEvent* create(JSC::Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<UIEvent> impl)
    {
        JSUIEvent* ptr = new (NotNull, JSC::allocateCell<JSUIEvent>(globalObject->vm().heap)) JSUIEvent(structure, globalObject, impl);
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
    JSUIEvent(JSC::Structure*, JSDOMGlobalObject*, PassRefPtr<UIEvent>);
    void finishCreation(JSC::VM&);
    static const unsigned StructureFlags = JSC::OverridesGetOwnPropertySlot | JSC::InterceptsGetOwnPropertySlotByIndexEvenWhenLengthIsNotZero | Base::StructureFlags;
};


class JSUIEventPrototype : public JSC::JSNonFinalObject {
public:
    typedef JSC::JSNonFinalObject Base;
    static JSC::JSObject* self(JSC::ExecState*, JSC::JSGlobalObject*);
    static JSUIEventPrototype* create(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::Structure* structure)
    {
        JSUIEventPrototype* ptr = new (NotNull, JSC::allocateCell<JSUIEventPrototype>(vm.heap)) JSUIEventPrototype(vm, globalObject, structure);
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
    JSUIEventPrototype(JSC::VM& vm, JSC::JSGlobalObject*, JSC::Structure* structure) : JSC::JSNonFinalObject(vm, structure) { }
protected:
    static const unsigned StructureFlags = JSC::OverridesGetOwnPropertySlot | Base::StructureFlags;
};

class JSUIEventConstructor : public DOMConstructorObject {
private:
    JSUIEventConstructor(JSC::Structure*, JSDOMGlobalObject*);
    void finishCreation(JSC::ExecState*, JSDOMGlobalObject*);

public:
    typedef DOMConstructorObject Base;
    static JSUIEventConstructor* create(JSC::ExecState* exec, JSC::Structure* structure, JSDOMGlobalObject* globalObject)
    {
        JSUIEventConstructor* ptr = new (NotNull, JSC::allocateCell<JSUIEventConstructor>(*exec->heap())) JSUIEventConstructor(structure, globalObject);
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
    static JSC::EncodedJSValue JSC_HOST_CALL constructJSUIEvent(JSC::ExecState*);
#if ENABLE(DOM4_EVENTS_CONSTRUCTOR)
    static JSC::ConstructType getConstructData(JSC::JSCell*, JSC::ConstructData&);
#endif // ENABLE(DOM4_EVENTS_CONSTRUCTOR)
};

bool fillUIEventInit(UIEventInit&, JSDictionary&);

// Functions

JSC::EncodedJSValue JSC_HOST_CALL jsUIEventPrototypeFunctionInitUIEvent(JSC::ExecState*);
// Attributes

JSC::JSValue jsUIEventView(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsUIEventDetail(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsUIEventKeyCode(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsUIEventCharCode(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsUIEventLayerX(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsUIEventLayerY(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsUIEventPageX(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsUIEventPageY(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsUIEventWhich(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsUIEventConstructor(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);

} // namespace WebCore

#endif

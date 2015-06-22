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

#ifndef JSHTMLFieldSetElement_h
#define JSHTMLFieldSetElement_h

#include "HTMLFieldSetElement.h"
#include "JSDOMBinding.h"
#include "JSHTMLElement.h"
#include <runtime/JSObject.h>

namespace WebCore {

class JSHTMLFieldSetElement : public JSHTMLElement {
public:
    typedef JSHTMLElement Base;
    static JSHTMLFieldSetElement* create(JSC::Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<HTMLFieldSetElement> impl)
    {
        JSHTMLFieldSetElement* ptr = new (NotNull, JSC::allocateCell<JSHTMLFieldSetElement>(globalObject->vm().heap)) JSHTMLFieldSetElement(structure, globalObject, impl);
        ptr->finishCreation(globalObject->vm());
        return ptr;
    }

    static JSC::JSObject* createPrototype(JSC::ExecState*, JSC::JSGlobalObject*);
    static bool getOwnPropertySlot(JSC::JSCell*, JSC::ExecState*, JSC::PropertyName, JSC::PropertySlot&);
    static bool getOwnPropertyDescriptor(JSC::JSObject*, JSC::ExecState*, JSC::PropertyName, JSC::PropertyDescriptor&);
    static void put(JSC::JSCell*, JSC::ExecState*, JSC::PropertyName, JSC::JSValue, JSC::PutPropertySlot&);
    static const JSC::ClassInfo s_info;

    static JSC::Structure* createStructure(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(vm, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), &s_info);
    }

    static JSC::JSValue getConstructor(JSC::ExecState*, JSC::JSGlobalObject*);
protected:
    JSHTMLFieldSetElement(JSC::Structure*, JSDOMGlobalObject*, PassRefPtr<HTMLFieldSetElement>);
    void finishCreation(JSC::VM&);
    static const unsigned StructureFlags = JSC::OverridesGetOwnPropertySlot | JSC::InterceptsGetOwnPropertySlotByIndexEvenWhenLengthIsNotZero | Base::StructureFlags;
};


class JSHTMLFieldSetElementPrototype : public JSC::JSNonFinalObject {
public:
    typedef JSC::JSNonFinalObject Base;
    static JSC::JSObject* self(JSC::ExecState*, JSC::JSGlobalObject*);
    static JSHTMLFieldSetElementPrototype* create(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::Structure* structure)
    {
        JSHTMLFieldSetElementPrototype* ptr = new (NotNull, JSC::allocateCell<JSHTMLFieldSetElementPrototype>(vm.heap)) JSHTMLFieldSetElementPrototype(vm, globalObject, structure);
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
    JSHTMLFieldSetElementPrototype(JSC::VM& vm, JSC::JSGlobalObject*, JSC::Structure* structure) : JSC::JSNonFinalObject(vm, structure) { }
protected:
    static const unsigned StructureFlags = JSC::OverridesGetOwnPropertySlot | Base::StructureFlags;
};

class JSHTMLFieldSetElementConstructor : public DOMConstructorObject {
private:
    JSHTMLFieldSetElementConstructor(JSC::Structure*, JSDOMGlobalObject*);
    void finishCreation(JSC::ExecState*, JSDOMGlobalObject*);

public:
    typedef DOMConstructorObject Base;
    static JSHTMLFieldSetElementConstructor* create(JSC::ExecState* exec, JSC::Structure* structure, JSDOMGlobalObject* globalObject)
    {
        JSHTMLFieldSetElementConstructor* ptr = new (NotNull, JSC::allocateCell<JSHTMLFieldSetElementConstructor>(*exec->heap())) JSHTMLFieldSetElementConstructor(structure, globalObject);
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

JSC::EncodedJSValue JSC_HOST_CALL jsHTMLFieldSetElementPrototypeFunctionCheckValidity(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsHTMLFieldSetElementPrototypeFunctionSetCustomValidity(JSC::ExecState*);
// Attributes

JSC::JSValue jsHTMLFieldSetElementDisabled(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
void setJSHTMLFieldSetElementDisabled(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsHTMLFieldSetElementForm(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsHTMLFieldSetElementName(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
void setJSHTMLFieldSetElementName(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsHTMLFieldSetElementType(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsHTMLFieldSetElementElements(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsHTMLFieldSetElementWillValidate(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsHTMLFieldSetElementValidity(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsHTMLFieldSetElementValidationMessage(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsHTMLFieldSetElementConstructor(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);

} // namespace WebCore

#endif

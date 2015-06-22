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

#ifndef JSHTMLOutputElement_h
#define JSHTMLOutputElement_h

#include "HTMLOutputElement.h"
#include "JSDOMBinding.h"
#include "JSHTMLElement.h"
#include <runtime/JSObject.h>

namespace WebCore {

class JSHTMLOutputElement : public JSHTMLElement {
public:
    typedef JSHTMLElement Base;
    static JSHTMLOutputElement* create(JSC::Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<HTMLOutputElement> impl)
    {
        JSHTMLOutputElement* ptr = new (NotNull, JSC::allocateCell<JSHTMLOutputElement>(globalObject->vm().heap)) JSHTMLOutputElement(structure, globalObject, impl);
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
    JSHTMLOutputElement(JSC::Structure*, JSDOMGlobalObject*, PassRefPtr<HTMLOutputElement>);
    void finishCreation(JSC::VM&);
    static const unsigned StructureFlags = JSC::OverridesGetOwnPropertySlot | JSC::InterceptsGetOwnPropertySlotByIndexEvenWhenLengthIsNotZero | Base::StructureFlags;
};


class JSHTMLOutputElementPrototype : public JSC::JSNonFinalObject {
public:
    typedef JSC::JSNonFinalObject Base;
    static JSC::JSObject* self(JSC::ExecState*, JSC::JSGlobalObject*);
    static JSHTMLOutputElementPrototype* create(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::Structure* structure)
    {
        JSHTMLOutputElementPrototype* ptr = new (NotNull, JSC::allocateCell<JSHTMLOutputElementPrototype>(vm.heap)) JSHTMLOutputElementPrototype(vm, globalObject, structure);
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
    JSHTMLOutputElementPrototype(JSC::VM& vm, JSC::JSGlobalObject*, JSC::Structure* structure) : JSC::JSNonFinalObject(vm, structure) { }
protected:
    static const unsigned StructureFlags = JSC::OverridesGetOwnPropertySlot | Base::StructureFlags;
};

class JSHTMLOutputElementConstructor : public DOMConstructorObject {
private:
    JSHTMLOutputElementConstructor(JSC::Structure*, JSDOMGlobalObject*);
    void finishCreation(JSC::ExecState*, JSDOMGlobalObject*);

public:
    typedef DOMConstructorObject Base;
    static JSHTMLOutputElementConstructor* create(JSC::ExecState* exec, JSC::Structure* structure, JSDOMGlobalObject* globalObject)
    {
        JSHTMLOutputElementConstructor* ptr = new (NotNull, JSC::allocateCell<JSHTMLOutputElementConstructor>(*exec->heap())) JSHTMLOutputElementConstructor(structure, globalObject);
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

JSC::EncodedJSValue JSC_HOST_CALL jsHTMLOutputElementPrototypeFunctionCheckValidity(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsHTMLOutputElementPrototypeFunctionSetCustomValidity(JSC::ExecState*);
// Attributes

JSC::JSValue jsHTMLOutputElementHtmlFor(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsHTMLOutputElementForm(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsHTMLOutputElementName(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
void setJSHTMLOutputElementName(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsHTMLOutputElementType(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsHTMLOutputElementDefaultValue(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
void setJSHTMLOutputElementDefaultValue(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsHTMLOutputElementValue(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
void setJSHTMLOutputElementValue(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsHTMLOutputElementWillValidate(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsHTMLOutputElementValidity(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsHTMLOutputElementValidationMessage(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsHTMLOutputElementLabels(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsHTMLOutputElementConstructor(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);

} // namespace WebCore

#endif

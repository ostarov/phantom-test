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

#ifndef JSHTMLTableElement_h
#define JSHTMLTableElement_h

#include "HTMLTableElement.h"
#include "JSDOMBinding.h"
#include "JSHTMLElement.h"
#include <runtime/JSObject.h>

namespace WebCore {

class JSHTMLTableElement : public JSHTMLElement {
public:
    typedef JSHTMLElement Base;
    static JSHTMLTableElement* create(JSC::Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<HTMLTableElement> impl)
    {
        JSHTMLTableElement* ptr = new (NotNull, JSC::allocateCell<JSHTMLTableElement>(globalObject->vm().heap)) JSHTMLTableElement(structure, globalObject, impl);
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
    JSHTMLTableElement(JSC::Structure*, JSDOMGlobalObject*, PassRefPtr<HTMLTableElement>);
    void finishCreation(JSC::VM&);
    static const unsigned StructureFlags = JSC::OverridesGetOwnPropertySlot | JSC::InterceptsGetOwnPropertySlotByIndexEvenWhenLengthIsNotZero | Base::StructureFlags;
};


class JSHTMLTableElementPrototype : public JSC::JSNonFinalObject {
public:
    typedef JSC::JSNonFinalObject Base;
    static JSC::JSObject* self(JSC::ExecState*, JSC::JSGlobalObject*);
    static JSHTMLTableElementPrototype* create(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::Structure* structure)
    {
        JSHTMLTableElementPrototype* ptr = new (NotNull, JSC::allocateCell<JSHTMLTableElementPrototype>(vm.heap)) JSHTMLTableElementPrototype(vm, globalObject, structure);
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
    JSHTMLTableElementPrototype(JSC::VM& vm, JSC::JSGlobalObject*, JSC::Structure* structure) : JSC::JSNonFinalObject(vm, structure) { }
protected:
    static const unsigned StructureFlags = JSC::OverridesGetOwnPropertySlot | Base::StructureFlags;
};

class JSHTMLTableElementConstructor : public DOMConstructorObject {
private:
    JSHTMLTableElementConstructor(JSC::Structure*, JSDOMGlobalObject*);
    void finishCreation(JSC::ExecState*, JSDOMGlobalObject*);

public:
    typedef DOMConstructorObject Base;
    static JSHTMLTableElementConstructor* create(JSC::ExecState* exec, JSC::Structure* structure, JSDOMGlobalObject* globalObject)
    {
        JSHTMLTableElementConstructor* ptr = new (NotNull, JSC::allocateCell<JSHTMLTableElementConstructor>(*exec->heap())) JSHTMLTableElementConstructor(structure, globalObject);
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

JSC::EncodedJSValue JSC_HOST_CALL jsHTMLTableElementPrototypeFunctionCreateTHead(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsHTMLTableElementPrototypeFunctionDeleteTHead(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsHTMLTableElementPrototypeFunctionCreateTFoot(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsHTMLTableElementPrototypeFunctionDeleteTFoot(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsHTMLTableElementPrototypeFunctionCreateTBody(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsHTMLTableElementPrototypeFunctionCreateCaption(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsHTMLTableElementPrototypeFunctionDeleteCaption(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsHTMLTableElementPrototypeFunctionInsertRow(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsHTMLTableElementPrototypeFunctionDeleteRow(JSC::ExecState*);
// Attributes

JSC::JSValue jsHTMLTableElementCaption(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
void setJSHTMLTableElementCaption(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsHTMLTableElementTHead(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
void setJSHTMLTableElementTHead(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsHTMLTableElementTFoot(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
void setJSHTMLTableElementTFoot(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsHTMLTableElementRows(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsHTMLTableElementTBodies(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsHTMLTableElementAlign(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
void setJSHTMLTableElementAlign(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsHTMLTableElementBgColor(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
void setJSHTMLTableElementBgColor(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsHTMLTableElementBorder(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
void setJSHTMLTableElementBorder(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsHTMLTableElementCellPadding(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
void setJSHTMLTableElementCellPadding(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsHTMLTableElementCellSpacing(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
void setJSHTMLTableElementCellSpacing(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsHTMLTableElementFrame(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
void setJSHTMLTableElementFrame(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsHTMLTableElementRules(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
void setJSHTMLTableElementRules(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsHTMLTableElementSummary(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
void setJSHTMLTableElementSummary(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsHTMLTableElementWidth(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
void setJSHTMLTableElementWidth(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsHTMLTableElementConstructor(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);

} // namespace WebCore

#endif

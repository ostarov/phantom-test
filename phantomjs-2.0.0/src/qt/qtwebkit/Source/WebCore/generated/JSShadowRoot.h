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

#ifndef JSShadowRoot_h
#define JSShadowRoot_h

#if ENABLE(SHADOW_DOM)

#include "JSDOMBinding.h"
#include "JSDocumentFragment.h"
#include "ShadowRoot.h"
#include <runtime/JSObject.h>

namespace WebCore {

class JSShadowRoot : public JSDocumentFragment {
public:
    typedef JSDocumentFragment Base;
    static JSShadowRoot* create(JSC::Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<ShadowRoot> impl)
    {
        JSShadowRoot* ptr = new (NotNull, JSC::allocateCell<JSShadowRoot>(globalObject->vm().heap)) JSShadowRoot(structure, globalObject, impl);
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
    JSShadowRoot(JSC::Structure*, JSDOMGlobalObject*, PassRefPtr<ShadowRoot>);
    void finishCreation(JSC::VM&);
    static const unsigned StructureFlags = JSC::OverridesGetOwnPropertySlot | JSC::InterceptsGetOwnPropertySlotByIndexEvenWhenLengthIsNotZero | Base::StructureFlags;
};

JSC::JSValue toJS(JSC::ExecState*, JSDOMGlobalObject*, ShadowRoot*);

class JSShadowRootPrototype : public JSC::JSNonFinalObject {
public:
    typedef JSC::JSNonFinalObject Base;
    static JSC::JSObject* self(JSC::ExecState*, JSC::JSGlobalObject*);
    static JSShadowRootPrototype* create(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::Structure* structure)
    {
        JSShadowRootPrototype* ptr = new (NotNull, JSC::allocateCell<JSShadowRootPrototype>(vm.heap)) JSShadowRootPrototype(vm, globalObject, structure);
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
    JSShadowRootPrototype(JSC::VM& vm, JSC::JSGlobalObject*, JSC::Structure* structure) : JSC::JSNonFinalObject(vm, structure) { }
protected:
    static const unsigned StructureFlags = JSC::OverridesGetOwnPropertySlot | Base::StructureFlags;
};

class JSShadowRootConstructor : public DOMConstructorObject {
private:
    JSShadowRootConstructor(JSC::Structure*, JSDOMGlobalObject*);
    void finishCreation(JSC::ExecState*, JSDOMGlobalObject*);

public:
    typedef DOMConstructorObject Base;
    static JSShadowRootConstructor* create(JSC::ExecState* exec, JSC::Structure* structure, JSDOMGlobalObject* globalObject)
    {
        JSShadowRootConstructor* ptr = new (NotNull, JSC::allocateCell<JSShadowRootConstructor>(*exec->heap())) JSShadowRootConstructor(structure, globalObject);
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

JSC::EncodedJSValue JSC_HOST_CALL jsShadowRootPrototypeFunctionCloneNode(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsShadowRootPrototypeFunctionGetSelection(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsShadowRootPrototypeFunctionGetElementById(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsShadowRootPrototypeFunctionGetElementsByClassName(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsShadowRootPrototypeFunctionGetElementsByTagName(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsShadowRootPrototypeFunctionGetElementsByTagNameNS(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsShadowRootPrototypeFunctionElementFromPoint(JSC::ExecState*);
// Attributes

JSC::JSValue jsShadowRootActiveElement(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsShadowRootApplyAuthorStyles(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
void setJSShadowRootApplyAuthorStyles(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsShadowRootResetStyleInheritance(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
void setJSShadowRootResetStyleInheritance(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsShadowRootInnerHTML(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
void setJSShadowRootInnerHTML(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsShadowRootConstructor(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);

} // namespace WebCore

#endif // ENABLE(SHADOW_DOM)

#endif

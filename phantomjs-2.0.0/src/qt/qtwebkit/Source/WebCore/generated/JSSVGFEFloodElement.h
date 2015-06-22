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

#ifndef JSSVGFEFloodElement_h
#define JSSVGFEFloodElement_h

#if ENABLE(FILTERS) && ENABLE(SVG)

#include "JSDOMBinding.h"
#include "JSSVGStyledElement.h"
#include "SVGElement.h"
#include "SVGFEFloodElement.h"
#include <runtime/JSObject.h>

namespace WebCore {

class JSSVGFEFloodElement : public JSSVGStyledElement {
public:
    typedef JSSVGStyledElement Base;
    static JSSVGFEFloodElement* create(JSC::Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<SVGFEFloodElement> impl)
    {
        JSSVGFEFloodElement* ptr = new (NotNull, JSC::allocateCell<JSSVGFEFloodElement>(globalObject->vm().heap)) JSSVGFEFloodElement(structure, globalObject, impl);
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
    JSSVGFEFloodElement(JSC::Structure*, JSDOMGlobalObject*, PassRefPtr<SVGFEFloodElement>);
    void finishCreation(JSC::VM&);
    static const unsigned StructureFlags = JSC::OverridesGetOwnPropertySlot | JSC::InterceptsGetOwnPropertySlotByIndexEvenWhenLengthIsNotZero | Base::StructureFlags;
};


class JSSVGFEFloodElementPrototype : public JSC::JSNonFinalObject {
public:
    typedef JSC::JSNonFinalObject Base;
    static JSC::JSObject* self(JSC::ExecState*, JSC::JSGlobalObject*);
    static JSSVGFEFloodElementPrototype* create(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::Structure* structure)
    {
        JSSVGFEFloodElementPrototype* ptr = new (NotNull, JSC::allocateCell<JSSVGFEFloodElementPrototype>(vm.heap)) JSSVGFEFloodElementPrototype(vm, globalObject, structure);
        ptr->finishCreation(vm);
        return ptr;
    }

    static const JSC::ClassInfo s_info;
    static JSC::Structure* createStructure(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(vm, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), &s_info);
    }

private:
    JSSVGFEFloodElementPrototype(JSC::VM& vm, JSC::JSGlobalObject*, JSC::Structure* structure) : JSC::JSNonFinalObject(vm, structure) { }
protected:
    static const unsigned StructureFlags = Base::StructureFlags;
};

class JSSVGFEFloodElementConstructor : public DOMConstructorObject {
private:
    JSSVGFEFloodElementConstructor(JSC::Structure*, JSDOMGlobalObject*);
    void finishCreation(JSC::ExecState*, JSDOMGlobalObject*);

public:
    typedef DOMConstructorObject Base;
    static JSSVGFEFloodElementConstructor* create(JSC::ExecState* exec, JSC::Structure* structure, JSDOMGlobalObject* globalObject)
    {
        JSSVGFEFloodElementConstructor* ptr = new (NotNull, JSC::allocateCell<JSSVGFEFloodElementConstructor>(*exec->heap())) JSSVGFEFloodElementConstructor(structure, globalObject);
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

// Attributes

#if ENABLE(SVG)
JSC::JSValue jsSVGFEFloodElementX(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
#endif
#if ENABLE(SVG)
JSC::JSValue jsSVGFEFloodElementY(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
#endif
#if ENABLE(SVG)
JSC::JSValue jsSVGFEFloodElementWidth(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
#endif
#if ENABLE(SVG)
JSC::JSValue jsSVGFEFloodElementHeight(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
#endif
#if ENABLE(SVG)
JSC::JSValue jsSVGFEFloodElementResult(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
#endif
JSC::JSValue jsSVGFEFloodElementConstructor(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);

} // namespace WebCore

#endif // ENABLE(FILTERS) && ENABLE(SVG)

#endif

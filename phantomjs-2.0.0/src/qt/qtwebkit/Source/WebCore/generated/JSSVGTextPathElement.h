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

#ifndef JSSVGTextPathElement_h
#define JSSVGTextPathElement_h

#if ENABLE(SVG)

#include "JSDOMBinding.h"
#include "JSSVGTextContentElement.h"
#include "SVGElement.h"
#include "SVGTextPathElement.h"
#include <runtime/JSObject.h>

namespace WebCore {

class JSSVGTextPathElement : public JSSVGTextContentElement {
public:
    typedef JSSVGTextContentElement Base;
    static JSSVGTextPathElement* create(JSC::Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<SVGTextPathElement> impl)
    {
        JSSVGTextPathElement* ptr = new (NotNull, JSC::allocateCell<JSSVGTextPathElement>(globalObject->vm().heap)) JSSVGTextPathElement(structure, globalObject, impl);
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
    JSSVGTextPathElement(JSC::Structure*, JSDOMGlobalObject*, PassRefPtr<SVGTextPathElement>);
    void finishCreation(JSC::VM&);
    static const unsigned StructureFlags = JSC::OverridesGetOwnPropertySlot | JSC::InterceptsGetOwnPropertySlotByIndexEvenWhenLengthIsNotZero | Base::StructureFlags;
};


class JSSVGTextPathElementPrototype : public JSC::JSNonFinalObject {
public:
    typedef JSC::JSNonFinalObject Base;
    static JSC::JSObject* self(JSC::ExecState*, JSC::JSGlobalObject*);
    static JSSVGTextPathElementPrototype* create(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::Structure* structure)
    {
        JSSVGTextPathElementPrototype* ptr = new (NotNull, JSC::allocateCell<JSSVGTextPathElementPrototype>(vm.heap)) JSSVGTextPathElementPrototype(vm, globalObject, structure);
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
    JSSVGTextPathElementPrototype(JSC::VM& vm, JSC::JSGlobalObject*, JSC::Structure* structure) : JSC::JSNonFinalObject(vm, structure) { }
protected:
    static const unsigned StructureFlags = JSC::OverridesGetOwnPropertySlot | Base::StructureFlags;
};

class JSSVGTextPathElementConstructor : public DOMConstructorObject {
private:
    JSSVGTextPathElementConstructor(JSC::Structure*, JSDOMGlobalObject*);
    void finishCreation(JSC::ExecState*, JSDOMGlobalObject*);

public:
    typedef DOMConstructorObject Base;
    static JSSVGTextPathElementConstructor* create(JSC::ExecState* exec, JSC::Structure* structure, JSDOMGlobalObject* globalObject)
    {
        JSSVGTextPathElementConstructor* ptr = new (NotNull, JSC::allocateCell<JSSVGTextPathElementConstructor>(*exec->heap())) JSSVGTextPathElementConstructor(structure, globalObject);
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

JSC::JSValue jsSVGTextPathElementStartOffset(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsSVGTextPathElementMethod(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsSVGTextPathElementSpacing(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
#if ENABLE(SVG)
JSC::JSValue jsSVGTextPathElementHref(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
#endif
JSC::JSValue jsSVGTextPathElementConstructor(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
// Constants

JSC::JSValue jsSVGTextPathElementTEXTPATH_METHODTYPE_UNKNOWN(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsSVGTextPathElementTEXTPATH_METHODTYPE_ALIGN(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsSVGTextPathElementTEXTPATH_METHODTYPE_STRETCH(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsSVGTextPathElementTEXTPATH_SPACINGTYPE_UNKNOWN(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsSVGTextPathElementTEXTPATH_SPACINGTYPE_AUTO(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsSVGTextPathElementTEXTPATH_SPACINGTYPE_EXACT(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);

} // namespace WebCore

#endif // ENABLE(SVG)

#endif

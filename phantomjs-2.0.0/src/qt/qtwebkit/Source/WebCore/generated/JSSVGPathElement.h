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

#ifndef JSSVGPathElement_h
#define JSSVGPathElement_h

#if ENABLE(SVG)

#include "JSDOMBinding.h"
#include "JSSVGGraphicsElement.h"
#include "SVGElement.h"
#include "SVGPathElement.h"
#include <runtime/JSObject.h>

namespace WebCore {

class JSSVGPathElement : public JSSVGGraphicsElement {
public:
    typedef JSSVGGraphicsElement Base;
    static JSSVGPathElement* create(JSC::Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<SVGPathElement> impl)
    {
        JSSVGPathElement* ptr = new (NotNull, JSC::allocateCell<JSSVGPathElement>(globalObject->vm().heap)) JSSVGPathElement(structure, globalObject, impl);
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
    JSSVGPathElement(JSC::Structure*, JSDOMGlobalObject*, PassRefPtr<SVGPathElement>);
    void finishCreation(JSC::VM&);
    static const unsigned StructureFlags = JSC::OverridesGetOwnPropertySlot | JSC::InterceptsGetOwnPropertySlotByIndexEvenWhenLengthIsNotZero | Base::StructureFlags;
};


class JSSVGPathElementPrototype : public JSC::JSNonFinalObject {
public:
    typedef JSC::JSNonFinalObject Base;
    static JSC::JSObject* self(JSC::ExecState*, JSC::JSGlobalObject*);
    static JSSVGPathElementPrototype* create(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::Structure* structure)
    {
        JSSVGPathElementPrototype* ptr = new (NotNull, JSC::allocateCell<JSSVGPathElementPrototype>(vm.heap)) JSSVGPathElementPrototype(vm, globalObject, structure);
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
    JSSVGPathElementPrototype(JSC::VM& vm, JSC::JSGlobalObject*, JSC::Structure* structure) : JSC::JSNonFinalObject(vm, structure) { }
protected:
    static const unsigned StructureFlags = JSC::OverridesGetOwnPropertySlot | Base::StructureFlags;
};

class JSSVGPathElementConstructor : public DOMConstructorObject {
private:
    JSSVGPathElementConstructor(JSC::Structure*, JSDOMGlobalObject*);
    void finishCreation(JSC::ExecState*, JSDOMGlobalObject*);

public:
    typedef DOMConstructorObject Base;
    static JSSVGPathElementConstructor* create(JSC::ExecState* exec, JSC::Structure* structure, JSDOMGlobalObject* globalObject)
    {
        JSSVGPathElementConstructor* ptr = new (NotNull, JSC::allocateCell<JSSVGPathElementConstructor>(*exec->heap())) JSSVGPathElementConstructor(structure, globalObject);
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

JSC::EncodedJSValue JSC_HOST_CALL jsSVGPathElementPrototypeFunctionGetTotalLength(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsSVGPathElementPrototypeFunctionGetPointAtLength(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsSVGPathElementPrototypeFunctionGetPathSegAtLength(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsSVGPathElementPrototypeFunctionCreateSVGPathSegClosePath(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsSVGPathElementPrototypeFunctionCreateSVGPathSegMovetoAbs(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsSVGPathElementPrototypeFunctionCreateSVGPathSegMovetoRel(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsSVGPathElementPrototypeFunctionCreateSVGPathSegLinetoAbs(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsSVGPathElementPrototypeFunctionCreateSVGPathSegLinetoRel(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsSVGPathElementPrototypeFunctionCreateSVGPathSegCurvetoCubicAbs(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsSVGPathElementPrototypeFunctionCreateSVGPathSegCurvetoCubicRel(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsSVGPathElementPrototypeFunctionCreateSVGPathSegCurvetoQuadraticAbs(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsSVGPathElementPrototypeFunctionCreateSVGPathSegCurvetoQuadraticRel(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsSVGPathElementPrototypeFunctionCreateSVGPathSegArcAbs(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsSVGPathElementPrototypeFunctionCreateSVGPathSegArcRel(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsSVGPathElementPrototypeFunctionCreateSVGPathSegLinetoHorizontalAbs(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsSVGPathElementPrototypeFunctionCreateSVGPathSegLinetoHorizontalRel(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsSVGPathElementPrototypeFunctionCreateSVGPathSegLinetoVerticalAbs(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsSVGPathElementPrototypeFunctionCreateSVGPathSegLinetoVerticalRel(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsSVGPathElementPrototypeFunctionCreateSVGPathSegCurvetoCubicSmoothAbs(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsSVGPathElementPrototypeFunctionCreateSVGPathSegCurvetoCubicSmoothRel(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsSVGPathElementPrototypeFunctionCreateSVGPathSegCurvetoQuadraticSmoothAbs(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsSVGPathElementPrototypeFunctionCreateSVGPathSegCurvetoQuadraticSmoothRel(JSC::ExecState*);
// Attributes

JSC::JSValue jsSVGPathElementPathLength(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsSVGPathElementPathSegList(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsSVGPathElementNormalizedPathSegList(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsSVGPathElementAnimatedPathSegList(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsSVGPathElementAnimatedNormalizedPathSegList(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
#if ENABLE(SVG)
JSC::JSValue jsSVGPathElementExternalResourcesRequired(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
#endif
JSC::JSValue jsSVGPathElementConstructor(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);

} // namespace WebCore

#endif // ENABLE(SVG)

#endif

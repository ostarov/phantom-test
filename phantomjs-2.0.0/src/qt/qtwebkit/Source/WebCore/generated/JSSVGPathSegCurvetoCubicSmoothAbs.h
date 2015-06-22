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

#ifndef JSSVGPathSegCurvetoCubicSmoothAbs_h
#define JSSVGPathSegCurvetoCubicSmoothAbs_h

#if ENABLE(SVG)

#include "JSDOMBinding.h"
#include "JSSVGPathSeg.h"
#include "SVGElement.h"
#include "SVGPathSegCurvetoCubicSmoothAbs.h"
#include <runtime/JSObject.h>

namespace WebCore {

class JSSVGPathSegCurvetoCubicSmoothAbs : public JSSVGPathSeg {
public:
    typedef JSSVGPathSeg Base;
    static JSSVGPathSegCurvetoCubicSmoothAbs* create(JSC::Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<SVGPathSegCurvetoCubicSmoothAbs> impl)
    {
        JSSVGPathSegCurvetoCubicSmoothAbs* ptr = new (NotNull, JSC::allocateCell<JSSVGPathSegCurvetoCubicSmoothAbs>(globalObject->vm().heap)) JSSVGPathSegCurvetoCubicSmoothAbs(structure, globalObject, impl);
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
    JSSVGPathSegCurvetoCubicSmoothAbs(JSC::Structure*, JSDOMGlobalObject*, PassRefPtr<SVGPathSegCurvetoCubicSmoothAbs>);
    void finishCreation(JSC::VM&);
    static const unsigned StructureFlags = JSC::OverridesGetOwnPropertySlot | JSC::InterceptsGetOwnPropertySlotByIndexEvenWhenLengthIsNotZero | Base::StructureFlags;
};


class JSSVGPathSegCurvetoCubicSmoothAbsPrototype : public JSC::JSNonFinalObject {
public:
    typedef JSC::JSNonFinalObject Base;
    static JSC::JSObject* self(JSC::ExecState*, JSC::JSGlobalObject*);
    static JSSVGPathSegCurvetoCubicSmoothAbsPrototype* create(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::Structure* structure)
    {
        JSSVGPathSegCurvetoCubicSmoothAbsPrototype* ptr = new (NotNull, JSC::allocateCell<JSSVGPathSegCurvetoCubicSmoothAbsPrototype>(vm.heap)) JSSVGPathSegCurvetoCubicSmoothAbsPrototype(vm, globalObject, structure);
        ptr->finishCreation(vm);
        return ptr;
    }

    static const JSC::ClassInfo s_info;
    static JSC::Structure* createStructure(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(vm, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), &s_info);
    }

private:
    JSSVGPathSegCurvetoCubicSmoothAbsPrototype(JSC::VM& vm, JSC::JSGlobalObject*, JSC::Structure* structure) : JSC::JSNonFinalObject(vm, structure) { }
protected:
    static const unsigned StructureFlags = Base::StructureFlags;
};

class JSSVGPathSegCurvetoCubicSmoothAbsConstructor : public DOMConstructorObject {
private:
    JSSVGPathSegCurvetoCubicSmoothAbsConstructor(JSC::Structure*, JSDOMGlobalObject*);
    void finishCreation(JSC::ExecState*, JSDOMGlobalObject*);

public:
    typedef DOMConstructorObject Base;
    static JSSVGPathSegCurvetoCubicSmoothAbsConstructor* create(JSC::ExecState* exec, JSC::Structure* structure, JSDOMGlobalObject* globalObject)
    {
        JSSVGPathSegCurvetoCubicSmoothAbsConstructor* ptr = new (NotNull, JSC::allocateCell<JSSVGPathSegCurvetoCubicSmoothAbsConstructor>(*exec->heap())) JSSVGPathSegCurvetoCubicSmoothAbsConstructor(structure, globalObject);
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

JSC::JSValue jsSVGPathSegCurvetoCubicSmoothAbsX(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
void setJSSVGPathSegCurvetoCubicSmoothAbsX(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsSVGPathSegCurvetoCubicSmoothAbsY(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
void setJSSVGPathSegCurvetoCubicSmoothAbsY(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsSVGPathSegCurvetoCubicSmoothAbsX2(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
void setJSSVGPathSegCurvetoCubicSmoothAbsX2(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsSVGPathSegCurvetoCubicSmoothAbsY2(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
void setJSSVGPathSegCurvetoCubicSmoothAbsY2(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsSVGPathSegCurvetoCubicSmoothAbsConstructor(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);

} // namespace WebCore

#endif // ENABLE(SVG)

#endif
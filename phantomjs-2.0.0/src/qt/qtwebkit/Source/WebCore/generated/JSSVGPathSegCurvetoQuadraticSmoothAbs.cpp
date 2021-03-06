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

#include "config.h"

#if ENABLE(SVG)

#include "JSSVGPathSegCurvetoQuadraticSmoothAbs.h"

#include "SVGPathSegCurvetoQuadraticSmoothAbs.h"
#include <runtime/Error.h>
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

/* Hash table */

static const HashTableValue JSSVGPathSegCurvetoQuadraticSmoothAbsTableValues[] =
{
    { "x", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGPathSegCurvetoQuadraticSmoothAbsX), (intptr_t)setJSSVGPathSegCurvetoQuadraticSmoothAbsX, NoIntrinsic },
    { "y", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGPathSegCurvetoQuadraticSmoothAbsY), (intptr_t)setJSSVGPathSegCurvetoQuadraticSmoothAbsY, NoIntrinsic },
    { "constructor", DontEnum | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGPathSegCurvetoQuadraticSmoothAbsConstructor), (intptr_t)0, NoIntrinsic },
    { 0, 0, 0, 0, NoIntrinsic }
};

static const HashTable JSSVGPathSegCurvetoQuadraticSmoothAbsTable = { 9, 7, JSSVGPathSegCurvetoQuadraticSmoothAbsTableValues, 0 };
/* Hash table for constructor */

static const HashTableValue JSSVGPathSegCurvetoQuadraticSmoothAbsConstructorTableValues[] =
{
    { 0, 0, 0, 0, NoIntrinsic }
};

static const HashTable JSSVGPathSegCurvetoQuadraticSmoothAbsConstructorTable = { 1, 0, JSSVGPathSegCurvetoQuadraticSmoothAbsConstructorTableValues, 0 };
const ClassInfo JSSVGPathSegCurvetoQuadraticSmoothAbsConstructor::s_info = { "SVGPathSegCurvetoQuadraticSmoothAbsConstructor", &Base::s_info, &JSSVGPathSegCurvetoQuadraticSmoothAbsConstructorTable, 0, CREATE_METHOD_TABLE(JSSVGPathSegCurvetoQuadraticSmoothAbsConstructor) };

JSSVGPathSegCurvetoQuadraticSmoothAbsConstructor::JSSVGPathSegCurvetoQuadraticSmoothAbsConstructor(Structure* structure, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(structure, globalObject)
{
}

void JSSVGPathSegCurvetoQuadraticSmoothAbsConstructor::finishCreation(ExecState* exec, JSDOMGlobalObject* globalObject)
{
    Base::finishCreation(exec->vm());
    ASSERT(inherits(&s_info));
    putDirect(exec->vm(), exec->propertyNames().prototype, JSSVGPathSegCurvetoQuadraticSmoothAbsPrototype::self(exec, globalObject), DontDelete | ReadOnly);
    putDirect(exec->vm(), exec->propertyNames().length, jsNumber(0), ReadOnly | DontDelete | DontEnum);
}

bool JSSVGPathSegCurvetoQuadraticSmoothAbsConstructor::getOwnPropertySlot(JSCell* cell, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSSVGPathSegCurvetoQuadraticSmoothAbsConstructor, JSDOMWrapper>(exec, &JSSVGPathSegCurvetoQuadraticSmoothAbsConstructorTable, jsCast<JSSVGPathSegCurvetoQuadraticSmoothAbsConstructor*>(cell), propertyName, slot);
}

bool JSSVGPathSegCurvetoQuadraticSmoothAbsConstructor::getOwnPropertyDescriptor(JSObject* object, ExecState* exec, PropertyName propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSSVGPathSegCurvetoQuadraticSmoothAbsConstructor, JSDOMWrapper>(exec, &JSSVGPathSegCurvetoQuadraticSmoothAbsConstructorTable, jsCast<JSSVGPathSegCurvetoQuadraticSmoothAbsConstructor*>(object), propertyName, descriptor);
}

/* Hash table for prototype */

static const HashTableValue JSSVGPathSegCurvetoQuadraticSmoothAbsPrototypeTableValues[] =
{
    { 0, 0, 0, 0, NoIntrinsic }
};

static const HashTable JSSVGPathSegCurvetoQuadraticSmoothAbsPrototypeTable = { 1, 0, JSSVGPathSegCurvetoQuadraticSmoothAbsPrototypeTableValues, 0 };
const ClassInfo JSSVGPathSegCurvetoQuadraticSmoothAbsPrototype::s_info = { "SVGPathSegCurvetoQuadraticSmoothAbsPrototype", &Base::s_info, &JSSVGPathSegCurvetoQuadraticSmoothAbsPrototypeTable, 0, CREATE_METHOD_TABLE(JSSVGPathSegCurvetoQuadraticSmoothAbsPrototype) };

JSObject* JSSVGPathSegCurvetoQuadraticSmoothAbsPrototype::self(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSSVGPathSegCurvetoQuadraticSmoothAbs>(exec, globalObject);
}

const ClassInfo JSSVGPathSegCurvetoQuadraticSmoothAbs::s_info = { "SVGPathSegCurvetoQuadraticSmoothAbs", &Base::s_info, &JSSVGPathSegCurvetoQuadraticSmoothAbsTable, 0 , CREATE_METHOD_TABLE(JSSVGPathSegCurvetoQuadraticSmoothAbs) };

JSSVGPathSegCurvetoQuadraticSmoothAbs::JSSVGPathSegCurvetoQuadraticSmoothAbs(Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<SVGPathSegCurvetoQuadraticSmoothAbs> impl)
    : JSSVGPathSeg(structure, globalObject, impl)
{
}

void JSSVGPathSegCurvetoQuadraticSmoothAbs::finishCreation(VM& vm)
{
    Base::finishCreation(vm);
    ASSERT(inherits(&s_info));
}

JSObject* JSSVGPathSegCurvetoQuadraticSmoothAbs::createPrototype(ExecState* exec, JSGlobalObject* globalObject)
{
    return JSSVGPathSegCurvetoQuadraticSmoothAbsPrototype::create(exec->vm(), globalObject, JSSVGPathSegCurvetoQuadraticSmoothAbsPrototype::createStructure(exec->vm(), globalObject, JSSVGPathSegPrototype::self(exec, globalObject)));
}

bool JSSVGPathSegCurvetoQuadraticSmoothAbs::getOwnPropertySlot(JSCell* cell, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    JSSVGPathSegCurvetoQuadraticSmoothAbs* thisObject = jsCast<JSSVGPathSegCurvetoQuadraticSmoothAbs*>(cell);
    ASSERT_GC_OBJECT_INHERITS(thisObject, &s_info);
    return getStaticValueSlot<JSSVGPathSegCurvetoQuadraticSmoothAbs, Base>(exec, &JSSVGPathSegCurvetoQuadraticSmoothAbsTable, thisObject, propertyName, slot);
}

bool JSSVGPathSegCurvetoQuadraticSmoothAbs::getOwnPropertyDescriptor(JSObject* object, ExecState* exec, PropertyName propertyName, PropertyDescriptor& descriptor)
{
    JSSVGPathSegCurvetoQuadraticSmoothAbs* thisObject = jsCast<JSSVGPathSegCurvetoQuadraticSmoothAbs*>(object);
    ASSERT_GC_OBJECT_INHERITS(thisObject, &s_info);
    return getStaticValueDescriptor<JSSVGPathSegCurvetoQuadraticSmoothAbs, Base>(exec, &JSSVGPathSegCurvetoQuadraticSmoothAbsTable, thisObject, propertyName, descriptor);
}

JSValue jsSVGPathSegCurvetoQuadraticSmoothAbsX(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSSVGPathSegCurvetoQuadraticSmoothAbs* castedThis = jsCast<JSSVGPathSegCurvetoQuadraticSmoothAbs*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGPathSegCurvetoQuadraticSmoothAbs* impl = static_cast<SVGPathSegCurvetoQuadraticSmoothAbs*>(castedThis->impl());
    JSValue result = jsNumber(impl->x());
    return result;
}


JSValue jsSVGPathSegCurvetoQuadraticSmoothAbsY(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSSVGPathSegCurvetoQuadraticSmoothAbs* castedThis = jsCast<JSSVGPathSegCurvetoQuadraticSmoothAbs*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGPathSegCurvetoQuadraticSmoothAbs* impl = static_cast<SVGPathSegCurvetoQuadraticSmoothAbs*>(castedThis->impl());
    JSValue result = jsNumber(impl->y());
    return result;
}


JSValue jsSVGPathSegCurvetoQuadraticSmoothAbsConstructor(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSSVGPathSegCurvetoQuadraticSmoothAbs* domObject = jsCast<JSSVGPathSegCurvetoQuadraticSmoothAbs*>(asObject(slotBase));
    return JSSVGPathSegCurvetoQuadraticSmoothAbs::getConstructor(exec, domObject->globalObject());
}

void JSSVGPathSegCurvetoQuadraticSmoothAbs::put(JSCell* cell, ExecState* exec, PropertyName propertyName, JSValue value, PutPropertySlot& slot)
{
    JSSVGPathSegCurvetoQuadraticSmoothAbs* thisObject = jsCast<JSSVGPathSegCurvetoQuadraticSmoothAbs*>(cell);
    ASSERT_GC_OBJECT_INHERITS(thisObject, &s_info);
    lookupPut<JSSVGPathSegCurvetoQuadraticSmoothAbs, Base>(exec, propertyName, value, &JSSVGPathSegCurvetoQuadraticSmoothAbsTable, thisObject, slot);
}

void setJSSVGPathSegCurvetoQuadraticSmoothAbsX(ExecState* exec, JSObject* thisObject, JSValue value)
{
    UNUSED_PARAM(exec);
    JSSVGPathSegCurvetoQuadraticSmoothAbs* castedThis = jsCast<JSSVGPathSegCurvetoQuadraticSmoothAbs*>(thisObject);
    SVGPathSegCurvetoQuadraticSmoothAbs* impl = static_cast<SVGPathSegCurvetoQuadraticSmoothAbs*>(castedThis->impl());
    float nativeValue(value.toFloat(exec));
    if (exec->hadException())
        return;
    impl->setX(nativeValue);
}


void setJSSVGPathSegCurvetoQuadraticSmoothAbsY(ExecState* exec, JSObject* thisObject, JSValue value)
{
    UNUSED_PARAM(exec);
    JSSVGPathSegCurvetoQuadraticSmoothAbs* castedThis = jsCast<JSSVGPathSegCurvetoQuadraticSmoothAbs*>(thisObject);
    SVGPathSegCurvetoQuadraticSmoothAbs* impl = static_cast<SVGPathSegCurvetoQuadraticSmoothAbs*>(castedThis->impl());
    float nativeValue(value.toFloat(exec));
    if (exec->hadException())
        return;
    impl->setY(nativeValue);
}


JSValue JSSVGPathSegCurvetoQuadraticSmoothAbs::getConstructor(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSSVGPathSegCurvetoQuadraticSmoothAbsConstructor>(exec, jsCast<JSDOMGlobalObject*>(globalObject));
}


}

#endif // ENABLE(SVG)

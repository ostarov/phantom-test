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

#include "JSSVGPathSegCurvetoQuadraticRel.h"

#include "SVGPathSegCurvetoQuadraticRel.h"
#include <runtime/Error.h>
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

/* Hash table */

static const HashTableValue JSSVGPathSegCurvetoQuadraticRelTableValues[] =
{
    { "x", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGPathSegCurvetoQuadraticRelX), (intptr_t)setJSSVGPathSegCurvetoQuadraticRelX, NoIntrinsic },
    { "y", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGPathSegCurvetoQuadraticRelY), (intptr_t)setJSSVGPathSegCurvetoQuadraticRelY, NoIntrinsic },
    { "x1", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGPathSegCurvetoQuadraticRelX1), (intptr_t)setJSSVGPathSegCurvetoQuadraticRelX1, NoIntrinsic },
    { "y1", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGPathSegCurvetoQuadraticRelY1), (intptr_t)setJSSVGPathSegCurvetoQuadraticRelY1, NoIntrinsic },
    { "constructor", DontEnum | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGPathSegCurvetoQuadraticRelConstructor), (intptr_t)0, NoIntrinsic },
    { 0, 0, 0, 0, NoIntrinsic }
};

static const HashTable JSSVGPathSegCurvetoQuadraticRelTable = { 16, 15, JSSVGPathSegCurvetoQuadraticRelTableValues, 0 };
/* Hash table for constructor */

static const HashTableValue JSSVGPathSegCurvetoQuadraticRelConstructorTableValues[] =
{
    { 0, 0, 0, 0, NoIntrinsic }
};

static const HashTable JSSVGPathSegCurvetoQuadraticRelConstructorTable = { 1, 0, JSSVGPathSegCurvetoQuadraticRelConstructorTableValues, 0 };
const ClassInfo JSSVGPathSegCurvetoQuadraticRelConstructor::s_info = { "SVGPathSegCurvetoQuadraticRelConstructor", &Base::s_info, &JSSVGPathSegCurvetoQuadraticRelConstructorTable, 0, CREATE_METHOD_TABLE(JSSVGPathSegCurvetoQuadraticRelConstructor) };

JSSVGPathSegCurvetoQuadraticRelConstructor::JSSVGPathSegCurvetoQuadraticRelConstructor(Structure* structure, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(structure, globalObject)
{
}

void JSSVGPathSegCurvetoQuadraticRelConstructor::finishCreation(ExecState* exec, JSDOMGlobalObject* globalObject)
{
    Base::finishCreation(exec->vm());
    ASSERT(inherits(&s_info));
    putDirect(exec->vm(), exec->propertyNames().prototype, JSSVGPathSegCurvetoQuadraticRelPrototype::self(exec, globalObject), DontDelete | ReadOnly);
    putDirect(exec->vm(), exec->propertyNames().length, jsNumber(0), ReadOnly | DontDelete | DontEnum);
}

bool JSSVGPathSegCurvetoQuadraticRelConstructor::getOwnPropertySlot(JSCell* cell, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSSVGPathSegCurvetoQuadraticRelConstructor, JSDOMWrapper>(exec, &JSSVGPathSegCurvetoQuadraticRelConstructorTable, jsCast<JSSVGPathSegCurvetoQuadraticRelConstructor*>(cell), propertyName, slot);
}

bool JSSVGPathSegCurvetoQuadraticRelConstructor::getOwnPropertyDescriptor(JSObject* object, ExecState* exec, PropertyName propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSSVGPathSegCurvetoQuadraticRelConstructor, JSDOMWrapper>(exec, &JSSVGPathSegCurvetoQuadraticRelConstructorTable, jsCast<JSSVGPathSegCurvetoQuadraticRelConstructor*>(object), propertyName, descriptor);
}

/* Hash table for prototype */

static const HashTableValue JSSVGPathSegCurvetoQuadraticRelPrototypeTableValues[] =
{
    { 0, 0, 0, 0, NoIntrinsic }
};

static const HashTable JSSVGPathSegCurvetoQuadraticRelPrototypeTable = { 1, 0, JSSVGPathSegCurvetoQuadraticRelPrototypeTableValues, 0 };
const ClassInfo JSSVGPathSegCurvetoQuadraticRelPrototype::s_info = { "SVGPathSegCurvetoQuadraticRelPrototype", &Base::s_info, &JSSVGPathSegCurvetoQuadraticRelPrototypeTable, 0, CREATE_METHOD_TABLE(JSSVGPathSegCurvetoQuadraticRelPrototype) };

JSObject* JSSVGPathSegCurvetoQuadraticRelPrototype::self(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSSVGPathSegCurvetoQuadraticRel>(exec, globalObject);
}

const ClassInfo JSSVGPathSegCurvetoQuadraticRel::s_info = { "SVGPathSegCurvetoQuadraticRel", &Base::s_info, &JSSVGPathSegCurvetoQuadraticRelTable, 0 , CREATE_METHOD_TABLE(JSSVGPathSegCurvetoQuadraticRel) };

JSSVGPathSegCurvetoQuadraticRel::JSSVGPathSegCurvetoQuadraticRel(Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<SVGPathSegCurvetoQuadraticRel> impl)
    : JSSVGPathSeg(structure, globalObject, impl)
{
}

void JSSVGPathSegCurvetoQuadraticRel::finishCreation(VM& vm)
{
    Base::finishCreation(vm);
    ASSERT(inherits(&s_info));
}

JSObject* JSSVGPathSegCurvetoQuadraticRel::createPrototype(ExecState* exec, JSGlobalObject* globalObject)
{
    return JSSVGPathSegCurvetoQuadraticRelPrototype::create(exec->vm(), globalObject, JSSVGPathSegCurvetoQuadraticRelPrototype::createStructure(exec->vm(), globalObject, JSSVGPathSegPrototype::self(exec, globalObject)));
}

bool JSSVGPathSegCurvetoQuadraticRel::getOwnPropertySlot(JSCell* cell, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    JSSVGPathSegCurvetoQuadraticRel* thisObject = jsCast<JSSVGPathSegCurvetoQuadraticRel*>(cell);
    ASSERT_GC_OBJECT_INHERITS(thisObject, &s_info);
    return getStaticValueSlot<JSSVGPathSegCurvetoQuadraticRel, Base>(exec, &JSSVGPathSegCurvetoQuadraticRelTable, thisObject, propertyName, slot);
}

bool JSSVGPathSegCurvetoQuadraticRel::getOwnPropertyDescriptor(JSObject* object, ExecState* exec, PropertyName propertyName, PropertyDescriptor& descriptor)
{
    JSSVGPathSegCurvetoQuadraticRel* thisObject = jsCast<JSSVGPathSegCurvetoQuadraticRel*>(object);
    ASSERT_GC_OBJECT_INHERITS(thisObject, &s_info);
    return getStaticValueDescriptor<JSSVGPathSegCurvetoQuadraticRel, Base>(exec, &JSSVGPathSegCurvetoQuadraticRelTable, thisObject, propertyName, descriptor);
}

JSValue jsSVGPathSegCurvetoQuadraticRelX(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSSVGPathSegCurvetoQuadraticRel* castedThis = jsCast<JSSVGPathSegCurvetoQuadraticRel*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGPathSegCurvetoQuadraticRel* impl = static_cast<SVGPathSegCurvetoQuadraticRel*>(castedThis->impl());
    JSValue result = jsNumber(impl->x());
    return result;
}


JSValue jsSVGPathSegCurvetoQuadraticRelY(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSSVGPathSegCurvetoQuadraticRel* castedThis = jsCast<JSSVGPathSegCurvetoQuadraticRel*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGPathSegCurvetoQuadraticRel* impl = static_cast<SVGPathSegCurvetoQuadraticRel*>(castedThis->impl());
    JSValue result = jsNumber(impl->y());
    return result;
}


JSValue jsSVGPathSegCurvetoQuadraticRelX1(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSSVGPathSegCurvetoQuadraticRel* castedThis = jsCast<JSSVGPathSegCurvetoQuadraticRel*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGPathSegCurvetoQuadraticRel* impl = static_cast<SVGPathSegCurvetoQuadraticRel*>(castedThis->impl());
    JSValue result = jsNumber(impl->x1());
    return result;
}


JSValue jsSVGPathSegCurvetoQuadraticRelY1(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSSVGPathSegCurvetoQuadraticRel* castedThis = jsCast<JSSVGPathSegCurvetoQuadraticRel*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGPathSegCurvetoQuadraticRel* impl = static_cast<SVGPathSegCurvetoQuadraticRel*>(castedThis->impl());
    JSValue result = jsNumber(impl->y1());
    return result;
}


JSValue jsSVGPathSegCurvetoQuadraticRelConstructor(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSSVGPathSegCurvetoQuadraticRel* domObject = jsCast<JSSVGPathSegCurvetoQuadraticRel*>(asObject(slotBase));
    return JSSVGPathSegCurvetoQuadraticRel::getConstructor(exec, domObject->globalObject());
}

void JSSVGPathSegCurvetoQuadraticRel::put(JSCell* cell, ExecState* exec, PropertyName propertyName, JSValue value, PutPropertySlot& slot)
{
    JSSVGPathSegCurvetoQuadraticRel* thisObject = jsCast<JSSVGPathSegCurvetoQuadraticRel*>(cell);
    ASSERT_GC_OBJECT_INHERITS(thisObject, &s_info);
    lookupPut<JSSVGPathSegCurvetoQuadraticRel, Base>(exec, propertyName, value, &JSSVGPathSegCurvetoQuadraticRelTable, thisObject, slot);
}

void setJSSVGPathSegCurvetoQuadraticRelX(ExecState* exec, JSObject* thisObject, JSValue value)
{
    UNUSED_PARAM(exec);
    JSSVGPathSegCurvetoQuadraticRel* castedThis = jsCast<JSSVGPathSegCurvetoQuadraticRel*>(thisObject);
    SVGPathSegCurvetoQuadraticRel* impl = static_cast<SVGPathSegCurvetoQuadraticRel*>(castedThis->impl());
    float nativeValue(value.toFloat(exec));
    if (exec->hadException())
        return;
    impl->setX(nativeValue);
}


void setJSSVGPathSegCurvetoQuadraticRelY(ExecState* exec, JSObject* thisObject, JSValue value)
{
    UNUSED_PARAM(exec);
    JSSVGPathSegCurvetoQuadraticRel* castedThis = jsCast<JSSVGPathSegCurvetoQuadraticRel*>(thisObject);
    SVGPathSegCurvetoQuadraticRel* impl = static_cast<SVGPathSegCurvetoQuadraticRel*>(castedThis->impl());
    float nativeValue(value.toFloat(exec));
    if (exec->hadException())
        return;
    impl->setY(nativeValue);
}


void setJSSVGPathSegCurvetoQuadraticRelX1(ExecState* exec, JSObject* thisObject, JSValue value)
{
    UNUSED_PARAM(exec);
    JSSVGPathSegCurvetoQuadraticRel* castedThis = jsCast<JSSVGPathSegCurvetoQuadraticRel*>(thisObject);
    SVGPathSegCurvetoQuadraticRel* impl = static_cast<SVGPathSegCurvetoQuadraticRel*>(castedThis->impl());
    float nativeValue(value.toFloat(exec));
    if (exec->hadException())
        return;
    impl->setX1(nativeValue);
}


void setJSSVGPathSegCurvetoQuadraticRelY1(ExecState* exec, JSObject* thisObject, JSValue value)
{
    UNUSED_PARAM(exec);
    JSSVGPathSegCurvetoQuadraticRel* castedThis = jsCast<JSSVGPathSegCurvetoQuadraticRel*>(thisObject);
    SVGPathSegCurvetoQuadraticRel* impl = static_cast<SVGPathSegCurvetoQuadraticRel*>(castedThis->impl());
    float nativeValue(value.toFloat(exec));
    if (exec->hadException())
        return;
    impl->setY1(nativeValue);
}


JSValue JSSVGPathSegCurvetoQuadraticRel::getConstructor(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSSVGPathSegCurvetoQuadraticRelConstructor>(exec, jsCast<JSDOMGlobalObject*>(globalObject));
}


}

#endif // ENABLE(SVG)

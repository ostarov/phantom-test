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

#include "JSSVGPathSegArcAbs.h"

#include "SVGPathSegArcAbs.h"
#include <runtime/Error.h>
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

/* Hash table */

static const HashTableValue JSSVGPathSegArcAbsTableValues[] =
{
    { "x", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGPathSegArcAbsX), (intptr_t)setJSSVGPathSegArcAbsX, NoIntrinsic },
    { "y", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGPathSegArcAbsY), (intptr_t)setJSSVGPathSegArcAbsY, NoIntrinsic },
    { "r1", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGPathSegArcAbsR1), (intptr_t)setJSSVGPathSegArcAbsR1, NoIntrinsic },
    { "r2", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGPathSegArcAbsR2), (intptr_t)setJSSVGPathSegArcAbsR2, NoIntrinsic },
    { "angle", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGPathSegArcAbsAngle), (intptr_t)setJSSVGPathSegArcAbsAngle, NoIntrinsic },
    { "largeArcFlag", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGPathSegArcAbsLargeArcFlag), (intptr_t)setJSSVGPathSegArcAbsLargeArcFlag, NoIntrinsic },
    { "sweepFlag", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGPathSegArcAbsSweepFlag), (intptr_t)setJSSVGPathSegArcAbsSweepFlag, NoIntrinsic },
    { "constructor", DontEnum | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGPathSegArcAbsConstructor), (intptr_t)0, NoIntrinsic },
    { 0, 0, 0, 0, NoIntrinsic }
};

static const HashTable JSSVGPathSegArcAbsTable = { 17, 15, JSSVGPathSegArcAbsTableValues, 0 };
/* Hash table for constructor */

static const HashTableValue JSSVGPathSegArcAbsConstructorTableValues[] =
{
    { 0, 0, 0, 0, NoIntrinsic }
};

static const HashTable JSSVGPathSegArcAbsConstructorTable = { 1, 0, JSSVGPathSegArcAbsConstructorTableValues, 0 };
const ClassInfo JSSVGPathSegArcAbsConstructor::s_info = { "SVGPathSegArcAbsConstructor", &Base::s_info, &JSSVGPathSegArcAbsConstructorTable, 0, CREATE_METHOD_TABLE(JSSVGPathSegArcAbsConstructor) };

JSSVGPathSegArcAbsConstructor::JSSVGPathSegArcAbsConstructor(Structure* structure, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(structure, globalObject)
{
}

void JSSVGPathSegArcAbsConstructor::finishCreation(ExecState* exec, JSDOMGlobalObject* globalObject)
{
    Base::finishCreation(exec->vm());
    ASSERT(inherits(&s_info));
    putDirect(exec->vm(), exec->propertyNames().prototype, JSSVGPathSegArcAbsPrototype::self(exec, globalObject), DontDelete | ReadOnly);
    putDirect(exec->vm(), exec->propertyNames().length, jsNumber(0), ReadOnly | DontDelete | DontEnum);
}

bool JSSVGPathSegArcAbsConstructor::getOwnPropertySlot(JSCell* cell, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSSVGPathSegArcAbsConstructor, JSDOMWrapper>(exec, &JSSVGPathSegArcAbsConstructorTable, jsCast<JSSVGPathSegArcAbsConstructor*>(cell), propertyName, slot);
}

bool JSSVGPathSegArcAbsConstructor::getOwnPropertyDescriptor(JSObject* object, ExecState* exec, PropertyName propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSSVGPathSegArcAbsConstructor, JSDOMWrapper>(exec, &JSSVGPathSegArcAbsConstructorTable, jsCast<JSSVGPathSegArcAbsConstructor*>(object), propertyName, descriptor);
}

/* Hash table for prototype */

static const HashTableValue JSSVGPathSegArcAbsPrototypeTableValues[] =
{
    { 0, 0, 0, 0, NoIntrinsic }
};

static const HashTable JSSVGPathSegArcAbsPrototypeTable = { 1, 0, JSSVGPathSegArcAbsPrototypeTableValues, 0 };
const ClassInfo JSSVGPathSegArcAbsPrototype::s_info = { "SVGPathSegArcAbsPrototype", &Base::s_info, &JSSVGPathSegArcAbsPrototypeTable, 0, CREATE_METHOD_TABLE(JSSVGPathSegArcAbsPrototype) };

JSObject* JSSVGPathSegArcAbsPrototype::self(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSSVGPathSegArcAbs>(exec, globalObject);
}

const ClassInfo JSSVGPathSegArcAbs::s_info = { "SVGPathSegArcAbs", &Base::s_info, &JSSVGPathSegArcAbsTable, 0 , CREATE_METHOD_TABLE(JSSVGPathSegArcAbs) };

JSSVGPathSegArcAbs::JSSVGPathSegArcAbs(Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<SVGPathSegArcAbs> impl)
    : JSSVGPathSeg(structure, globalObject, impl)
{
}

void JSSVGPathSegArcAbs::finishCreation(VM& vm)
{
    Base::finishCreation(vm);
    ASSERT(inherits(&s_info));
}

JSObject* JSSVGPathSegArcAbs::createPrototype(ExecState* exec, JSGlobalObject* globalObject)
{
    return JSSVGPathSegArcAbsPrototype::create(exec->vm(), globalObject, JSSVGPathSegArcAbsPrototype::createStructure(exec->vm(), globalObject, JSSVGPathSegPrototype::self(exec, globalObject)));
}

bool JSSVGPathSegArcAbs::getOwnPropertySlot(JSCell* cell, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    JSSVGPathSegArcAbs* thisObject = jsCast<JSSVGPathSegArcAbs*>(cell);
    ASSERT_GC_OBJECT_INHERITS(thisObject, &s_info);
    return getStaticValueSlot<JSSVGPathSegArcAbs, Base>(exec, &JSSVGPathSegArcAbsTable, thisObject, propertyName, slot);
}

bool JSSVGPathSegArcAbs::getOwnPropertyDescriptor(JSObject* object, ExecState* exec, PropertyName propertyName, PropertyDescriptor& descriptor)
{
    JSSVGPathSegArcAbs* thisObject = jsCast<JSSVGPathSegArcAbs*>(object);
    ASSERT_GC_OBJECT_INHERITS(thisObject, &s_info);
    return getStaticValueDescriptor<JSSVGPathSegArcAbs, Base>(exec, &JSSVGPathSegArcAbsTable, thisObject, propertyName, descriptor);
}

JSValue jsSVGPathSegArcAbsX(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSSVGPathSegArcAbs* castedThis = jsCast<JSSVGPathSegArcAbs*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGPathSegArcAbs* impl = static_cast<SVGPathSegArcAbs*>(castedThis->impl());
    JSValue result = jsNumber(impl->x());
    return result;
}


JSValue jsSVGPathSegArcAbsY(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSSVGPathSegArcAbs* castedThis = jsCast<JSSVGPathSegArcAbs*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGPathSegArcAbs* impl = static_cast<SVGPathSegArcAbs*>(castedThis->impl());
    JSValue result = jsNumber(impl->y());
    return result;
}


JSValue jsSVGPathSegArcAbsR1(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSSVGPathSegArcAbs* castedThis = jsCast<JSSVGPathSegArcAbs*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGPathSegArcAbs* impl = static_cast<SVGPathSegArcAbs*>(castedThis->impl());
    JSValue result = jsNumber(impl->r1());
    return result;
}


JSValue jsSVGPathSegArcAbsR2(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSSVGPathSegArcAbs* castedThis = jsCast<JSSVGPathSegArcAbs*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGPathSegArcAbs* impl = static_cast<SVGPathSegArcAbs*>(castedThis->impl());
    JSValue result = jsNumber(impl->r2());
    return result;
}


JSValue jsSVGPathSegArcAbsAngle(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSSVGPathSegArcAbs* castedThis = jsCast<JSSVGPathSegArcAbs*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGPathSegArcAbs* impl = static_cast<SVGPathSegArcAbs*>(castedThis->impl());
    JSValue result = jsNumber(impl->angle());
    return result;
}


JSValue jsSVGPathSegArcAbsLargeArcFlag(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSSVGPathSegArcAbs* castedThis = jsCast<JSSVGPathSegArcAbs*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGPathSegArcAbs* impl = static_cast<SVGPathSegArcAbs*>(castedThis->impl());
    JSValue result = jsBoolean(impl->largeArcFlag());
    return result;
}


JSValue jsSVGPathSegArcAbsSweepFlag(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSSVGPathSegArcAbs* castedThis = jsCast<JSSVGPathSegArcAbs*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGPathSegArcAbs* impl = static_cast<SVGPathSegArcAbs*>(castedThis->impl());
    JSValue result = jsBoolean(impl->sweepFlag());
    return result;
}


JSValue jsSVGPathSegArcAbsConstructor(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSSVGPathSegArcAbs* domObject = jsCast<JSSVGPathSegArcAbs*>(asObject(slotBase));
    return JSSVGPathSegArcAbs::getConstructor(exec, domObject->globalObject());
}

void JSSVGPathSegArcAbs::put(JSCell* cell, ExecState* exec, PropertyName propertyName, JSValue value, PutPropertySlot& slot)
{
    JSSVGPathSegArcAbs* thisObject = jsCast<JSSVGPathSegArcAbs*>(cell);
    ASSERT_GC_OBJECT_INHERITS(thisObject, &s_info);
    lookupPut<JSSVGPathSegArcAbs, Base>(exec, propertyName, value, &JSSVGPathSegArcAbsTable, thisObject, slot);
}

void setJSSVGPathSegArcAbsX(ExecState* exec, JSObject* thisObject, JSValue value)
{
    UNUSED_PARAM(exec);
    JSSVGPathSegArcAbs* castedThis = jsCast<JSSVGPathSegArcAbs*>(thisObject);
    SVGPathSegArcAbs* impl = static_cast<SVGPathSegArcAbs*>(castedThis->impl());
    float nativeValue(value.toFloat(exec));
    if (exec->hadException())
        return;
    impl->setX(nativeValue);
}


void setJSSVGPathSegArcAbsY(ExecState* exec, JSObject* thisObject, JSValue value)
{
    UNUSED_PARAM(exec);
    JSSVGPathSegArcAbs* castedThis = jsCast<JSSVGPathSegArcAbs*>(thisObject);
    SVGPathSegArcAbs* impl = static_cast<SVGPathSegArcAbs*>(castedThis->impl());
    float nativeValue(value.toFloat(exec));
    if (exec->hadException())
        return;
    impl->setY(nativeValue);
}


void setJSSVGPathSegArcAbsR1(ExecState* exec, JSObject* thisObject, JSValue value)
{
    UNUSED_PARAM(exec);
    JSSVGPathSegArcAbs* castedThis = jsCast<JSSVGPathSegArcAbs*>(thisObject);
    SVGPathSegArcAbs* impl = static_cast<SVGPathSegArcAbs*>(castedThis->impl());
    float nativeValue(value.toFloat(exec));
    if (exec->hadException())
        return;
    impl->setR1(nativeValue);
}


void setJSSVGPathSegArcAbsR2(ExecState* exec, JSObject* thisObject, JSValue value)
{
    UNUSED_PARAM(exec);
    JSSVGPathSegArcAbs* castedThis = jsCast<JSSVGPathSegArcAbs*>(thisObject);
    SVGPathSegArcAbs* impl = static_cast<SVGPathSegArcAbs*>(castedThis->impl());
    float nativeValue(value.toFloat(exec));
    if (exec->hadException())
        return;
    impl->setR2(nativeValue);
}


void setJSSVGPathSegArcAbsAngle(ExecState* exec, JSObject* thisObject, JSValue value)
{
    UNUSED_PARAM(exec);
    JSSVGPathSegArcAbs* castedThis = jsCast<JSSVGPathSegArcAbs*>(thisObject);
    SVGPathSegArcAbs* impl = static_cast<SVGPathSegArcAbs*>(castedThis->impl());
    float nativeValue(value.toFloat(exec));
    if (exec->hadException())
        return;
    impl->setAngle(nativeValue);
}


void setJSSVGPathSegArcAbsLargeArcFlag(ExecState* exec, JSObject* thisObject, JSValue value)
{
    UNUSED_PARAM(exec);
    JSSVGPathSegArcAbs* castedThis = jsCast<JSSVGPathSegArcAbs*>(thisObject);
    SVGPathSegArcAbs* impl = static_cast<SVGPathSegArcAbs*>(castedThis->impl());
    bool nativeValue(value.toBoolean(exec));
    if (exec->hadException())
        return;
    impl->setLargeArcFlag(nativeValue);
}


void setJSSVGPathSegArcAbsSweepFlag(ExecState* exec, JSObject* thisObject, JSValue value)
{
    UNUSED_PARAM(exec);
    JSSVGPathSegArcAbs* castedThis = jsCast<JSSVGPathSegArcAbs*>(thisObject);
    SVGPathSegArcAbs* impl = static_cast<SVGPathSegArcAbs*>(castedThis->impl());
    bool nativeValue(value.toBoolean(exec));
    if (exec->hadException())
        return;
    impl->setSweepFlag(nativeValue);
}


JSValue JSSVGPathSegArcAbs::getConstructor(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSSVGPathSegArcAbsConstructor>(exec, jsCast<JSDOMGlobalObject*>(globalObject));
}


}

#endif // ENABLE(SVG)

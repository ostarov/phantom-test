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

#include "JSSVGPathSegMovetoRel.h"

#include "SVGPathSegMovetoRel.h"
#include <runtime/Error.h>
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

/* Hash table */

static const HashTableValue JSSVGPathSegMovetoRelTableValues[] =
{
    { "x", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGPathSegMovetoRelX), (intptr_t)setJSSVGPathSegMovetoRelX, NoIntrinsic },
    { "y", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGPathSegMovetoRelY), (intptr_t)setJSSVGPathSegMovetoRelY, NoIntrinsic },
    { "constructor", DontEnum | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGPathSegMovetoRelConstructor), (intptr_t)0, NoIntrinsic },
    { 0, 0, 0, 0, NoIntrinsic }
};

static const HashTable JSSVGPathSegMovetoRelTable = { 9, 7, JSSVGPathSegMovetoRelTableValues, 0 };
/* Hash table for constructor */

static const HashTableValue JSSVGPathSegMovetoRelConstructorTableValues[] =
{
    { 0, 0, 0, 0, NoIntrinsic }
};

static const HashTable JSSVGPathSegMovetoRelConstructorTable = { 1, 0, JSSVGPathSegMovetoRelConstructorTableValues, 0 };
const ClassInfo JSSVGPathSegMovetoRelConstructor::s_info = { "SVGPathSegMovetoRelConstructor", &Base::s_info, &JSSVGPathSegMovetoRelConstructorTable, 0, CREATE_METHOD_TABLE(JSSVGPathSegMovetoRelConstructor) };

JSSVGPathSegMovetoRelConstructor::JSSVGPathSegMovetoRelConstructor(Structure* structure, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(structure, globalObject)
{
}

void JSSVGPathSegMovetoRelConstructor::finishCreation(ExecState* exec, JSDOMGlobalObject* globalObject)
{
    Base::finishCreation(exec->vm());
    ASSERT(inherits(&s_info));
    putDirect(exec->vm(), exec->propertyNames().prototype, JSSVGPathSegMovetoRelPrototype::self(exec, globalObject), DontDelete | ReadOnly);
    putDirect(exec->vm(), exec->propertyNames().length, jsNumber(0), ReadOnly | DontDelete | DontEnum);
}

bool JSSVGPathSegMovetoRelConstructor::getOwnPropertySlot(JSCell* cell, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSSVGPathSegMovetoRelConstructor, JSDOMWrapper>(exec, &JSSVGPathSegMovetoRelConstructorTable, jsCast<JSSVGPathSegMovetoRelConstructor*>(cell), propertyName, slot);
}

bool JSSVGPathSegMovetoRelConstructor::getOwnPropertyDescriptor(JSObject* object, ExecState* exec, PropertyName propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSSVGPathSegMovetoRelConstructor, JSDOMWrapper>(exec, &JSSVGPathSegMovetoRelConstructorTable, jsCast<JSSVGPathSegMovetoRelConstructor*>(object), propertyName, descriptor);
}

/* Hash table for prototype */

static const HashTableValue JSSVGPathSegMovetoRelPrototypeTableValues[] =
{
    { 0, 0, 0, 0, NoIntrinsic }
};

static const HashTable JSSVGPathSegMovetoRelPrototypeTable = { 1, 0, JSSVGPathSegMovetoRelPrototypeTableValues, 0 };
const ClassInfo JSSVGPathSegMovetoRelPrototype::s_info = { "SVGPathSegMovetoRelPrototype", &Base::s_info, &JSSVGPathSegMovetoRelPrototypeTable, 0, CREATE_METHOD_TABLE(JSSVGPathSegMovetoRelPrototype) };

JSObject* JSSVGPathSegMovetoRelPrototype::self(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSSVGPathSegMovetoRel>(exec, globalObject);
}

const ClassInfo JSSVGPathSegMovetoRel::s_info = { "SVGPathSegMovetoRel", &Base::s_info, &JSSVGPathSegMovetoRelTable, 0 , CREATE_METHOD_TABLE(JSSVGPathSegMovetoRel) };

JSSVGPathSegMovetoRel::JSSVGPathSegMovetoRel(Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<SVGPathSegMovetoRel> impl)
    : JSSVGPathSeg(structure, globalObject, impl)
{
}

void JSSVGPathSegMovetoRel::finishCreation(VM& vm)
{
    Base::finishCreation(vm);
    ASSERT(inherits(&s_info));
}

JSObject* JSSVGPathSegMovetoRel::createPrototype(ExecState* exec, JSGlobalObject* globalObject)
{
    return JSSVGPathSegMovetoRelPrototype::create(exec->vm(), globalObject, JSSVGPathSegMovetoRelPrototype::createStructure(exec->vm(), globalObject, JSSVGPathSegPrototype::self(exec, globalObject)));
}

bool JSSVGPathSegMovetoRel::getOwnPropertySlot(JSCell* cell, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    JSSVGPathSegMovetoRel* thisObject = jsCast<JSSVGPathSegMovetoRel*>(cell);
    ASSERT_GC_OBJECT_INHERITS(thisObject, &s_info);
    return getStaticValueSlot<JSSVGPathSegMovetoRel, Base>(exec, &JSSVGPathSegMovetoRelTable, thisObject, propertyName, slot);
}

bool JSSVGPathSegMovetoRel::getOwnPropertyDescriptor(JSObject* object, ExecState* exec, PropertyName propertyName, PropertyDescriptor& descriptor)
{
    JSSVGPathSegMovetoRel* thisObject = jsCast<JSSVGPathSegMovetoRel*>(object);
    ASSERT_GC_OBJECT_INHERITS(thisObject, &s_info);
    return getStaticValueDescriptor<JSSVGPathSegMovetoRel, Base>(exec, &JSSVGPathSegMovetoRelTable, thisObject, propertyName, descriptor);
}

JSValue jsSVGPathSegMovetoRelX(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSSVGPathSegMovetoRel* castedThis = jsCast<JSSVGPathSegMovetoRel*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGPathSegMovetoRel* impl = static_cast<SVGPathSegMovetoRel*>(castedThis->impl());
    JSValue result = jsNumber(impl->x());
    return result;
}


JSValue jsSVGPathSegMovetoRelY(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSSVGPathSegMovetoRel* castedThis = jsCast<JSSVGPathSegMovetoRel*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGPathSegMovetoRel* impl = static_cast<SVGPathSegMovetoRel*>(castedThis->impl());
    JSValue result = jsNumber(impl->y());
    return result;
}


JSValue jsSVGPathSegMovetoRelConstructor(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSSVGPathSegMovetoRel* domObject = jsCast<JSSVGPathSegMovetoRel*>(asObject(slotBase));
    return JSSVGPathSegMovetoRel::getConstructor(exec, domObject->globalObject());
}

void JSSVGPathSegMovetoRel::put(JSCell* cell, ExecState* exec, PropertyName propertyName, JSValue value, PutPropertySlot& slot)
{
    JSSVGPathSegMovetoRel* thisObject = jsCast<JSSVGPathSegMovetoRel*>(cell);
    ASSERT_GC_OBJECT_INHERITS(thisObject, &s_info);
    lookupPut<JSSVGPathSegMovetoRel, Base>(exec, propertyName, value, &JSSVGPathSegMovetoRelTable, thisObject, slot);
}

void setJSSVGPathSegMovetoRelX(ExecState* exec, JSObject* thisObject, JSValue value)
{
    UNUSED_PARAM(exec);
    JSSVGPathSegMovetoRel* castedThis = jsCast<JSSVGPathSegMovetoRel*>(thisObject);
    SVGPathSegMovetoRel* impl = static_cast<SVGPathSegMovetoRel*>(castedThis->impl());
    float nativeValue(value.toFloat(exec));
    if (exec->hadException())
        return;
    impl->setX(nativeValue);
}


void setJSSVGPathSegMovetoRelY(ExecState* exec, JSObject* thisObject, JSValue value)
{
    UNUSED_PARAM(exec);
    JSSVGPathSegMovetoRel* castedThis = jsCast<JSSVGPathSegMovetoRel*>(thisObject);
    SVGPathSegMovetoRel* impl = static_cast<SVGPathSegMovetoRel*>(castedThis->impl());
    float nativeValue(value.toFloat(exec));
    if (exec->hadException())
        return;
    impl->setY(nativeValue);
}


JSValue JSSVGPathSegMovetoRel::getConstructor(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSSVGPathSegMovetoRelConstructor>(exec, jsCast<JSDOMGlobalObject*>(globalObject));
}


}

#endif // ENABLE(SVG)

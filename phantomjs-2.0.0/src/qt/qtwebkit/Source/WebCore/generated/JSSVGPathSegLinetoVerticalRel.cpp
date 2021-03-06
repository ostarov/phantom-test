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

#include "JSSVGPathSegLinetoVerticalRel.h"

#include "SVGPathSegLinetoVerticalRel.h"
#include <runtime/Error.h>
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

/* Hash table */

static const HashTableValue JSSVGPathSegLinetoVerticalRelTableValues[] =
{
    { "y", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGPathSegLinetoVerticalRelY), (intptr_t)setJSSVGPathSegLinetoVerticalRelY, NoIntrinsic },
    { "constructor", DontEnum | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGPathSegLinetoVerticalRelConstructor), (intptr_t)0, NoIntrinsic },
    { 0, 0, 0, 0, NoIntrinsic }
};

static const HashTable JSSVGPathSegLinetoVerticalRelTable = { 4, 3, JSSVGPathSegLinetoVerticalRelTableValues, 0 };
/* Hash table for constructor */

static const HashTableValue JSSVGPathSegLinetoVerticalRelConstructorTableValues[] =
{
    { 0, 0, 0, 0, NoIntrinsic }
};

static const HashTable JSSVGPathSegLinetoVerticalRelConstructorTable = { 1, 0, JSSVGPathSegLinetoVerticalRelConstructorTableValues, 0 };
const ClassInfo JSSVGPathSegLinetoVerticalRelConstructor::s_info = { "SVGPathSegLinetoVerticalRelConstructor", &Base::s_info, &JSSVGPathSegLinetoVerticalRelConstructorTable, 0, CREATE_METHOD_TABLE(JSSVGPathSegLinetoVerticalRelConstructor) };

JSSVGPathSegLinetoVerticalRelConstructor::JSSVGPathSegLinetoVerticalRelConstructor(Structure* structure, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(structure, globalObject)
{
}

void JSSVGPathSegLinetoVerticalRelConstructor::finishCreation(ExecState* exec, JSDOMGlobalObject* globalObject)
{
    Base::finishCreation(exec->vm());
    ASSERT(inherits(&s_info));
    putDirect(exec->vm(), exec->propertyNames().prototype, JSSVGPathSegLinetoVerticalRelPrototype::self(exec, globalObject), DontDelete | ReadOnly);
    putDirect(exec->vm(), exec->propertyNames().length, jsNumber(0), ReadOnly | DontDelete | DontEnum);
}

bool JSSVGPathSegLinetoVerticalRelConstructor::getOwnPropertySlot(JSCell* cell, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSSVGPathSegLinetoVerticalRelConstructor, JSDOMWrapper>(exec, &JSSVGPathSegLinetoVerticalRelConstructorTable, jsCast<JSSVGPathSegLinetoVerticalRelConstructor*>(cell), propertyName, slot);
}

bool JSSVGPathSegLinetoVerticalRelConstructor::getOwnPropertyDescriptor(JSObject* object, ExecState* exec, PropertyName propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSSVGPathSegLinetoVerticalRelConstructor, JSDOMWrapper>(exec, &JSSVGPathSegLinetoVerticalRelConstructorTable, jsCast<JSSVGPathSegLinetoVerticalRelConstructor*>(object), propertyName, descriptor);
}

/* Hash table for prototype */

static const HashTableValue JSSVGPathSegLinetoVerticalRelPrototypeTableValues[] =
{
    { 0, 0, 0, 0, NoIntrinsic }
};

static const HashTable JSSVGPathSegLinetoVerticalRelPrototypeTable = { 1, 0, JSSVGPathSegLinetoVerticalRelPrototypeTableValues, 0 };
const ClassInfo JSSVGPathSegLinetoVerticalRelPrototype::s_info = { "SVGPathSegLinetoVerticalRelPrototype", &Base::s_info, &JSSVGPathSegLinetoVerticalRelPrototypeTable, 0, CREATE_METHOD_TABLE(JSSVGPathSegLinetoVerticalRelPrototype) };

JSObject* JSSVGPathSegLinetoVerticalRelPrototype::self(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSSVGPathSegLinetoVerticalRel>(exec, globalObject);
}

const ClassInfo JSSVGPathSegLinetoVerticalRel::s_info = { "SVGPathSegLinetoVerticalRel", &Base::s_info, &JSSVGPathSegLinetoVerticalRelTable, 0 , CREATE_METHOD_TABLE(JSSVGPathSegLinetoVerticalRel) };

JSSVGPathSegLinetoVerticalRel::JSSVGPathSegLinetoVerticalRel(Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<SVGPathSegLinetoVerticalRel> impl)
    : JSSVGPathSeg(structure, globalObject, impl)
{
}

void JSSVGPathSegLinetoVerticalRel::finishCreation(VM& vm)
{
    Base::finishCreation(vm);
    ASSERT(inherits(&s_info));
}

JSObject* JSSVGPathSegLinetoVerticalRel::createPrototype(ExecState* exec, JSGlobalObject* globalObject)
{
    return JSSVGPathSegLinetoVerticalRelPrototype::create(exec->vm(), globalObject, JSSVGPathSegLinetoVerticalRelPrototype::createStructure(exec->vm(), globalObject, JSSVGPathSegPrototype::self(exec, globalObject)));
}

bool JSSVGPathSegLinetoVerticalRel::getOwnPropertySlot(JSCell* cell, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    JSSVGPathSegLinetoVerticalRel* thisObject = jsCast<JSSVGPathSegLinetoVerticalRel*>(cell);
    ASSERT_GC_OBJECT_INHERITS(thisObject, &s_info);
    return getStaticValueSlot<JSSVGPathSegLinetoVerticalRel, Base>(exec, &JSSVGPathSegLinetoVerticalRelTable, thisObject, propertyName, slot);
}

bool JSSVGPathSegLinetoVerticalRel::getOwnPropertyDescriptor(JSObject* object, ExecState* exec, PropertyName propertyName, PropertyDescriptor& descriptor)
{
    JSSVGPathSegLinetoVerticalRel* thisObject = jsCast<JSSVGPathSegLinetoVerticalRel*>(object);
    ASSERT_GC_OBJECT_INHERITS(thisObject, &s_info);
    return getStaticValueDescriptor<JSSVGPathSegLinetoVerticalRel, Base>(exec, &JSSVGPathSegLinetoVerticalRelTable, thisObject, propertyName, descriptor);
}

JSValue jsSVGPathSegLinetoVerticalRelY(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSSVGPathSegLinetoVerticalRel* castedThis = jsCast<JSSVGPathSegLinetoVerticalRel*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGPathSegLinetoVerticalRel* impl = static_cast<SVGPathSegLinetoVerticalRel*>(castedThis->impl());
    JSValue result = jsNumber(impl->y());
    return result;
}


JSValue jsSVGPathSegLinetoVerticalRelConstructor(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSSVGPathSegLinetoVerticalRel* domObject = jsCast<JSSVGPathSegLinetoVerticalRel*>(asObject(slotBase));
    return JSSVGPathSegLinetoVerticalRel::getConstructor(exec, domObject->globalObject());
}

void JSSVGPathSegLinetoVerticalRel::put(JSCell* cell, ExecState* exec, PropertyName propertyName, JSValue value, PutPropertySlot& slot)
{
    JSSVGPathSegLinetoVerticalRel* thisObject = jsCast<JSSVGPathSegLinetoVerticalRel*>(cell);
    ASSERT_GC_OBJECT_INHERITS(thisObject, &s_info);
    lookupPut<JSSVGPathSegLinetoVerticalRel, Base>(exec, propertyName, value, &JSSVGPathSegLinetoVerticalRelTable, thisObject, slot);
}

void setJSSVGPathSegLinetoVerticalRelY(ExecState* exec, JSObject* thisObject, JSValue value)
{
    UNUSED_PARAM(exec);
    JSSVGPathSegLinetoVerticalRel* castedThis = jsCast<JSSVGPathSegLinetoVerticalRel*>(thisObject);
    SVGPathSegLinetoVerticalRel* impl = static_cast<SVGPathSegLinetoVerticalRel*>(castedThis->impl());
    float nativeValue(value.toFloat(exec));
    if (exec->hadException())
        return;
    impl->setY(nativeValue);
}


JSValue JSSVGPathSegLinetoVerticalRel::getConstructor(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSSVGPathSegLinetoVerticalRelConstructor>(exec, jsCast<JSDOMGlobalObject*>(globalObject));
}


}

#endif // ENABLE(SVG)

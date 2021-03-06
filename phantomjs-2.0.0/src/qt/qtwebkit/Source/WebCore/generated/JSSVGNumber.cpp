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

#include "JSSVGNumber.h"

#include "ExceptionCode.h"
#include <runtime/Error.h>
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

/* Hash table */

static const HashTableValue JSSVGNumberTableValues[] =
{
    { "value", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGNumberValue), (intptr_t)setJSSVGNumberValue, NoIntrinsic },
    { "constructor", DontEnum | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGNumberConstructor), (intptr_t)0, NoIntrinsic },
    { 0, 0, 0, 0, NoIntrinsic }
};

static const HashTable JSSVGNumberTable = { 4, 3, JSSVGNumberTableValues, 0 };
/* Hash table for constructor */

static const HashTableValue JSSVGNumberConstructorTableValues[] =
{
    { 0, 0, 0, 0, NoIntrinsic }
};

static const HashTable JSSVGNumberConstructorTable = { 1, 0, JSSVGNumberConstructorTableValues, 0 };
const ClassInfo JSSVGNumberConstructor::s_info = { "SVGNumberConstructor", &Base::s_info, &JSSVGNumberConstructorTable, 0, CREATE_METHOD_TABLE(JSSVGNumberConstructor) };

JSSVGNumberConstructor::JSSVGNumberConstructor(Structure* structure, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(structure, globalObject)
{
}

void JSSVGNumberConstructor::finishCreation(ExecState* exec, JSDOMGlobalObject* globalObject)
{
    Base::finishCreation(exec->vm());
    ASSERT(inherits(&s_info));
    putDirect(exec->vm(), exec->propertyNames().prototype, JSSVGNumberPrototype::self(exec, globalObject), DontDelete | ReadOnly);
    putDirect(exec->vm(), exec->propertyNames().length, jsNumber(0), ReadOnly | DontDelete | DontEnum);
}

bool JSSVGNumberConstructor::getOwnPropertySlot(JSCell* cell, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSSVGNumberConstructor, JSDOMWrapper>(exec, &JSSVGNumberConstructorTable, jsCast<JSSVGNumberConstructor*>(cell), propertyName, slot);
}

bool JSSVGNumberConstructor::getOwnPropertyDescriptor(JSObject* object, ExecState* exec, PropertyName propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSSVGNumberConstructor, JSDOMWrapper>(exec, &JSSVGNumberConstructorTable, jsCast<JSSVGNumberConstructor*>(object), propertyName, descriptor);
}

/* Hash table for prototype */

static const HashTableValue JSSVGNumberPrototypeTableValues[] =
{
    { 0, 0, 0, 0, NoIntrinsic }
};

static const HashTable JSSVGNumberPrototypeTable = { 1, 0, JSSVGNumberPrototypeTableValues, 0 };
const ClassInfo JSSVGNumberPrototype::s_info = { "SVGNumberPrototype", &Base::s_info, &JSSVGNumberPrototypeTable, 0, CREATE_METHOD_TABLE(JSSVGNumberPrototype) };

JSObject* JSSVGNumberPrototype::self(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSSVGNumber>(exec, globalObject);
}

const ClassInfo JSSVGNumber::s_info = { "SVGNumber", &Base::s_info, &JSSVGNumberTable, 0 , CREATE_METHOD_TABLE(JSSVGNumber) };

JSSVGNumber::JSSVGNumber(Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<SVGPropertyTearOff<float> > impl)
    : JSDOMWrapper(structure, globalObject)
    , m_impl(impl.leakRef())
{
}

void JSSVGNumber::finishCreation(VM& vm)
{
    Base::finishCreation(vm);
    ASSERT(inherits(&s_info));
}

JSObject* JSSVGNumber::createPrototype(ExecState* exec, JSGlobalObject* globalObject)
{
    return JSSVGNumberPrototype::create(exec->vm(), globalObject, JSSVGNumberPrototype::createStructure(globalObject->vm(), globalObject, globalObject->objectPrototype()));
}

void JSSVGNumber::destroy(JSC::JSCell* cell)
{
    JSSVGNumber* thisObject = static_cast<JSSVGNumber*>(cell);
    thisObject->JSSVGNumber::~JSSVGNumber();
}

JSSVGNumber::~JSSVGNumber()
{
    releaseImplIfNotNull();
}

bool JSSVGNumber::getOwnPropertySlot(JSCell* cell, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    JSSVGNumber* thisObject = jsCast<JSSVGNumber*>(cell);
    ASSERT_GC_OBJECT_INHERITS(thisObject, &s_info);
    return getStaticValueSlot<JSSVGNumber, Base>(exec, &JSSVGNumberTable, thisObject, propertyName, slot);
}

bool JSSVGNumber::getOwnPropertyDescriptor(JSObject* object, ExecState* exec, PropertyName propertyName, PropertyDescriptor& descriptor)
{
    JSSVGNumber* thisObject = jsCast<JSSVGNumber*>(object);
    ASSERT_GC_OBJECT_INHERITS(thisObject, &s_info);
    return getStaticValueDescriptor<JSSVGNumber, Base>(exec, &JSSVGNumberTable, thisObject, propertyName, descriptor);
}

JSValue jsSVGNumberValue(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSSVGNumber* castedThis = jsCast<JSSVGNumber*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    float& impl = castedThis->impl()->propertyReference();
    JSValue result =  jsNumber(impl);
    return result;
}


JSValue jsSVGNumberConstructor(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSSVGNumber* domObject = jsCast<JSSVGNumber*>(asObject(slotBase));
    return JSSVGNumber::getConstructor(exec, domObject->globalObject());
}

void JSSVGNumber::put(JSCell* cell, ExecState* exec, PropertyName propertyName, JSValue value, PutPropertySlot& slot)
{
    JSSVGNumber* thisObject = jsCast<JSSVGNumber*>(cell);
    ASSERT_GC_OBJECT_INHERITS(thisObject, &s_info);
    lookupPut<JSSVGNumber, Base>(exec, propertyName, value, &JSSVGNumberTable, thisObject, slot);
}

void setJSSVGNumberValue(ExecState* exec, JSObject* thisObject, JSValue value)
{
    UNUSED_PARAM(exec);
    JSSVGNumber* castedThis = jsCast<JSSVGNumber*>(thisObject);
    SVGPropertyTearOff<float> * impl = static_cast<SVGPropertyTearOff<float> *>(castedThis->impl());
    float nativeValue(value.toFloat(exec));
    if (exec->hadException())
        return;
    if (impl->isReadOnly()) {
        setDOMException(exec, NO_MODIFICATION_ALLOWED_ERR);
        return;
    }
    float& podImpl = impl->propertyReference();
    podImpl = nativeValue;
    impl->commitChange();
}


JSValue JSSVGNumber::getConstructor(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSSVGNumberConstructor>(exec, jsCast<JSDOMGlobalObject*>(globalObject));
}

static inline bool isObservable(JSSVGNumber* jsSVGNumber)
{
    if (jsSVGNumber->hasCustomProperties())
        return true;
    return false;
}

bool JSSVGNumberOwner::isReachableFromOpaqueRoots(JSC::Handle<JSC::Unknown> handle, void*, SlotVisitor& visitor)
{
    JSSVGNumber* jsSVGNumber = jsCast<JSSVGNumber*>(handle.get().asCell());
    if (!isObservable(jsSVGNumber))
        return false;
    UNUSED_PARAM(visitor);
    return false;
}

void JSSVGNumberOwner::finalize(JSC::Handle<JSC::Unknown> handle, void* context)
{
    JSSVGNumber* jsSVGNumber = jsCast<JSSVGNumber*>(handle.get().asCell());
    DOMWrapperWorld* world = static_cast<DOMWrapperWorld*>(context);
    uncacheWrapper(world, jsSVGNumber->impl(), jsSVGNumber);
    jsSVGNumber->releaseImpl();
}

JSC::JSValue toJS(JSC::ExecState* exec, JSDOMGlobalObject* globalObject, SVGPropertyTearOff<float> * impl)
{
    if (!impl)
        return jsNull();
    if (JSValue result = getExistingWrapper<JSSVGNumber, SVGPropertyTearOff<float> >(exec, impl))
        return result;
    ReportMemoryCost<SVGPropertyTearOff<float> >::reportMemoryCost(exec, impl);
    return createNewWrapper<JSSVGNumber, SVGPropertyTearOff<float> >(exec, globalObject, impl);
}

SVGPropertyTearOff<float> * toSVGNumber(JSC::JSValue value)
{
    return value.inherits(&JSSVGNumber::s_info) ? jsCast<JSSVGNumber*>(asObject(value))->impl() : 0;
}

}

#endif // ENABLE(SVG)

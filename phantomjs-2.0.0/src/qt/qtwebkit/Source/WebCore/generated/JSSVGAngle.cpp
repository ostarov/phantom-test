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

#include "JSSVGAngle.h"

#include "ExceptionCode.h"
#include "JSDOMBinding.h"
#include "KURL.h"
#include "SVGAngle.h"
#include <runtime/Error.h>
#include <runtime/JSString.h>
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

/* Hash table */

static const HashTableValue JSSVGAngleTableValues[] =
{
    { "unitType", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGAngleUnitType), (intptr_t)0, NoIntrinsic },
    { "value", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGAngleValue), (intptr_t)setJSSVGAngleValue, NoIntrinsic },
    { "valueInSpecifiedUnits", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGAngleValueInSpecifiedUnits), (intptr_t)setJSSVGAngleValueInSpecifiedUnits, NoIntrinsic },
    { "valueAsString", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGAngleValueAsString), (intptr_t)setJSSVGAngleValueAsString, NoIntrinsic },
    { "constructor", DontEnum | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGAngleConstructor), (intptr_t)0, NoIntrinsic },
    { 0, 0, 0, 0, NoIntrinsic }
};

static const HashTable JSSVGAngleTable = { 17, 15, JSSVGAngleTableValues, 0 };
/* Hash table for constructor */

static const HashTableValue JSSVGAngleConstructorTableValues[] =
{
    { "SVG_ANGLETYPE_UNKNOWN", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGAngleSVG_ANGLETYPE_UNKNOWN), (intptr_t)0, NoIntrinsic },
    { "SVG_ANGLETYPE_UNSPECIFIED", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGAngleSVG_ANGLETYPE_UNSPECIFIED), (intptr_t)0, NoIntrinsic },
    { "SVG_ANGLETYPE_DEG", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGAngleSVG_ANGLETYPE_DEG), (intptr_t)0, NoIntrinsic },
    { "SVG_ANGLETYPE_RAD", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGAngleSVG_ANGLETYPE_RAD), (intptr_t)0, NoIntrinsic },
    { "SVG_ANGLETYPE_GRAD", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGAngleSVG_ANGLETYPE_GRAD), (intptr_t)0, NoIntrinsic },
    { 0, 0, 0, 0, NoIntrinsic }
};

static const HashTable JSSVGAngleConstructorTable = { 18, 15, JSSVGAngleConstructorTableValues, 0 };

COMPILE_ASSERT(0 == SVGAngle::SVG_ANGLETYPE_UNKNOWN, SVGAngleEnumSVG_ANGLETYPE_UNKNOWNIsWrongUseDoNotCheckConstants);
COMPILE_ASSERT(1 == SVGAngle::SVG_ANGLETYPE_UNSPECIFIED, SVGAngleEnumSVG_ANGLETYPE_UNSPECIFIEDIsWrongUseDoNotCheckConstants);
COMPILE_ASSERT(2 == SVGAngle::SVG_ANGLETYPE_DEG, SVGAngleEnumSVG_ANGLETYPE_DEGIsWrongUseDoNotCheckConstants);
COMPILE_ASSERT(3 == SVGAngle::SVG_ANGLETYPE_RAD, SVGAngleEnumSVG_ANGLETYPE_RADIsWrongUseDoNotCheckConstants);
COMPILE_ASSERT(4 == SVGAngle::SVG_ANGLETYPE_GRAD, SVGAngleEnumSVG_ANGLETYPE_GRADIsWrongUseDoNotCheckConstants);

const ClassInfo JSSVGAngleConstructor::s_info = { "SVGAngleConstructor", &Base::s_info, &JSSVGAngleConstructorTable, 0, CREATE_METHOD_TABLE(JSSVGAngleConstructor) };

JSSVGAngleConstructor::JSSVGAngleConstructor(Structure* structure, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(structure, globalObject)
{
}

void JSSVGAngleConstructor::finishCreation(ExecState* exec, JSDOMGlobalObject* globalObject)
{
    Base::finishCreation(exec->vm());
    ASSERT(inherits(&s_info));
    putDirect(exec->vm(), exec->propertyNames().prototype, JSSVGAnglePrototype::self(exec, globalObject), DontDelete | ReadOnly);
    putDirect(exec->vm(), exec->propertyNames().length, jsNumber(0), ReadOnly | DontDelete | DontEnum);
}

bool JSSVGAngleConstructor::getOwnPropertySlot(JSCell* cell, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSSVGAngleConstructor, JSDOMWrapper>(exec, &JSSVGAngleConstructorTable, jsCast<JSSVGAngleConstructor*>(cell), propertyName, slot);
}

bool JSSVGAngleConstructor::getOwnPropertyDescriptor(JSObject* object, ExecState* exec, PropertyName propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSSVGAngleConstructor, JSDOMWrapper>(exec, &JSSVGAngleConstructorTable, jsCast<JSSVGAngleConstructor*>(object), propertyName, descriptor);
}

/* Hash table for prototype */

static const HashTableValue JSSVGAnglePrototypeTableValues[] =
{
    { "SVG_ANGLETYPE_UNKNOWN", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGAngleSVG_ANGLETYPE_UNKNOWN), (intptr_t)0, NoIntrinsic },
    { "SVG_ANGLETYPE_UNSPECIFIED", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGAngleSVG_ANGLETYPE_UNSPECIFIED), (intptr_t)0, NoIntrinsic },
    { "SVG_ANGLETYPE_DEG", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGAngleSVG_ANGLETYPE_DEG), (intptr_t)0, NoIntrinsic },
    { "SVG_ANGLETYPE_RAD", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGAngleSVG_ANGLETYPE_RAD), (intptr_t)0, NoIntrinsic },
    { "SVG_ANGLETYPE_GRAD", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGAngleSVG_ANGLETYPE_GRAD), (intptr_t)0, NoIntrinsic },
    { "newValueSpecifiedUnits", DontDelete | JSC::Function, (intptr_t)static_cast<NativeFunction>(jsSVGAnglePrototypeFunctionNewValueSpecifiedUnits), (intptr_t)2, NoIntrinsic },
    { "convertToSpecifiedUnits", DontDelete | JSC::Function, (intptr_t)static_cast<NativeFunction>(jsSVGAnglePrototypeFunctionConvertToSpecifiedUnits), (intptr_t)1, NoIntrinsic },
    { 0, 0, 0, 0, NoIntrinsic }
};

static const HashTable JSSVGAnglePrototypeTable = { 18, 15, JSSVGAnglePrototypeTableValues, 0 };
const ClassInfo JSSVGAnglePrototype::s_info = { "SVGAnglePrototype", &Base::s_info, &JSSVGAnglePrototypeTable, 0, CREATE_METHOD_TABLE(JSSVGAnglePrototype) };

JSObject* JSSVGAnglePrototype::self(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSSVGAngle>(exec, globalObject);
}

bool JSSVGAnglePrototype::getOwnPropertySlot(JSCell* cell, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    JSSVGAnglePrototype* thisObject = jsCast<JSSVGAnglePrototype*>(cell);
    return getStaticPropertySlot<JSSVGAnglePrototype, JSObject>(exec, &JSSVGAnglePrototypeTable, thisObject, propertyName, slot);
}

bool JSSVGAnglePrototype::getOwnPropertyDescriptor(JSObject* object, ExecState* exec, PropertyName propertyName, PropertyDescriptor& descriptor)
{
    JSSVGAnglePrototype* thisObject = jsCast<JSSVGAnglePrototype*>(object);
    return getStaticPropertyDescriptor<JSSVGAnglePrototype, JSObject>(exec, &JSSVGAnglePrototypeTable, thisObject, propertyName, descriptor);
}

const ClassInfo JSSVGAngle::s_info = { "SVGAngle", &Base::s_info, &JSSVGAngleTable, 0 , CREATE_METHOD_TABLE(JSSVGAngle) };

JSSVGAngle::JSSVGAngle(Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<SVGPropertyTearOff<SVGAngle> > impl)
    : JSDOMWrapper(structure, globalObject)
    , m_impl(impl.leakRef())
{
}

void JSSVGAngle::finishCreation(VM& vm)
{
    Base::finishCreation(vm);
    ASSERT(inherits(&s_info));
}

JSObject* JSSVGAngle::createPrototype(ExecState* exec, JSGlobalObject* globalObject)
{
    return JSSVGAnglePrototype::create(exec->vm(), globalObject, JSSVGAnglePrototype::createStructure(globalObject->vm(), globalObject, globalObject->objectPrototype()));
}

void JSSVGAngle::destroy(JSC::JSCell* cell)
{
    JSSVGAngle* thisObject = static_cast<JSSVGAngle*>(cell);
    thisObject->JSSVGAngle::~JSSVGAngle();
}

JSSVGAngle::~JSSVGAngle()
{
    releaseImplIfNotNull();
}

bool JSSVGAngle::getOwnPropertySlot(JSCell* cell, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    JSSVGAngle* thisObject = jsCast<JSSVGAngle*>(cell);
    ASSERT_GC_OBJECT_INHERITS(thisObject, &s_info);
    return getStaticValueSlot<JSSVGAngle, Base>(exec, &JSSVGAngleTable, thisObject, propertyName, slot);
}

bool JSSVGAngle::getOwnPropertyDescriptor(JSObject* object, ExecState* exec, PropertyName propertyName, PropertyDescriptor& descriptor)
{
    JSSVGAngle* thisObject = jsCast<JSSVGAngle*>(object);
    ASSERT_GC_OBJECT_INHERITS(thisObject, &s_info);
    return getStaticValueDescriptor<JSSVGAngle, Base>(exec, &JSSVGAngleTable, thisObject, propertyName, descriptor);
}

JSValue jsSVGAngleUnitType(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSSVGAngle* castedThis = jsCast<JSSVGAngle*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGAngle& impl = castedThis->impl()->propertyReference();
    JSValue result =  jsNumber(impl.unitType());
    return result;
}


JSValue jsSVGAngleValue(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSSVGAngle* castedThis = jsCast<JSSVGAngle*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGAngle& impl = castedThis->impl()->propertyReference();
    JSValue result =  jsNumber(impl.value());
    return result;
}


JSValue jsSVGAngleValueInSpecifiedUnits(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSSVGAngle* castedThis = jsCast<JSSVGAngle*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGAngle& impl = castedThis->impl()->propertyReference();
    JSValue result =  jsNumber(impl.valueInSpecifiedUnits());
    return result;
}


JSValue jsSVGAngleValueAsString(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSSVGAngle* castedThis = jsCast<JSSVGAngle*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGAngle& impl = castedThis->impl()->propertyReference();
    JSValue result =  jsStringWithCache(exec, impl.valueAsString());
    return result;
}


JSValue jsSVGAngleConstructor(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSSVGAngle* domObject = jsCast<JSSVGAngle*>(asObject(slotBase));
    return JSSVGAngle::getConstructor(exec, domObject->globalObject());
}

void JSSVGAngle::put(JSCell* cell, ExecState* exec, PropertyName propertyName, JSValue value, PutPropertySlot& slot)
{
    JSSVGAngle* thisObject = jsCast<JSSVGAngle*>(cell);
    ASSERT_GC_OBJECT_INHERITS(thisObject, &s_info);
    lookupPut<JSSVGAngle, Base>(exec, propertyName, value, &JSSVGAngleTable, thisObject, slot);
}

void setJSSVGAngleValue(ExecState* exec, JSObject* thisObject, JSValue value)
{
    UNUSED_PARAM(exec);
    JSSVGAngle* castedThis = jsCast<JSSVGAngle*>(thisObject);
    SVGPropertyTearOff<SVGAngle> * impl = static_cast<SVGPropertyTearOff<SVGAngle> *>(castedThis->impl());
    float nativeValue(value.toFloat(exec));
    if (exec->hadException())
        return;
    if (impl->isReadOnly()) {
        setDOMException(exec, NO_MODIFICATION_ALLOWED_ERR);
        return;
    }
    SVGAngle& podImpl = impl->propertyReference();
    podImpl.setValue(nativeValue);
    impl->commitChange();
}


void setJSSVGAngleValueInSpecifiedUnits(ExecState* exec, JSObject* thisObject, JSValue value)
{
    UNUSED_PARAM(exec);
    JSSVGAngle* castedThis = jsCast<JSSVGAngle*>(thisObject);
    SVGPropertyTearOff<SVGAngle> * impl = static_cast<SVGPropertyTearOff<SVGAngle> *>(castedThis->impl());
    float nativeValue(value.toFloat(exec));
    if (exec->hadException())
        return;
    if (impl->isReadOnly()) {
        setDOMException(exec, NO_MODIFICATION_ALLOWED_ERR);
        return;
    }
    SVGAngle& podImpl = impl->propertyReference();
    podImpl.setValueInSpecifiedUnits(nativeValue);
    impl->commitChange();
}


void setJSSVGAngleValueAsString(ExecState* exec, JSObject* thisObject, JSValue value)
{
    UNUSED_PARAM(exec);
    JSSVGAngle* castedThis = jsCast<JSSVGAngle*>(thisObject);
    SVGPropertyTearOff<SVGAngle> * impl = static_cast<SVGPropertyTearOff<SVGAngle> *>(castedThis->impl());
    ExceptionCode ec = 0;
    const String& nativeValue(valueToStringWithNullCheck(exec, value));
    if (exec->hadException())
        return;
    if (impl->isReadOnly()) {
        setDOMException(exec, NO_MODIFICATION_ALLOWED_ERR);
        return;
    }
    SVGAngle& podImpl = impl->propertyReference();
    podImpl.setValueAsString(nativeValue, ec);
    setDOMException(exec, ec);
    if (!ec)
        impl->commitChange();
}


JSValue JSSVGAngle::getConstructor(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSSVGAngleConstructor>(exec, jsCast<JSDOMGlobalObject*>(globalObject));
}

EncodedJSValue JSC_HOST_CALL jsSVGAnglePrototypeFunctionNewValueSpecifiedUnits(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSSVGAngle::s_info))
        return throwVMTypeError(exec);
    JSSVGAngle* castedThis = jsCast<JSSVGAngle*>(asObject(thisValue));
    ASSERT_GC_OBJECT_INHERITS(castedThis, &JSSVGAngle::s_info);
    SVGPropertyTearOff<SVGAngle> * impl = static_cast<SVGPropertyTearOff<SVGAngle> *>(castedThis->impl());
    if (impl->isReadOnly()) {
        setDOMException(exec, NO_MODIFICATION_ALLOWED_ERR);
        return JSValue::encode(jsUndefined());
    }
    SVGAngle& podImpl = impl->propertyReference();
    if (exec->argumentCount() < 2)
        return throwVMError(exec, createNotEnoughArgumentsError(exec));
    ExceptionCode ec = 0;
    unsigned short unitType(toUInt32(exec, exec->argument(0), NormalConversion));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());
    float valueInSpecifiedUnits(exec->argument(1).toFloat(exec));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());
    podImpl.newValueSpecifiedUnits(unitType, valueInSpecifiedUnits, ec);
    setDOMException(exec, ec);
    if (!ec)
        impl->commitChange();
    return JSValue::encode(jsUndefined());
}

EncodedJSValue JSC_HOST_CALL jsSVGAnglePrototypeFunctionConvertToSpecifiedUnits(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSSVGAngle::s_info))
        return throwVMTypeError(exec);
    JSSVGAngle* castedThis = jsCast<JSSVGAngle*>(asObject(thisValue));
    ASSERT_GC_OBJECT_INHERITS(castedThis, &JSSVGAngle::s_info);
    SVGPropertyTearOff<SVGAngle> * impl = static_cast<SVGPropertyTearOff<SVGAngle> *>(castedThis->impl());
    if (impl->isReadOnly()) {
        setDOMException(exec, NO_MODIFICATION_ALLOWED_ERR);
        return JSValue::encode(jsUndefined());
    }
    SVGAngle& podImpl = impl->propertyReference();
    if (exec->argumentCount() < 1)
        return throwVMError(exec, createNotEnoughArgumentsError(exec));
    ExceptionCode ec = 0;
    unsigned short unitType(toUInt32(exec, exec->argument(0), NormalConversion));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());
    podImpl.convertToSpecifiedUnits(unitType, ec);
    setDOMException(exec, ec);
    if (!ec)
        impl->commitChange();
    return JSValue::encode(jsUndefined());
}

// Constant getters

JSValue jsSVGAngleSVG_ANGLETYPE_UNKNOWN(ExecState* exec, JSValue, PropertyName)
{
    UNUSED_PARAM(exec);
    return jsNumber(static_cast<int>(0));
}

JSValue jsSVGAngleSVG_ANGLETYPE_UNSPECIFIED(ExecState* exec, JSValue, PropertyName)
{
    UNUSED_PARAM(exec);
    return jsNumber(static_cast<int>(1));
}

JSValue jsSVGAngleSVG_ANGLETYPE_DEG(ExecState* exec, JSValue, PropertyName)
{
    UNUSED_PARAM(exec);
    return jsNumber(static_cast<int>(2));
}

JSValue jsSVGAngleSVG_ANGLETYPE_RAD(ExecState* exec, JSValue, PropertyName)
{
    UNUSED_PARAM(exec);
    return jsNumber(static_cast<int>(3));
}

JSValue jsSVGAngleSVG_ANGLETYPE_GRAD(ExecState* exec, JSValue, PropertyName)
{
    UNUSED_PARAM(exec);
    return jsNumber(static_cast<int>(4));
}

static inline bool isObservable(JSSVGAngle* jsSVGAngle)
{
    if (jsSVGAngle->hasCustomProperties())
        return true;
    return false;
}

bool JSSVGAngleOwner::isReachableFromOpaqueRoots(JSC::Handle<JSC::Unknown> handle, void*, SlotVisitor& visitor)
{
    JSSVGAngle* jsSVGAngle = jsCast<JSSVGAngle*>(handle.get().asCell());
    if (!isObservable(jsSVGAngle))
        return false;
    UNUSED_PARAM(visitor);
    return false;
}

void JSSVGAngleOwner::finalize(JSC::Handle<JSC::Unknown> handle, void* context)
{
    JSSVGAngle* jsSVGAngle = jsCast<JSSVGAngle*>(handle.get().asCell());
    DOMWrapperWorld* world = static_cast<DOMWrapperWorld*>(context);
    uncacheWrapper(world, jsSVGAngle->impl(), jsSVGAngle);
    jsSVGAngle->releaseImpl();
}

JSC::JSValue toJS(JSC::ExecState* exec, JSDOMGlobalObject* globalObject, SVGPropertyTearOff<SVGAngle> * impl)
{
    if (!impl)
        return jsNull();
    if (JSValue result = getExistingWrapper<JSSVGAngle, SVGPropertyTearOff<SVGAngle> >(exec, impl))
        return result;
    ReportMemoryCost<SVGPropertyTearOff<SVGAngle> >::reportMemoryCost(exec, impl);
    return createNewWrapper<JSSVGAngle, SVGPropertyTearOff<SVGAngle> >(exec, globalObject, impl);
}

SVGPropertyTearOff<SVGAngle> * toSVGAngle(JSC::JSValue value)
{
    return value.inherits(&JSSVGAngle::s_info) ? jsCast<JSSVGAngle*>(asObject(value))->impl() : 0;
}

}

#endif // ENABLE(SVG)

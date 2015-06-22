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

#include "JSSVGMarkerElement.h"

#include "ExceptionCode.h"
#include "JSDOMBinding.h"
#include "JSSVGAngle.h"
#include "JSSVGAnimatedAngle.h"
#include "JSSVGAnimatedEnumeration.h"
#include "JSSVGAnimatedLength.h"
#include "SVGMarkerElement.h"
#include <runtime/Error.h>
#include <wtf/GetPtr.h>

#if ENABLE(SVG)
#include "JSSVGAnimatedBoolean.h"
#include "JSSVGAnimatedPreserveAspectRatio.h"
#include "JSSVGAnimatedRect.h"
#endif

using namespace JSC;

namespace WebCore {

/* Hash table */

static const HashTableValue JSSVGMarkerElementTableValues[] =
{
    { "refX", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGMarkerElementRefX), (intptr_t)0, NoIntrinsic },
    { "refY", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGMarkerElementRefY), (intptr_t)0, NoIntrinsic },
    { "markerUnits", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGMarkerElementMarkerUnits), (intptr_t)0, NoIntrinsic },
    { "markerWidth", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGMarkerElementMarkerWidth), (intptr_t)0, NoIntrinsic },
    { "markerHeight", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGMarkerElementMarkerHeight), (intptr_t)0, NoIntrinsic },
    { "orientType", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGMarkerElementOrientType), (intptr_t)0, NoIntrinsic },
    { "orientAngle", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGMarkerElementOrientAngle), (intptr_t)0, NoIntrinsic },
#if ENABLE(SVG)
    { "externalResourcesRequired", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGMarkerElementExternalResourcesRequired), (intptr_t)0, NoIntrinsic },
#endif
#if ENABLE(SVG)
    { "viewBox", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGMarkerElementViewBox), (intptr_t)0, NoIntrinsic },
#endif
#if ENABLE(SVG)
    { "preserveAspectRatio", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGMarkerElementPreserveAspectRatio), (intptr_t)0, NoIntrinsic },
#endif
    { "constructor", DontEnum | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGMarkerElementConstructor), (intptr_t)0, NoIntrinsic },
    { 0, 0, 0, 0, NoIntrinsic }
};

static const HashTable JSSVGMarkerElementTable = { 33, 31, JSSVGMarkerElementTableValues, 0 };
/* Hash table for constructor */

static const HashTableValue JSSVGMarkerElementConstructorTableValues[] =
{
    { "SVG_MARKERUNITS_UNKNOWN", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGMarkerElementSVG_MARKERUNITS_UNKNOWN), (intptr_t)0, NoIntrinsic },
    { "SVG_MARKERUNITS_USERSPACEONUSE", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGMarkerElementSVG_MARKERUNITS_USERSPACEONUSE), (intptr_t)0, NoIntrinsic },
    { "SVG_MARKERUNITS_STROKEWIDTH", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGMarkerElementSVG_MARKERUNITS_STROKEWIDTH), (intptr_t)0, NoIntrinsic },
    { "SVG_MARKER_ORIENT_UNKNOWN", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGMarkerElementSVG_MARKER_ORIENT_UNKNOWN), (intptr_t)0, NoIntrinsic },
    { "SVG_MARKER_ORIENT_AUTO", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGMarkerElementSVG_MARKER_ORIENT_AUTO), (intptr_t)0, NoIntrinsic },
    { "SVG_MARKER_ORIENT_ANGLE", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGMarkerElementSVG_MARKER_ORIENT_ANGLE), (intptr_t)0, NoIntrinsic },
    { 0, 0, 0, 0, NoIntrinsic }
};

static const HashTable JSSVGMarkerElementConstructorTable = { 16, 15, JSSVGMarkerElementConstructorTableValues, 0 };

COMPILE_ASSERT(0 == SVGMarkerElement::SVG_MARKERUNITS_UNKNOWN, SVGMarkerElementEnumSVG_MARKERUNITS_UNKNOWNIsWrongUseDoNotCheckConstants);
COMPILE_ASSERT(1 == SVGMarkerElement::SVG_MARKERUNITS_USERSPACEONUSE, SVGMarkerElementEnumSVG_MARKERUNITS_USERSPACEONUSEIsWrongUseDoNotCheckConstants);
COMPILE_ASSERT(2 == SVGMarkerElement::SVG_MARKERUNITS_STROKEWIDTH, SVGMarkerElementEnumSVG_MARKERUNITS_STROKEWIDTHIsWrongUseDoNotCheckConstants);
COMPILE_ASSERT(0 == SVGMarkerElement::SVG_MARKER_ORIENT_UNKNOWN, SVGMarkerElementEnumSVG_MARKER_ORIENT_UNKNOWNIsWrongUseDoNotCheckConstants);
COMPILE_ASSERT(1 == SVGMarkerElement::SVG_MARKER_ORIENT_AUTO, SVGMarkerElementEnumSVG_MARKER_ORIENT_AUTOIsWrongUseDoNotCheckConstants);
COMPILE_ASSERT(2 == SVGMarkerElement::SVG_MARKER_ORIENT_ANGLE, SVGMarkerElementEnumSVG_MARKER_ORIENT_ANGLEIsWrongUseDoNotCheckConstants);

const ClassInfo JSSVGMarkerElementConstructor::s_info = { "SVGMarkerElementConstructor", &Base::s_info, &JSSVGMarkerElementConstructorTable, 0, CREATE_METHOD_TABLE(JSSVGMarkerElementConstructor) };

JSSVGMarkerElementConstructor::JSSVGMarkerElementConstructor(Structure* structure, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(structure, globalObject)
{
}

void JSSVGMarkerElementConstructor::finishCreation(ExecState* exec, JSDOMGlobalObject* globalObject)
{
    Base::finishCreation(exec->vm());
    ASSERT(inherits(&s_info));
    putDirect(exec->vm(), exec->propertyNames().prototype, JSSVGMarkerElementPrototype::self(exec, globalObject), DontDelete | ReadOnly);
    putDirect(exec->vm(), exec->propertyNames().length, jsNumber(0), ReadOnly | DontDelete | DontEnum);
}

bool JSSVGMarkerElementConstructor::getOwnPropertySlot(JSCell* cell, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSSVGMarkerElementConstructor, JSDOMWrapper>(exec, &JSSVGMarkerElementConstructorTable, jsCast<JSSVGMarkerElementConstructor*>(cell), propertyName, slot);
}

bool JSSVGMarkerElementConstructor::getOwnPropertyDescriptor(JSObject* object, ExecState* exec, PropertyName propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSSVGMarkerElementConstructor, JSDOMWrapper>(exec, &JSSVGMarkerElementConstructorTable, jsCast<JSSVGMarkerElementConstructor*>(object), propertyName, descriptor);
}

/* Hash table for prototype */

static const HashTableValue JSSVGMarkerElementPrototypeTableValues[] =
{
    { "SVG_MARKERUNITS_UNKNOWN", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGMarkerElementSVG_MARKERUNITS_UNKNOWN), (intptr_t)0, NoIntrinsic },
    { "SVG_MARKERUNITS_USERSPACEONUSE", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGMarkerElementSVG_MARKERUNITS_USERSPACEONUSE), (intptr_t)0, NoIntrinsic },
    { "SVG_MARKERUNITS_STROKEWIDTH", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGMarkerElementSVG_MARKERUNITS_STROKEWIDTH), (intptr_t)0, NoIntrinsic },
    { "SVG_MARKER_ORIENT_UNKNOWN", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGMarkerElementSVG_MARKER_ORIENT_UNKNOWN), (intptr_t)0, NoIntrinsic },
    { "SVG_MARKER_ORIENT_AUTO", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGMarkerElementSVG_MARKER_ORIENT_AUTO), (intptr_t)0, NoIntrinsic },
    { "SVG_MARKER_ORIENT_ANGLE", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGMarkerElementSVG_MARKER_ORIENT_ANGLE), (intptr_t)0, NoIntrinsic },
    { "setOrientToAuto", DontDelete | JSC::Function, (intptr_t)static_cast<NativeFunction>(jsSVGMarkerElementPrototypeFunctionSetOrientToAuto), (intptr_t)0, NoIntrinsic },
    { "setOrientToAngle", DontDelete | JSC::Function, (intptr_t)static_cast<NativeFunction>(jsSVGMarkerElementPrototypeFunctionSetOrientToAngle), (intptr_t)0, NoIntrinsic },
    { 0, 0, 0, 0, NoIntrinsic }
};

static const HashTable JSSVGMarkerElementPrototypeTable = { 17, 15, JSSVGMarkerElementPrototypeTableValues, 0 };
const ClassInfo JSSVGMarkerElementPrototype::s_info = { "SVGMarkerElementPrototype", &Base::s_info, &JSSVGMarkerElementPrototypeTable, 0, CREATE_METHOD_TABLE(JSSVGMarkerElementPrototype) };

JSObject* JSSVGMarkerElementPrototype::self(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSSVGMarkerElement>(exec, globalObject);
}

bool JSSVGMarkerElementPrototype::getOwnPropertySlot(JSCell* cell, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    JSSVGMarkerElementPrototype* thisObject = jsCast<JSSVGMarkerElementPrototype*>(cell);
    return getStaticPropertySlot<JSSVGMarkerElementPrototype, JSObject>(exec, &JSSVGMarkerElementPrototypeTable, thisObject, propertyName, slot);
}

bool JSSVGMarkerElementPrototype::getOwnPropertyDescriptor(JSObject* object, ExecState* exec, PropertyName propertyName, PropertyDescriptor& descriptor)
{
    JSSVGMarkerElementPrototype* thisObject = jsCast<JSSVGMarkerElementPrototype*>(object);
    return getStaticPropertyDescriptor<JSSVGMarkerElementPrototype, JSObject>(exec, &JSSVGMarkerElementPrototypeTable, thisObject, propertyName, descriptor);
}

const ClassInfo JSSVGMarkerElement::s_info = { "SVGMarkerElement", &Base::s_info, &JSSVGMarkerElementTable, 0 , CREATE_METHOD_TABLE(JSSVGMarkerElement) };

JSSVGMarkerElement::JSSVGMarkerElement(Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<SVGMarkerElement> impl)
    : JSSVGStyledElement(structure, globalObject, impl)
{
}

void JSSVGMarkerElement::finishCreation(VM& vm)
{
    Base::finishCreation(vm);
    ASSERT(inherits(&s_info));
}

JSObject* JSSVGMarkerElement::createPrototype(ExecState* exec, JSGlobalObject* globalObject)
{
    return JSSVGMarkerElementPrototype::create(exec->vm(), globalObject, JSSVGMarkerElementPrototype::createStructure(exec->vm(), globalObject, JSSVGStyledElementPrototype::self(exec, globalObject)));
}

bool JSSVGMarkerElement::getOwnPropertySlot(JSCell* cell, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    JSSVGMarkerElement* thisObject = jsCast<JSSVGMarkerElement*>(cell);
    ASSERT_GC_OBJECT_INHERITS(thisObject, &s_info);
    return getStaticValueSlot<JSSVGMarkerElement, Base>(exec, &JSSVGMarkerElementTable, thisObject, propertyName, slot);
}

bool JSSVGMarkerElement::getOwnPropertyDescriptor(JSObject* object, ExecState* exec, PropertyName propertyName, PropertyDescriptor& descriptor)
{
    JSSVGMarkerElement* thisObject = jsCast<JSSVGMarkerElement*>(object);
    ASSERT_GC_OBJECT_INHERITS(thisObject, &s_info);
    return getStaticValueDescriptor<JSSVGMarkerElement, Base>(exec, &JSSVGMarkerElementTable, thisObject, propertyName, descriptor);
}

JSValue jsSVGMarkerElementRefX(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSSVGMarkerElement* castedThis = jsCast<JSSVGMarkerElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGMarkerElement* impl = static_cast<SVGMarkerElement*>(castedThis->impl());
    RefPtr<SVGAnimatedLength> obj = impl->refXAnimated();
    JSValue result =  toJS(exec, castedThis->globalObject(), obj.get());
    return result;
}


JSValue jsSVGMarkerElementRefY(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSSVGMarkerElement* castedThis = jsCast<JSSVGMarkerElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGMarkerElement* impl = static_cast<SVGMarkerElement*>(castedThis->impl());
    RefPtr<SVGAnimatedLength> obj = impl->refYAnimated();
    JSValue result =  toJS(exec, castedThis->globalObject(), obj.get());
    return result;
}


JSValue jsSVGMarkerElementMarkerUnits(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSSVGMarkerElement* castedThis = jsCast<JSSVGMarkerElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGMarkerElement* impl = static_cast<SVGMarkerElement*>(castedThis->impl());
    RefPtr<SVGAnimatedEnumeration> obj = impl->markerUnitsAnimated();
    JSValue result =  toJS(exec, castedThis->globalObject(), obj.get());
    return result;
}


JSValue jsSVGMarkerElementMarkerWidth(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSSVGMarkerElement* castedThis = jsCast<JSSVGMarkerElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGMarkerElement* impl = static_cast<SVGMarkerElement*>(castedThis->impl());
    RefPtr<SVGAnimatedLength> obj = impl->markerWidthAnimated();
    JSValue result =  toJS(exec, castedThis->globalObject(), obj.get());
    return result;
}


JSValue jsSVGMarkerElementMarkerHeight(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSSVGMarkerElement* castedThis = jsCast<JSSVGMarkerElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGMarkerElement* impl = static_cast<SVGMarkerElement*>(castedThis->impl());
    RefPtr<SVGAnimatedLength> obj = impl->markerHeightAnimated();
    JSValue result =  toJS(exec, castedThis->globalObject(), obj.get());
    return result;
}


JSValue jsSVGMarkerElementOrientType(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSSVGMarkerElement* castedThis = jsCast<JSSVGMarkerElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGMarkerElement* impl = static_cast<SVGMarkerElement*>(castedThis->impl());
    RefPtr<SVGAnimatedEnumeration> obj = impl->orientTypeAnimated();
    JSValue result =  toJS(exec, castedThis->globalObject(), obj.get());
    return result;
}


JSValue jsSVGMarkerElementOrientAngle(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSSVGMarkerElement* castedThis = jsCast<JSSVGMarkerElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGMarkerElement* impl = static_cast<SVGMarkerElement*>(castedThis->impl());
    RefPtr<SVGAnimatedAngle> obj = impl->orientAngleAnimated();
    JSValue result =  toJS(exec, castedThis->globalObject(), obj.get());
    return result;
}


#if ENABLE(SVG)
JSValue jsSVGMarkerElementExternalResourcesRequired(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSSVGMarkerElement* castedThis = jsCast<JSSVGMarkerElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGMarkerElement* impl = static_cast<SVGMarkerElement*>(castedThis->impl());
    RefPtr<SVGAnimatedBoolean> obj = impl->externalResourcesRequiredAnimated();
    JSValue result =  toJS(exec, castedThis->globalObject(), obj.get());
    return result;
}

#endif

#if ENABLE(SVG)
JSValue jsSVGMarkerElementViewBox(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSSVGMarkerElement* castedThis = jsCast<JSSVGMarkerElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGMarkerElement* impl = static_cast<SVGMarkerElement*>(castedThis->impl());
    RefPtr<SVGAnimatedRect> obj = impl->viewBoxAnimated();
    JSValue result =  toJS(exec, castedThis->globalObject(), obj.get());
    return result;
}

#endif

#if ENABLE(SVG)
JSValue jsSVGMarkerElementPreserveAspectRatio(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSSVGMarkerElement* castedThis = jsCast<JSSVGMarkerElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGMarkerElement* impl = static_cast<SVGMarkerElement*>(castedThis->impl());
    RefPtr<SVGAnimatedPreserveAspectRatio> obj = impl->preserveAspectRatioAnimated();
    JSValue result =  toJS(exec, castedThis->globalObject(), obj.get());
    return result;
}

#endif

JSValue jsSVGMarkerElementConstructor(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSSVGMarkerElement* domObject = jsCast<JSSVGMarkerElement*>(asObject(slotBase));
    return JSSVGMarkerElement::getConstructor(exec, domObject->globalObject());
}

JSValue JSSVGMarkerElement::getConstructor(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSSVGMarkerElementConstructor>(exec, jsCast<JSDOMGlobalObject*>(globalObject));
}

EncodedJSValue JSC_HOST_CALL jsSVGMarkerElementPrototypeFunctionSetOrientToAuto(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSSVGMarkerElement::s_info))
        return throwVMTypeError(exec);
    JSSVGMarkerElement* castedThis = jsCast<JSSVGMarkerElement*>(asObject(thisValue));
    ASSERT_GC_OBJECT_INHERITS(castedThis, &JSSVGMarkerElement::s_info);
    SVGMarkerElement* impl = static_cast<SVGMarkerElement*>(castedThis->impl());
    impl->setOrientToAuto();
    return JSValue::encode(jsUndefined());
}

EncodedJSValue JSC_HOST_CALL jsSVGMarkerElementPrototypeFunctionSetOrientToAngle(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSSVGMarkerElement::s_info))
        return throwVMTypeError(exec);
    JSSVGMarkerElement* castedThis = jsCast<JSSVGMarkerElement*>(asObject(thisValue));
    ASSERT_GC_OBJECT_INHERITS(castedThis, &JSSVGMarkerElement::s_info);
    SVGMarkerElement* impl = static_cast<SVGMarkerElement*>(castedThis->impl());
    SVGPropertyTearOff<SVGAngle>* angle(toSVGAngle(exec->argument(0)));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());
    if (!angle) {
        setDOMException(exec, TYPE_MISMATCH_ERR);
        return JSValue::encode(jsUndefined());
    }
    impl->setOrientToAngle(angle->propertyReference());
    return JSValue::encode(jsUndefined());
}

// Constant getters

JSValue jsSVGMarkerElementSVG_MARKERUNITS_UNKNOWN(ExecState* exec, JSValue, PropertyName)
{
    UNUSED_PARAM(exec);
    return jsNumber(static_cast<int>(0));
}

JSValue jsSVGMarkerElementSVG_MARKERUNITS_USERSPACEONUSE(ExecState* exec, JSValue, PropertyName)
{
    UNUSED_PARAM(exec);
    return jsNumber(static_cast<int>(1));
}

JSValue jsSVGMarkerElementSVG_MARKERUNITS_STROKEWIDTH(ExecState* exec, JSValue, PropertyName)
{
    UNUSED_PARAM(exec);
    return jsNumber(static_cast<int>(2));
}

JSValue jsSVGMarkerElementSVG_MARKER_ORIENT_UNKNOWN(ExecState* exec, JSValue, PropertyName)
{
    UNUSED_PARAM(exec);
    return jsNumber(static_cast<int>(0));
}

JSValue jsSVGMarkerElementSVG_MARKER_ORIENT_AUTO(ExecState* exec, JSValue, PropertyName)
{
    UNUSED_PARAM(exec);
    return jsNumber(static_cast<int>(1));
}

JSValue jsSVGMarkerElementSVG_MARKER_ORIENT_ANGLE(ExecState* exec, JSValue, PropertyName)
{
    UNUSED_PARAM(exec);
    return jsNumber(static_cast<int>(2));
}


}

#endif // ENABLE(SVG)

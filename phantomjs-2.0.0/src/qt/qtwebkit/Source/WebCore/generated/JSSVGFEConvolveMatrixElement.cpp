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

#if ENABLE(FILTERS) && ENABLE(SVG)

#include "JSSVGFEConvolveMatrixElement.h"

#include "JSSVGAnimatedBoolean.h"
#include "JSSVGAnimatedEnumeration.h"
#include "JSSVGAnimatedInteger.h"
#include "JSSVGAnimatedNumber.h"
#include "JSSVGAnimatedNumberList.h"
#include "JSSVGAnimatedString.h"
#include "SVGFEConvolveMatrixElement.h"
#include <wtf/GetPtr.h>

#if ENABLE(SVG)
#include "JSSVGAnimatedLength.h"
#endif

using namespace JSC;

namespace WebCore {

/* Hash table */

static const HashTableValue JSSVGFEConvolveMatrixElementTableValues[] =
{
    { "in1", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGFEConvolveMatrixElementIn1), (intptr_t)0, NoIntrinsic },
    { "orderX", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGFEConvolveMatrixElementOrderX), (intptr_t)0, NoIntrinsic },
    { "orderY", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGFEConvolveMatrixElementOrderY), (intptr_t)0, NoIntrinsic },
    { "kernelMatrix", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGFEConvolveMatrixElementKernelMatrix), (intptr_t)0, NoIntrinsic },
    { "divisor", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGFEConvolveMatrixElementDivisor), (intptr_t)0, NoIntrinsic },
    { "bias", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGFEConvolveMatrixElementBias), (intptr_t)0, NoIntrinsic },
    { "targetX", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGFEConvolveMatrixElementTargetX), (intptr_t)0, NoIntrinsic },
    { "targetY", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGFEConvolveMatrixElementTargetY), (intptr_t)0, NoIntrinsic },
    { "edgeMode", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGFEConvolveMatrixElementEdgeMode), (intptr_t)0, NoIntrinsic },
    { "kernelUnitLengthX", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGFEConvolveMatrixElementKernelUnitLengthX), (intptr_t)0, NoIntrinsic },
    { "kernelUnitLengthY", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGFEConvolveMatrixElementKernelUnitLengthY), (intptr_t)0, NoIntrinsic },
    { "preserveAlpha", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGFEConvolveMatrixElementPreserveAlpha), (intptr_t)0, NoIntrinsic },
#if ENABLE(SVG)
    { "x", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGFEConvolveMatrixElementX), (intptr_t)0, NoIntrinsic },
#endif
#if ENABLE(SVG)
    { "y", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGFEConvolveMatrixElementY), (intptr_t)0, NoIntrinsic },
#endif
#if ENABLE(SVG)
    { "width", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGFEConvolveMatrixElementWidth), (intptr_t)0, NoIntrinsic },
#endif
#if ENABLE(SVG)
    { "height", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGFEConvolveMatrixElementHeight), (intptr_t)0, NoIntrinsic },
#endif
#if ENABLE(SVG)
    { "result", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGFEConvolveMatrixElementResult), (intptr_t)0, NoIntrinsic },
#endif
    { "constructor", DontEnum | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGFEConvolveMatrixElementConstructor), (intptr_t)0, NoIntrinsic },
    { 0, 0, 0, 0, NoIntrinsic }
};

static const HashTable JSSVGFEConvolveMatrixElementTable = { 67, 63, JSSVGFEConvolveMatrixElementTableValues, 0 };
/* Hash table for constructor */

static const HashTableValue JSSVGFEConvolveMatrixElementConstructorTableValues[] =
{
    { "SVG_EDGEMODE_UNKNOWN", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGFEConvolveMatrixElementSVG_EDGEMODE_UNKNOWN), (intptr_t)0, NoIntrinsic },
    { "SVG_EDGEMODE_DUPLICATE", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGFEConvolveMatrixElementSVG_EDGEMODE_DUPLICATE), (intptr_t)0, NoIntrinsic },
    { "SVG_EDGEMODE_WRAP", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGFEConvolveMatrixElementSVG_EDGEMODE_WRAP), (intptr_t)0, NoIntrinsic },
    { "SVG_EDGEMODE_NONE", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGFEConvolveMatrixElementSVG_EDGEMODE_NONE), (intptr_t)0, NoIntrinsic },
    { 0, 0, 0, 0, NoIntrinsic }
};

static const HashTable JSSVGFEConvolveMatrixElementConstructorTable = { 9, 7, JSSVGFEConvolveMatrixElementConstructorTableValues, 0 };
const ClassInfo JSSVGFEConvolveMatrixElementConstructor::s_info = { "SVGFEConvolveMatrixElementConstructor", &Base::s_info, &JSSVGFEConvolveMatrixElementConstructorTable, 0, CREATE_METHOD_TABLE(JSSVGFEConvolveMatrixElementConstructor) };

JSSVGFEConvolveMatrixElementConstructor::JSSVGFEConvolveMatrixElementConstructor(Structure* structure, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(structure, globalObject)
{
}

void JSSVGFEConvolveMatrixElementConstructor::finishCreation(ExecState* exec, JSDOMGlobalObject* globalObject)
{
    Base::finishCreation(exec->vm());
    ASSERT(inherits(&s_info));
    putDirect(exec->vm(), exec->propertyNames().prototype, JSSVGFEConvolveMatrixElementPrototype::self(exec, globalObject), DontDelete | ReadOnly);
    putDirect(exec->vm(), exec->propertyNames().length, jsNumber(0), ReadOnly | DontDelete | DontEnum);
}

bool JSSVGFEConvolveMatrixElementConstructor::getOwnPropertySlot(JSCell* cell, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSSVGFEConvolveMatrixElementConstructor, JSDOMWrapper>(exec, &JSSVGFEConvolveMatrixElementConstructorTable, jsCast<JSSVGFEConvolveMatrixElementConstructor*>(cell), propertyName, slot);
}

bool JSSVGFEConvolveMatrixElementConstructor::getOwnPropertyDescriptor(JSObject* object, ExecState* exec, PropertyName propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSSVGFEConvolveMatrixElementConstructor, JSDOMWrapper>(exec, &JSSVGFEConvolveMatrixElementConstructorTable, jsCast<JSSVGFEConvolveMatrixElementConstructor*>(object), propertyName, descriptor);
}

/* Hash table for prototype */

static const HashTableValue JSSVGFEConvolveMatrixElementPrototypeTableValues[] =
{
    { "SVG_EDGEMODE_UNKNOWN", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGFEConvolveMatrixElementSVG_EDGEMODE_UNKNOWN), (intptr_t)0, NoIntrinsic },
    { "SVG_EDGEMODE_DUPLICATE", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGFEConvolveMatrixElementSVG_EDGEMODE_DUPLICATE), (intptr_t)0, NoIntrinsic },
    { "SVG_EDGEMODE_WRAP", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGFEConvolveMatrixElementSVG_EDGEMODE_WRAP), (intptr_t)0, NoIntrinsic },
    { "SVG_EDGEMODE_NONE", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGFEConvolveMatrixElementSVG_EDGEMODE_NONE), (intptr_t)0, NoIntrinsic },
    { 0, 0, 0, 0, NoIntrinsic }
};

static const HashTable JSSVGFEConvolveMatrixElementPrototypeTable = { 9, 7, JSSVGFEConvolveMatrixElementPrototypeTableValues, 0 };
const ClassInfo JSSVGFEConvolveMatrixElementPrototype::s_info = { "SVGFEConvolveMatrixElementPrototype", &Base::s_info, &JSSVGFEConvolveMatrixElementPrototypeTable, 0, CREATE_METHOD_TABLE(JSSVGFEConvolveMatrixElementPrototype) };

JSObject* JSSVGFEConvolveMatrixElementPrototype::self(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSSVGFEConvolveMatrixElement>(exec, globalObject);
}

bool JSSVGFEConvolveMatrixElementPrototype::getOwnPropertySlot(JSCell* cell, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    JSSVGFEConvolveMatrixElementPrototype* thisObject = jsCast<JSSVGFEConvolveMatrixElementPrototype*>(cell);
    return getStaticValueSlot<JSSVGFEConvolveMatrixElementPrototype, JSObject>(exec, &JSSVGFEConvolveMatrixElementPrototypeTable, thisObject, propertyName, slot);
}

bool JSSVGFEConvolveMatrixElementPrototype::getOwnPropertyDescriptor(JSObject* object, ExecState* exec, PropertyName propertyName, PropertyDescriptor& descriptor)
{
    JSSVGFEConvolveMatrixElementPrototype* thisObject = jsCast<JSSVGFEConvolveMatrixElementPrototype*>(object);
    return getStaticValueDescriptor<JSSVGFEConvolveMatrixElementPrototype, JSObject>(exec, &JSSVGFEConvolveMatrixElementPrototypeTable, thisObject, propertyName, descriptor);
}

const ClassInfo JSSVGFEConvolveMatrixElement::s_info = { "SVGFEConvolveMatrixElement", &Base::s_info, &JSSVGFEConvolveMatrixElementTable, 0 , CREATE_METHOD_TABLE(JSSVGFEConvolveMatrixElement) };

JSSVGFEConvolveMatrixElement::JSSVGFEConvolveMatrixElement(Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<SVGFEConvolveMatrixElement> impl)
    : JSSVGStyledElement(structure, globalObject, impl)
{
}

void JSSVGFEConvolveMatrixElement::finishCreation(VM& vm)
{
    Base::finishCreation(vm);
    ASSERT(inherits(&s_info));
}

JSObject* JSSVGFEConvolveMatrixElement::createPrototype(ExecState* exec, JSGlobalObject* globalObject)
{
    return JSSVGFEConvolveMatrixElementPrototype::create(exec->vm(), globalObject, JSSVGFEConvolveMatrixElementPrototype::createStructure(exec->vm(), globalObject, JSSVGStyledElementPrototype::self(exec, globalObject)));
}

bool JSSVGFEConvolveMatrixElement::getOwnPropertySlot(JSCell* cell, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    JSSVGFEConvolveMatrixElement* thisObject = jsCast<JSSVGFEConvolveMatrixElement*>(cell);
    ASSERT_GC_OBJECT_INHERITS(thisObject, &s_info);
    return getStaticValueSlot<JSSVGFEConvolveMatrixElement, Base>(exec, &JSSVGFEConvolveMatrixElementTable, thisObject, propertyName, slot);
}

bool JSSVGFEConvolveMatrixElement::getOwnPropertyDescriptor(JSObject* object, ExecState* exec, PropertyName propertyName, PropertyDescriptor& descriptor)
{
    JSSVGFEConvolveMatrixElement* thisObject = jsCast<JSSVGFEConvolveMatrixElement*>(object);
    ASSERT_GC_OBJECT_INHERITS(thisObject, &s_info);
    return getStaticValueDescriptor<JSSVGFEConvolveMatrixElement, Base>(exec, &JSSVGFEConvolveMatrixElementTable, thisObject, propertyName, descriptor);
}

JSValue jsSVGFEConvolveMatrixElementIn1(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSSVGFEConvolveMatrixElement* castedThis = jsCast<JSSVGFEConvolveMatrixElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGFEConvolveMatrixElement* impl = static_cast<SVGFEConvolveMatrixElement*>(castedThis->impl());
    RefPtr<SVGAnimatedString> obj = impl->in1Animated();
    JSValue result =  toJS(exec, castedThis->globalObject(), obj.get());
    return result;
}


JSValue jsSVGFEConvolveMatrixElementOrderX(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSSVGFEConvolveMatrixElement* castedThis = jsCast<JSSVGFEConvolveMatrixElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGFEConvolveMatrixElement* impl = static_cast<SVGFEConvolveMatrixElement*>(castedThis->impl());
    RefPtr<SVGAnimatedInteger> obj = impl->orderXAnimated();
    JSValue result =  toJS(exec, castedThis->globalObject(), obj.get());
    return result;
}


JSValue jsSVGFEConvolveMatrixElementOrderY(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSSVGFEConvolveMatrixElement* castedThis = jsCast<JSSVGFEConvolveMatrixElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGFEConvolveMatrixElement* impl = static_cast<SVGFEConvolveMatrixElement*>(castedThis->impl());
    RefPtr<SVGAnimatedInteger> obj = impl->orderYAnimated();
    JSValue result =  toJS(exec, castedThis->globalObject(), obj.get());
    return result;
}


JSValue jsSVGFEConvolveMatrixElementKernelMatrix(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSSVGFEConvolveMatrixElement* castedThis = jsCast<JSSVGFEConvolveMatrixElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGFEConvolveMatrixElement* impl = static_cast<SVGFEConvolveMatrixElement*>(castedThis->impl());
    RefPtr<SVGAnimatedNumberList> obj = impl->kernelMatrixAnimated();
    JSValue result =  toJS(exec, castedThis->globalObject(), obj.get());
    return result;
}


JSValue jsSVGFEConvolveMatrixElementDivisor(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSSVGFEConvolveMatrixElement* castedThis = jsCast<JSSVGFEConvolveMatrixElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGFEConvolveMatrixElement* impl = static_cast<SVGFEConvolveMatrixElement*>(castedThis->impl());
    RefPtr<SVGAnimatedNumber> obj = impl->divisorAnimated();
    JSValue result =  toJS(exec, castedThis->globalObject(), obj.get());
    return result;
}


JSValue jsSVGFEConvolveMatrixElementBias(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSSVGFEConvolveMatrixElement* castedThis = jsCast<JSSVGFEConvolveMatrixElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGFEConvolveMatrixElement* impl = static_cast<SVGFEConvolveMatrixElement*>(castedThis->impl());
    RefPtr<SVGAnimatedNumber> obj = impl->biasAnimated();
    JSValue result =  toJS(exec, castedThis->globalObject(), obj.get());
    return result;
}


JSValue jsSVGFEConvolveMatrixElementTargetX(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSSVGFEConvolveMatrixElement* castedThis = jsCast<JSSVGFEConvolveMatrixElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGFEConvolveMatrixElement* impl = static_cast<SVGFEConvolveMatrixElement*>(castedThis->impl());
    RefPtr<SVGAnimatedInteger> obj = impl->targetXAnimated();
    JSValue result =  toJS(exec, castedThis->globalObject(), obj.get());
    return result;
}


JSValue jsSVGFEConvolveMatrixElementTargetY(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSSVGFEConvolveMatrixElement* castedThis = jsCast<JSSVGFEConvolveMatrixElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGFEConvolveMatrixElement* impl = static_cast<SVGFEConvolveMatrixElement*>(castedThis->impl());
    RefPtr<SVGAnimatedInteger> obj = impl->targetYAnimated();
    JSValue result =  toJS(exec, castedThis->globalObject(), obj.get());
    return result;
}


JSValue jsSVGFEConvolveMatrixElementEdgeMode(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSSVGFEConvolveMatrixElement* castedThis = jsCast<JSSVGFEConvolveMatrixElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGFEConvolveMatrixElement* impl = static_cast<SVGFEConvolveMatrixElement*>(castedThis->impl());
    RefPtr<SVGAnimatedEnumeration> obj = impl->edgeModeAnimated();
    JSValue result =  toJS(exec, castedThis->globalObject(), obj.get());
    return result;
}


JSValue jsSVGFEConvolveMatrixElementKernelUnitLengthX(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSSVGFEConvolveMatrixElement* castedThis = jsCast<JSSVGFEConvolveMatrixElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGFEConvolveMatrixElement* impl = static_cast<SVGFEConvolveMatrixElement*>(castedThis->impl());
    RefPtr<SVGAnimatedNumber> obj = impl->kernelUnitLengthXAnimated();
    JSValue result =  toJS(exec, castedThis->globalObject(), obj.get());
    return result;
}


JSValue jsSVGFEConvolveMatrixElementKernelUnitLengthY(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSSVGFEConvolveMatrixElement* castedThis = jsCast<JSSVGFEConvolveMatrixElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGFEConvolveMatrixElement* impl = static_cast<SVGFEConvolveMatrixElement*>(castedThis->impl());
    RefPtr<SVGAnimatedNumber> obj = impl->kernelUnitLengthYAnimated();
    JSValue result =  toJS(exec, castedThis->globalObject(), obj.get());
    return result;
}


JSValue jsSVGFEConvolveMatrixElementPreserveAlpha(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSSVGFEConvolveMatrixElement* castedThis = jsCast<JSSVGFEConvolveMatrixElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGFEConvolveMatrixElement* impl = static_cast<SVGFEConvolveMatrixElement*>(castedThis->impl());
    RefPtr<SVGAnimatedBoolean> obj = impl->preserveAlphaAnimated();
    JSValue result =  toJS(exec, castedThis->globalObject(), obj.get());
    return result;
}


#if ENABLE(SVG)
JSValue jsSVGFEConvolveMatrixElementX(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSSVGFEConvolveMatrixElement* castedThis = jsCast<JSSVGFEConvolveMatrixElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGFEConvolveMatrixElement* impl = static_cast<SVGFEConvolveMatrixElement*>(castedThis->impl());
    RefPtr<SVGAnimatedLength> obj = impl->xAnimated();
    JSValue result =  toJS(exec, castedThis->globalObject(), obj.get());
    return result;
}

#endif

#if ENABLE(SVG)
JSValue jsSVGFEConvolveMatrixElementY(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSSVGFEConvolveMatrixElement* castedThis = jsCast<JSSVGFEConvolveMatrixElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGFEConvolveMatrixElement* impl = static_cast<SVGFEConvolveMatrixElement*>(castedThis->impl());
    RefPtr<SVGAnimatedLength> obj = impl->yAnimated();
    JSValue result =  toJS(exec, castedThis->globalObject(), obj.get());
    return result;
}

#endif

#if ENABLE(SVG)
JSValue jsSVGFEConvolveMatrixElementWidth(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSSVGFEConvolveMatrixElement* castedThis = jsCast<JSSVGFEConvolveMatrixElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGFEConvolveMatrixElement* impl = static_cast<SVGFEConvolveMatrixElement*>(castedThis->impl());
    RefPtr<SVGAnimatedLength> obj = impl->widthAnimated();
    JSValue result =  toJS(exec, castedThis->globalObject(), obj.get());
    return result;
}

#endif

#if ENABLE(SVG)
JSValue jsSVGFEConvolveMatrixElementHeight(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSSVGFEConvolveMatrixElement* castedThis = jsCast<JSSVGFEConvolveMatrixElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGFEConvolveMatrixElement* impl = static_cast<SVGFEConvolveMatrixElement*>(castedThis->impl());
    RefPtr<SVGAnimatedLength> obj = impl->heightAnimated();
    JSValue result =  toJS(exec, castedThis->globalObject(), obj.get());
    return result;
}

#endif

#if ENABLE(SVG)
JSValue jsSVGFEConvolveMatrixElementResult(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSSVGFEConvolveMatrixElement* castedThis = jsCast<JSSVGFEConvolveMatrixElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGFEConvolveMatrixElement* impl = static_cast<SVGFEConvolveMatrixElement*>(castedThis->impl());
    RefPtr<SVGAnimatedString> obj = impl->resultAnimated();
    JSValue result =  toJS(exec, castedThis->globalObject(), obj.get());
    return result;
}

#endif

JSValue jsSVGFEConvolveMatrixElementConstructor(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSSVGFEConvolveMatrixElement* domObject = jsCast<JSSVGFEConvolveMatrixElement*>(asObject(slotBase));
    return JSSVGFEConvolveMatrixElement::getConstructor(exec, domObject->globalObject());
}

JSValue JSSVGFEConvolveMatrixElement::getConstructor(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSSVGFEConvolveMatrixElementConstructor>(exec, jsCast<JSDOMGlobalObject*>(globalObject));
}

// Constant getters

JSValue jsSVGFEConvolveMatrixElementSVG_EDGEMODE_UNKNOWN(ExecState* exec, JSValue, PropertyName)
{
    UNUSED_PARAM(exec);
    return jsNumber(static_cast<int>(0));
}

JSValue jsSVGFEConvolveMatrixElementSVG_EDGEMODE_DUPLICATE(ExecState* exec, JSValue, PropertyName)
{
    UNUSED_PARAM(exec);
    return jsNumber(static_cast<int>(1));
}

JSValue jsSVGFEConvolveMatrixElementSVG_EDGEMODE_WRAP(ExecState* exec, JSValue, PropertyName)
{
    UNUSED_PARAM(exec);
    return jsNumber(static_cast<int>(2));
}

JSValue jsSVGFEConvolveMatrixElementSVG_EDGEMODE_NONE(ExecState* exec, JSValue, PropertyName)
{
    UNUSED_PARAM(exec);
    return jsNumber(static_cast<int>(3));
}


}

#endif // ENABLE(FILTERS) && ENABLE(SVG)

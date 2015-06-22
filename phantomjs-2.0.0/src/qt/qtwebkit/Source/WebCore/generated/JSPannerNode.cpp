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

#if ENABLE(WEB_AUDIO)

#include "JSPannerNode.h"

#include "ExceptionCode.h"
#include "JSDOMBinding.h"
#include "KURL.h"
#include "PannerNode.h"
#include <runtime/Error.h>
#include <runtime/JSString.h>
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

/* Hash table */

static const HashTableValue JSPannerNodeTableValues[] =
{
    { "panningModel", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsPannerNodePanningModel), (intptr_t)setJSPannerNodePanningModel, NoIntrinsic },
    { "distanceModel", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsPannerNodeDistanceModel), (intptr_t)setJSPannerNodeDistanceModel, NoIntrinsic },
    { "refDistance", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsPannerNodeRefDistance), (intptr_t)setJSPannerNodeRefDistance, NoIntrinsic },
    { "maxDistance", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsPannerNodeMaxDistance), (intptr_t)setJSPannerNodeMaxDistance, NoIntrinsic },
    { "rolloffFactor", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsPannerNodeRolloffFactor), (intptr_t)setJSPannerNodeRolloffFactor, NoIntrinsic },
    { "coneInnerAngle", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsPannerNodeConeInnerAngle), (intptr_t)setJSPannerNodeConeInnerAngle, NoIntrinsic },
    { "coneOuterAngle", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsPannerNodeConeOuterAngle), (intptr_t)setJSPannerNodeConeOuterAngle, NoIntrinsic },
    { "coneOuterGain", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsPannerNodeConeOuterGain), (intptr_t)setJSPannerNodeConeOuterGain, NoIntrinsic },
    { "constructor", DontEnum | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsPannerNodeConstructor), (intptr_t)0, NoIntrinsic },
    { 0, 0, 0, 0, NoIntrinsic }
};

static const HashTable JSPannerNodeTable = { 34, 31, JSPannerNodeTableValues, 0 };
/* Hash table for constructor */

static const HashTableValue JSPannerNodeConstructorTableValues[] =
{
    { "EQUALPOWER", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsPannerNodeEQUALPOWER), (intptr_t)0, NoIntrinsic },
    { "HRTF", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsPannerNodeHRTF), (intptr_t)0, NoIntrinsic },
    { "SOUNDFIELD", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsPannerNodeSOUNDFIELD), (intptr_t)0, NoIntrinsic },
    { "LINEAR_DISTANCE", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsPannerNodeLINEAR_DISTANCE), (intptr_t)0, NoIntrinsic },
    { "INVERSE_DISTANCE", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsPannerNodeINVERSE_DISTANCE), (intptr_t)0, NoIntrinsic },
    { "EXPONENTIAL_DISTANCE", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsPannerNodeEXPONENTIAL_DISTANCE), (intptr_t)0, NoIntrinsic },
    { 0, 0, 0, 0, NoIntrinsic }
};

static const HashTable JSPannerNodeConstructorTable = { 16, 15, JSPannerNodeConstructorTableValues, 0 };

COMPILE_ASSERT(0 == PannerNode::EQUALPOWER, PannerNodeEnumEQUALPOWERIsWrongUseDoNotCheckConstants);
COMPILE_ASSERT(1 == PannerNode::HRTF, PannerNodeEnumHRTFIsWrongUseDoNotCheckConstants);
COMPILE_ASSERT(2 == PannerNode::SOUNDFIELD, PannerNodeEnumSOUNDFIELDIsWrongUseDoNotCheckConstants);
COMPILE_ASSERT(0 == PannerNode::LINEAR_DISTANCE, PannerNodeEnumLINEAR_DISTANCEIsWrongUseDoNotCheckConstants);
COMPILE_ASSERT(1 == PannerNode::INVERSE_DISTANCE, PannerNodeEnumINVERSE_DISTANCEIsWrongUseDoNotCheckConstants);
COMPILE_ASSERT(2 == PannerNode::EXPONENTIAL_DISTANCE, PannerNodeEnumEXPONENTIAL_DISTANCEIsWrongUseDoNotCheckConstants);

const ClassInfo JSPannerNodeConstructor::s_info = { "webkitAudioPannerNodeConstructor", &Base::s_info, &JSPannerNodeConstructorTable, 0, CREATE_METHOD_TABLE(JSPannerNodeConstructor) };

JSPannerNodeConstructor::JSPannerNodeConstructor(Structure* structure, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(structure, globalObject)
{
}

void JSPannerNodeConstructor::finishCreation(ExecState* exec, JSDOMGlobalObject* globalObject)
{
    Base::finishCreation(exec->vm());
    ASSERT(inherits(&s_info));
    putDirect(exec->vm(), exec->propertyNames().prototype, JSPannerNodePrototype::self(exec, globalObject), DontDelete | ReadOnly);
    putDirect(exec->vm(), exec->propertyNames().length, jsNumber(0), ReadOnly | DontDelete | DontEnum);
}

bool JSPannerNodeConstructor::getOwnPropertySlot(JSCell* cell, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSPannerNodeConstructor, JSDOMWrapper>(exec, &JSPannerNodeConstructorTable, jsCast<JSPannerNodeConstructor*>(cell), propertyName, slot);
}

bool JSPannerNodeConstructor::getOwnPropertyDescriptor(JSObject* object, ExecState* exec, PropertyName propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSPannerNodeConstructor, JSDOMWrapper>(exec, &JSPannerNodeConstructorTable, jsCast<JSPannerNodeConstructor*>(object), propertyName, descriptor);
}

/* Hash table for prototype */

static const HashTableValue JSPannerNodePrototypeTableValues[] =
{
    { "EQUALPOWER", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsPannerNodeEQUALPOWER), (intptr_t)0, NoIntrinsic },
    { "HRTF", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsPannerNodeHRTF), (intptr_t)0, NoIntrinsic },
    { "SOUNDFIELD", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsPannerNodeSOUNDFIELD), (intptr_t)0, NoIntrinsic },
    { "LINEAR_DISTANCE", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsPannerNodeLINEAR_DISTANCE), (intptr_t)0, NoIntrinsic },
    { "INVERSE_DISTANCE", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsPannerNodeINVERSE_DISTANCE), (intptr_t)0, NoIntrinsic },
    { "EXPONENTIAL_DISTANCE", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsPannerNodeEXPONENTIAL_DISTANCE), (intptr_t)0, NoIntrinsic },
    { "setPosition", DontDelete | JSC::Function, (intptr_t)static_cast<NativeFunction>(jsPannerNodePrototypeFunctionSetPosition), (intptr_t)3, NoIntrinsic },
    { "setOrientation", DontDelete | JSC::Function, (intptr_t)static_cast<NativeFunction>(jsPannerNodePrototypeFunctionSetOrientation), (intptr_t)3, NoIntrinsic },
    { "setVelocity", DontDelete | JSC::Function, (intptr_t)static_cast<NativeFunction>(jsPannerNodePrototypeFunctionSetVelocity), (intptr_t)3, NoIntrinsic },
    { 0, 0, 0, 0, NoIntrinsic }
};

static const HashTable JSPannerNodePrototypeTable = { 33, 31, JSPannerNodePrototypeTableValues, 0 };
const ClassInfo JSPannerNodePrototype::s_info = { "webkitAudioPannerNodePrototype", &Base::s_info, &JSPannerNodePrototypeTable, 0, CREATE_METHOD_TABLE(JSPannerNodePrototype) };

JSObject* JSPannerNodePrototype::self(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSPannerNode>(exec, globalObject);
}

bool JSPannerNodePrototype::getOwnPropertySlot(JSCell* cell, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    JSPannerNodePrototype* thisObject = jsCast<JSPannerNodePrototype*>(cell);
    return getStaticPropertySlot<JSPannerNodePrototype, JSObject>(exec, &JSPannerNodePrototypeTable, thisObject, propertyName, slot);
}

bool JSPannerNodePrototype::getOwnPropertyDescriptor(JSObject* object, ExecState* exec, PropertyName propertyName, PropertyDescriptor& descriptor)
{
    JSPannerNodePrototype* thisObject = jsCast<JSPannerNodePrototype*>(object);
    return getStaticPropertyDescriptor<JSPannerNodePrototype, JSObject>(exec, &JSPannerNodePrototypeTable, thisObject, propertyName, descriptor);
}

const ClassInfo JSPannerNode::s_info = { "webkitAudioPannerNode", &Base::s_info, &JSPannerNodeTable, 0 , CREATE_METHOD_TABLE(JSPannerNode) };

JSPannerNode::JSPannerNode(Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<PannerNode> impl)
    : JSAudioNode(structure, globalObject, impl)
{
}

void JSPannerNode::finishCreation(VM& vm)
{
    Base::finishCreation(vm);
    ASSERT(inherits(&s_info));
}

JSObject* JSPannerNode::createPrototype(ExecState* exec, JSGlobalObject* globalObject)
{
    return JSPannerNodePrototype::create(exec->vm(), globalObject, JSPannerNodePrototype::createStructure(exec->vm(), globalObject, JSAudioNodePrototype::self(exec, globalObject)));
}

bool JSPannerNode::getOwnPropertySlot(JSCell* cell, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    JSPannerNode* thisObject = jsCast<JSPannerNode*>(cell);
    ASSERT_GC_OBJECT_INHERITS(thisObject, &s_info);
    return getStaticValueSlot<JSPannerNode, Base>(exec, &JSPannerNodeTable, thisObject, propertyName, slot);
}

bool JSPannerNode::getOwnPropertyDescriptor(JSObject* object, ExecState* exec, PropertyName propertyName, PropertyDescriptor& descriptor)
{
    JSPannerNode* thisObject = jsCast<JSPannerNode*>(object);
    ASSERT_GC_OBJECT_INHERITS(thisObject, &s_info);
    return getStaticValueDescriptor<JSPannerNode, Base>(exec, &JSPannerNodeTable, thisObject, propertyName, descriptor);
}

JSValue jsPannerNodePanningModel(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSPannerNode* castedThis = jsCast<JSPannerNode*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    PannerNode* impl = static_cast<PannerNode*>(castedThis->impl());
    JSValue result = jsStringWithCache(exec, impl->panningModel());
    return result;
}


JSValue jsPannerNodeDistanceModel(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSPannerNode* castedThis = jsCast<JSPannerNode*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    PannerNode* impl = static_cast<PannerNode*>(castedThis->impl());
    JSValue result = jsStringWithCache(exec, impl->distanceModel());
    return result;
}


JSValue jsPannerNodeRefDistance(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSPannerNode* castedThis = jsCast<JSPannerNode*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    PannerNode* impl = static_cast<PannerNode*>(castedThis->impl());
    JSValue result = jsNumber(impl->refDistance());
    return result;
}


JSValue jsPannerNodeMaxDistance(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSPannerNode* castedThis = jsCast<JSPannerNode*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    PannerNode* impl = static_cast<PannerNode*>(castedThis->impl());
    JSValue result = jsNumber(impl->maxDistance());
    return result;
}


JSValue jsPannerNodeRolloffFactor(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSPannerNode* castedThis = jsCast<JSPannerNode*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    PannerNode* impl = static_cast<PannerNode*>(castedThis->impl());
    JSValue result = jsNumber(impl->rolloffFactor());
    return result;
}


JSValue jsPannerNodeConeInnerAngle(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSPannerNode* castedThis = jsCast<JSPannerNode*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    PannerNode* impl = static_cast<PannerNode*>(castedThis->impl());
    JSValue result = jsNumber(impl->coneInnerAngle());
    return result;
}


JSValue jsPannerNodeConeOuterAngle(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSPannerNode* castedThis = jsCast<JSPannerNode*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    PannerNode* impl = static_cast<PannerNode*>(castedThis->impl());
    JSValue result = jsNumber(impl->coneOuterAngle());
    return result;
}


JSValue jsPannerNodeConeOuterGain(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSPannerNode* castedThis = jsCast<JSPannerNode*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    PannerNode* impl = static_cast<PannerNode*>(castedThis->impl());
    JSValue result = jsNumber(impl->coneOuterGain());
    return result;
}


JSValue jsPannerNodeConstructor(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSPannerNode* domObject = jsCast<JSPannerNode*>(asObject(slotBase));
    return JSPannerNode::getConstructor(exec, domObject->globalObject());
}

void JSPannerNode::put(JSCell* cell, ExecState* exec, PropertyName propertyName, JSValue value, PutPropertySlot& slot)
{
    JSPannerNode* thisObject = jsCast<JSPannerNode*>(cell);
    ASSERT_GC_OBJECT_INHERITS(thisObject, &s_info);
    lookupPut<JSPannerNode, Base>(exec, propertyName, value, &JSPannerNodeTable, thisObject, slot);
}

void setJSPannerNodePanningModel(ExecState* exec, JSObject* thisObject, JSValue value)
{
    UNUSED_PARAM(exec);
    jsCast<JSPannerNode*>(thisObject)->setPanningModel(exec, value);
}


void setJSPannerNodeDistanceModel(ExecState* exec, JSObject* thisObject, JSValue value)
{
    UNUSED_PARAM(exec);
    jsCast<JSPannerNode*>(thisObject)->setDistanceModel(exec, value);
}


void setJSPannerNodeRefDistance(ExecState* exec, JSObject* thisObject, JSValue value)
{
    UNUSED_PARAM(exec);
    JSPannerNode* castedThis = jsCast<JSPannerNode*>(thisObject);
    PannerNode* impl = static_cast<PannerNode*>(castedThis->impl());
    double nativeValue(value.toNumber(exec));
    if (exec->hadException())
        return;
    impl->setRefDistance(nativeValue);
}


void setJSPannerNodeMaxDistance(ExecState* exec, JSObject* thisObject, JSValue value)
{
    UNUSED_PARAM(exec);
    JSPannerNode* castedThis = jsCast<JSPannerNode*>(thisObject);
    PannerNode* impl = static_cast<PannerNode*>(castedThis->impl());
    double nativeValue(value.toNumber(exec));
    if (exec->hadException())
        return;
    impl->setMaxDistance(nativeValue);
}


void setJSPannerNodeRolloffFactor(ExecState* exec, JSObject* thisObject, JSValue value)
{
    UNUSED_PARAM(exec);
    JSPannerNode* castedThis = jsCast<JSPannerNode*>(thisObject);
    PannerNode* impl = static_cast<PannerNode*>(castedThis->impl());
    double nativeValue(value.toNumber(exec));
    if (exec->hadException())
        return;
    impl->setRolloffFactor(nativeValue);
}


void setJSPannerNodeConeInnerAngle(ExecState* exec, JSObject* thisObject, JSValue value)
{
    UNUSED_PARAM(exec);
    JSPannerNode* castedThis = jsCast<JSPannerNode*>(thisObject);
    PannerNode* impl = static_cast<PannerNode*>(castedThis->impl());
    double nativeValue(value.toNumber(exec));
    if (exec->hadException())
        return;
    impl->setConeInnerAngle(nativeValue);
}


void setJSPannerNodeConeOuterAngle(ExecState* exec, JSObject* thisObject, JSValue value)
{
    UNUSED_PARAM(exec);
    JSPannerNode* castedThis = jsCast<JSPannerNode*>(thisObject);
    PannerNode* impl = static_cast<PannerNode*>(castedThis->impl());
    double nativeValue(value.toNumber(exec));
    if (exec->hadException())
        return;
    impl->setConeOuterAngle(nativeValue);
}


void setJSPannerNodeConeOuterGain(ExecState* exec, JSObject* thisObject, JSValue value)
{
    UNUSED_PARAM(exec);
    JSPannerNode* castedThis = jsCast<JSPannerNode*>(thisObject);
    PannerNode* impl = static_cast<PannerNode*>(castedThis->impl());
    double nativeValue(value.toNumber(exec));
    if (exec->hadException())
        return;
    impl->setConeOuterGain(nativeValue);
}


JSValue JSPannerNode::getConstructor(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSPannerNodeConstructor>(exec, jsCast<JSDOMGlobalObject*>(globalObject));
}

EncodedJSValue JSC_HOST_CALL jsPannerNodePrototypeFunctionSetPosition(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSPannerNode::s_info))
        return throwVMTypeError(exec);
    JSPannerNode* castedThis = jsCast<JSPannerNode*>(asObject(thisValue));
    ASSERT_GC_OBJECT_INHERITS(castedThis, &JSPannerNode::s_info);
    PannerNode* impl = static_cast<PannerNode*>(castedThis->impl());
    if (exec->argumentCount() < 3)
        return throwVMError(exec, createNotEnoughArgumentsError(exec));
    float x(exec->argument(0).toFloat(exec));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());
    float y(exec->argument(1).toFloat(exec));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());
    float z(exec->argument(2).toFloat(exec));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());
    impl->setPosition(x, y, z);
    return JSValue::encode(jsUndefined());
}

EncodedJSValue JSC_HOST_CALL jsPannerNodePrototypeFunctionSetOrientation(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSPannerNode::s_info))
        return throwVMTypeError(exec);
    JSPannerNode* castedThis = jsCast<JSPannerNode*>(asObject(thisValue));
    ASSERT_GC_OBJECT_INHERITS(castedThis, &JSPannerNode::s_info);
    PannerNode* impl = static_cast<PannerNode*>(castedThis->impl());
    if (exec->argumentCount() < 3)
        return throwVMError(exec, createNotEnoughArgumentsError(exec));
    float x(exec->argument(0).toFloat(exec));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());
    float y(exec->argument(1).toFloat(exec));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());
    float z(exec->argument(2).toFloat(exec));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());
    impl->setOrientation(x, y, z);
    return JSValue::encode(jsUndefined());
}

EncodedJSValue JSC_HOST_CALL jsPannerNodePrototypeFunctionSetVelocity(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSPannerNode::s_info))
        return throwVMTypeError(exec);
    JSPannerNode* castedThis = jsCast<JSPannerNode*>(asObject(thisValue));
    ASSERT_GC_OBJECT_INHERITS(castedThis, &JSPannerNode::s_info);
    PannerNode* impl = static_cast<PannerNode*>(castedThis->impl());
    if (exec->argumentCount() < 3)
        return throwVMError(exec, createNotEnoughArgumentsError(exec));
    float x(exec->argument(0).toFloat(exec));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());
    float y(exec->argument(1).toFloat(exec));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());
    float z(exec->argument(2).toFloat(exec));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());
    impl->setVelocity(x, y, z);
    return JSValue::encode(jsUndefined());
}

// Constant getters

JSValue jsPannerNodeEQUALPOWER(ExecState* exec, JSValue, PropertyName)
{
    UNUSED_PARAM(exec);
    return jsNumber(static_cast<int>(0));
}

JSValue jsPannerNodeHRTF(ExecState* exec, JSValue, PropertyName)
{
    UNUSED_PARAM(exec);
    return jsNumber(static_cast<int>(1));
}

JSValue jsPannerNodeSOUNDFIELD(ExecState* exec, JSValue, PropertyName)
{
    UNUSED_PARAM(exec);
    return jsNumber(static_cast<int>(2));
}

JSValue jsPannerNodeLINEAR_DISTANCE(ExecState* exec, JSValue, PropertyName)
{
    UNUSED_PARAM(exec);
    return jsNumber(static_cast<int>(0));
}

JSValue jsPannerNodeINVERSE_DISTANCE(ExecState* exec, JSValue, PropertyName)
{
    UNUSED_PARAM(exec);
    return jsNumber(static_cast<int>(1));
}

JSValue jsPannerNodeEXPONENTIAL_DISTANCE(ExecState* exec, JSValue, PropertyName)
{
    UNUSED_PARAM(exec);
    return jsNumber(static_cast<int>(2));
}

#if ENABLE(BINDING_INTEGRITY)
#if PLATFORM(WIN)
#pragma warning(disable: 4483)
extern "C" { extern void (*const __identifier("??_7PannerNode@WebCore@@6B@")[])(); }
#else
extern "C" { extern void* _ZTVN7WebCore10PannerNodeE[]; }
#endif
#endif
JSC::JSValue toJS(JSC::ExecState* exec, JSDOMGlobalObject* globalObject, PannerNode* impl)
{
    if (!impl)
        return jsNull();
    if (JSValue result = getExistingWrapper<JSPannerNode>(exec, impl))
        return result;

#if ENABLE(BINDING_INTEGRITY)
    void* actualVTablePointer = *(reinterpret_cast<void**>(impl));
#if PLATFORM(WIN)
    void* expectedVTablePointer = reinterpret_cast<void*>(__identifier("??_7PannerNode@WebCore@@6B@"));
#else
    void* expectedVTablePointer = &_ZTVN7WebCore10PannerNodeE[2];
#if COMPILER(CLANG) && COMPILER_SUPPORTS(CXX_STATIC_ASSERT)
    // If this fails PannerNode does not have a vtable, so you need to add the
    // ImplementationLacksVTable attribute to the interface definition
    COMPILE_ASSERT(__is_polymorphic(PannerNode), PannerNode_is_not_polymorphic);
#endif
#endif
    // If you hit this assertion you either have a use after free bug, or
    // PannerNode has subclasses. If PannerNode has subclasses that get passed
    // to toJS() we currently require PannerNode you to opt out of binding hardening
    // by adding the SkipVTableValidation attribute to the interface IDL definition
    RELEASE_ASSERT(actualVTablePointer == expectedVTablePointer);
#endif
    ReportMemoryCost<PannerNode>::reportMemoryCost(exec, impl);
    return createNewWrapper<JSPannerNode>(exec, globalObject, impl);
}


}

#endif // ENABLE(WEB_AUDIO)

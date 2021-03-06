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

#include "JSAudioContext.h"

#include "AnalyserNode.h"
#include "AudioBuffer.h"
#include "AudioBufferSourceNode.h"
#include "AudioContext.h"
#include "AudioDestinationNode.h"
#include "AudioListener.h"
#include "BiquadFilterNode.h"
#include "ChannelMergerNode.h"
#include "ChannelSplitterNode.h"
#include "ConvolverNode.h"
#include "DelayNode.h"
#include "DynamicsCompressorNode.h"
#include "EventListener.h"
#include "ExceptionCode.h"
#include "GainNode.h"
#include "JSAnalyserNode.h"
#include "JSArrayBuffer.h"
#include "JSAudioBuffer.h"
#include "JSAudioBufferCallback.h"
#include "JSAudioBufferSourceNode.h"
#include "JSAudioDestinationNode.h"
#include "JSAudioListener.h"
#include "JSBiquadFilterNode.h"
#include "JSChannelMergerNode.h"
#include "JSChannelSplitterNode.h"
#include "JSConvolverNode.h"
#include "JSDOMBinding.h"
#include "JSDelayNode.h"
#include "JSDynamicsCompressorNode.h"
#include "JSEventListener.h"
#include "JSFloat32Array.h"
#include "JSGainNode.h"
#include "JSOscillatorNode.h"
#include "JSPannerNode.h"
#include "JSPeriodicWave.h"
#include "JSScriptProcessorNode.h"
#include "JSWaveShaperNode.h"
#include "OscillatorNode.h"
#include "PannerNode.h"
#include "PeriodicWave.h"
#include "ScriptProcessorNode.h"
#include "WaveShaperNode.h"
#include <runtime/Error.h>
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

/* Hash table */

static const HashTableValue JSAudioContextTableValues[] =
{
    { "destination", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsAudioContextDestination), (intptr_t)0, NoIntrinsic },
    { "currentTime", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsAudioContextCurrentTime), (intptr_t)0, NoIntrinsic },
    { "sampleRate", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsAudioContextSampleRate), (intptr_t)0, NoIntrinsic },
    { "listener", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsAudioContextListener), (intptr_t)0, NoIntrinsic },
    { "activeSourceCount", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsAudioContextActiveSourceCount), (intptr_t)0, NoIntrinsic },
    { "oncomplete", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsAudioContextOncomplete), (intptr_t)setJSAudioContextOncomplete, NoIntrinsic },
    { "constructor", DontEnum | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsAudioContextConstructor), (intptr_t)0, NoIntrinsic },
    { 0, 0, 0, 0, NoIntrinsic }
};

static const HashTable JSAudioContextTable = { 18, 15, JSAudioContextTableValues, 0 };
/* Hash table for constructor */

static const HashTableValue JSAudioContextConstructorTableValues[] =
{
    { 0, 0, 0, 0, NoIntrinsic }
};

static const HashTable JSAudioContextConstructorTable = { 1, 0, JSAudioContextConstructorTableValues, 0 };
const ClassInfo JSAudioContextConstructor::s_info = { "webkitAudioContextConstructor", &Base::s_info, &JSAudioContextConstructorTable, 0, CREATE_METHOD_TABLE(JSAudioContextConstructor) };

JSAudioContextConstructor::JSAudioContextConstructor(Structure* structure, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(structure, globalObject)
{
}

void JSAudioContextConstructor::finishCreation(ExecState* exec, JSDOMGlobalObject* globalObject)
{
    Base::finishCreation(exec->vm());
    ASSERT(inherits(&s_info));
    putDirect(exec->vm(), exec->propertyNames().prototype, JSAudioContextPrototype::self(exec, globalObject), DontDelete | ReadOnly);
    putDirect(exec->vm(), exec->propertyNames().length, jsNumber(0), ReadOnly | DontDelete | DontEnum);
}

bool JSAudioContextConstructor::getOwnPropertySlot(JSCell* cell, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSAudioContextConstructor, JSDOMWrapper>(exec, &JSAudioContextConstructorTable, jsCast<JSAudioContextConstructor*>(cell), propertyName, slot);
}

bool JSAudioContextConstructor::getOwnPropertyDescriptor(JSObject* object, ExecState* exec, PropertyName propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSAudioContextConstructor, JSDOMWrapper>(exec, &JSAudioContextConstructorTable, jsCast<JSAudioContextConstructor*>(object), propertyName, descriptor);
}

ConstructType JSAudioContextConstructor::getConstructData(JSCell*, ConstructData& constructData)
{
    constructData.native.function = constructJSAudioContext;
    return ConstructTypeHost;
}

/* Hash table for prototype */

static const HashTableValue JSAudioContextPrototypeTableValues[] =
{
    { "createBuffer", DontDelete | JSC::Function, (intptr_t)static_cast<NativeFunction>(jsAudioContextPrototypeFunctionCreateBuffer), (intptr_t)3, NoIntrinsic },
    { "decodeAudioData", DontDelete | JSC::Function, (intptr_t)static_cast<NativeFunction>(jsAudioContextPrototypeFunctionDecodeAudioData), (intptr_t)2, NoIntrinsic },
    { "createBufferSource", DontDelete | JSC::Function, (intptr_t)static_cast<NativeFunction>(jsAudioContextPrototypeFunctionCreateBufferSource), (intptr_t)0, NoIntrinsic },
    { "createGain", DontDelete | JSC::Function, (intptr_t)static_cast<NativeFunction>(jsAudioContextPrototypeFunctionCreateGain), (intptr_t)0, NoIntrinsic },
    { "createDelay", DontDelete | JSC::Function, (intptr_t)static_cast<NativeFunction>(jsAudioContextPrototypeFunctionCreateDelay), (intptr_t)0, NoIntrinsic },
    { "createBiquadFilter", DontDelete | JSC::Function, (intptr_t)static_cast<NativeFunction>(jsAudioContextPrototypeFunctionCreateBiquadFilter), (intptr_t)0, NoIntrinsic },
    { "createWaveShaper", DontDelete | JSC::Function, (intptr_t)static_cast<NativeFunction>(jsAudioContextPrototypeFunctionCreateWaveShaper), (intptr_t)0, NoIntrinsic },
    { "createPanner", DontDelete | JSC::Function, (intptr_t)static_cast<NativeFunction>(jsAudioContextPrototypeFunctionCreatePanner), (intptr_t)0, NoIntrinsic },
    { "createConvolver", DontDelete | JSC::Function, (intptr_t)static_cast<NativeFunction>(jsAudioContextPrototypeFunctionCreateConvolver), (intptr_t)0, NoIntrinsic },
    { "createDynamicsCompressor", DontDelete | JSC::Function, (intptr_t)static_cast<NativeFunction>(jsAudioContextPrototypeFunctionCreateDynamicsCompressor), (intptr_t)0, NoIntrinsic },
    { "createAnalyser", DontDelete | JSC::Function, (intptr_t)static_cast<NativeFunction>(jsAudioContextPrototypeFunctionCreateAnalyser), (intptr_t)0, NoIntrinsic },
    { "createScriptProcessor", DontDelete | JSC::Function, (intptr_t)static_cast<NativeFunction>(jsAudioContextPrototypeFunctionCreateScriptProcessor), (intptr_t)1, NoIntrinsic },
    { "createOscillator", DontDelete | JSC::Function, (intptr_t)static_cast<NativeFunction>(jsAudioContextPrototypeFunctionCreateOscillator), (intptr_t)0, NoIntrinsic },
    { "createPeriodicWave", DontDelete | JSC::Function, (intptr_t)static_cast<NativeFunction>(jsAudioContextPrototypeFunctionCreatePeriodicWave), (intptr_t)2, NoIntrinsic },
    { "createChannelSplitter", DontDelete | JSC::Function, (intptr_t)static_cast<NativeFunction>(jsAudioContextPrototypeFunctionCreateChannelSplitter), (intptr_t)0, NoIntrinsic },
    { "createChannelMerger", DontDelete | JSC::Function, (intptr_t)static_cast<NativeFunction>(jsAudioContextPrototypeFunctionCreateChannelMerger), (intptr_t)0, NoIntrinsic },
    { "startRendering", DontDelete | JSC::Function, (intptr_t)static_cast<NativeFunction>(jsAudioContextPrototypeFunctionStartRendering), (intptr_t)0, NoIntrinsic },
#if ENABLE(LEGACY_WEB_AUDIO)
    { "createGainNode", DontDelete | JSC::Function, (intptr_t)static_cast<NativeFunction>(jsAudioContextPrototypeFunctionCreateGainNode), (intptr_t)0, NoIntrinsic },
#endif
#if ENABLE(LEGACY_WEB_AUDIO)
    { "createDelayNode", DontDelete | JSC::Function, (intptr_t)static_cast<NativeFunction>(jsAudioContextPrototypeFunctionCreateDelayNode), (intptr_t)0, NoIntrinsic },
#endif
#if ENABLE(LEGACY_WEB_AUDIO)
    { "createJavaScriptNode", DontDelete | JSC::Function, (intptr_t)static_cast<NativeFunction>(jsAudioContextPrototypeFunctionCreateJavaScriptNode), (intptr_t)1, NoIntrinsic },
#endif
    { 0, 0, 0, 0, NoIntrinsic }
};

static const HashTable JSAudioContextPrototypeTable = { 67, 63, JSAudioContextPrototypeTableValues, 0 };
const ClassInfo JSAudioContextPrototype::s_info = { "webkitAudioContextPrototype", &Base::s_info, &JSAudioContextPrototypeTable, 0, CREATE_METHOD_TABLE(JSAudioContextPrototype) };

JSObject* JSAudioContextPrototype::self(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSAudioContext>(exec, globalObject);
}

bool JSAudioContextPrototype::getOwnPropertySlot(JSCell* cell, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    JSAudioContextPrototype* thisObject = jsCast<JSAudioContextPrototype*>(cell);
    return getStaticFunctionSlot<JSObject>(exec, &JSAudioContextPrototypeTable, thisObject, propertyName, slot);
}

bool JSAudioContextPrototype::getOwnPropertyDescriptor(JSObject* object, ExecState* exec, PropertyName propertyName, PropertyDescriptor& descriptor)
{
    JSAudioContextPrototype* thisObject = jsCast<JSAudioContextPrototype*>(object);
    return getStaticFunctionDescriptor<JSObject>(exec, &JSAudioContextPrototypeTable, thisObject, propertyName, descriptor);
}

const ClassInfo JSAudioContext::s_info = { "webkitAudioContext", &Base::s_info, &JSAudioContextTable, 0 , CREATE_METHOD_TABLE(JSAudioContext) };

JSAudioContext::JSAudioContext(Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<AudioContext> impl)
    : JSDOMWrapper(structure, globalObject)
    , m_impl(impl.leakRef())
{
}

void JSAudioContext::finishCreation(VM& vm)
{
    Base::finishCreation(vm);
    ASSERT(inherits(&s_info));
}

JSObject* JSAudioContext::createPrototype(ExecState* exec, JSGlobalObject* globalObject)
{
    return JSAudioContextPrototype::create(exec->vm(), globalObject, JSAudioContextPrototype::createStructure(globalObject->vm(), globalObject, globalObject->objectPrototype()));
}

void JSAudioContext::destroy(JSC::JSCell* cell)
{
    JSAudioContext* thisObject = static_cast<JSAudioContext*>(cell);
    thisObject->JSAudioContext::~JSAudioContext();
}

JSAudioContext::~JSAudioContext()
{
    releaseImplIfNotNull();
}

bool JSAudioContext::getOwnPropertySlot(JSCell* cell, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    JSAudioContext* thisObject = jsCast<JSAudioContext*>(cell);
    ASSERT_GC_OBJECT_INHERITS(thisObject, &s_info);
    return getStaticValueSlot<JSAudioContext, Base>(exec, &JSAudioContextTable, thisObject, propertyName, slot);
}

bool JSAudioContext::getOwnPropertyDescriptor(JSObject* object, ExecState* exec, PropertyName propertyName, PropertyDescriptor& descriptor)
{
    JSAudioContext* thisObject = jsCast<JSAudioContext*>(object);
    ASSERT_GC_OBJECT_INHERITS(thisObject, &s_info);
    return getStaticValueDescriptor<JSAudioContext, Base>(exec, &JSAudioContextTable, thisObject, propertyName, descriptor);
}

JSValue jsAudioContextDestination(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSAudioContext* castedThis = jsCast<JSAudioContext*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    AudioContext* impl = static_cast<AudioContext*>(castedThis->impl());
    JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(impl->destination()));
    return result;
}


JSValue jsAudioContextCurrentTime(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSAudioContext* castedThis = jsCast<JSAudioContext*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    AudioContext* impl = static_cast<AudioContext*>(castedThis->impl());
    JSValue result = jsNumber(impl->currentTime());
    return result;
}


JSValue jsAudioContextSampleRate(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSAudioContext* castedThis = jsCast<JSAudioContext*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    AudioContext* impl = static_cast<AudioContext*>(castedThis->impl());
    JSValue result = jsNumber(impl->sampleRate());
    return result;
}


JSValue jsAudioContextListener(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSAudioContext* castedThis = jsCast<JSAudioContext*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    AudioContext* impl = static_cast<AudioContext*>(castedThis->impl());
    JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(impl->listener()));
    return result;
}


JSValue jsAudioContextActiveSourceCount(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSAudioContext* castedThis = jsCast<JSAudioContext*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    AudioContext* impl = static_cast<AudioContext*>(castedThis->impl());
    JSValue result = jsNumber(impl->activeSourceCount());
    return result;
}


JSValue jsAudioContextOncomplete(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSAudioContext* castedThis = jsCast<JSAudioContext*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    AudioContext* impl = static_cast<AudioContext*>(castedThis->impl());
    if (EventListener* listener = impl->oncomplete()) {
        if (const JSEventListener* jsListener = JSEventListener::cast(listener)) {
            if (JSObject* jsFunction = jsListener->jsFunction(impl->scriptExecutionContext()))
                return jsFunction;
        }
    }
    return jsNull();
}


JSValue jsAudioContextConstructor(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSAudioContext* domObject = jsCast<JSAudioContext*>(asObject(slotBase));
    return JSAudioContext::getConstructor(exec, domObject->globalObject());
}

void JSAudioContext::put(JSCell* cell, ExecState* exec, PropertyName propertyName, JSValue value, PutPropertySlot& slot)
{
    JSAudioContext* thisObject = jsCast<JSAudioContext*>(cell);
    ASSERT_GC_OBJECT_INHERITS(thisObject, &s_info);
    lookupPut<JSAudioContext, Base>(exec, propertyName, value, &JSAudioContextTable, thisObject, slot);
}

void setJSAudioContextOncomplete(ExecState* exec, JSObject* thisObject, JSValue value)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(exec);
    JSAudioContext* castedThis = jsCast<JSAudioContext*>(thisObject);
    AudioContext* impl = static_cast<AudioContext*>(castedThis->impl());
    impl->setOncomplete(createJSAttributeEventListener(exec, value, thisObject));
}


JSValue JSAudioContext::getConstructor(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSAudioContextConstructor>(exec, jsCast<JSDOMGlobalObject*>(globalObject));
}

static EncodedJSValue JSC_HOST_CALL jsAudioContextPrototypeFunctionCreateBuffer1(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSAudioContext::s_info))
        return throwVMTypeError(exec);
    JSAudioContext* castedThis = jsCast<JSAudioContext*>(asObject(thisValue));
    ASSERT_GC_OBJECT_INHERITS(castedThis, &JSAudioContext::s_info);
    AudioContext* impl = static_cast<AudioContext*>(castedThis->impl());
    if (exec->argumentCount() < 3)
        return throwVMError(exec, createNotEnoughArgumentsError(exec));
    ExceptionCode ec = 0;
    unsigned numberOfChannels(toUInt32(exec, exec->argument(0), NormalConversion));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());
    unsigned numberOfFrames(toUInt32(exec, exec->argument(1), NormalConversion));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());
    float sampleRate(exec->argument(2).toFloat(exec));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());

    JSC::JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(impl->createBuffer(numberOfChannels, numberOfFrames, sampleRate, ec)));
    setDOMException(exec, ec);
    return JSValue::encode(result);
}

static EncodedJSValue JSC_HOST_CALL jsAudioContextPrototypeFunctionCreateBuffer2(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSAudioContext::s_info))
        return throwVMTypeError(exec);
    JSAudioContext* castedThis = jsCast<JSAudioContext*>(asObject(thisValue));
    ASSERT_GC_OBJECT_INHERITS(castedThis, &JSAudioContext::s_info);
    AudioContext* impl = static_cast<AudioContext*>(castedThis->impl());
    if (exec->argumentCount() < 2)
        return throwVMError(exec, createNotEnoughArgumentsError(exec));
    ExceptionCode ec = 0;
    ArrayBuffer* buffer(toArrayBuffer(exec->argument(0)));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());
    bool mixToMono(exec->argument(1).toBoolean(exec));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());

    JSC::JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(impl->createBuffer(buffer, mixToMono, ec)));
    setDOMException(exec, ec);
    return JSValue::encode(result);
}

EncodedJSValue JSC_HOST_CALL jsAudioContextPrototypeFunctionCreateBuffer(ExecState* exec)
{
    size_t argsCount = exec->argumentCount();
    if (argsCount == 3)
        return jsAudioContextPrototypeFunctionCreateBuffer1(exec);
    JSValue arg0(exec->argument(0));
    if ((argsCount == 2 && (arg0.isNull() || (arg0.isObject() && asObject(arg0)->inherits(&JSArrayBuffer::s_info)))))
        return jsAudioContextPrototypeFunctionCreateBuffer2(exec);
    if (argsCount < 2)
        return throwVMError(exec, createNotEnoughArgumentsError(exec));
    return throwVMTypeError(exec);
}

EncodedJSValue JSC_HOST_CALL jsAudioContextPrototypeFunctionDecodeAudioData(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSAudioContext::s_info))
        return throwVMTypeError(exec);
    JSAudioContext* castedThis = jsCast<JSAudioContext*>(asObject(thisValue));
    ASSERT_GC_OBJECT_INHERITS(castedThis, &JSAudioContext::s_info);
    AudioContext* impl = static_cast<AudioContext*>(castedThis->impl());
    if (exec->argumentCount() < 2)
        return throwVMError(exec, createNotEnoughArgumentsError(exec));
    ExceptionCode ec = 0;
    ArrayBuffer* audioData(toArrayBuffer(exec->argument(0)));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());
    if (exec->argumentCount() <= 1 || !exec->argument(1).isFunction())
        return throwVMTypeError(exec);
    RefPtr<AudioBufferCallback> successCallback = JSAudioBufferCallback::create(asObject(exec->argument(1)), castedThis->globalObject());
    RefPtr<AudioBufferCallback> errorCallback;
    if (exec->argumentCount() > 2 && !exec->argument(2).isUndefinedOrNull()) {
        if (!exec->argument(2).isFunction())
            return throwVMTypeError(exec);
        errorCallback = JSAudioBufferCallback::create(asObject(exec->argument(2)), castedThis->globalObject());
    }
    impl->decodeAudioData(audioData, successCallback, errorCallback, ec);
    setDOMException(exec, ec);
    return JSValue::encode(jsUndefined());
}

EncodedJSValue JSC_HOST_CALL jsAudioContextPrototypeFunctionCreateBufferSource(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSAudioContext::s_info))
        return throwVMTypeError(exec);
    JSAudioContext* castedThis = jsCast<JSAudioContext*>(asObject(thisValue));
    ASSERT_GC_OBJECT_INHERITS(castedThis, &JSAudioContext::s_info);
    AudioContext* impl = static_cast<AudioContext*>(castedThis->impl());

    JSC::JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(impl->createBufferSource()));
    return JSValue::encode(result);
}

EncodedJSValue JSC_HOST_CALL jsAudioContextPrototypeFunctionCreateGain(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSAudioContext::s_info))
        return throwVMTypeError(exec);
    JSAudioContext* castedThis = jsCast<JSAudioContext*>(asObject(thisValue));
    ASSERT_GC_OBJECT_INHERITS(castedThis, &JSAudioContext::s_info);
    AudioContext* impl = static_cast<AudioContext*>(castedThis->impl());

    JSC::JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(impl->createGain()));
    return JSValue::encode(result);
}

EncodedJSValue JSC_HOST_CALL jsAudioContextPrototypeFunctionCreateDelay(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSAudioContext::s_info))
        return throwVMTypeError(exec);
    JSAudioContext* castedThis = jsCast<JSAudioContext*>(asObject(thisValue));
    ASSERT_GC_OBJECT_INHERITS(castedThis, &JSAudioContext::s_info);
    AudioContext* impl = static_cast<AudioContext*>(castedThis->impl());
    ExceptionCode ec = 0;

    size_t argsCount = exec->argumentCount();
    if (argsCount <= 0) {

        JSC::JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(impl->createDelay(ec)));
        setDOMException(exec, ec);
        return JSValue::encode(result);
    }

    double maxDelayTime(exec->argument(0).toNumber(exec));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());

    JSC::JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(impl->createDelay(maxDelayTime, ec)));
    setDOMException(exec, ec);
    return JSValue::encode(result);
}

EncodedJSValue JSC_HOST_CALL jsAudioContextPrototypeFunctionCreateBiquadFilter(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSAudioContext::s_info))
        return throwVMTypeError(exec);
    JSAudioContext* castedThis = jsCast<JSAudioContext*>(asObject(thisValue));
    ASSERT_GC_OBJECT_INHERITS(castedThis, &JSAudioContext::s_info);
    AudioContext* impl = static_cast<AudioContext*>(castedThis->impl());

    JSC::JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(impl->createBiquadFilter()));
    return JSValue::encode(result);
}

EncodedJSValue JSC_HOST_CALL jsAudioContextPrototypeFunctionCreateWaveShaper(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSAudioContext::s_info))
        return throwVMTypeError(exec);
    JSAudioContext* castedThis = jsCast<JSAudioContext*>(asObject(thisValue));
    ASSERT_GC_OBJECT_INHERITS(castedThis, &JSAudioContext::s_info);
    AudioContext* impl = static_cast<AudioContext*>(castedThis->impl());

    JSC::JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(impl->createWaveShaper()));
    return JSValue::encode(result);
}

EncodedJSValue JSC_HOST_CALL jsAudioContextPrototypeFunctionCreatePanner(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSAudioContext::s_info))
        return throwVMTypeError(exec);
    JSAudioContext* castedThis = jsCast<JSAudioContext*>(asObject(thisValue));
    ASSERT_GC_OBJECT_INHERITS(castedThis, &JSAudioContext::s_info);
    AudioContext* impl = static_cast<AudioContext*>(castedThis->impl());

    JSC::JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(impl->createPanner()));
    return JSValue::encode(result);
}

EncodedJSValue JSC_HOST_CALL jsAudioContextPrototypeFunctionCreateConvolver(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSAudioContext::s_info))
        return throwVMTypeError(exec);
    JSAudioContext* castedThis = jsCast<JSAudioContext*>(asObject(thisValue));
    ASSERT_GC_OBJECT_INHERITS(castedThis, &JSAudioContext::s_info);
    AudioContext* impl = static_cast<AudioContext*>(castedThis->impl());

    JSC::JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(impl->createConvolver()));
    return JSValue::encode(result);
}

EncodedJSValue JSC_HOST_CALL jsAudioContextPrototypeFunctionCreateDynamicsCompressor(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSAudioContext::s_info))
        return throwVMTypeError(exec);
    JSAudioContext* castedThis = jsCast<JSAudioContext*>(asObject(thisValue));
    ASSERT_GC_OBJECT_INHERITS(castedThis, &JSAudioContext::s_info);
    AudioContext* impl = static_cast<AudioContext*>(castedThis->impl());

    JSC::JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(impl->createDynamicsCompressor()));
    return JSValue::encode(result);
}

EncodedJSValue JSC_HOST_CALL jsAudioContextPrototypeFunctionCreateAnalyser(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSAudioContext::s_info))
        return throwVMTypeError(exec);
    JSAudioContext* castedThis = jsCast<JSAudioContext*>(asObject(thisValue));
    ASSERT_GC_OBJECT_INHERITS(castedThis, &JSAudioContext::s_info);
    AudioContext* impl = static_cast<AudioContext*>(castedThis->impl());

    JSC::JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(impl->createAnalyser()));
    return JSValue::encode(result);
}

EncodedJSValue JSC_HOST_CALL jsAudioContextPrototypeFunctionCreateScriptProcessor(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSAudioContext::s_info))
        return throwVMTypeError(exec);
    JSAudioContext* castedThis = jsCast<JSAudioContext*>(asObject(thisValue));
    ASSERT_GC_OBJECT_INHERITS(castedThis, &JSAudioContext::s_info);
    AudioContext* impl = static_cast<AudioContext*>(castedThis->impl());
    if (exec->argumentCount() < 1)
        return throwVMError(exec, createNotEnoughArgumentsError(exec));
    ExceptionCode ec = 0;
    unsigned bufferSize(toUInt32(exec, exec->argument(0), NormalConversion));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());

    size_t argsCount = exec->argumentCount();
    if (argsCount <= 1) {

        JSC::JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(impl->createScriptProcessor(bufferSize, ec)));
        setDOMException(exec, ec);
        return JSValue::encode(result);
    }

    unsigned numberOfInputChannels(toUInt32(exec, exec->argument(1), NormalConversion));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());
    if (argsCount <= 2) {

        JSC::JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(impl->createScriptProcessor(bufferSize, numberOfInputChannels, ec)));
        setDOMException(exec, ec);
        return JSValue::encode(result);
    }

    unsigned numberOfOutputChannels(toUInt32(exec, exec->argument(2), NormalConversion));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());

    JSC::JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(impl->createScriptProcessor(bufferSize, numberOfInputChannels, numberOfOutputChannels, ec)));
    setDOMException(exec, ec);
    return JSValue::encode(result);
}

EncodedJSValue JSC_HOST_CALL jsAudioContextPrototypeFunctionCreateOscillator(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSAudioContext::s_info))
        return throwVMTypeError(exec);
    JSAudioContext* castedThis = jsCast<JSAudioContext*>(asObject(thisValue));
    ASSERT_GC_OBJECT_INHERITS(castedThis, &JSAudioContext::s_info);
    AudioContext* impl = static_cast<AudioContext*>(castedThis->impl());

    JSC::JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(impl->createOscillator()));
    return JSValue::encode(result);
}

EncodedJSValue JSC_HOST_CALL jsAudioContextPrototypeFunctionCreatePeriodicWave(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSAudioContext::s_info))
        return throwVMTypeError(exec);
    JSAudioContext* castedThis = jsCast<JSAudioContext*>(asObject(thisValue));
    ASSERT_GC_OBJECT_INHERITS(castedThis, &JSAudioContext::s_info);
    AudioContext* impl = static_cast<AudioContext*>(castedThis->impl());
    if (exec->argumentCount() < 2)
        return throwVMError(exec, createNotEnoughArgumentsError(exec));
    ExceptionCode ec = 0;
    Float32Array* real(toFloat32Array(exec->argument(0)));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());
    Float32Array* imag(toFloat32Array(exec->argument(1)));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());

    JSC::JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(impl->createPeriodicWave(real, imag, ec)));
    setDOMException(exec, ec);
    return JSValue::encode(result);
}

EncodedJSValue JSC_HOST_CALL jsAudioContextPrototypeFunctionCreateChannelSplitter(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSAudioContext::s_info))
        return throwVMTypeError(exec);
    JSAudioContext* castedThis = jsCast<JSAudioContext*>(asObject(thisValue));
    ASSERT_GC_OBJECT_INHERITS(castedThis, &JSAudioContext::s_info);
    AudioContext* impl = static_cast<AudioContext*>(castedThis->impl());
    ExceptionCode ec = 0;

    size_t argsCount = exec->argumentCount();
    if (argsCount <= 0) {

        JSC::JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(impl->createChannelSplitter(ec)));
        setDOMException(exec, ec);
        return JSValue::encode(result);
    }

    unsigned numberOfOutputs(toUInt32(exec, exec->argument(0), NormalConversion));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());

    JSC::JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(impl->createChannelSplitter(numberOfOutputs, ec)));
    setDOMException(exec, ec);
    return JSValue::encode(result);
}

EncodedJSValue JSC_HOST_CALL jsAudioContextPrototypeFunctionCreateChannelMerger(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSAudioContext::s_info))
        return throwVMTypeError(exec);
    JSAudioContext* castedThis = jsCast<JSAudioContext*>(asObject(thisValue));
    ASSERT_GC_OBJECT_INHERITS(castedThis, &JSAudioContext::s_info);
    AudioContext* impl = static_cast<AudioContext*>(castedThis->impl());
    ExceptionCode ec = 0;

    size_t argsCount = exec->argumentCount();
    if (argsCount <= 0) {

        JSC::JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(impl->createChannelMerger(ec)));
        setDOMException(exec, ec);
        return JSValue::encode(result);
    }

    unsigned numberOfInputs(toUInt32(exec, exec->argument(0), NormalConversion));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());

    JSC::JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(impl->createChannelMerger(numberOfInputs, ec)));
    setDOMException(exec, ec);
    return JSValue::encode(result);
}

EncodedJSValue JSC_HOST_CALL jsAudioContextPrototypeFunctionStartRendering(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSAudioContext::s_info))
        return throwVMTypeError(exec);
    JSAudioContext* castedThis = jsCast<JSAudioContext*>(asObject(thisValue));
    ASSERT_GC_OBJECT_INHERITS(castedThis, &JSAudioContext::s_info);
    AudioContext* impl = static_cast<AudioContext*>(castedThis->impl());
    impl->startRendering();
    return JSValue::encode(jsUndefined());
}

#if ENABLE(LEGACY_WEB_AUDIO)
EncodedJSValue JSC_HOST_CALL jsAudioContextPrototypeFunctionCreateGainNode(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSAudioContext::s_info))
        return throwVMTypeError(exec);
    JSAudioContext* castedThis = jsCast<JSAudioContext*>(asObject(thisValue));
    ASSERT_GC_OBJECT_INHERITS(castedThis, &JSAudioContext::s_info);
    AudioContext* impl = static_cast<AudioContext*>(castedThis->impl());

    JSC::JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(impl->createGain()));
    return JSValue::encode(result);
}

#endif

#if ENABLE(LEGACY_WEB_AUDIO)
EncodedJSValue JSC_HOST_CALL jsAudioContextPrototypeFunctionCreateDelayNode(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSAudioContext::s_info))
        return throwVMTypeError(exec);
    JSAudioContext* castedThis = jsCast<JSAudioContext*>(asObject(thisValue));
    ASSERT_GC_OBJECT_INHERITS(castedThis, &JSAudioContext::s_info);
    AudioContext* impl = static_cast<AudioContext*>(castedThis->impl());
    ExceptionCode ec = 0;

    size_t argsCount = exec->argumentCount();
    if (argsCount <= 0) {

        JSC::JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(impl->createDelay(ec)));
        setDOMException(exec, ec);
        return JSValue::encode(result);
    }

    double maxDelayTime(exec->argument(0).toNumber(exec));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());

    JSC::JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(impl->createDelay(maxDelayTime, ec)));
    setDOMException(exec, ec);
    return JSValue::encode(result);
}

#endif

#if ENABLE(LEGACY_WEB_AUDIO)
EncodedJSValue JSC_HOST_CALL jsAudioContextPrototypeFunctionCreateJavaScriptNode(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSAudioContext::s_info))
        return throwVMTypeError(exec);
    JSAudioContext* castedThis = jsCast<JSAudioContext*>(asObject(thisValue));
    ASSERT_GC_OBJECT_INHERITS(castedThis, &JSAudioContext::s_info);
    AudioContext* impl = static_cast<AudioContext*>(castedThis->impl());
    if (exec->argumentCount() < 1)
        return throwVMError(exec, createNotEnoughArgumentsError(exec));
    ExceptionCode ec = 0;
    unsigned bufferSize(toUInt32(exec, exec->argument(0), NormalConversion));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());

    size_t argsCount = exec->argumentCount();
    if (argsCount <= 1) {

        JSC::JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(impl->createScriptProcessor(bufferSize, ec)));
        setDOMException(exec, ec);
        return JSValue::encode(result);
    }

    unsigned numberOfInputChannels(toUInt32(exec, exec->argument(1), NormalConversion));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());
    if (argsCount <= 2) {

        JSC::JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(impl->createScriptProcessor(bufferSize, numberOfInputChannels, ec)));
        setDOMException(exec, ec);
        return JSValue::encode(result);
    }

    unsigned numberOfOutputChannels(toUInt32(exec, exec->argument(2), NormalConversion));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());

    JSC::JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(impl->createScriptProcessor(bufferSize, numberOfInputChannels, numberOfOutputChannels, ec)));
    setDOMException(exec, ec);
    return JSValue::encode(result);
}

#endif

void JSAudioContext::visitChildren(JSCell* cell, SlotVisitor& visitor)
{
    JSAudioContext* thisObject = jsCast<JSAudioContext*>(cell);
    ASSERT_GC_OBJECT_INHERITS(thisObject, &s_info);
    COMPILE_ASSERT(StructureFlags & OverridesVisitChildren, OverridesVisitChildrenWithoutSettingFlag);
    ASSERT(thisObject->structure()->typeInfo().overridesVisitChildren());
    Base::visitChildren(thisObject, visitor);
    thisObject->impl()->visitJSEventListeners(visitor);
}

static inline bool isObservable(JSAudioContext* jsAudioContext)
{
    if (jsAudioContext->hasCustomProperties())
        return true;
    if (jsAudioContext->impl()->hasEventListeners())
        return true;
    return false;
}

bool JSAudioContextOwner::isReachableFromOpaqueRoots(JSC::Handle<JSC::Unknown> handle, void*, SlotVisitor& visitor)
{
    JSAudioContext* jsAudioContext = jsCast<JSAudioContext*>(handle.get().asCell());
    if (jsAudioContext->impl()->hasPendingActivity())
        return true;
    if (jsAudioContext->impl()->isFiringEventListeners())
        return true;
    if (!isObservable(jsAudioContext))
        return false;
    UNUSED_PARAM(visitor);
    return false;
}

void JSAudioContextOwner::finalize(JSC::Handle<JSC::Unknown> handle, void* context)
{
    JSAudioContext* jsAudioContext = jsCast<JSAudioContext*>(handle.get().asCell());
    DOMWrapperWorld* world = static_cast<DOMWrapperWorld*>(context);
    uncacheWrapper(world, jsAudioContext->impl(), jsAudioContext);
    jsAudioContext->releaseImpl();
}

#if ENABLE(BINDING_INTEGRITY)
#if PLATFORM(WIN)
#pragma warning(disable: 4483)
extern "C" { extern void (*const __identifier("??_7AudioContext@WebCore@@6B@")[])(); }
#else
extern "C" { extern void* _ZTVN7WebCore12AudioContextE[]; }
#endif
#endif
JSC::JSValue toJS(JSC::ExecState* exec, JSDOMGlobalObject* globalObject, AudioContext* impl)
{
    if (!impl)
        return jsNull();
    if (JSValue result = getExistingWrapper<JSAudioContext>(exec, impl))
        return result;

#if ENABLE(BINDING_INTEGRITY)
    void* actualVTablePointer = *(reinterpret_cast<void**>(impl));
#if PLATFORM(WIN)
    void* expectedVTablePointer = reinterpret_cast<void*>(__identifier("??_7AudioContext@WebCore@@6B@"));
#else
    void* expectedVTablePointer = &_ZTVN7WebCore12AudioContextE[2];
#if COMPILER(CLANG) && COMPILER_SUPPORTS(CXX_STATIC_ASSERT)
    // If this fails AudioContext does not have a vtable, so you need to add the
    // ImplementationLacksVTable attribute to the interface definition
    COMPILE_ASSERT(__is_polymorphic(AudioContext), AudioContext_is_not_polymorphic);
#endif
#endif
    // If you hit this assertion you either have a use after free bug, or
    // AudioContext has subclasses. If AudioContext has subclasses that get passed
    // to toJS() we currently require AudioContext you to opt out of binding hardening
    // by adding the SkipVTableValidation attribute to the interface IDL definition
    RELEASE_ASSERT(actualVTablePointer == expectedVTablePointer);
#endif
    ReportMemoryCost<AudioContext>::reportMemoryCost(exec, impl);
    return createNewWrapper<JSAudioContext>(exec, globalObject, impl);
}

AudioContext* toAudioContext(JSC::JSValue value)
{
    return value.inherits(&JSAudioContext::s_info) ? jsCast<JSAudioContext*>(asObject(value))->impl() : 0;
}

}

#endif // ENABLE(WEB_AUDIO)

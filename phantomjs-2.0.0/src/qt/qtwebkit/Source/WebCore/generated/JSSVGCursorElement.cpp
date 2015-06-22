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

#include "JSSVGCursorElement.h"

#include "ExceptionCode.h"
#include "JSDOMBinding.h"
#include "JSSVGAnimatedLength.h"
#include "SVGCursorElement.h"
#include <runtime/Error.h>
#include <wtf/GetPtr.h>

#if ENABLE(SVG)
#include "JSSVGAnimatedBoolean.h"
#include "JSSVGAnimatedString.h"
#include "JSSVGStringList.h"
#include "SVGStringList.h"
#endif

using namespace JSC;

namespace WebCore {

/* Hash table */

static const HashTableValue JSSVGCursorElementTableValues[] =
{
    { "x", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGCursorElementX), (intptr_t)0, NoIntrinsic },
    { "y", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGCursorElementY), (intptr_t)0, NoIntrinsic },
#if ENABLE(SVG)
    { "externalResourcesRequired", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGCursorElementExternalResourcesRequired), (intptr_t)0, NoIntrinsic },
#endif
#if ENABLE(SVG)
    { "requiredFeatures", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGCursorElementRequiredFeatures), (intptr_t)0, NoIntrinsic },
#endif
#if ENABLE(SVG)
    { "requiredExtensions", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGCursorElementRequiredExtensions), (intptr_t)0, NoIntrinsic },
#endif
#if ENABLE(SVG)
    { "systemLanguage", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGCursorElementSystemLanguage), (intptr_t)0, NoIntrinsic },
#endif
#if ENABLE(SVG)
    { "href", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGCursorElementHref), (intptr_t)0, NoIntrinsic },
#endif
    { "constructor", DontEnum | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGCursorElementConstructor), (intptr_t)0, NoIntrinsic },
    { 0, 0, 0, 0, NoIntrinsic }
};

static const HashTable JSSVGCursorElementTable = { 18, 15, JSSVGCursorElementTableValues, 0 };
/* Hash table for constructor */

static const HashTableValue JSSVGCursorElementConstructorTableValues[] =
{
    { 0, 0, 0, 0, NoIntrinsic }
};

static const HashTable JSSVGCursorElementConstructorTable = { 1, 0, JSSVGCursorElementConstructorTableValues, 0 };
const ClassInfo JSSVGCursorElementConstructor::s_info = { "SVGCursorElementConstructor", &Base::s_info, &JSSVGCursorElementConstructorTable, 0, CREATE_METHOD_TABLE(JSSVGCursorElementConstructor) };

JSSVGCursorElementConstructor::JSSVGCursorElementConstructor(Structure* structure, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(structure, globalObject)
{
}

void JSSVGCursorElementConstructor::finishCreation(ExecState* exec, JSDOMGlobalObject* globalObject)
{
    Base::finishCreation(exec->vm());
    ASSERT(inherits(&s_info));
    putDirect(exec->vm(), exec->propertyNames().prototype, JSSVGCursorElementPrototype::self(exec, globalObject), DontDelete | ReadOnly);
    putDirect(exec->vm(), exec->propertyNames().length, jsNumber(0), ReadOnly | DontDelete | DontEnum);
}

bool JSSVGCursorElementConstructor::getOwnPropertySlot(JSCell* cell, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSSVGCursorElementConstructor, JSDOMWrapper>(exec, &JSSVGCursorElementConstructorTable, jsCast<JSSVGCursorElementConstructor*>(cell), propertyName, slot);
}

bool JSSVGCursorElementConstructor::getOwnPropertyDescriptor(JSObject* object, ExecState* exec, PropertyName propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSSVGCursorElementConstructor, JSDOMWrapper>(exec, &JSSVGCursorElementConstructorTable, jsCast<JSSVGCursorElementConstructor*>(object), propertyName, descriptor);
}

/* Hash table for prototype */

static const HashTableValue JSSVGCursorElementPrototypeTableValues[] =
{
#if ENABLE(SVG)
    { "hasExtension", DontDelete | JSC::Function, (intptr_t)static_cast<NativeFunction>(jsSVGCursorElementPrototypeFunctionHasExtension), (intptr_t)0, NoIntrinsic },
#endif
    { 0, 0, 0, 0, NoIntrinsic }
};

static const HashTable JSSVGCursorElementPrototypeTable = { 2, 1, JSSVGCursorElementPrototypeTableValues, 0 };
const ClassInfo JSSVGCursorElementPrototype::s_info = { "SVGCursorElementPrototype", &Base::s_info, &JSSVGCursorElementPrototypeTable, 0, CREATE_METHOD_TABLE(JSSVGCursorElementPrototype) };

JSObject* JSSVGCursorElementPrototype::self(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSSVGCursorElement>(exec, globalObject);
}

bool JSSVGCursorElementPrototype::getOwnPropertySlot(JSCell* cell, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    JSSVGCursorElementPrototype* thisObject = jsCast<JSSVGCursorElementPrototype*>(cell);
    return getStaticFunctionSlot<JSObject>(exec, &JSSVGCursorElementPrototypeTable, thisObject, propertyName, slot);
}

bool JSSVGCursorElementPrototype::getOwnPropertyDescriptor(JSObject* object, ExecState* exec, PropertyName propertyName, PropertyDescriptor& descriptor)
{
    JSSVGCursorElementPrototype* thisObject = jsCast<JSSVGCursorElementPrototype*>(object);
    return getStaticFunctionDescriptor<JSObject>(exec, &JSSVGCursorElementPrototypeTable, thisObject, propertyName, descriptor);
}

const ClassInfo JSSVGCursorElement::s_info = { "SVGCursorElement", &Base::s_info, &JSSVGCursorElementTable, 0 , CREATE_METHOD_TABLE(JSSVGCursorElement) };

JSSVGCursorElement::JSSVGCursorElement(Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<SVGCursorElement> impl)
    : JSSVGElement(structure, globalObject, impl)
{
}

void JSSVGCursorElement::finishCreation(VM& vm)
{
    Base::finishCreation(vm);
    ASSERT(inherits(&s_info));
}

JSObject* JSSVGCursorElement::createPrototype(ExecState* exec, JSGlobalObject* globalObject)
{
    return JSSVGCursorElementPrototype::create(exec->vm(), globalObject, JSSVGCursorElementPrototype::createStructure(exec->vm(), globalObject, JSSVGElementPrototype::self(exec, globalObject)));
}

bool JSSVGCursorElement::getOwnPropertySlot(JSCell* cell, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    JSSVGCursorElement* thisObject = jsCast<JSSVGCursorElement*>(cell);
    ASSERT_GC_OBJECT_INHERITS(thisObject, &s_info);
    return getStaticValueSlot<JSSVGCursorElement, Base>(exec, &JSSVGCursorElementTable, thisObject, propertyName, slot);
}

bool JSSVGCursorElement::getOwnPropertyDescriptor(JSObject* object, ExecState* exec, PropertyName propertyName, PropertyDescriptor& descriptor)
{
    JSSVGCursorElement* thisObject = jsCast<JSSVGCursorElement*>(object);
    ASSERT_GC_OBJECT_INHERITS(thisObject, &s_info);
    return getStaticValueDescriptor<JSSVGCursorElement, Base>(exec, &JSSVGCursorElementTable, thisObject, propertyName, descriptor);
}

JSValue jsSVGCursorElementX(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSSVGCursorElement* castedThis = jsCast<JSSVGCursorElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGCursorElement* impl = static_cast<SVGCursorElement*>(castedThis->impl());
    RefPtr<SVGAnimatedLength> obj = impl->xAnimated();
    JSValue result =  toJS(exec, castedThis->globalObject(), obj.get());
    return result;
}


JSValue jsSVGCursorElementY(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSSVGCursorElement* castedThis = jsCast<JSSVGCursorElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGCursorElement* impl = static_cast<SVGCursorElement*>(castedThis->impl());
    RefPtr<SVGAnimatedLength> obj = impl->yAnimated();
    JSValue result =  toJS(exec, castedThis->globalObject(), obj.get());
    return result;
}


#if ENABLE(SVG)
JSValue jsSVGCursorElementExternalResourcesRequired(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSSVGCursorElement* castedThis = jsCast<JSSVGCursorElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGCursorElement* impl = static_cast<SVGCursorElement*>(castedThis->impl());
    RefPtr<SVGAnimatedBoolean> obj = impl->externalResourcesRequiredAnimated();
    JSValue result =  toJS(exec, castedThis->globalObject(), obj.get());
    return result;
}

#endif

#if ENABLE(SVG)
JSValue jsSVGCursorElementRequiredFeatures(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSSVGCursorElement* castedThis = jsCast<JSSVGCursorElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGCursorElement* impl = static_cast<SVGCursorElement*>(castedThis->impl());
    JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(SVGStaticListPropertyTearOff<SVGStringList>::create(impl, impl->requiredFeatures())));
    return result;
}

#endif

#if ENABLE(SVG)
JSValue jsSVGCursorElementRequiredExtensions(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSSVGCursorElement* castedThis = jsCast<JSSVGCursorElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGCursorElement* impl = static_cast<SVGCursorElement*>(castedThis->impl());
    JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(SVGStaticListPropertyTearOff<SVGStringList>::create(impl, impl->requiredExtensions())));
    return result;
}

#endif

#if ENABLE(SVG)
JSValue jsSVGCursorElementSystemLanguage(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSSVGCursorElement* castedThis = jsCast<JSSVGCursorElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGCursorElement* impl = static_cast<SVGCursorElement*>(castedThis->impl());
    JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(SVGStaticListPropertyTearOff<SVGStringList>::create(impl, impl->systemLanguage())));
    return result;
}

#endif

#if ENABLE(SVG)
JSValue jsSVGCursorElementHref(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSSVGCursorElement* castedThis = jsCast<JSSVGCursorElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGCursorElement* impl = static_cast<SVGCursorElement*>(castedThis->impl());
    RefPtr<SVGAnimatedString> obj = impl->hrefAnimated();
    JSValue result =  toJS(exec, castedThis->globalObject(), obj.get());
    return result;
}

#endif

JSValue jsSVGCursorElementConstructor(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSSVGCursorElement* domObject = jsCast<JSSVGCursorElement*>(asObject(slotBase));
    return JSSVGCursorElement::getConstructor(exec, domObject->globalObject());
}

JSValue JSSVGCursorElement::getConstructor(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSSVGCursorElementConstructor>(exec, jsCast<JSDOMGlobalObject*>(globalObject));
}

#if ENABLE(SVG)
EncodedJSValue JSC_HOST_CALL jsSVGCursorElementPrototypeFunctionHasExtension(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSSVGCursorElement::s_info))
        return throwVMTypeError(exec);
    JSSVGCursorElement* castedThis = jsCast<JSSVGCursorElement*>(asObject(thisValue));
    ASSERT_GC_OBJECT_INHERITS(castedThis, &JSSVGCursorElement::s_info);
    SVGCursorElement* impl = static_cast<SVGCursorElement*>(castedThis->impl());
    const String& extension(exec->argument(0).isEmpty() ? String() : exec->argument(0).toString(exec)->value(exec));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());

    JSC::JSValue result = jsBoolean(impl->hasExtension(extension));
    return JSValue::encode(result);
}

#endif


}

#endif // ENABLE(SVG)
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
#include "JSCSSMediaRule.h"

#include "CSSMediaRule.h"
#include "CSSRuleList.h"
#include "ExceptionCode.h"
#include "JSCSSRuleList.h"
#include "JSDOMBinding.h"
#include "JSMediaList.h"
#include "MediaList.h"
#include <runtime/Error.h>
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

/* Hash table */

static const HashTableValue JSCSSMediaRuleTableValues[] =
{
    { "media", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsCSSMediaRuleMedia), (intptr_t)0, NoIntrinsic },
    { "cssRules", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsCSSMediaRuleCssRules), (intptr_t)0, NoIntrinsic },
    { "constructor", DontEnum | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsCSSMediaRuleConstructor), (intptr_t)0, NoIntrinsic },
    { 0, 0, 0, 0, NoIntrinsic }
};

static const HashTable JSCSSMediaRuleTable = { 8, 7, JSCSSMediaRuleTableValues, 0 };
/* Hash table for constructor */

static const HashTableValue JSCSSMediaRuleConstructorTableValues[] =
{
    { 0, 0, 0, 0, NoIntrinsic }
};

static const HashTable JSCSSMediaRuleConstructorTable = { 1, 0, JSCSSMediaRuleConstructorTableValues, 0 };
const ClassInfo JSCSSMediaRuleConstructor::s_info = { "CSSMediaRuleConstructor", &Base::s_info, &JSCSSMediaRuleConstructorTable, 0, CREATE_METHOD_TABLE(JSCSSMediaRuleConstructor) };

JSCSSMediaRuleConstructor::JSCSSMediaRuleConstructor(Structure* structure, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(structure, globalObject)
{
}

void JSCSSMediaRuleConstructor::finishCreation(ExecState* exec, JSDOMGlobalObject* globalObject)
{
    Base::finishCreation(exec->vm());
    ASSERT(inherits(&s_info));
    putDirect(exec->vm(), exec->propertyNames().prototype, JSCSSMediaRulePrototype::self(exec, globalObject), DontDelete | ReadOnly);
    putDirect(exec->vm(), exec->propertyNames().length, jsNumber(0), ReadOnly | DontDelete | DontEnum);
}

bool JSCSSMediaRuleConstructor::getOwnPropertySlot(JSCell* cell, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSCSSMediaRuleConstructor, JSDOMWrapper>(exec, &JSCSSMediaRuleConstructorTable, jsCast<JSCSSMediaRuleConstructor*>(cell), propertyName, slot);
}

bool JSCSSMediaRuleConstructor::getOwnPropertyDescriptor(JSObject* object, ExecState* exec, PropertyName propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSCSSMediaRuleConstructor, JSDOMWrapper>(exec, &JSCSSMediaRuleConstructorTable, jsCast<JSCSSMediaRuleConstructor*>(object), propertyName, descriptor);
}

/* Hash table for prototype */

static const HashTableValue JSCSSMediaRulePrototypeTableValues[] =
{
    { "insertRule", DontDelete | JSC::Function, (intptr_t)static_cast<NativeFunction>(jsCSSMediaRulePrototypeFunctionInsertRule), (intptr_t)0, NoIntrinsic },
    { "deleteRule", DontDelete | JSC::Function, (intptr_t)static_cast<NativeFunction>(jsCSSMediaRulePrototypeFunctionDeleteRule), (intptr_t)0, NoIntrinsic },
    { 0, 0, 0, 0, NoIntrinsic }
};

static const HashTable JSCSSMediaRulePrototypeTable = { 4, 3, JSCSSMediaRulePrototypeTableValues, 0 };
const ClassInfo JSCSSMediaRulePrototype::s_info = { "CSSMediaRulePrototype", &Base::s_info, &JSCSSMediaRulePrototypeTable, 0, CREATE_METHOD_TABLE(JSCSSMediaRulePrototype) };

JSObject* JSCSSMediaRulePrototype::self(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSCSSMediaRule>(exec, globalObject);
}

bool JSCSSMediaRulePrototype::getOwnPropertySlot(JSCell* cell, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    JSCSSMediaRulePrototype* thisObject = jsCast<JSCSSMediaRulePrototype*>(cell);
    return getStaticFunctionSlot<JSObject>(exec, &JSCSSMediaRulePrototypeTable, thisObject, propertyName, slot);
}

bool JSCSSMediaRulePrototype::getOwnPropertyDescriptor(JSObject* object, ExecState* exec, PropertyName propertyName, PropertyDescriptor& descriptor)
{
    JSCSSMediaRulePrototype* thisObject = jsCast<JSCSSMediaRulePrototype*>(object);
    return getStaticFunctionDescriptor<JSObject>(exec, &JSCSSMediaRulePrototypeTable, thisObject, propertyName, descriptor);
}

const ClassInfo JSCSSMediaRule::s_info = { "CSSMediaRule", &Base::s_info, &JSCSSMediaRuleTable, 0 , CREATE_METHOD_TABLE(JSCSSMediaRule) };

JSCSSMediaRule::JSCSSMediaRule(Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<CSSMediaRule> impl)
    : JSCSSRule(structure, globalObject, impl)
{
}

void JSCSSMediaRule::finishCreation(VM& vm)
{
    Base::finishCreation(vm);
    ASSERT(inherits(&s_info));
}

JSObject* JSCSSMediaRule::createPrototype(ExecState* exec, JSGlobalObject* globalObject)
{
    return JSCSSMediaRulePrototype::create(exec->vm(), globalObject, JSCSSMediaRulePrototype::createStructure(exec->vm(), globalObject, JSCSSRulePrototype::self(exec, globalObject)));
}

bool JSCSSMediaRule::getOwnPropertySlot(JSCell* cell, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    JSCSSMediaRule* thisObject = jsCast<JSCSSMediaRule*>(cell);
    ASSERT_GC_OBJECT_INHERITS(thisObject, &s_info);
    return getStaticValueSlot<JSCSSMediaRule, Base>(exec, &JSCSSMediaRuleTable, thisObject, propertyName, slot);
}

bool JSCSSMediaRule::getOwnPropertyDescriptor(JSObject* object, ExecState* exec, PropertyName propertyName, PropertyDescriptor& descriptor)
{
    JSCSSMediaRule* thisObject = jsCast<JSCSSMediaRule*>(object);
    ASSERT_GC_OBJECT_INHERITS(thisObject, &s_info);
    return getStaticValueDescriptor<JSCSSMediaRule, Base>(exec, &JSCSSMediaRuleTable, thisObject, propertyName, descriptor);
}

JSValue jsCSSMediaRuleMedia(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSCSSMediaRule* castedThis = jsCast<JSCSSMediaRule*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    CSSMediaRule* impl = static_cast<CSSMediaRule*>(castedThis->impl());
    JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(impl->media()));
    return result;
}


JSValue jsCSSMediaRuleCssRules(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSCSSMediaRule* castedThis = jsCast<JSCSSMediaRule*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    CSSMediaRule* impl = static_cast<CSSMediaRule*>(castedThis->impl());
    JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(impl->cssRules()));
    return result;
}


JSValue jsCSSMediaRuleConstructor(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSCSSMediaRule* domObject = jsCast<JSCSSMediaRule*>(asObject(slotBase));
    return JSCSSMediaRule::getConstructor(exec, domObject->globalObject());
}

JSValue JSCSSMediaRule::getConstructor(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSCSSMediaRuleConstructor>(exec, jsCast<JSDOMGlobalObject*>(globalObject));
}

EncodedJSValue JSC_HOST_CALL jsCSSMediaRulePrototypeFunctionInsertRule(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSCSSMediaRule::s_info))
        return throwVMTypeError(exec);
    JSCSSMediaRule* castedThis = jsCast<JSCSSMediaRule*>(asObject(thisValue));
    ASSERT_GC_OBJECT_INHERITS(castedThis, &JSCSSMediaRule::s_info);
    CSSMediaRule* impl = static_cast<CSSMediaRule*>(castedThis->impl());
    ExceptionCode ec = 0;
    const String& rule(exec->argument(0).isEmpty() ? String() : exec->argument(0).toString(exec)->value(exec));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());
    unsigned index(toUInt32(exec, exec->argument(1), NormalConversion));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());

    JSC::JSValue result = jsNumber(impl->insertRule(rule, index, ec));
    setDOMException(exec, ec);
    return JSValue::encode(result);
}

EncodedJSValue JSC_HOST_CALL jsCSSMediaRulePrototypeFunctionDeleteRule(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSCSSMediaRule::s_info))
        return throwVMTypeError(exec);
    JSCSSMediaRule* castedThis = jsCast<JSCSSMediaRule*>(asObject(thisValue));
    ASSERT_GC_OBJECT_INHERITS(castedThis, &JSCSSMediaRule::s_info);
    CSSMediaRule* impl = static_cast<CSSMediaRule*>(castedThis->impl());
    ExceptionCode ec = 0;
    unsigned index(toUInt32(exec, exec->argument(0), NormalConversion));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());
    impl->deleteRule(index, ec);
    setDOMException(exec, ec);
    return JSValue::encode(jsUndefined());
}


}

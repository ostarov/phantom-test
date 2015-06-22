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

#if ENABLE(CSS3_CONDITIONAL_RULES)

#include "JSCSSSupportsRule.h"

#include "CSSRuleList.h"
#include "CSSSupportsRule.h"
#include "ExceptionCode.h"
#include "JSCSSRuleList.h"
#include "JSDOMBinding.h"
#include "KURL.h"
#include <runtime/Error.h>
#include <runtime/JSString.h>
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

/* Hash table */

static const HashTableValue JSCSSSupportsRuleTableValues[] =
{
    { "cssRules", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsCSSSupportsRuleCssRules), (intptr_t)0, NoIntrinsic },
    { "conditionText", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsCSSSupportsRuleConditionText), (intptr_t)0, NoIntrinsic },
    { 0, 0, 0, 0, NoIntrinsic }
};

static const HashTable JSCSSSupportsRuleTable = { 5, 3, JSCSSSupportsRuleTableValues, 0 };
/* Hash table for prototype */

static const HashTableValue JSCSSSupportsRulePrototypeTableValues[] =
{
    { "insertRule", DontDelete | JSC::Function, (intptr_t)static_cast<NativeFunction>(jsCSSSupportsRulePrototypeFunctionInsertRule), (intptr_t)0, NoIntrinsic },
    { "deleteRule", DontDelete | JSC::Function, (intptr_t)static_cast<NativeFunction>(jsCSSSupportsRulePrototypeFunctionDeleteRule), (intptr_t)0, NoIntrinsic },
    { 0, 0, 0, 0, NoIntrinsic }
};

static const HashTable JSCSSSupportsRulePrototypeTable = { 4, 3, JSCSSSupportsRulePrototypeTableValues, 0 };
const ClassInfo JSCSSSupportsRulePrototype::s_info = { "CSSSupportsRulePrototype", &Base::s_info, &JSCSSSupportsRulePrototypeTable, 0, CREATE_METHOD_TABLE(JSCSSSupportsRulePrototype) };

JSObject* JSCSSSupportsRulePrototype::self(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSCSSSupportsRule>(exec, globalObject);
}

bool JSCSSSupportsRulePrototype::getOwnPropertySlot(JSCell* cell, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    JSCSSSupportsRulePrototype* thisObject = jsCast<JSCSSSupportsRulePrototype*>(cell);
    return getStaticFunctionSlot<JSObject>(exec, &JSCSSSupportsRulePrototypeTable, thisObject, propertyName, slot);
}

bool JSCSSSupportsRulePrototype::getOwnPropertyDescriptor(JSObject* object, ExecState* exec, PropertyName propertyName, PropertyDescriptor& descriptor)
{
    JSCSSSupportsRulePrototype* thisObject = jsCast<JSCSSSupportsRulePrototype*>(object);
    return getStaticFunctionDescriptor<JSObject>(exec, &JSCSSSupportsRulePrototypeTable, thisObject, propertyName, descriptor);
}

const ClassInfo JSCSSSupportsRule::s_info = { "CSSSupportsRule", &Base::s_info, &JSCSSSupportsRuleTable, 0 , CREATE_METHOD_TABLE(JSCSSSupportsRule) };

JSCSSSupportsRule::JSCSSSupportsRule(Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<CSSSupportsRule> impl)
    : JSCSSRule(structure, globalObject, impl)
{
}

void JSCSSSupportsRule::finishCreation(VM& vm)
{
    Base::finishCreation(vm);
    ASSERT(inherits(&s_info));
}

JSObject* JSCSSSupportsRule::createPrototype(ExecState* exec, JSGlobalObject* globalObject)
{
    return JSCSSSupportsRulePrototype::create(exec->vm(), globalObject, JSCSSSupportsRulePrototype::createStructure(exec->vm(), globalObject, JSCSSRulePrototype::self(exec, globalObject)));
}

bool JSCSSSupportsRule::getOwnPropertySlot(JSCell* cell, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    JSCSSSupportsRule* thisObject = jsCast<JSCSSSupportsRule*>(cell);
    ASSERT_GC_OBJECT_INHERITS(thisObject, &s_info);
    return getStaticValueSlot<JSCSSSupportsRule, Base>(exec, &JSCSSSupportsRuleTable, thisObject, propertyName, slot);
}

bool JSCSSSupportsRule::getOwnPropertyDescriptor(JSObject* object, ExecState* exec, PropertyName propertyName, PropertyDescriptor& descriptor)
{
    JSCSSSupportsRule* thisObject = jsCast<JSCSSSupportsRule*>(object);
    ASSERT_GC_OBJECT_INHERITS(thisObject, &s_info);
    return getStaticValueDescriptor<JSCSSSupportsRule, Base>(exec, &JSCSSSupportsRuleTable, thisObject, propertyName, descriptor);
}

JSValue jsCSSSupportsRuleCssRules(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSCSSSupportsRule* castedThis = jsCast<JSCSSSupportsRule*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    CSSSupportsRule* impl = static_cast<CSSSupportsRule*>(castedThis->impl());
    JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(impl->cssRules()));
    return result;
}


JSValue jsCSSSupportsRuleConditionText(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSCSSSupportsRule* castedThis = jsCast<JSCSSSupportsRule*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    CSSSupportsRule* impl = static_cast<CSSSupportsRule*>(castedThis->impl());
    JSValue result = jsStringWithCache(exec, impl->conditionText());
    return result;
}


EncodedJSValue JSC_HOST_CALL jsCSSSupportsRulePrototypeFunctionInsertRule(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSCSSSupportsRule::s_info))
        return throwVMTypeError(exec);
    JSCSSSupportsRule* castedThis = jsCast<JSCSSSupportsRule*>(asObject(thisValue));
    ASSERT_GC_OBJECT_INHERITS(castedThis, &JSCSSSupportsRule::s_info);
    CSSSupportsRule* impl = static_cast<CSSSupportsRule*>(castedThis->impl());
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

EncodedJSValue JSC_HOST_CALL jsCSSSupportsRulePrototypeFunctionDeleteRule(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSCSSSupportsRule::s_info))
        return throwVMTypeError(exec);
    JSCSSSupportsRule* castedThis = jsCast<JSCSSSupportsRule*>(asObject(thisValue));
    ASSERT_GC_OBJECT_INHERITS(castedThis, &JSCSSSupportsRule::s_info);
    CSSSupportsRule* impl = static_cast<CSSSupportsRule*>(castedThis->impl());
    ExceptionCode ec = 0;
    unsigned index(toUInt32(exec, exec->argument(0), NormalConversion));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());
    impl->deleteRule(index, ec);
    setDOMException(exec, ec);
    return JSValue::encode(jsUndefined());
}


}

#endif // ENABLE(CSS3_CONDITIONAL_RULES)

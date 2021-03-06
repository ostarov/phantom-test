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
#include "JSCSSPageRule.h"

#include "CSSPageRule.h"
#include "CSSStyleDeclaration.h"
#include "JSCSSStyleDeclaration.h"
#include "KURL.h"
#include "StylePropertySet.h"
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

/* Hash table */

static const HashTableValue JSCSSPageRuleTableValues[] =
{
    { "selectorText", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsCSSPageRuleSelectorText), (intptr_t)setJSCSSPageRuleSelectorText, NoIntrinsic },
    { "style", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsCSSPageRuleStyle), (intptr_t)0, NoIntrinsic },
    { "constructor", DontEnum | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsCSSPageRuleConstructor), (intptr_t)0, NoIntrinsic },
    { 0, 0, 0, 0, NoIntrinsic }
};

static const HashTable JSCSSPageRuleTable = { 8, 7, JSCSSPageRuleTableValues, 0 };
/* Hash table for constructor */

static const HashTableValue JSCSSPageRuleConstructorTableValues[] =
{
    { 0, 0, 0, 0, NoIntrinsic }
};

static const HashTable JSCSSPageRuleConstructorTable = { 1, 0, JSCSSPageRuleConstructorTableValues, 0 };
const ClassInfo JSCSSPageRuleConstructor::s_info = { "CSSPageRuleConstructor", &Base::s_info, &JSCSSPageRuleConstructorTable, 0, CREATE_METHOD_TABLE(JSCSSPageRuleConstructor) };

JSCSSPageRuleConstructor::JSCSSPageRuleConstructor(Structure* structure, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(structure, globalObject)
{
}

void JSCSSPageRuleConstructor::finishCreation(ExecState* exec, JSDOMGlobalObject* globalObject)
{
    Base::finishCreation(exec->vm());
    ASSERT(inherits(&s_info));
    putDirect(exec->vm(), exec->propertyNames().prototype, JSCSSPageRulePrototype::self(exec, globalObject), DontDelete | ReadOnly);
    putDirect(exec->vm(), exec->propertyNames().length, jsNumber(0), ReadOnly | DontDelete | DontEnum);
}

bool JSCSSPageRuleConstructor::getOwnPropertySlot(JSCell* cell, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSCSSPageRuleConstructor, JSDOMWrapper>(exec, &JSCSSPageRuleConstructorTable, jsCast<JSCSSPageRuleConstructor*>(cell), propertyName, slot);
}

bool JSCSSPageRuleConstructor::getOwnPropertyDescriptor(JSObject* object, ExecState* exec, PropertyName propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSCSSPageRuleConstructor, JSDOMWrapper>(exec, &JSCSSPageRuleConstructorTable, jsCast<JSCSSPageRuleConstructor*>(object), propertyName, descriptor);
}

/* Hash table for prototype */

static const HashTableValue JSCSSPageRulePrototypeTableValues[] =
{
    { 0, 0, 0, 0, NoIntrinsic }
};

static const HashTable JSCSSPageRulePrototypeTable = { 1, 0, JSCSSPageRulePrototypeTableValues, 0 };
const ClassInfo JSCSSPageRulePrototype::s_info = { "CSSPageRulePrototype", &Base::s_info, &JSCSSPageRulePrototypeTable, 0, CREATE_METHOD_TABLE(JSCSSPageRulePrototype) };

JSObject* JSCSSPageRulePrototype::self(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSCSSPageRule>(exec, globalObject);
}

const ClassInfo JSCSSPageRule::s_info = { "CSSPageRule", &Base::s_info, &JSCSSPageRuleTable, 0 , CREATE_METHOD_TABLE(JSCSSPageRule) };

JSCSSPageRule::JSCSSPageRule(Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<CSSPageRule> impl)
    : JSCSSRule(structure, globalObject, impl)
{
}

void JSCSSPageRule::finishCreation(VM& vm)
{
    Base::finishCreation(vm);
    ASSERT(inherits(&s_info));
}

JSObject* JSCSSPageRule::createPrototype(ExecState* exec, JSGlobalObject* globalObject)
{
    return JSCSSPageRulePrototype::create(exec->vm(), globalObject, JSCSSPageRulePrototype::createStructure(exec->vm(), globalObject, JSCSSRulePrototype::self(exec, globalObject)));
}

bool JSCSSPageRule::getOwnPropertySlot(JSCell* cell, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    JSCSSPageRule* thisObject = jsCast<JSCSSPageRule*>(cell);
    ASSERT_GC_OBJECT_INHERITS(thisObject, &s_info);
    return getStaticValueSlot<JSCSSPageRule, Base>(exec, &JSCSSPageRuleTable, thisObject, propertyName, slot);
}

bool JSCSSPageRule::getOwnPropertyDescriptor(JSObject* object, ExecState* exec, PropertyName propertyName, PropertyDescriptor& descriptor)
{
    JSCSSPageRule* thisObject = jsCast<JSCSSPageRule*>(object);
    ASSERT_GC_OBJECT_INHERITS(thisObject, &s_info);
    return getStaticValueDescriptor<JSCSSPageRule, Base>(exec, &JSCSSPageRuleTable, thisObject, propertyName, descriptor);
}

JSValue jsCSSPageRuleSelectorText(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSCSSPageRule* castedThis = jsCast<JSCSSPageRule*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    CSSPageRule* impl = static_cast<CSSPageRule*>(castedThis->impl());
    JSValue result = jsStringOrNull(exec, impl->selectorText());
    return result;
}


JSValue jsCSSPageRuleStyle(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSCSSPageRule* castedThis = jsCast<JSCSSPageRule*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    CSSPageRule* impl = static_cast<CSSPageRule*>(castedThis->impl());
    JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(impl->style()));
    return result;
}


JSValue jsCSSPageRuleConstructor(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSCSSPageRule* domObject = jsCast<JSCSSPageRule*>(asObject(slotBase));
    return JSCSSPageRule::getConstructor(exec, domObject->globalObject());
}

void JSCSSPageRule::put(JSCell* cell, ExecState* exec, PropertyName propertyName, JSValue value, PutPropertySlot& slot)
{
    JSCSSPageRule* thisObject = jsCast<JSCSSPageRule*>(cell);
    ASSERT_GC_OBJECT_INHERITS(thisObject, &s_info);
    lookupPut<JSCSSPageRule, Base>(exec, propertyName, value, &JSCSSPageRuleTable, thisObject, slot);
}

void setJSCSSPageRuleSelectorText(ExecState* exec, JSObject* thisObject, JSValue value)
{
    UNUSED_PARAM(exec);
    JSCSSPageRule* castedThis = jsCast<JSCSSPageRule*>(thisObject);
    CSSPageRule* impl = static_cast<CSSPageRule*>(castedThis->impl());
    const String& nativeValue(valueToStringWithNullCheck(exec, value));
    if (exec->hadException())
        return;
    impl->setSelectorText(nativeValue);
}


JSValue JSCSSPageRule::getConstructor(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSCSSPageRuleConstructor>(exec, jsCast<JSDOMGlobalObject*>(globalObject));
}


}

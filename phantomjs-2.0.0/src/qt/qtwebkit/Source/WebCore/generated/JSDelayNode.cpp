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

#include "JSDelayNode.h"

#include "AudioParam.h"
#include "DelayNode.h"
#include "JSAudioParam.h"
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

/* Hash table */

static const HashTableValue JSDelayNodeTableValues[] =
{
    { "delayTime", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsDelayNodeDelayTime), (intptr_t)0, NoIntrinsic },
    { "constructor", DontEnum | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsDelayNodeConstructor), (intptr_t)0, NoIntrinsic },
    { 0, 0, 0, 0, NoIntrinsic }
};

static const HashTable JSDelayNodeTable = { 4, 3, JSDelayNodeTableValues, 0 };
/* Hash table for constructor */

static const HashTableValue JSDelayNodeConstructorTableValues[] =
{
    { 0, 0, 0, 0, NoIntrinsic }
};

static const HashTable JSDelayNodeConstructorTable = { 1, 0, JSDelayNodeConstructorTableValues, 0 };
const ClassInfo JSDelayNodeConstructor::s_info = { "DelayNodeConstructor", &Base::s_info, &JSDelayNodeConstructorTable, 0, CREATE_METHOD_TABLE(JSDelayNodeConstructor) };

JSDelayNodeConstructor::JSDelayNodeConstructor(Structure* structure, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(structure, globalObject)
{
}

void JSDelayNodeConstructor::finishCreation(ExecState* exec, JSDOMGlobalObject* globalObject)
{
    Base::finishCreation(exec->vm());
    ASSERT(inherits(&s_info));
    putDirect(exec->vm(), exec->propertyNames().prototype, JSDelayNodePrototype::self(exec, globalObject), DontDelete | ReadOnly);
    putDirect(exec->vm(), exec->propertyNames().length, jsNumber(0), ReadOnly | DontDelete | DontEnum);
}

bool JSDelayNodeConstructor::getOwnPropertySlot(JSCell* cell, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSDelayNodeConstructor, JSDOMWrapper>(exec, &JSDelayNodeConstructorTable, jsCast<JSDelayNodeConstructor*>(cell), propertyName, slot);
}

bool JSDelayNodeConstructor::getOwnPropertyDescriptor(JSObject* object, ExecState* exec, PropertyName propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSDelayNodeConstructor, JSDOMWrapper>(exec, &JSDelayNodeConstructorTable, jsCast<JSDelayNodeConstructor*>(object), propertyName, descriptor);
}

/* Hash table for prototype */

static const HashTableValue JSDelayNodePrototypeTableValues[] =
{
    { 0, 0, 0, 0, NoIntrinsic }
};

static const HashTable JSDelayNodePrototypeTable = { 1, 0, JSDelayNodePrototypeTableValues, 0 };
const ClassInfo JSDelayNodePrototype::s_info = { "DelayNodePrototype", &Base::s_info, &JSDelayNodePrototypeTable, 0, CREATE_METHOD_TABLE(JSDelayNodePrototype) };

JSObject* JSDelayNodePrototype::self(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSDelayNode>(exec, globalObject);
}

const ClassInfo JSDelayNode::s_info = { "DelayNode", &Base::s_info, &JSDelayNodeTable, 0 , CREATE_METHOD_TABLE(JSDelayNode) };

JSDelayNode::JSDelayNode(Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<DelayNode> impl)
    : JSAudioNode(structure, globalObject, impl)
{
}

void JSDelayNode::finishCreation(VM& vm)
{
    Base::finishCreation(vm);
    ASSERT(inherits(&s_info));
}

JSObject* JSDelayNode::createPrototype(ExecState* exec, JSGlobalObject* globalObject)
{
    return JSDelayNodePrototype::create(exec->vm(), globalObject, JSDelayNodePrototype::createStructure(exec->vm(), globalObject, JSAudioNodePrototype::self(exec, globalObject)));
}

bool JSDelayNode::getOwnPropertySlot(JSCell* cell, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    JSDelayNode* thisObject = jsCast<JSDelayNode*>(cell);
    ASSERT_GC_OBJECT_INHERITS(thisObject, &s_info);
    return getStaticValueSlot<JSDelayNode, Base>(exec, &JSDelayNodeTable, thisObject, propertyName, slot);
}

bool JSDelayNode::getOwnPropertyDescriptor(JSObject* object, ExecState* exec, PropertyName propertyName, PropertyDescriptor& descriptor)
{
    JSDelayNode* thisObject = jsCast<JSDelayNode*>(object);
    ASSERT_GC_OBJECT_INHERITS(thisObject, &s_info);
    return getStaticValueDescriptor<JSDelayNode, Base>(exec, &JSDelayNodeTable, thisObject, propertyName, descriptor);
}

JSValue jsDelayNodeDelayTime(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSDelayNode* castedThis = jsCast<JSDelayNode*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    DelayNode* impl = static_cast<DelayNode*>(castedThis->impl());
    JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(impl->delayTime()));
    return result;
}


JSValue jsDelayNodeConstructor(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSDelayNode* domObject = jsCast<JSDelayNode*>(asObject(slotBase));
    return JSDelayNode::getConstructor(exec, domObject->globalObject());
}

JSValue JSDelayNode::getConstructor(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSDelayNodeConstructor>(exec, jsCast<JSDOMGlobalObject*>(globalObject));
}

#if ENABLE(BINDING_INTEGRITY)
#if PLATFORM(WIN)
#pragma warning(disable: 4483)
extern "C" { extern void (*const __identifier("??_7DelayNode@WebCore@@6B@")[])(); }
#else
extern "C" { extern void* _ZTVN7WebCore9DelayNodeE[]; }
#endif
#endif
JSC::JSValue toJS(JSC::ExecState* exec, JSDOMGlobalObject* globalObject, DelayNode* impl)
{
    if (!impl)
        return jsNull();
    if (JSValue result = getExistingWrapper<JSDelayNode>(exec, impl))
        return result;

#if ENABLE(BINDING_INTEGRITY)
    void* actualVTablePointer = *(reinterpret_cast<void**>(impl));
#if PLATFORM(WIN)
    void* expectedVTablePointer = reinterpret_cast<void*>(__identifier("??_7DelayNode@WebCore@@6B@"));
#else
    void* expectedVTablePointer = &_ZTVN7WebCore9DelayNodeE[2];
#if COMPILER(CLANG) && COMPILER_SUPPORTS(CXX_STATIC_ASSERT)
    // If this fails DelayNode does not have a vtable, so you need to add the
    // ImplementationLacksVTable attribute to the interface definition
    COMPILE_ASSERT(__is_polymorphic(DelayNode), DelayNode_is_not_polymorphic);
#endif
#endif
    // If you hit this assertion you either have a use after free bug, or
    // DelayNode has subclasses. If DelayNode has subclasses that get passed
    // to toJS() we currently require DelayNode you to opt out of binding hardening
    // by adding the SkipVTableValidation attribute to the interface IDL definition
    RELEASE_ASSERT(actualVTablePointer == expectedVTablePointer);
#endif
    ReportMemoryCost<DelayNode>::reportMemoryCost(exec, impl);
    return createNewWrapper<JSDelayNode>(exec, globalObject, impl);
}


}

#endif // ENABLE(WEB_AUDIO)
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

#if ENABLE(INPUT_SPEECH)

#include "JSSpeechInputEvent.h"

#include "JSSpeechInputResultList.h"
#include "SpeechInputEvent.h"
#include "SpeechInputResultList.h"
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

/* Hash table */

static const HashTableValue JSSpeechInputEventTableValues[] =
{
    { "results", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSpeechInputEventResults), (intptr_t)0, NoIntrinsic },
    { "constructor", DontEnum | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSpeechInputEventConstructor), (intptr_t)0, NoIntrinsic },
    { 0, 0, 0, 0, NoIntrinsic }
};

static const HashTable JSSpeechInputEventTable = { 4, 3, JSSpeechInputEventTableValues, 0 };
/* Hash table for constructor */

static const HashTableValue JSSpeechInputEventConstructorTableValues[] =
{
    { 0, 0, 0, 0, NoIntrinsic }
};

static const HashTable JSSpeechInputEventConstructorTable = { 1, 0, JSSpeechInputEventConstructorTableValues, 0 };
const ClassInfo JSSpeechInputEventConstructor::s_info = { "SpeechInputEventConstructor", &Base::s_info, &JSSpeechInputEventConstructorTable, 0, CREATE_METHOD_TABLE(JSSpeechInputEventConstructor) };

JSSpeechInputEventConstructor::JSSpeechInputEventConstructor(Structure* structure, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(structure, globalObject)
{
}

void JSSpeechInputEventConstructor::finishCreation(ExecState* exec, JSDOMGlobalObject* globalObject)
{
    Base::finishCreation(exec->vm());
    ASSERT(inherits(&s_info));
    putDirect(exec->vm(), exec->propertyNames().prototype, JSSpeechInputEventPrototype::self(exec, globalObject), DontDelete | ReadOnly);
    putDirect(exec->vm(), exec->propertyNames().length, jsNumber(0), ReadOnly | DontDelete | DontEnum);
}

bool JSSpeechInputEventConstructor::getOwnPropertySlot(JSCell* cell, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSSpeechInputEventConstructor, JSDOMWrapper>(exec, &JSSpeechInputEventConstructorTable, jsCast<JSSpeechInputEventConstructor*>(cell), propertyName, slot);
}

bool JSSpeechInputEventConstructor::getOwnPropertyDescriptor(JSObject* object, ExecState* exec, PropertyName propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSSpeechInputEventConstructor, JSDOMWrapper>(exec, &JSSpeechInputEventConstructorTable, jsCast<JSSpeechInputEventConstructor*>(object), propertyName, descriptor);
}

/* Hash table for prototype */

static const HashTableValue JSSpeechInputEventPrototypeTableValues[] =
{
    { 0, 0, 0, 0, NoIntrinsic }
};

static const HashTable JSSpeechInputEventPrototypeTable = { 1, 0, JSSpeechInputEventPrototypeTableValues, 0 };
const ClassInfo JSSpeechInputEventPrototype::s_info = { "SpeechInputEventPrototype", &Base::s_info, &JSSpeechInputEventPrototypeTable, 0, CREATE_METHOD_TABLE(JSSpeechInputEventPrototype) };

JSObject* JSSpeechInputEventPrototype::self(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSSpeechInputEvent>(exec, globalObject);
}

const ClassInfo JSSpeechInputEvent::s_info = { "SpeechInputEvent", &Base::s_info, &JSSpeechInputEventTable, 0 , CREATE_METHOD_TABLE(JSSpeechInputEvent) };

JSSpeechInputEvent::JSSpeechInputEvent(Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<SpeechInputEvent> impl)
    : JSEvent(structure, globalObject, impl)
{
}

void JSSpeechInputEvent::finishCreation(VM& vm)
{
    Base::finishCreation(vm);
    ASSERT(inherits(&s_info));
}

JSObject* JSSpeechInputEvent::createPrototype(ExecState* exec, JSGlobalObject* globalObject)
{
    return JSSpeechInputEventPrototype::create(exec->vm(), globalObject, JSSpeechInputEventPrototype::createStructure(exec->vm(), globalObject, JSEventPrototype::self(exec, globalObject)));
}

bool JSSpeechInputEvent::getOwnPropertySlot(JSCell* cell, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    JSSpeechInputEvent* thisObject = jsCast<JSSpeechInputEvent*>(cell);
    ASSERT_GC_OBJECT_INHERITS(thisObject, &s_info);
    return getStaticValueSlot<JSSpeechInputEvent, Base>(exec, &JSSpeechInputEventTable, thisObject, propertyName, slot);
}

bool JSSpeechInputEvent::getOwnPropertyDescriptor(JSObject* object, ExecState* exec, PropertyName propertyName, PropertyDescriptor& descriptor)
{
    JSSpeechInputEvent* thisObject = jsCast<JSSpeechInputEvent*>(object);
    ASSERT_GC_OBJECT_INHERITS(thisObject, &s_info);
    return getStaticValueDescriptor<JSSpeechInputEvent, Base>(exec, &JSSpeechInputEventTable, thisObject, propertyName, descriptor);
}

JSValue jsSpeechInputEventResults(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSSpeechInputEvent* castedThis = jsCast<JSSpeechInputEvent*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SpeechInputEvent* impl = static_cast<SpeechInputEvent*>(castedThis->impl());
    JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(impl->results()));
    return result;
}


JSValue jsSpeechInputEventConstructor(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSSpeechInputEvent* domObject = jsCast<JSSpeechInputEvent*>(asObject(slotBase));
    return JSSpeechInputEvent::getConstructor(exec, domObject->globalObject());
}

JSValue JSSpeechInputEvent::getConstructor(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSSpeechInputEventConstructor>(exec, jsCast<JSDOMGlobalObject*>(globalObject));
}


}

#endif // ENABLE(INPUT_SPEECH)

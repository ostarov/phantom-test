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
#include "JSXPathNSResolver.h"

#include "ExceptionCode.h"
#include "JSCustomXPathNSResolver.h"
#include "JSDOMBinding.h"
#include "JSXPathNSResolver.h"
#include "KURL.h"
#include <runtime/Error.h>
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

/* Hash table for prototype */

static const HashTableValue JSXPathNSResolverPrototypeTableValues[] =
{
    { "lookupNamespaceURI", DontDelete | JSC::Function, (intptr_t)static_cast<NativeFunction>(jsXPathNSResolverPrototypeFunctionLookupNamespaceURI), (intptr_t)0, NoIntrinsic },
    { 0, 0, 0, 0, NoIntrinsic }
};

static const HashTable JSXPathNSResolverPrototypeTable = { 2, 1, JSXPathNSResolverPrototypeTableValues, 0 };
const ClassInfo JSXPathNSResolverPrototype::s_info = { "XPathNSResolverPrototype", &Base::s_info, &JSXPathNSResolverPrototypeTable, 0, CREATE_METHOD_TABLE(JSXPathNSResolverPrototype) };

JSObject* JSXPathNSResolverPrototype::self(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSXPathNSResolver>(exec, globalObject);
}

bool JSXPathNSResolverPrototype::getOwnPropertySlot(JSCell* cell, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    JSXPathNSResolverPrototype* thisObject = jsCast<JSXPathNSResolverPrototype*>(cell);
    return getStaticFunctionSlot<JSObject>(exec, &JSXPathNSResolverPrototypeTable, thisObject, propertyName, slot);
}

bool JSXPathNSResolverPrototype::getOwnPropertyDescriptor(JSObject* object, ExecState* exec, PropertyName propertyName, PropertyDescriptor& descriptor)
{
    JSXPathNSResolverPrototype* thisObject = jsCast<JSXPathNSResolverPrototype*>(object);
    return getStaticFunctionDescriptor<JSObject>(exec, &JSXPathNSResolverPrototypeTable, thisObject, propertyName, descriptor);
}

const ClassInfo JSXPathNSResolver::s_info = { "XPathNSResolver", &Base::s_info, 0, 0 , CREATE_METHOD_TABLE(JSXPathNSResolver) };

JSXPathNSResolver::JSXPathNSResolver(Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<XPathNSResolver> impl)
    : JSDOMWrapper(structure, globalObject)
    , m_impl(impl.leakRef())
{
}

void JSXPathNSResolver::finishCreation(VM& vm)
{
    Base::finishCreation(vm);
    ASSERT(inherits(&s_info));
}

JSObject* JSXPathNSResolver::createPrototype(ExecState* exec, JSGlobalObject* globalObject)
{
    return JSXPathNSResolverPrototype::create(exec->vm(), globalObject, JSXPathNSResolverPrototype::createStructure(globalObject->vm(), globalObject, globalObject->objectPrototype()));
}

void JSXPathNSResolver::destroy(JSC::JSCell* cell)
{
    JSXPathNSResolver* thisObject = static_cast<JSXPathNSResolver*>(cell);
    thisObject->JSXPathNSResolver::~JSXPathNSResolver();
}

JSXPathNSResolver::~JSXPathNSResolver()
{
    releaseImplIfNotNull();
}

EncodedJSValue JSC_HOST_CALL jsXPathNSResolverPrototypeFunctionLookupNamespaceURI(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSXPathNSResolver::s_info))
        return throwVMTypeError(exec);
    JSXPathNSResolver* castedThis = jsCast<JSXPathNSResolver*>(asObject(thisValue));
    ASSERT_GC_OBJECT_INHERITS(castedThis, &JSXPathNSResolver::s_info);
    XPathNSResolver* impl = static_cast<XPathNSResolver*>(castedThis->impl());
    const String& prefix(exec->argument(0).isEmpty() ? String() : exec->argument(0).toString(exec)->value(exec));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());

    JSC::JSValue result = jsStringOrNull(exec, impl->lookupNamespaceURI(prefix));
    return JSValue::encode(result);
}

static inline bool isObservable(JSXPathNSResolver* jsXPathNSResolver)
{
    if (jsXPathNSResolver->hasCustomProperties())
        return true;
    return false;
}

bool JSXPathNSResolverOwner::isReachableFromOpaqueRoots(JSC::Handle<JSC::Unknown> handle, void*, SlotVisitor& visitor)
{
    JSXPathNSResolver* jsXPathNSResolver = jsCast<JSXPathNSResolver*>(handle.get().asCell());
    if (!isObservable(jsXPathNSResolver))
        return false;
    UNUSED_PARAM(visitor);
    return false;
}

void JSXPathNSResolverOwner::finalize(JSC::Handle<JSC::Unknown> handle, void* context)
{
    JSXPathNSResolver* jsXPathNSResolver = jsCast<JSXPathNSResolver*>(handle.get().asCell());
    DOMWrapperWorld* world = static_cast<DOMWrapperWorld*>(context);
    uncacheWrapper(world, jsXPathNSResolver->impl(), jsXPathNSResolver);
    jsXPathNSResolver->releaseImpl();
}

JSC::JSValue toJS(JSC::ExecState* exec, JSDOMGlobalObject* globalObject, XPathNSResolver* impl)
{
    if (!impl)
        return jsNull();
    if (JSValue result = getExistingWrapper<JSXPathNSResolver>(exec, impl))
        return result;
    ReportMemoryCost<XPathNSResolver>::reportMemoryCost(exec, impl);
    return createNewWrapper<JSXPathNSResolver>(exec, globalObject, impl);
}

XPathNSResolver* toXPathNSResolver(JSC::JSValue value)
{
    return value.inherits(&JSXPathNSResolver::s_info) ? jsCast<JSXPathNSResolver*>(asObject(value))->impl() : 0;
}

}
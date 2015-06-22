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

#ifndef JSSharedWorkerGlobalScope_h
#define JSSharedWorkerGlobalScope_h

#if ENABLE(SHARED_WORKERS)

#include "JSDOMBinding.h"
#include "JSWorkerGlobalScope.h"
#include "SharedWorkerGlobalScope.h"
#include <runtime/JSObject.h>

namespace WebCore {

class SharedWorkerGlobalScope;

class JSSharedWorkerGlobalScope : public JSWorkerGlobalScope {
public:
    typedef JSWorkerGlobalScope Base;
    static JSSharedWorkerGlobalScope* create(JSC::VM& vm, JSC::Structure* structure, PassRefPtr<SharedWorkerGlobalScope> impl)
    {
        JSSharedWorkerGlobalScope* ptr = new (NotNull, JSC::allocateCell<JSSharedWorkerGlobalScope>(vm.heap)) JSSharedWorkerGlobalScope(vm, structure, impl);
        ptr->finishCreation(vm);
        vm.heap.addFinalizer(ptr, destroy);
        return ptr;
    }

    static const bool needsDestruction = false;

    static bool getOwnPropertySlot(JSC::JSCell*, JSC::ExecState*, JSC::PropertyName, JSC::PropertySlot&);
    static bool getOwnPropertyDescriptor(JSC::JSObject*, JSC::ExecState*, JSC::PropertyName, JSC::PropertyDescriptor&);
    static void put(JSC::JSCell*, JSC::ExecState*, JSC::PropertyName, JSC::JSValue, JSC::PutPropertySlot&);
    static const JSC::ClassInfo s_info;

    static JSC::Structure* createStructure(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(vm, globalObject, prototype, JSC::TypeInfo(JSC::GlobalObjectType, StructureFlags), &s_info);
    }

    static JSC::JSValue getConstructor(JSC::ExecState*, JSC::JSGlobalObject*);
    SharedWorkerGlobalScope* impl() const
    {
        return static_cast<SharedWorkerGlobalScope*>(Base::impl());
    }
protected:
    JSSharedWorkerGlobalScope(JSC::VM&, JSC::Structure*, PassRefPtr<SharedWorkerGlobalScope>);
    static const unsigned StructureFlags = JSC::OverridesGetOwnPropertySlot | JSC::InterceptsGetOwnPropertySlotByIndexEvenWhenLengthIsNotZero | Base::StructureFlags;
};

SharedWorkerGlobalScope* toSharedWorkerGlobalScope(JSC::JSValue);

class JSSharedWorkerGlobalScopePrototype : public JSC::JSNonFinalObject {
public:
    typedef JSC::JSNonFinalObject Base;
    static JSSharedWorkerGlobalScopePrototype* create(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::Structure* structure)
    {
        JSSharedWorkerGlobalScopePrototype* ptr = new (NotNull, JSC::allocateCell<JSSharedWorkerGlobalScopePrototype>(vm.heap)) JSSharedWorkerGlobalScopePrototype(vm, globalObject, structure);
        ptr->finishCreation(vm);
        return ptr;
    }

    static const JSC::ClassInfo s_info;
    static JSC::Structure* createStructure(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(vm, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), &s_info);
    }

private:
    JSSharedWorkerGlobalScopePrototype(JSC::VM& vm, JSC::JSGlobalObject*, JSC::Structure* structure) : JSC::JSNonFinalObject(vm, structure) { }
protected:
    static const unsigned StructureFlags = Base::StructureFlags;
};

class JSSharedWorkerGlobalScopeConstructor : public DOMConstructorObject {
private:
    JSSharedWorkerGlobalScopeConstructor(JSC::Structure*, JSDOMGlobalObject*);
    void finishCreation(JSC::ExecState*, JSDOMGlobalObject*);

public:
    typedef DOMConstructorObject Base;
    static JSSharedWorkerGlobalScopeConstructor* create(JSC::ExecState* exec, JSC::Structure* structure, JSDOMGlobalObject* globalObject)
    {
        JSSharedWorkerGlobalScopeConstructor* ptr = new (NotNull, JSC::allocateCell<JSSharedWorkerGlobalScopeConstructor>(*exec->heap())) JSSharedWorkerGlobalScopeConstructor(structure, globalObject);
        ptr->finishCreation(exec, globalObject);
        return ptr;
    }

    static bool getOwnPropertySlot(JSC::JSCell*, JSC::ExecState*, JSC::PropertyName, JSC::PropertySlot&);
    static bool getOwnPropertyDescriptor(JSC::JSObject*, JSC::ExecState*, JSC::PropertyName, JSC::PropertyDescriptor&);
    static const JSC::ClassInfo s_info;
    static JSC::Structure* createStructure(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(vm, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), &s_info);
    }
protected:
    static const unsigned StructureFlags = JSC::OverridesGetOwnPropertySlot | JSC::ImplementsHasInstance | DOMConstructorObject::StructureFlags;
};

// Attributes

JSC::JSValue jsSharedWorkerGlobalScopeName(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsSharedWorkerGlobalScopeOnconnect(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
void setJSSharedWorkerGlobalScopeOnconnect(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
#if ENABLE(SHARED_WORKERS)
JSC::JSValue jsSharedWorkerGlobalScopeSharedWorkerGlobalScopeConstructor(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
void setJSSharedWorkerGlobalScopeSharedWorkerGlobalScopeConstructor(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
#endif
JSC::JSValue jsSharedWorkerGlobalScopeConstructor(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);

} // namespace WebCore

#endif // ENABLE(SHARED_WORKERS)

#endif

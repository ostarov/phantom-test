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

#ifndef JSNodeIterator_h
#define JSNodeIterator_h

#include "JSDOMBinding.h"
#include "NodeIterator.h"
#include <runtime/JSGlobalObject.h>
#include <runtime/JSObject.h>
#include <runtime/ObjectPrototype.h>

namespace WebCore {

class JSNodeIterator : public JSDOMWrapper {
public:
    typedef JSDOMWrapper Base;
    static JSNodeIterator* create(JSC::Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<NodeIterator> impl)
    {
        JSNodeIterator* ptr = new (NotNull, JSC::allocateCell<JSNodeIterator>(globalObject->vm().heap)) JSNodeIterator(structure, globalObject, impl);
        ptr->finishCreation(globalObject->vm());
        return ptr;
    }

    static JSC::JSObject* createPrototype(JSC::ExecState*, JSC::JSGlobalObject*);
    static bool getOwnPropertySlot(JSC::JSCell*, JSC::ExecState*, JSC::PropertyName, JSC::PropertySlot&);
    static bool getOwnPropertyDescriptor(JSC::JSObject*, JSC::ExecState*, JSC::PropertyName, JSC::PropertyDescriptor&);
    static void destroy(JSC::JSCell*);
    ~JSNodeIterator();
    static const JSC::ClassInfo s_info;

    static JSC::Structure* createStructure(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(vm, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), &s_info);
    }

    static JSC::JSValue getConstructor(JSC::ExecState*, JSC::JSGlobalObject*);
    static void visitChildren(JSCell*, JSC::SlotVisitor&);

    NodeIterator* impl() const { return m_impl; }
    void releaseImpl() { m_impl->deref(); m_impl = 0; }

    void releaseImplIfNotNull()
    {
        if (m_impl) {
            m_impl->deref();
            m_impl = 0;
        }
    }

private:
    NodeIterator* m_impl;
protected:
    JSNodeIterator(JSC::Structure*, JSDOMGlobalObject*, PassRefPtr<NodeIterator>);
    void finishCreation(JSC::VM&);
    static const unsigned StructureFlags = JSC::OverridesGetOwnPropertySlot | JSC::InterceptsGetOwnPropertySlotByIndexEvenWhenLengthIsNotZero | JSC::OverridesVisitChildren | Base::StructureFlags;
};

class JSNodeIteratorOwner : public JSC::WeakHandleOwner {
public:
    virtual bool isReachableFromOpaqueRoots(JSC::Handle<JSC::Unknown>, void* context, JSC::SlotVisitor&);
    virtual void finalize(JSC::Handle<JSC::Unknown>, void* context);
};

inline JSC::WeakHandleOwner* wrapperOwner(DOMWrapperWorld*, NodeIterator*)
{
    DEFINE_STATIC_LOCAL(JSNodeIteratorOwner, jsNodeIteratorOwner, ());
    return &jsNodeIteratorOwner;
}

inline void* wrapperContext(DOMWrapperWorld* world, NodeIterator*)
{
    return world;
}

JSC::JSValue toJS(JSC::ExecState*, JSDOMGlobalObject*, NodeIterator*);
NodeIterator* toNodeIterator(JSC::JSValue);

class JSNodeIteratorPrototype : public JSC::JSNonFinalObject {
public:
    typedef JSC::JSNonFinalObject Base;
    static JSC::JSObject* self(JSC::ExecState*, JSC::JSGlobalObject*);
    static JSNodeIteratorPrototype* create(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::Structure* structure)
    {
        JSNodeIteratorPrototype* ptr = new (NotNull, JSC::allocateCell<JSNodeIteratorPrototype>(vm.heap)) JSNodeIteratorPrototype(vm, globalObject, structure);
        ptr->finishCreation(vm);
        return ptr;
    }

    static const JSC::ClassInfo s_info;
    static bool getOwnPropertySlot(JSC::JSCell*, JSC::ExecState*, JSC::PropertyName, JSC::PropertySlot&);
    static bool getOwnPropertyDescriptor(JSC::JSObject*, JSC::ExecState*, JSC::PropertyName, JSC::PropertyDescriptor&);
    static JSC::Structure* createStructure(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(vm, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), &s_info);
    }

private:
    JSNodeIteratorPrototype(JSC::VM& vm, JSC::JSGlobalObject*, JSC::Structure* structure) : JSC::JSNonFinalObject(vm, structure) { }
protected:
    static const unsigned StructureFlags = JSC::OverridesGetOwnPropertySlot | JSC::OverridesVisitChildren | Base::StructureFlags;
};

class JSNodeIteratorConstructor : public DOMConstructorObject {
private:
    JSNodeIteratorConstructor(JSC::Structure*, JSDOMGlobalObject*);
    void finishCreation(JSC::ExecState*, JSDOMGlobalObject*);

public:
    typedef DOMConstructorObject Base;
    static JSNodeIteratorConstructor* create(JSC::ExecState* exec, JSC::Structure* structure, JSDOMGlobalObject* globalObject)
    {
        JSNodeIteratorConstructor* ptr = new (NotNull, JSC::allocateCell<JSNodeIteratorConstructor>(*exec->heap())) JSNodeIteratorConstructor(structure, globalObject);
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

// Functions

JSC::EncodedJSValue JSC_HOST_CALL jsNodeIteratorPrototypeFunctionNextNode(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsNodeIteratorPrototypeFunctionPreviousNode(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsNodeIteratorPrototypeFunctionDetach(JSC::ExecState*);
// Attributes

JSC::JSValue jsNodeIteratorRoot(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsNodeIteratorWhatToShow(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsNodeIteratorFilter(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsNodeIteratorExpandEntityReferences(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsNodeIteratorReferenceNode(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsNodeIteratorPointerBeforeReferenceNode(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsNodeIteratorConstructor(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);

} // namespace WebCore

#endif

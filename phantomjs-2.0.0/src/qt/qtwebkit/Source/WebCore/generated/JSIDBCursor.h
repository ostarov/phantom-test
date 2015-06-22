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

#ifndef JSIDBCursor_h
#define JSIDBCursor_h

#if ENABLE(INDEXED_DATABASE)

#include "IDBCursor.h"
#include "JSDOMBinding.h"
#include <runtime/JSGlobalObject.h>
#include <runtime/JSObject.h>
#include <runtime/ObjectPrototype.h>

namespace WebCore {

class JSIDBCursor : public JSDOMWrapper {
public:
    typedef JSDOMWrapper Base;
    static JSIDBCursor* create(JSC::Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<IDBCursor> impl)
    {
        JSIDBCursor* ptr = new (NotNull, JSC::allocateCell<JSIDBCursor>(globalObject->vm().heap)) JSIDBCursor(structure, globalObject, impl);
        ptr->finishCreation(globalObject->vm());
        return ptr;
    }

    static JSC::JSObject* createPrototype(JSC::ExecState*, JSC::JSGlobalObject*);
    static bool getOwnPropertySlot(JSC::JSCell*, JSC::ExecState*, JSC::PropertyName, JSC::PropertySlot&);
    static bool getOwnPropertyDescriptor(JSC::JSObject*, JSC::ExecState*, JSC::PropertyName, JSC::PropertyDescriptor&);
    static void destroy(JSC::JSCell*);
    ~JSIDBCursor();
    static const JSC::ClassInfo s_info;

    static JSC::Structure* createStructure(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(vm, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), &s_info);
    }

    static JSC::JSValue getConstructor(JSC::ExecState*, JSC::JSGlobalObject*);
    IDBCursor* impl() const { return m_impl; }
    void releaseImpl() { m_impl->deref(); m_impl = 0; }

    void releaseImplIfNotNull()
    {
        if (m_impl) {
            m_impl->deref();
            m_impl = 0;
        }
    }

private:
    IDBCursor* m_impl;
protected:
    JSIDBCursor(JSC::Structure*, JSDOMGlobalObject*, PassRefPtr<IDBCursor>);
    void finishCreation(JSC::VM&);
    static const unsigned StructureFlags = JSC::OverridesGetOwnPropertySlot | JSC::InterceptsGetOwnPropertySlotByIndexEvenWhenLengthIsNotZero | Base::StructureFlags;
};

class JSIDBCursorOwner : public JSC::WeakHandleOwner {
public:
    virtual bool isReachableFromOpaqueRoots(JSC::Handle<JSC::Unknown>, void* context, JSC::SlotVisitor&);
    virtual void finalize(JSC::Handle<JSC::Unknown>, void* context);
};

inline JSC::WeakHandleOwner* wrapperOwner(DOMWrapperWorld*, IDBCursor*)
{
    DEFINE_STATIC_LOCAL(JSIDBCursorOwner, jsIDBCursorOwner, ());
    return &jsIDBCursorOwner;
}

inline void* wrapperContext(DOMWrapperWorld* world, IDBCursor*)
{
    return world;
}

JSC::JSValue toJS(JSC::ExecState*, JSDOMGlobalObject*, IDBCursor*);
IDBCursor* toIDBCursor(JSC::JSValue);

class JSIDBCursorPrototype : public JSC::JSNonFinalObject {
public:
    typedef JSC::JSNonFinalObject Base;
    static JSC::JSObject* self(JSC::ExecState*, JSC::JSGlobalObject*);
    static JSIDBCursorPrototype* create(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::Structure* structure)
    {
        JSIDBCursorPrototype* ptr = new (NotNull, JSC::allocateCell<JSIDBCursorPrototype>(vm.heap)) JSIDBCursorPrototype(vm, globalObject, structure);
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
    JSIDBCursorPrototype(JSC::VM& vm, JSC::JSGlobalObject*, JSC::Structure* structure) : JSC::JSNonFinalObject(vm, structure) { }
protected:
    static const unsigned StructureFlags = JSC::OverridesGetOwnPropertySlot | Base::StructureFlags;
};

class JSIDBCursorConstructor : public DOMConstructorObject {
private:
    JSIDBCursorConstructor(JSC::Structure*, JSDOMGlobalObject*);
    void finishCreation(JSC::ExecState*, JSDOMGlobalObject*);

public:
    typedef DOMConstructorObject Base;
    static JSIDBCursorConstructor* create(JSC::ExecState* exec, JSC::Structure* structure, JSDOMGlobalObject* globalObject)
    {
        JSIDBCursorConstructor* ptr = new (NotNull, JSC::allocateCell<JSIDBCursorConstructor>(*exec->heap())) JSIDBCursorConstructor(structure, globalObject);
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

JSC::EncodedJSValue JSC_HOST_CALL jsIDBCursorPrototypeFunctionUpdate(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsIDBCursorPrototypeFunctionAdvance(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsIDBCursorPrototypeFunctionContinue(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsIDBCursorPrototypeFunctionDelete(JSC::ExecState*);
// Attributes

JSC::JSValue jsIDBCursorDirection(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsIDBCursorKey(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsIDBCursorPrimaryKey(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsIDBCursorSource(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsIDBCursorConstructor(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);

} // namespace WebCore

#endif // ENABLE(INDEXED_DATABASE)

#endif

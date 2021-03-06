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

#ifndef JSPerformanceEntry_h
#define JSPerformanceEntry_h

#if ENABLE(PERFORMANCE_TIMELINE)

#include "JSDOMBinding.h"
#include "PerformanceEntry.h"
#include <runtime/JSGlobalObject.h>
#include <runtime/JSObject.h>
#include <runtime/ObjectPrototype.h>

namespace WebCore {

class JSPerformanceEntry : public JSDOMWrapper {
public:
    typedef JSDOMWrapper Base;
    static JSPerformanceEntry* create(JSC::Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<PerformanceEntry> impl)
    {
        JSPerformanceEntry* ptr = new (NotNull, JSC::allocateCell<JSPerformanceEntry>(globalObject->vm().heap)) JSPerformanceEntry(structure, globalObject, impl);
        ptr->finishCreation(globalObject->vm());
        return ptr;
    }

    static JSC::JSObject* createPrototype(JSC::ExecState*, JSC::JSGlobalObject*);
    static bool getOwnPropertySlot(JSC::JSCell*, JSC::ExecState*, JSC::PropertyName, JSC::PropertySlot&);
    static bool getOwnPropertyDescriptor(JSC::JSObject*, JSC::ExecState*, JSC::PropertyName, JSC::PropertyDescriptor&);
    static void destroy(JSC::JSCell*);
    ~JSPerformanceEntry();
    static const JSC::ClassInfo s_info;

    static JSC::Structure* createStructure(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(vm, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), &s_info);
    }

    static JSC::JSValue getConstructor(JSC::ExecState*, JSC::JSGlobalObject*);
    PerformanceEntry* impl() const { return m_impl; }
    void releaseImpl() { m_impl->deref(); m_impl = 0; }

    void releaseImplIfNotNull()
    {
        if (m_impl) {
            m_impl->deref();
            m_impl = 0;
        }
    }

private:
    PerformanceEntry* m_impl;
protected:
    JSPerformanceEntry(JSC::Structure*, JSDOMGlobalObject*, PassRefPtr<PerformanceEntry>);
    void finishCreation(JSC::VM&);
    static const unsigned StructureFlags = JSC::OverridesGetOwnPropertySlot | JSC::InterceptsGetOwnPropertySlotByIndexEvenWhenLengthIsNotZero | Base::StructureFlags;
};

class JSPerformanceEntryOwner : public JSC::WeakHandleOwner {
public:
    virtual bool isReachableFromOpaqueRoots(JSC::Handle<JSC::Unknown>, void* context, JSC::SlotVisitor&);
    virtual void finalize(JSC::Handle<JSC::Unknown>, void* context);
};

inline JSC::WeakHandleOwner* wrapperOwner(DOMWrapperWorld*, PerformanceEntry*)
{
    DEFINE_STATIC_LOCAL(JSPerformanceEntryOwner, jsPerformanceEntryOwner, ());
    return &jsPerformanceEntryOwner;
}

inline void* wrapperContext(DOMWrapperWorld* world, PerformanceEntry*)
{
    return world;
}

JSC::JSValue toJS(JSC::ExecState*, JSDOMGlobalObject*, PerformanceEntry*);
PerformanceEntry* toPerformanceEntry(JSC::JSValue);

class JSPerformanceEntryPrototype : public JSC::JSNonFinalObject {
public:
    typedef JSC::JSNonFinalObject Base;
    static JSC::JSObject* self(JSC::ExecState*, JSC::JSGlobalObject*);
    static JSPerformanceEntryPrototype* create(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::Structure* structure)
    {
        JSPerformanceEntryPrototype* ptr = new (NotNull, JSC::allocateCell<JSPerformanceEntryPrototype>(vm.heap)) JSPerformanceEntryPrototype(vm, globalObject, structure);
        ptr->finishCreation(vm);
        return ptr;
    }

    static const JSC::ClassInfo s_info;
    static JSC::Structure* createStructure(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(vm, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), &s_info);
    }

private:
    JSPerformanceEntryPrototype(JSC::VM& vm, JSC::JSGlobalObject*, JSC::Structure* structure) : JSC::JSNonFinalObject(vm, structure) { }
protected:
    static const unsigned StructureFlags = Base::StructureFlags;
};

class JSPerformanceEntryConstructor : public DOMConstructorObject {
private:
    JSPerformanceEntryConstructor(JSC::Structure*, JSDOMGlobalObject*);
    void finishCreation(JSC::ExecState*, JSDOMGlobalObject*);

public:
    typedef DOMConstructorObject Base;
    static JSPerformanceEntryConstructor* create(JSC::ExecState* exec, JSC::Structure* structure, JSDOMGlobalObject* globalObject)
    {
        JSPerformanceEntryConstructor* ptr = new (NotNull, JSC::allocateCell<JSPerformanceEntryConstructor>(*exec->heap())) JSPerformanceEntryConstructor(structure, globalObject);
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

JSC::JSValue jsPerformanceEntryName(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsPerformanceEntryEntryType(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsPerformanceEntryStartTime(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsPerformanceEntryDuration(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsPerformanceEntryConstructor(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);

} // namespace WebCore

#endif // ENABLE(PERFORMANCE_TIMELINE)

#endif

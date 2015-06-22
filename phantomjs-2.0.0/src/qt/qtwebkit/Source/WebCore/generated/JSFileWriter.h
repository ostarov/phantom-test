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

#ifndef JSFileWriter_h
#define JSFileWriter_h

#if ENABLE(FILE_SYSTEM)

#include "FileWriter.h"
#include "JSDOMBinding.h"
#include <runtime/JSGlobalObject.h>
#include <runtime/JSObject.h>
#include <runtime/ObjectPrototype.h>

namespace WebCore {

class JSFileWriter : public JSDOMWrapper {
public:
    typedef JSDOMWrapper Base;
    static JSFileWriter* create(JSC::Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<FileWriter> impl)
    {
        JSFileWriter* ptr = new (NotNull, JSC::allocateCell<JSFileWriter>(globalObject->vm().heap)) JSFileWriter(structure, globalObject, impl);
        ptr->finishCreation(globalObject->vm());
        return ptr;
    }

    static JSC::JSObject* createPrototype(JSC::ExecState*, JSC::JSGlobalObject*);
    static bool getOwnPropertySlot(JSC::JSCell*, JSC::ExecState*, JSC::PropertyName, JSC::PropertySlot&);
    static bool getOwnPropertyDescriptor(JSC::JSObject*, JSC::ExecState*, JSC::PropertyName, JSC::PropertyDescriptor&);
    static void put(JSC::JSCell*, JSC::ExecState*, JSC::PropertyName, JSC::JSValue, JSC::PutPropertySlot&);
    static void destroy(JSC::JSCell*);
    ~JSFileWriter();
    static const JSC::ClassInfo s_info;

    static JSC::Structure* createStructure(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(vm, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), &s_info);
    }

    static void visitChildren(JSCell*, JSC::SlotVisitor&);

    FileWriter* impl() const { return m_impl; }
    void releaseImpl() { m_impl->deref(); m_impl = 0; }

    void releaseImplIfNotNull()
    {
        if (m_impl) {
            m_impl->deref();
            m_impl = 0;
        }
    }

private:
    FileWriter* m_impl;
protected:
    JSFileWriter(JSC::Structure*, JSDOMGlobalObject*, PassRefPtr<FileWriter>);
    void finishCreation(JSC::VM&);
    static const unsigned StructureFlags = JSC::OverridesGetOwnPropertySlot | JSC::InterceptsGetOwnPropertySlotByIndexEvenWhenLengthIsNotZero | JSC::OverridesVisitChildren | Base::StructureFlags;
};

class JSFileWriterOwner : public JSC::WeakHandleOwner {
public:
    virtual bool isReachableFromOpaqueRoots(JSC::Handle<JSC::Unknown>, void* context, JSC::SlotVisitor&);
    virtual void finalize(JSC::Handle<JSC::Unknown>, void* context);
};

inline JSC::WeakHandleOwner* wrapperOwner(DOMWrapperWorld*, FileWriter*)
{
    DEFINE_STATIC_LOCAL(JSFileWriterOwner, jsFileWriterOwner, ());
    return &jsFileWriterOwner;
}

inline void* wrapperContext(DOMWrapperWorld* world, FileWriter*)
{
    return world;
}

JSC::JSValue toJS(JSC::ExecState*, JSDOMGlobalObject*, FileWriter*);
FileWriter* toFileWriter(JSC::JSValue);

class JSFileWriterPrototype : public JSC::JSNonFinalObject {
public:
    typedef JSC::JSNonFinalObject Base;
    static JSC::JSObject* self(JSC::ExecState*, JSC::JSGlobalObject*);
    static JSFileWriterPrototype* create(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::Structure* structure)
    {
        JSFileWriterPrototype* ptr = new (NotNull, JSC::allocateCell<JSFileWriterPrototype>(vm.heap)) JSFileWriterPrototype(vm, globalObject, structure);
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
    JSFileWriterPrototype(JSC::VM& vm, JSC::JSGlobalObject*, JSC::Structure* structure) : JSC::JSNonFinalObject(vm, structure) { }
protected:
    static const unsigned StructureFlags = JSC::OverridesGetOwnPropertySlot | JSC::OverridesVisitChildren | Base::StructureFlags;
};

// Functions

JSC::EncodedJSValue JSC_HOST_CALL jsFileWriterPrototypeFunctionWrite(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsFileWriterPrototypeFunctionSeek(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsFileWriterPrototypeFunctionTruncate(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsFileWriterPrototypeFunctionAbort(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsFileWriterPrototypeFunctionAddEventListener(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsFileWriterPrototypeFunctionRemoveEventListener(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsFileWriterPrototypeFunctionDispatchEvent(JSC::ExecState*);
// Attributes

JSC::JSValue jsFileWriterReadyState(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsFileWriterError(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsFileWriterPosition(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsFileWriterLength(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsFileWriterOnwritestart(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
void setJSFileWriterOnwritestart(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsFileWriterOnprogress(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
void setJSFileWriterOnprogress(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsFileWriterOnwrite(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
void setJSFileWriterOnwrite(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsFileWriterOnabort(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
void setJSFileWriterOnabort(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsFileWriterOnerror(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
void setJSFileWriterOnerror(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsFileWriterOnwriteend(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
void setJSFileWriterOnwriteend(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
// Constants

JSC::JSValue jsFileWriterINIT(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsFileWriterWRITING(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsFileWriterDONE(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);

} // namespace WebCore

#endif // ENABLE(FILE_SYSTEM)

#endif

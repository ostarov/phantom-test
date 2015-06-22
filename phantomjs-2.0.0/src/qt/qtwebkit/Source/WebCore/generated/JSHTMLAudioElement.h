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

#ifndef JSHTMLAudioElement_h
#define JSHTMLAudioElement_h

#if ENABLE(VIDEO)

#include "HTMLAudioElement.h"
#include "JSDOMBinding.h"
#include "JSHTMLMediaElement.h"
#include "JSNode.h"
#include <runtime/JSObject.h>

namespace WebCore {

class JSHTMLAudioElement : public JSHTMLMediaElement {
public:
    typedef JSHTMLMediaElement Base;
    static JSHTMLAudioElement* create(JSC::Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<HTMLAudioElement> impl)
    {
        JSHTMLAudioElement* ptr = new (NotNull, JSC::allocateCell<JSHTMLAudioElement>(globalObject->vm().heap)) JSHTMLAudioElement(structure, globalObject, impl);
        ptr->finishCreation(globalObject->vm());
        return ptr;
    }

    static JSC::JSObject* createPrototype(JSC::ExecState*, JSC::JSGlobalObject*);
    static bool getOwnPropertySlot(JSC::JSCell*, JSC::ExecState*, JSC::PropertyName, JSC::PropertySlot&);
    static bool getOwnPropertyDescriptor(JSC::JSObject*, JSC::ExecState*, JSC::PropertyName, JSC::PropertyDescriptor&);
    static const JSC::ClassInfo s_info;

    static JSC::Structure* createStructure(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(vm, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), &s_info);
    }

    static JSC::JSValue getConstructor(JSC::ExecState*, JSC::JSGlobalObject*);
    static JSC::JSValue getNamedConstructor(JSC::ExecState*, JSC::JSGlobalObject*);
protected:
    JSHTMLAudioElement(JSC::Structure*, JSDOMGlobalObject*, PassRefPtr<HTMLAudioElement>);
    void finishCreation(JSC::VM&);
    static const unsigned StructureFlags = JSC::OverridesGetOwnPropertySlot | JSC::InterceptsGetOwnPropertySlotByIndexEvenWhenLengthIsNotZero | Base::StructureFlags;
};

class JSHTMLAudioElementOwner : public JSNodeOwner {
public:
    virtual bool isReachableFromOpaqueRoots(JSC::Handle<JSC::Unknown>, void* context, JSC::SlotVisitor&);
    virtual void finalize(JSC::Handle<JSC::Unknown>, void* context);
};

inline JSC::WeakHandleOwner* wrapperOwner(DOMWrapperWorld*, HTMLAudioElement*)
{
    DEFINE_STATIC_LOCAL(JSHTMLAudioElementOwner, jsHTMLAudioElementOwner, ());
    return &jsHTMLAudioElementOwner;
}

inline void* wrapperContext(DOMWrapperWorld* world, HTMLAudioElement*)
{
    return world;
}


class JSHTMLAudioElementPrototype : public JSC::JSNonFinalObject {
public:
    typedef JSC::JSNonFinalObject Base;
    static JSC::JSObject* self(JSC::ExecState*, JSC::JSGlobalObject*);
    static JSHTMLAudioElementPrototype* create(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::Structure* structure)
    {
        JSHTMLAudioElementPrototype* ptr = new (NotNull, JSC::allocateCell<JSHTMLAudioElementPrototype>(vm.heap)) JSHTMLAudioElementPrototype(vm, globalObject, structure);
        ptr->finishCreation(vm);
        return ptr;
    }

    static const JSC::ClassInfo s_info;
    static JSC::Structure* createStructure(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(vm, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), &s_info);
    }

private:
    JSHTMLAudioElementPrototype(JSC::VM& vm, JSC::JSGlobalObject*, JSC::Structure* structure) : JSC::JSNonFinalObject(vm, structure) { }
protected:
    static const unsigned StructureFlags = Base::StructureFlags;
};

class JSHTMLAudioElementConstructor : public DOMConstructorObject {
private:
    JSHTMLAudioElementConstructor(JSC::Structure*, JSDOMGlobalObject*);
    void finishCreation(JSC::ExecState*, JSDOMGlobalObject*);

public:
    typedef DOMConstructorObject Base;
    static JSHTMLAudioElementConstructor* create(JSC::ExecState* exec, JSC::Structure* structure, JSDOMGlobalObject* globalObject)
    {
        JSHTMLAudioElementConstructor* ptr = new (NotNull, JSC::allocateCell<JSHTMLAudioElementConstructor>(*exec->heap())) JSHTMLAudioElementConstructor(structure, globalObject);
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

class JSHTMLAudioElementNamedConstructor : public DOMConstructorWithDocument {
public:
    typedef DOMConstructorWithDocument Base;

    static JSHTMLAudioElementNamedConstructor* create(JSC::ExecState* exec, JSC::Structure* structure, JSDOMGlobalObject* globalObject)
    {
        JSHTMLAudioElementNamedConstructor* constructor = new (NotNull, JSC::allocateCell<JSHTMLAudioElementNamedConstructor>(*exec->heap())) JSHTMLAudioElementNamedConstructor(structure, globalObject);
        constructor->finishCreation(exec, globalObject);
        return constructor;
    }

    static JSC::Structure* createStructure(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(vm, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), &s_info);
    }

    static const JSC::ClassInfo s_info;

private:
    JSHTMLAudioElementNamedConstructor(JSC::Structure*, JSDOMGlobalObject*);
    static JSC::EncodedJSValue JSC_HOST_CALL constructJSHTMLAudioElement(JSC::ExecState*);
    static JSC::ConstructType getConstructData(JSC::JSCell*, JSC::ConstructData&);
    void finishCreation(JSC::ExecState*, JSDOMGlobalObject*);
};

// Attributes

JSC::JSValue jsHTMLAudioElementConstructor(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);

} // namespace WebCore

#endif // ENABLE(VIDEO)

#endif

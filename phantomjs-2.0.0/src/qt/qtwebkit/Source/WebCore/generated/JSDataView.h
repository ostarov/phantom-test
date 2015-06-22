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

#ifndef JSDataView_h
#define JSDataView_h

#include "DataView.h"
#include "JSArrayBufferView.h"
#include "JSDOMBinding.h"
#include <runtime/JSObject.h>

namespace WebCore {

class JSDataView : public JSArrayBufferView {
public:
    typedef JSArrayBufferView Base;
    static JSDataView* create(JSC::Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<DataView> impl)
    {
        JSDataView* ptr = new (NotNull, JSC::allocateCell<JSDataView>(globalObject->vm().heap)) JSDataView(structure, globalObject, impl);
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

    // Custom functions
    JSC::JSValue getFloat32(JSC::ExecState*);
    JSC::JSValue getFloat64(JSC::ExecState*);
protected:
    JSDataView(JSC::Structure*, JSDOMGlobalObject*, PassRefPtr<DataView>);
    void finishCreation(JSC::VM&);
    static const unsigned StructureFlags = JSC::OverridesGetOwnPropertySlot | JSC::InterceptsGetOwnPropertySlotByIndexEvenWhenLengthIsNotZero | Base::StructureFlags;
};

JSC::JSValue toJS(JSC::ExecState*, JSDOMGlobalObject*, DataView*);

class JSDataViewPrototype : public JSC::JSNonFinalObject {
public:
    typedef JSC::JSNonFinalObject Base;
    static JSC::JSObject* self(JSC::ExecState*, JSC::JSGlobalObject*);
    static JSDataViewPrototype* create(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::Structure* structure)
    {
        JSDataViewPrototype* ptr = new (NotNull, JSC::allocateCell<JSDataViewPrototype>(vm.heap)) JSDataViewPrototype(vm, globalObject, structure);
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
    JSDataViewPrototype(JSC::VM& vm, JSC::JSGlobalObject*, JSC::Structure* structure) : JSC::JSNonFinalObject(vm, structure) { }
protected:
    static const unsigned StructureFlags = JSC::OverridesGetOwnPropertySlot | Base::StructureFlags;
};

class JSDataViewConstructor : public DOMConstructorObject {
private:
    JSDataViewConstructor(JSC::Structure*, JSDOMGlobalObject*);
    void finishCreation(JSC::ExecState*, JSDOMGlobalObject*);

public:
    typedef DOMConstructorObject Base;
    static JSDataViewConstructor* create(JSC::ExecState* exec, JSC::Structure* structure, JSDOMGlobalObject* globalObject)
    {
        JSDataViewConstructor* ptr = new (NotNull, JSC::allocateCell<JSDataViewConstructor>(*exec->heap())) JSDataViewConstructor(structure, globalObject);
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
    static JSC::EncodedJSValue JSC_HOST_CALL constructJSDataView(JSC::ExecState*);
    static JSC::ConstructType getConstructData(JSC::JSCell*, JSC::ConstructData&);
};

// Functions

JSC::EncodedJSValue JSC_HOST_CALL jsDataViewPrototypeFunctionGetInt8(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsDataViewPrototypeFunctionGetUint8(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsDataViewPrototypeFunctionGetInt16(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsDataViewPrototypeFunctionGetUint16(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsDataViewPrototypeFunctionGetInt32(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsDataViewPrototypeFunctionGetUint32(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsDataViewPrototypeFunctionGetFloat32(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsDataViewPrototypeFunctionGetFloat64(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsDataViewPrototypeFunctionSetInt8(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsDataViewPrototypeFunctionSetUint8(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsDataViewPrototypeFunctionSetInt16(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsDataViewPrototypeFunctionSetUint16(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsDataViewPrototypeFunctionSetInt32(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsDataViewPrototypeFunctionSetUint32(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsDataViewPrototypeFunctionSetFloat32(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsDataViewPrototypeFunctionSetFloat64(JSC::ExecState*);
// Attributes

JSC::JSValue jsDataViewConstructor(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);

} // namespace WebCore

#endif

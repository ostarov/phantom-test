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

#ifndef JSInspectorFrontendHost_h
#define JSInspectorFrontendHost_h

#if ENABLE(INSPECTOR)

#include "InspectorFrontendHost.h"
#include "JSDOMBinding.h"
#include <runtime/JSGlobalObject.h>
#include <runtime/JSObject.h>
#include <runtime/ObjectPrototype.h>

namespace WebCore {

class JSInspectorFrontendHost : public JSDOMWrapper {
public:
    typedef JSDOMWrapper Base;
    static JSInspectorFrontendHost* create(JSC::Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<InspectorFrontendHost> impl)
    {
        JSInspectorFrontendHost* ptr = new (NotNull, JSC::allocateCell<JSInspectorFrontendHost>(globalObject->vm().heap)) JSInspectorFrontendHost(structure, globalObject, impl);
        ptr->finishCreation(globalObject->vm());
        return ptr;
    }

    static JSC::JSObject* createPrototype(JSC::ExecState*, JSC::JSGlobalObject*);
    static void destroy(JSC::JSCell*);
    ~JSInspectorFrontendHost();
    static const JSC::ClassInfo s_info;

    static JSC::Structure* createStructure(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(vm, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), &s_info);
    }


    // Custom functions
    JSC::JSValue platform(JSC::ExecState*);
    JSC::JSValue port(JSC::ExecState*);
    JSC::JSValue showContextMenu(JSC::ExecState*);
    JSC::JSValue recordActionTaken(JSC::ExecState*);
    JSC::JSValue recordPanelShown(JSC::ExecState*);
    JSC::JSValue recordSettingChanged(JSC::ExecState*);
    InspectorFrontendHost* impl() const { return m_impl; }
    void releaseImpl() { m_impl->deref(); m_impl = 0; }

    void releaseImplIfNotNull()
    {
        if (m_impl) {
            m_impl->deref();
            m_impl = 0;
        }
    }

private:
    InspectorFrontendHost* m_impl;
protected:
    JSInspectorFrontendHost(JSC::Structure*, JSDOMGlobalObject*, PassRefPtr<InspectorFrontendHost>);
    void finishCreation(JSC::VM&);
    static const unsigned StructureFlags = Base::StructureFlags;
};

class JSInspectorFrontendHostOwner : public JSC::WeakHandleOwner {
public:
    virtual bool isReachableFromOpaqueRoots(JSC::Handle<JSC::Unknown>, void* context, JSC::SlotVisitor&);
    virtual void finalize(JSC::Handle<JSC::Unknown>, void* context);
};

inline JSC::WeakHandleOwner* wrapperOwner(DOMWrapperWorld*, InspectorFrontendHost*)
{
    DEFINE_STATIC_LOCAL(JSInspectorFrontendHostOwner, jsInspectorFrontendHostOwner, ());
    return &jsInspectorFrontendHostOwner;
}

inline void* wrapperContext(DOMWrapperWorld* world, InspectorFrontendHost*)
{
    return world;
}

JSC::JSValue toJS(JSC::ExecState*, JSDOMGlobalObject*, InspectorFrontendHost*);
InspectorFrontendHost* toInspectorFrontendHost(JSC::JSValue);

class JSInspectorFrontendHostPrototype : public JSC::JSNonFinalObject {
public:
    typedef JSC::JSNonFinalObject Base;
    static JSC::JSObject* self(JSC::ExecState*, JSC::JSGlobalObject*);
    static JSInspectorFrontendHostPrototype* create(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::Structure* structure)
    {
        JSInspectorFrontendHostPrototype* ptr = new (NotNull, JSC::allocateCell<JSInspectorFrontendHostPrototype>(vm.heap)) JSInspectorFrontendHostPrototype(vm, globalObject, structure);
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
    JSInspectorFrontendHostPrototype(JSC::VM& vm, JSC::JSGlobalObject*, JSC::Structure* structure) : JSC::JSNonFinalObject(vm, structure) { }
protected:
    static const unsigned StructureFlags = JSC::OverridesGetOwnPropertySlot | Base::StructureFlags;
};

// Functions

JSC::EncodedJSValue JSC_HOST_CALL jsInspectorFrontendHostPrototypeFunctionLoaded(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsInspectorFrontendHostPrototypeFunctionCloseWindow(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsInspectorFrontendHostPrototypeFunctionBringToFront(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsInspectorFrontendHostPrototypeFunctionSetZoomFactor(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsInspectorFrontendHostPrototypeFunctionInspectedURLChanged(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsInspectorFrontendHostPrototypeFunctionRequestSetDockSide(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsInspectorFrontendHostPrototypeFunctionSetAttachedWindowHeight(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsInspectorFrontendHostPrototypeFunctionSetAttachedWindowWidth(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsInspectorFrontendHostPrototypeFunctionSetToolbarHeight(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsInspectorFrontendHostPrototypeFunctionMoveWindowBy(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsInspectorFrontendHostPrototypeFunctionSetInjectedScriptForOrigin(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsInspectorFrontendHostPrototypeFunctionLocalizedStringsURL(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsInspectorFrontendHostPrototypeFunctionCopyText(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsInspectorFrontendHostPrototypeFunctionOpenInNewTab(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsInspectorFrontendHostPrototypeFunctionCanSave(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsInspectorFrontendHostPrototypeFunctionSave(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsInspectorFrontendHostPrototypeFunctionAppend(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsInspectorFrontendHostPrototypeFunctionClose(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsInspectorFrontendHostPrototypeFunctionPlatform(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsInspectorFrontendHostPrototypeFunctionPort(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsInspectorFrontendHostPrototypeFunctionShowContextMenu(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsInspectorFrontendHostPrototypeFunctionSendMessageToBackend(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsInspectorFrontendHostPrototypeFunctionRecordActionTaken(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsInspectorFrontendHostPrototypeFunctionRecordPanelShown(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsInspectorFrontendHostPrototypeFunctionRecordSettingChanged(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsInspectorFrontendHostPrototypeFunctionLoadResourceSynchronously(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsInspectorFrontendHostPrototypeFunctionSupportsFileSystems(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsInspectorFrontendHostPrototypeFunctionRequestFileSystems(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsInspectorFrontendHostPrototypeFunctionAddFileSystem(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsInspectorFrontendHostPrototypeFunctionRemoveFileSystem(JSC::ExecState*);
#if ENABLE(FILE_SYSTEM)
JSC::EncodedJSValue JSC_HOST_CALL jsInspectorFrontendHostPrototypeFunctionIsolatedFileSystem(JSC::ExecState*);
#endif
JSC::EncodedJSValue JSC_HOST_CALL jsInspectorFrontendHostPrototypeFunctionIsUnderTest(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsInspectorFrontendHostPrototypeFunctionCanInspectWorkers(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsInspectorFrontendHostPrototypeFunctionCanSaveAs(JSC::ExecState*);

} // namespace WebCore

#endif // ENABLE(INSPECTOR)

#endif

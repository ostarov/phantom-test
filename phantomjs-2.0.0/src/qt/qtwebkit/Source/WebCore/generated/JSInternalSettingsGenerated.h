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

#ifndef JSInternalSettingsGenerated_h
#define JSInternalSettingsGenerated_h

#include "InternalSettingsGenerated.h"
#include "JSDOMBinding.h"
#include <runtime/JSGlobalObject.h>
#include <runtime/JSObject.h>
#include <runtime/ObjectPrototype.h>

namespace WebCore {

class JSInternalSettingsGenerated : public JSDOMWrapper {
public:
    typedef JSDOMWrapper Base;
    static JSInternalSettingsGenerated* create(JSC::Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<InternalSettingsGenerated> impl)
    {
        JSInternalSettingsGenerated* ptr = new (NotNull, JSC::allocateCell<JSInternalSettingsGenerated>(globalObject->vm().heap)) JSInternalSettingsGenerated(structure, globalObject, impl);
        ptr->finishCreation(globalObject->vm());
        return ptr;
    }

    static JSC::JSObject* createPrototype(JSC::ExecState*, JSC::JSGlobalObject*);
    static void destroy(JSC::JSCell*);
    ~JSInternalSettingsGenerated();
    static const JSC::ClassInfo s_info;

    static JSC::Structure* createStructure(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(vm, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), &s_info);
    }

    InternalSettingsGenerated* impl() const { return m_impl; }
    void releaseImpl() { m_impl->deref(); m_impl = 0; }

    void releaseImplIfNotNull()
    {
        if (m_impl) {
            m_impl->deref();
            m_impl = 0;
        }
    }

private:
    InternalSettingsGenerated* m_impl;
protected:
    JSInternalSettingsGenerated(JSC::Structure*, JSDOMGlobalObject*, PassRefPtr<InternalSettingsGenerated>);
    void finishCreation(JSC::VM&);
    static const unsigned StructureFlags = Base::StructureFlags;
};

class JSInternalSettingsGeneratedOwner : public JSC::WeakHandleOwner {
public:
    virtual bool isReachableFromOpaqueRoots(JSC::Handle<JSC::Unknown>, void* context, JSC::SlotVisitor&);
    virtual void finalize(JSC::Handle<JSC::Unknown>, void* context);
};

inline JSC::WeakHandleOwner* wrapperOwner(DOMWrapperWorld*, InternalSettingsGenerated*)
{
    DEFINE_STATIC_LOCAL(JSInternalSettingsGeneratedOwner, jsInternalSettingsGeneratedOwner, ());
    return &jsInternalSettingsGeneratedOwner;
}

inline void* wrapperContext(DOMWrapperWorld* world, InternalSettingsGenerated*)
{
    return world;
}

JSC::JSValue toJS(JSC::ExecState*, JSDOMGlobalObject*, InternalSettingsGenerated*);
InternalSettingsGenerated* toInternalSettingsGenerated(JSC::JSValue);

class JSInternalSettingsGeneratedPrototype : public JSC::JSNonFinalObject {
public:
    typedef JSC::JSNonFinalObject Base;
    static JSC::JSObject* self(JSC::ExecState*, JSC::JSGlobalObject*);
    static JSInternalSettingsGeneratedPrototype* create(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::Structure* structure)
    {
        JSInternalSettingsGeneratedPrototype* ptr = new (NotNull, JSC::allocateCell<JSInternalSettingsGeneratedPrototype>(vm.heap)) JSInternalSettingsGeneratedPrototype(vm, globalObject, structure);
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
    JSInternalSettingsGeneratedPrototype(JSC::VM& vm, JSC::JSGlobalObject*, JSC::Structure* structure) : JSC::JSNonFinalObject(vm, structure) { }
protected:
    static const unsigned StructureFlags = JSC::OverridesGetOwnPropertySlot | Base::StructureFlags;
};

// Functions

JSC::EncodedJSValue JSC_HOST_CALL jsInternalSettingsGeneratedPrototypeFunctionSetDOMPasteAllowed(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsInternalSettingsGeneratedPrototypeFunctionSetAccelerated2dCanvasEnabled(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsInternalSettingsGeneratedPrototypeFunctionSetAcceleratedCompositingEnabled(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsInternalSettingsGeneratedPrototypeFunctionSetAcceleratedCompositingForFixedPositionEnabled(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsInternalSettingsGeneratedPrototypeFunctionSetAcceleratedCompositingForOverflowScrollEnabled(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsInternalSettingsGeneratedPrototypeFunctionSetAcceleratedCompositingForScrollableFramesEnabled(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsInternalSettingsGeneratedPrototypeFunctionSetAcceleratedDrawingEnabled(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsInternalSettingsGeneratedPrototypeFunctionSetAcceleratedFiltersEnabled(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsInternalSettingsGeneratedPrototypeFunctionSetAllowCustomScrollbarInMainFrame(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsInternalSettingsGeneratedPrototypeFunctionSetAllowDisplayOfInsecureContent(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsInternalSettingsGeneratedPrototypeFunctionSetAllowFileAccessFromFileURLs(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsInternalSettingsGeneratedPrototypeFunctionSetAllowRunningOfInsecureContent(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsInternalSettingsGeneratedPrototypeFunctionSetAllowScriptsToCloseWindows(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsInternalSettingsGeneratedPrototypeFunctionSetAllowUniversalAccessFromFileURLs(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsInternalSettingsGeneratedPrototypeFunctionSetAntialiased2dCanvasEnabled(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsInternalSettingsGeneratedPrototypeFunctionSetApplicationChromeMode(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsInternalSettingsGeneratedPrototypeFunctionSetApplyDeviceScaleFactorInCompositor(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsInternalSettingsGeneratedPrototypeFunctionSetApplyPageScaleFactorInCompositor(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsInternalSettingsGeneratedPrototypeFunctionSetAsynchronousSpellCheckingEnabled(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsInternalSettingsGeneratedPrototypeFunctionSetAuthorAndUserStylesEnabled(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsInternalSettingsGeneratedPrototypeFunctionSetAutostartOriginPlugInSnapshottingEnabled(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsInternalSettingsGeneratedPrototypeFunctionSetBackForwardCacheExpirationInterval(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsInternalSettingsGeneratedPrototypeFunctionSetBackspaceKeyNavigationEnabled(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsInternalSettingsGeneratedPrototypeFunctionSetCanvasUsesAcceleratedDrawing(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsInternalSettingsGeneratedPrototypeFunctionSetCaretBrowsingEnabled(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsInternalSettingsGeneratedPrototypeFunctionSetCompositedScrollingForFramesEnabled(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsInternalSettingsGeneratedPrototypeFunctionSetCookieEnabled(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsInternalSettingsGeneratedPrototypeFunctionSetCrossOriginCheckInGetMatchedCSSRulesDisabled(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsInternalSettingsGeneratedPrototypeFunctionSetCSSGridLayoutEnabled(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsInternalSettingsGeneratedPrototypeFunctionSetDefaultFixedFontSize(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsInternalSettingsGeneratedPrototypeFunctionSetDefaultFontSize(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsInternalSettingsGeneratedPrototypeFunctionSetDefaultTextEncodingName(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsInternalSettingsGeneratedPrototypeFunctionSetDefaultVideoPosterURL(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsInternalSettingsGeneratedPrototypeFunctionSetDeveloperExtrasEnabled(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsInternalSettingsGeneratedPrototypeFunctionSetDeviceHeight(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsInternalSettingsGeneratedPrototypeFunctionSetDeviceSupportsMouse(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsInternalSettingsGeneratedPrototypeFunctionSetDeviceSupportsTouch(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsInternalSettingsGeneratedPrototypeFunctionSetDeviceWidth(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsInternalSettingsGeneratedPrototypeFunctionSetDiagnosticLoggingEnabled(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsInternalSettingsGeneratedPrototypeFunctionSetDownloadableBinaryFontsEnabled(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsInternalSettingsGeneratedPrototypeFunctionSetEnforceCSSMIMETypeInNoQuirksMode(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsInternalSettingsGeneratedPrototypeFunctionSetExperimentalNotificationsEnabled(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsInternalSettingsGeneratedPrototypeFunctionSetFixedElementsLayoutRelativeToFrame(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsInternalSettingsGeneratedPrototypeFunctionSetFixedPositionCreatesStackingContext(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsInternalSettingsGeneratedPrototypeFunctionSetForceCompositingMode(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsInternalSettingsGeneratedPrototypeFunctionSetForceFTPDirectoryListings(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsInternalSettingsGeneratedPrototypeFunctionSetFrameFlatteningEnabled(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsInternalSettingsGeneratedPrototypeFunctionSetFTPDirectoryTemplatePath(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsInternalSettingsGeneratedPrototypeFunctionSetFullScreenEnabled(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsInternalSettingsGeneratedPrototypeFunctionSetHyperlinkAuditingEnabled(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsInternalSettingsGeneratedPrototypeFunctionSetIncrementalRenderingSuppressionTimeoutInSeconds(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsInternalSettingsGeneratedPrototypeFunctionSetInteractiveFormValidationEnabled(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsInternalSettingsGeneratedPrototypeFunctionSetJavaScriptCanAccessClipboard(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsInternalSettingsGeneratedPrototypeFunctionSetJavaScriptCanOpenWindowsAutomatically(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsInternalSettingsGeneratedPrototypeFunctionSetJavaScriptExperimentsEnabled(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsInternalSettingsGeneratedPrototypeFunctionSetLayoutFallbackWidth(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsInternalSettingsGeneratedPrototypeFunctionSetLoadDeferringEnabled(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsInternalSettingsGeneratedPrototypeFunctionSetLoadsSiteIconsIgnoringImageLoadingSetting(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsInternalSettingsGeneratedPrototypeFunctionSetLocalFileContentSniffingEnabled(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsInternalSettingsGeneratedPrototypeFunctionSetLocalStorageDatabasePath(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsInternalSettingsGeneratedPrototypeFunctionSetLocalStorageEnabled(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsInternalSettingsGeneratedPrototypeFunctionSetLogsPageMessagesToSystemConsoleEnabled(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsInternalSettingsGeneratedPrototypeFunctionSetMaximumDecodedImageSize(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsInternalSettingsGeneratedPrototypeFunctionSetMaximumHTMLParserDOMTreeDepth(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsInternalSettingsGeneratedPrototypeFunctionSetMaximumPlugInSnapshotAttempts(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsInternalSettingsGeneratedPrototypeFunctionSetMediaEnabled(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsInternalSettingsGeneratedPrototypeFunctionSetMediaPlaybackAllowsInline(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsInternalSettingsGeneratedPrototypeFunctionSetMediaPlaybackRequiresUserGesture(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsInternalSettingsGeneratedPrototypeFunctionSetMinimumAccelerated2dCanvasSize(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsInternalSettingsGeneratedPrototypeFunctionSetMinimumFontSize(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsInternalSettingsGeneratedPrototypeFunctionSetMinimumLogicalFontSize(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsInternalSettingsGeneratedPrototypeFunctionSetNeedsDidFinishLoadOrderQuirk(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsInternalSettingsGeneratedPrototypeFunctionSetNeedsIsLoadingInAPISenseQuirk(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsInternalSettingsGeneratedPrototypeFunctionSetNeedsKeyboardEventDisambiguationQuirks(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsInternalSettingsGeneratedPrototypeFunctionSetNeedsSiteSpecificQuirks(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsInternalSettingsGeneratedPrototypeFunctionSetNotificationsEnabled(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsInternalSettingsGeneratedPrototypeFunctionSetOfflineWebApplicationCacheEnabled(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsInternalSettingsGeneratedPrototypeFunctionSetOpenGLMultisamplingEnabled(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsInternalSettingsGeneratedPrototypeFunctionSetPageCacheSupportsPlugins(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsInternalSettingsGeneratedPrototypeFunctionSetPaginateDuringLayoutEnabled(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsInternalSettingsGeneratedPrototypeFunctionSetPasswordEchoDurationInSeconds(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsInternalSettingsGeneratedPrototypeFunctionSetPasswordEchoEnabled(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsInternalSettingsGeneratedPrototypeFunctionSetPlugInSnapshottingEnabled(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsInternalSettingsGeneratedPrototypeFunctionSetPrimaryPlugInSnapshotDetectionEnabled(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsInternalSettingsGeneratedPrototypeFunctionSetPrivilegedWebGLExtensionsEnabled(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsInternalSettingsGeneratedPrototypeFunctionSetRegionBasedColumnsEnabled(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsInternalSettingsGeneratedPrototypeFunctionSetRequestAnimationFrameEnabled(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsInternalSettingsGeneratedPrototypeFunctionSetScreenFontSubstitutionEnabled(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsInternalSettingsGeneratedPrototypeFunctionSetScriptMarkupEnabled(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsInternalSettingsGeneratedPrototypeFunctionSetScrollAnimatorEnabled(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsInternalSettingsGeneratedPrototypeFunctionSetScrollingCoordinatorEnabled(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsInternalSettingsGeneratedPrototypeFunctionSetSelectTrailingWhitespaceEnabled(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsInternalSettingsGeneratedPrototypeFunctionSetSelectionIncludesAltImageText(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsInternalSettingsGeneratedPrototypeFunctionSetSessionStorageQuota(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsInternalSettingsGeneratedPrototypeFunctionSetShouldDisplayCaptions(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsInternalSettingsGeneratedPrototypeFunctionSetShouldDisplaySubtitles(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsInternalSettingsGeneratedPrototypeFunctionSetShouldDisplayTextDescriptions(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsInternalSettingsGeneratedPrototypeFunctionSetShouldInjectUserScriptsInInitialEmptyDocument(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsInternalSettingsGeneratedPrototypeFunctionSetShouldPrintBackgrounds(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsInternalSettingsGeneratedPrototypeFunctionSetShouldRespectImageOrientation(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsInternalSettingsGeneratedPrototypeFunctionSetShowDebugBorders(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsInternalSettingsGeneratedPrototypeFunctionSetShowRepaintCounter(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsInternalSettingsGeneratedPrototypeFunctionSetShowsToolTipOverTruncatedText(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsInternalSettingsGeneratedPrototypeFunctionSetShowsURLsInToolTips(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsInternalSettingsGeneratedPrototypeFunctionSetShrinksStandaloneImagesToFit(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsInternalSettingsGeneratedPrototypeFunctionSetSmartInsertDeleteEnabled(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsInternalSettingsGeneratedPrototypeFunctionSetSnapshotAllPlugIns(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsInternalSettingsGeneratedPrototypeFunctionSetSpatialNavigationEnabled(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsInternalSettingsGeneratedPrototypeFunctionSetSupportsMultipleWindows(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsInternalSettingsGeneratedPrototypeFunctionSetSuppressesIncrementalRendering(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsInternalSettingsGeneratedPrototypeFunctionSetSyncXHRInDocumentsEnabled(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsInternalSettingsGeneratedPrototypeFunctionSetTextAreasAreResizable(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsInternalSettingsGeneratedPrototypeFunctionSetThreadedHTMLParser(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsInternalSettingsGeneratedPrototypeFunctionSetTouchAdjustmentEnabled(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsInternalSettingsGeneratedPrototypeFunctionSetTouchDragDropEnabled(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsInternalSettingsGeneratedPrototypeFunctionSetTreatsAnyTextCSSLinkAsStylesheet(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsInternalSettingsGeneratedPrototypeFunctionSetUnifiedTextCheckerEnabled(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsInternalSettingsGeneratedPrototypeFunctionSetUnsafePluginPastingEnabled(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsInternalSettingsGeneratedPrototypeFunctionSetUseLegacyBackgroundSizeShorthandBehavior(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsInternalSettingsGeneratedPrototypeFunctionSetUsePreHTML5ParserQuirks(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsInternalSettingsGeneratedPrototypeFunctionSetUseThreadedHTMLParserForDataURLs(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsInternalSettingsGeneratedPrototypeFunctionSetUsesDashboardBackwardCompatibilityMode(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsInternalSettingsGeneratedPrototypeFunctionSetUsesEncodingDetector(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsInternalSettingsGeneratedPrototypeFunctionSetValidationMessageTimerMagnification(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsInternalSettingsGeneratedPrototypeFunctionSetVisualWordMovementEnabled(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsInternalSettingsGeneratedPrototypeFunctionSetWantsBalancedSetDefersLoadingBehavior(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsInternalSettingsGeneratedPrototypeFunctionSetWebArchiveDebugModeEnabled(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsInternalSettingsGeneratedPrototypeFunctionSetWebAudioEnabled(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsInternalSettingsGeneratedPrototypeFunctionSetWebGLEnabled(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsInternalSettingsGeneratedPrototypeFunctionSetWebGLErrorsToConsoleEnabled(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsInternalSettingsGeneratedPrototypeFunctionSetWebSecurityEnabled(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsInternalSettingsGeneratedPrototypeFunctionSetWindowFocusRestricted(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsInternalSettingsGeneratedPrototypeFunctionSetXSSAuditorEnabled(JSC::ExecState*);

} // namespace WebCore

#endif

// Copyright (c) 2014 The Chromium Embedded Framework Authors. All rights
// reserved. Use of this source code is governed by a BSD-style license that
// can be found in the LICENSE file.

package org.cef.browser;

import org.cef.callback.CefCallback;
import org.cef.callback.CefCompletionCallback;
import org.cef.callback.CefNativeAdapter;
import org.cef.handler.CefLoadHandler;
import org.cef.handler.CefRequestContextHandler;
import org.cef.security.CefSSLInfo;

/**
 * A request context provides request handling for a set of related browser
 * objects. A request context is specified when creating a new browser object
 * via the CefClient.createBrowser method. Browser objects with different
 * request contexts will never be hosted in the same render process. Browser
 * objects with the same request context may or may not be hosted in the same
 * render process depending on the process model. Browser objects created
 * indirectly via the JavaScript window.open function or targeted links will
 * share the same render process and the same request context as the source
 * browser. When running in single-process mode there is only a single render
 * process (the main process) and so all browsers created in single-process mode
 * will share the same request context. This will be the first request context
 * passed into the CefClient.createBrowser method and all other request
 * context objects will be ignored.
 */
public abstract class CefRequestContext extends CefNativeAdapter {
    // This CTOR can't be called directly. Call method create() instead.
    CefRequestContext() {}

    /**
     * Returns the global context object.
     */
    public static final CefRequestContext getGlobalContext() {
        return CefRequestContext_N.getGlobalContextNative();
    }

    /**
     * Creates a new context object with the specified handler.
     */
    public static final CefRequestContext createContext(CefRequestContextHandler handler) {
        return CefRequestContext_N.createNative(handler);
    }

    public abstract void dispose();

    /**
     * Returns true if this object is the global context.
     */
    public abstract boolean isGlobal();

    /**
     * Returns the handler for this context if any.
     */
    public abstract CefRequestContextHandler getHandler();

    /**
     * Clears all certificate exceptions that were added as part of handling
     * {@link org.cef.handler.CefRequestHandler#onCertificateError(
     * CefBrowser, CefLoadHandler.ErrorCode, String, CefSSLInfo, CefCallback)}.
     * If you call this it is recommended that you also call CloseAllConnections()
     * or you risk not being prompted again for server certificates if you reconnect
     * quickly. If {@code callback} is non-null it will be executed on the UI thread
     * after completion.
     *
     * @param callback optional completion callback
     */
    public abstract void ClearCertificateExceptions(CefCompletionCallback callback);

    /**
     * Clears all active and idle connections that Chromium currently has.
     * If {@code callback} is non-null it will be executed on the UI thread after completion.
     *
     * @param callback optional completion callback
     */
    public abstract void CloseAllConnections(CefCompletionCallback callback);
}

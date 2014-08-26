// Copyright (c) 2014 The Chromium Embedded Framework Authors. All rights
// reserved. Use of this source code is governed by a BSD-style license that
// can be found in the LICENSE file.
//
// ---------------------------------------------------------------------------
//
// This file was generated by the CEF translator tool. If making changes by
// hand only do so within the body of existing method and function
// implementations. See the translator.README.txt file in the tools directory
// for more information.
//

#include "libcef_dll/cpptoc/resource_handler_cpptoc.h"
#include "libcef_dll/cpptoc/scheme_handler_factory_cpptoc.h"
#include "libcef_dll/ctocpp/browser_ctocpp.h"
#include "libcef_dll/ctocpp/frame_ctocpp.h"
#include "libcef_dll/ctocpp/request_ctocpp.h"


// MEMBER FUNCTIONS - Body may be edited by hand.

cef_resource_handler_t* CEF_CALLBACK scheme_handler_factory_create(
    struct _cef_scheme_handler_factory_t* self, cef_browser_t* browser,
    cef_frame_t* frame, const cef_string_t* scheme_name,
    cef_request_t* request) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return NULL;
  // Verify param: scheme_name; type: string_byref_const
  DCHECK(scheme_name);
  if (!scheme_name)
    return NULL;
  // Verify param: request; type: refptr_diff
  DCHECK(request);
  if (!request)
    return NULL;
  // Unverified params: browser, frame

  // Execute
  CefRefPtr<CefResourceHandler> _retval = CefSchemeHandlerFactoryCppToC::Get(
      self)->Create(
      CefBrowserCToCpp::Wrap(browser),
      CefFrameCToCpp::Wrap(frame),
      CefString(scheme_name),
      CefRequestCToCpp::Wrap(request));

  // Return type: refptr_same
  return CefResourceHandlerCppToC::Wrap(_retval);
}


// CONSTRUCTOR - Do not edit by hand.

CefSchemeHandlerFactoryCppToC::CefSchemeHandlerFactoryCppToC(
    CefSchemeHandlerFactory* cls)
    : CefCppToC<CefSchemeHandlerFactoryCppToC, CefSchemeHandlerFactory,
        cef_scheme_handler_factory_t>(cls) {
  struct_.struct_.create = scheme_handler_factory_create;
}

#ifndef NDEBUG
template<> base::AtomicRefCount CefCppToC<CefSchemeHandlerFactoryCppToC,
    CefSchemeHandlerFactory, cef_scheme_handler_factory_t>::DebugObjCt = 0;
#endif


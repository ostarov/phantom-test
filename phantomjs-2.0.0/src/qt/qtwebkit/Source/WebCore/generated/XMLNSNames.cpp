/*
 * THIS FILE WAS AUTOMATICALLY GENERATED, DO NOT EDIT.
 *
 * This file was generated by the dom/make_names.pl script.
 *
 * Copyright (C) 2005, 2006, 2007, 2008, 2009 Apple Inc.  All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 *
 * THIS SOFTWARE IS PROVIDED BY APPLE COMPUTER, INC. ``AS IS'' AND ANY
 * EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR
 * PURPOSE ARE DISCLAIMED.  IN NO EVENT SHALL APPLE COMPUTER, INC. OR
 * CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL,
 * EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO,
 * PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR
 * PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY
 * OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
 * OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

#include "config.h"

#ifdef SKIP_STATIC_CONSTRUCTORS_ON_GCC
#define DOM_XMLNSNAMES_HIDE_GLOBALS 1
#else
#define QNAME_DEFAULT_CONSTRUCTOR 1
#endif

#include "XMLNSNames.h"

#include <wtf/StaticConstructors.h>
namespace WebCore {

namespace XMLNSNames {

using namespace WebCore;

DEFINE_GLOBAL(AtomicString, xmlnsNamespaceURI)

static const LChar xmlnsString8[] = "xmlns";

static StringImpl::StaticASCIILiteral xmlnsData = {
    StringImpl::StaticASCIILiteral::s_initialRefCount,
    5,
    xmlnsString8,
    0,
    StringImpl::StaticASCIILiteral::s_initialFlags | (171597 << StringImpl::StaticASCIILiteral::s_hashShift)
};

static StringImpl* xmlnsImpl = reinterpret_cast<StringImpl*>(&xmlnsData);


// Attributes
DEFINE_GLOBAL(QualifiedName, xmlnsAttr)


WebCore::QualifiedName** getXMLNSAttrs()
{
    static WebCore::QualifiedName* XMLNSAttr[] = {
        (WebCore::QualifiedName*)&xmlnsAttr,
    };
    return XMLNSAttr;
}

void init()
{
    static bool initialized = false;
    if (initialized)
        return;
    initialized = true;

    // Use placement new to initialize the globals.

    AtomicString::init();
    AtomicString xmlnsNS("http://www.w3.org/2000/xmlns/", AtomicString::ConstructFromLiteral);

    // Namespace
    new (NotNull, (void*)&xmlnsNamespaceURI) AtomicString(xmlnsNS);

#ifndef NDEBUG
    xmlnsImpl->assertHashIsCorrect();
#endif // NDEBUG

    // Attributes
    createQualifiedName((void*)&xmlnsAttr, xmlnsImpl, xmlnsNS);
}

} }


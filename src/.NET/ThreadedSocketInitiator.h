/* -*- C++ -*- */
/* ====================================================================
 * The QuickFIX Software License, Version 1.0
 *
 * Copyright (c) 2001 ThoughtWorks, Inc.  All rights
 * reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 *
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in
 *    the documentation and/or other materials provided with the
 *    distribution.
 *
 * 3. The end-user documentation included with the redistribution,
 *    if any, must include the following acknowledgment:
 *       "This product includes software developed by
 *        ThoughtWorks, Inc. (http://www.thoughtworks.com/)."
 *    Alternately, this acknowledgment may appear in the software itself,
 *    if and wherever such third-party acknowledgments normally appear.
 *
 * 4. The names "QuickFIX" and "ThoughtWorks, Inc." must
 *    not be used to endorse or promote products derived from this
 *    software without prior written permission. For written
 *    permission, please contact quickfix-users@lists.sourceforge.net.
 *
 * 5. Products derived from this software may not be called "QuickFIX",
 *    nor may "QuickFIX" appear in their name, without prior written
 *    permission of ThoughtWorks, Inc.
 *
 * THIS SOFTWARE IS PROVIDED ``AS IS'' AND ANY EXPRESSED OR IMPLIED
 * WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES
 * OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
 * DISCLAIMED.  IN NO EVENT SHALL THOUGHTWORKS INC OR
 * ITS CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
 * SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
 * LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF
 * USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
 * ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
 * OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT
 * OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF
 * SUCH DAMAGE.
 * ====================================================================
 */

#pragma once

using namespace System;

#include "quickfix_net.h"

#include "Application.h"
#include "SessionSettings.h"
#include "MessageStoreFactory.h"
#include "LogFactory.h"
#include "Initiator.h"
#include "quickfix/include/ThreadedSocketInitiator.h"

namespace QuickFix
{
public __gc class ThreadedSocketInitiator : public Initiator
{
public:
  ThreadedSocketInitiator( Application* application,
                           MessageStoreFactory* factory,
                           SessionSettings* settings,
                           MessageFactory* messageFactory )
: m_settings( settings ), m_logFactory( 0 )
  {
    try
    {
      m_application = new ::Application( application, messageFactory );
      m_factory = new ::MessageStoreFactory( factory );
      m_pUnmanaged = new FIX::ThreadedSocketInitiator
                     ( *m_application, *m_factory, m_settings->unmanaged() );
    }
    catch ( FIX::ConfigError e ) { throw new ConfigError( e.what() ); }
  }

  ThreadedSocketInitiator( Application* application,
                           MessageStoreFactory* factory,
                           SessionSettings* settings,
                           LogFactory* logFactory,
                           MessageFactory* messageFactory )
: m_settings( settings )
  {
    try
    {
      m_application = new ::Application( application, messageFactory );
      m_factory = new ::MessageStoreFactory( factory );
      m_logFactory = new ::LogFactory( logFactory );
      m_pUnmanaged = new FIX::ThreadedSocketInitiator
                     ( *m_application, *m_factory,
                       m_settings->unmanaged(), *m_logFactory );
    }
    catch ( FIX::ConfigError e ) { throw new ConfigError( e.what() ); }
  }

  ~ThreadedSocketInitiator()
  {
    delete m_pUnmanaged;
    delete m_application;
    delete m_factory;
    delete m_logFactory;
  }

  void start() throw ( ConfigError* )
  { 
    try
    {
      m_pUnmanaged->start(); 
    }
    catch( FIX::ConfigError& e )
    {
      throw new ConfigError(e.what());
    }
  }
  void stop()
  { m_pUnmanaged->stop(); }

private:
  FIX::ThreadedSocketInitiator* m_pUnmanaged;
  ::Application* m_application;
  ::MessageStoreFactory* m_factory;
  ::LogFactory* m_logFactory;
  SessionSettings* m_settings;
};
}

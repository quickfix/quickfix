/****************************************************************************
** Copyright (c) 2001-2014
**
** This file is part of the QuickFIX FIX Engine
**
** This file may be distributed under the terms of the quickfixengine.org
** license as defined by quickfixengine.org and appearing in the file
** LICENSE included in the packaging of this file.
**
** This file is provided AS IS with NO WARRANTY OF ANY KIND, INCLUDING THE
** WARRANTY OF DESIGN, MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE.
**
** See http://www.quickfixengine.org/LICENSE for licensing information.
**
** Contact ask@quickfixengine.org if any conditions of this licensing are
** not clear to you.
**
****************************************************************************/

#ifdef _MSC_VER
#pragma warning(disable : 4503 4355 4786)
#endif

#include "quickfix/config.h"

#include "quickfix/FileStore.h"
#include "quickfix/SocketInitiator.h"
#ifdef HAVE_SSL
#include "quickfix/SSLSocketInitiator.h"
#include "quickfix/ThreadedSSLSocketInitiator.h"
#endif
#include "Application.h"
#include "quickfix/Log.h"
#include "quickfix/SessionSettings.h"

#include <fstream>
#include <iostream>
#include <memory>
#include <string>

#include "../../src/getopt-repl.h"

int main(int argc, char **argv) {
  if (argc < 2) {
    std::cout << "usage: " << argv[0] << " FILE." << std::endl;
    return 0;
  }
  std::string file = argv[1];

#ifdef HAVE_SSL
  std::string isSSL;
  if (argc > 2) {
    isSSL.assign(argv[2]);
  }
#endif

  try {
    FIX::SessionSettings settings(file);

    Application application;
    FIX::FileStoreFactory storeFactory(settings);
    FIX::ScreenLogFactory logFactory(settings);

    std::unique_ptr<FIX::Initiator> initiator;
#ifdef HAVE_SSL
    if (isSSL.compare("SSL") == 0) {
      initiator = std::unique_ptr<FIX::Initiator>(
          new FIX::ThreadedSSLSocketInitiator(application, storeFactory, settings, logFactory));
    } else if (isSSL.compare("SSL-ST") == 0) {
      initiator = std::unique_ptr<FIX::Initiator>(
          new FIX::SSLSocketInitiator(application, storeFactory, settings, logFactory));
    } else
#endif
      initiator
          = std::unique_ptr<FIX::Initiator>(new FIX::SocketInitiator(application, storeFactory, settings, logFactory));

    initiator->start();
    application.run();
    initiator->stop();

    return 0;
  } catch (std::exception &e) {
    std::cout << e.what();
    return 1;
  }
}

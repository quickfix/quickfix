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
#include "stdafx.h"
#else
#include "config.h"
#endif

#include "TestHelper.h"

#include "catch_amalgamated.hpp"

int main(int argc, char **argv) {
  std::string quickfixConfigFile;

  Catch::Session session;
  auto &cli = session.cli();
  auto newCli = cli
                | Catch::Clara::Opt(
                    [](std::string quickfixConfigFile) {
                      FIX::TestSettings::sessionSettings = FIX::SessionSettings(quickfixConfigFile);
                    },
                    "user")["--quickfix-config-file"]("QuickFIX config file for tests")
                | Catch::Clara::Opt(
                    [](std::string quickfixSpecPath) { FIX::TestSettings::specPath = quickfixSpecPath; },
                    "user")["--quickfix-spec-path"]("QuickFIX spec path");
  session.cli(newCli);

  return session.run(argc, argv);
}

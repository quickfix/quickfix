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

#include <Settings.h>
#include <sstream>

#include "catch_amalgamated.hpp"

using namespace FIX;

TEST_CASE("SettingsTests") {
  SECTION("readFromIstream") {
    Settings object;
    std::string configuration = "[FOO]\nbar=24\nbaz=moo\n\n"
                                "[OREN]\nNero=TW\n#Nero=IGNOREME\n"
                                "# this is a comment\n"
                                "#[OREN]\n#Nero=IGNOREME\n"
                                "[OREN]\nISLD=Nero\nSTUFF=./\\:\n"
                                "[NERO]\nWINDIR=D:\\This Is\\A-Directory\\ok\\\n"
                                "\nWINFILE=D:\\Program Files\\Tomcat 4.1\\webapps\\mek\\WEB-INF\\HTTPtoFIX.cfg\n"
                                "UNIXDIR=/This Is/A Directory/ok/\n"
                                "stripspace=last spaces stripped  \n"
                                "#Nero=IGNOREME";

    std::istringstream input(configuration);

    input >> object;

    Settings::Sections none = object.get("NONE");
    CHECK(0U == none.size());

    Settings::Sections foo = object.get("FOO");
    CHECK(1U == foo.size());
    CHECK(24 == foo[0].getInt("bar"));
    CHECK("moo" == foo[0].getString("baz"));
    CHECK(2lu == foo[0].size());

    Settings::Sections oren = object.get("OREN");
    CHECK(2lu == oren.size());
    CHECK(1lu == oren[0].size());
    CHECK("TW" == oren[0].getString("Nero"));
    CHECK(2lu == oren[1].size());
    CHECK("Nero" == oren[1].getString("ISLD"));
    CHECK("./\\:" == oren[1].getString("STUFF"));

    Settings::Sections nero = object.get("NERO");
    CHECK(1lu == nero.size());
    CHECK(4lu == nero[0].size());
    CHECK("D:\\This Is\\A-Directory\\ok\\" == nero[0].getString("WINDIR"));
    CHECK("/This Is/A Directory/ok/" == nero[0].getString("UNIXDIR"));
    CHECK("D:\\Program Files\\Tomcat 4.1\\webapps\\mek\\WEB-INF\\HTTPtoFIX.cfg" == nero[0].getString("WINFILE"));
    CHECK("last spaces stripped" == nero[0].getString("stripspace"));
  }
}

/****************************************************************************
** Copyright (c) quickfixengine.org  All rights reserved.
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
#include "stdafx.h"
#else
#include "config.h"
#endif
#include "CallStack.h"

#include "Group.h"

namespace FIX
{
void Group::addGroup( Group& group )
{ QF_STACK_PUSH(Group::addGroup)
  FieldMap::addGroup( group.field(), group );
  QF_STACK_POP
}

void Group::replaceGroup( unsigned num, FIX::Group& group )
{ QF_STACK_PUSH(Group::replaceGroup) 
  FieldMap::replaceGroup( num, group.field(), group ); 
  QF_STACK_POP
}

Group& Group::getGroup( unsigned num, Group& group ) const throw( FieldNotFound )
{ QF_STACK_PUSH(Group::getGroup)
  return static_cast < Group& > ( FieldMap::getGroup( num, group.field(), group ) );
  QF_STACK_POP
}

void Group::removeGroup( unsigned num, Group& group )
{ QF_STACK_PUSH(Group::removeGroup)
  FieldMap::removeGroup( num, group.field() );
  QF_STACK_POP
}

void Group::removeGroup( Group& group )
{ QF_STACK_PUSH(Group::removeGroup)
  FieldMap::removeGroup( group.field() );
  QF_STACK_POP
}

bool Group::hasGroup( unsigned num, Group& group )
{ QF_STACK_PUSH(Group::hasGroup)
  return FieldMap::hasGroup( num, group.field() );
  QF_STACK_POP
}

bool Group::hasGroup( const Group& group )
{ QF_STACK_PUSH(Group::hasGroup)
  return FieldMap::hasGroup( group.field() );
  QF_STACK_POP
}
}

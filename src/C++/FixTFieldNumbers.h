/* -*- C++ -*- */
 
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

#ifndef FIXT_FIELDNUMBERS_H
#define FIXT_FIELDNUMBERS_H

#include <iostream>
#include "DeprecatedFieldNumbers.h"

namespace FIX
{
  namespace FIELD
  {
    
     const int BeginSeqNo = 7;

     const int BeginString = 8;

     const int BodyLength = 9;

     const int CheckSum = 10;

     const int EndSeqNo = 16;

     const int MsgSeqNum = 34;

     const int MsgType = 35;

     const int NewSeqNo = 36;

     const int PossDupFlag = 43;

     const int RefSeqNum = 45;

     const int SenderCompID = 49;

     const int SenderSubID = 50;

     const int SendingTime = 52;

     const int TargetCompID = 56;

     const int TargetSubID = 57;

     const int Text = 58;

     const int Signature = 89;

     const int SecureDataLen = 90;

     const int SecureData = 91;

     const int SignatureLength = 93;

     const int RawDataLength = 95;

     const int RawData = 96;

     const int PossResend = 97;

     const int EncryptMethod = 98;

     const int HeartBtInt = 108;

     const int TestReqID = 112;

     const int OnBehalfOfCompID = 115;

     const int OnBehalfOfSubID = 116;

     const int OrigSendingTime = 122;

     const int GapFillFlag = 123;

     const int DeliverToCompID = 128;

     const int DeliverToSubID = 129;

     const int ResetSeqNumFlag = 141;

     const int SenderLocationID = 142;

     const int TargetLocationID = 143;

     const int OnBehalfOfLocationID = 144;

     const int DeliverToLocationID = 145;

     const int XmlDataLen = 212;

     const int XmlData = 213;

     const int MessageEncoding = 347;

     const int EncodedTextLen = 354;

     const int EncodedText = 355;

     const int LastMsgSeqNumProcessed = 369;

     const int RefTagID = 371;

     const int RefMsgType = 372;

     const int SessionRejectReason = 373;

     const int MaxMessageSize = 383;

     const int NoMsgTypes = 384;

     const int MsgDirection = 385;

     const int TestMessageIndicator = 464;

     const int Username = 553;

     const int Password = 554;

     const int NoHops = 627;

     const int HopCompID = 628;

     const int HopSendingTime = 629;

     const int HopRefID = 630;

     const int NextExpectedMsgSeqNum = 789;

     const int ApplVerID = 1128;

     const int CstmApplVerID = 1129;

     const int RefApplVerID = 1130;

     const int RefCstmApplVerID = 1131;

     const int DefaultApplVerID = 1137;

  }
}

#endif //FIXT_FIELDNUMBERS_H


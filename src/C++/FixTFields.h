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

#ifndef FIXT_FIELDS_H
#define FIXT_FIELDS_H

#include "Field.h"

#undef Yield

namespace FIX
{
  
 DEFINE_SEQNUM(BeginSeqNo);
 DEFINE_STRING(BeginString);
 DEFINE_LENGTH(BodyLength);
 DEFINE_CHECKSUM(CheckSum);
 DEFINE_SEQNUM(EndSeqNo);
 DEFINE_SEQNUM(MsgSeqNum);
 DEFINE_STRING(MsgType);
 DEFINE_SEQNUM(NewSeqNo);
 DEFINE_BOOLEAN(PossDupFlag);
 DEFINE_SEQNUM(RefSeqNum);
 DEFINE_STRING(SenderCompID);
 DEFINE_STRING(SenderSubID);
 DEFINE_UTCTIMESTAMP(SendingTime);
 DEFINE_STRING(TargetCompID);
 DEFINE_STRING(TargetSubID);
 DEFINE_STRING(Text);
 DEFINE_DATA(Signature);
 DEFINE_LENGTH(SecureDataLen);
 DEFINE_DATA(SecureData);
 DEFINE_LENGTH(SignatureLength);
 DEFINE_LENGTH(RawDataLength);
 DEFINE_DATA(RawData);
 DEFINE_BOOLEAN(PossResend);
 DEFINE_INT(EncryptMethod);
 DEFINE_INT(HeartBtInt);
 DEFINE_STRING(TestReqID);
 DEFINE_STRING(OnBehalfOfCompID);
 DEFINE_STRING(OnBehalfOfSubID);
 DEFINE_UTCTIMESTAMP(OrigSendingTime);
 DEFINE_BOOLEAN(GapFillFlag);
 DEFINE_STRING(DeliverToCompID);
 DEFINE_STRING(DeliverToSubID);
 DEFINE_BOOLEAN(ResetSeqNumFlag);
 DEFINE_STRING(SenderLocationID);
 DEFINE_STRING(TargetLocationID);
 DEFINE_STRING(OnBehalfOfLocationID);
 DEFINE_STRING(DeliverToLocationID);
 DEFINE_LENGTH(XmlDataLen);
 DEFINE_DATA(XmlData);
 DEFINE_STRING(MessageEncoding);
 DEFINE_LENGTH(EncodedTextLen);
 DEFINE_DATA(EncodedText);
 DEFINE_SEQNUM(LastMsgSeqNumProcessed);
 DEFINE_INT(RefTagID);
 DEFINE_STRING(RefMsgType);
 DEFINE_INT(SessionRejectReason);
 DEFINE_LENGTH(MaxMessageSize);
 DEFINE_NUMINGROUP(NoMsgTypes);
 DEFINE_CHAR(MsgDirection);
 DEFINE_BOOLEAN(TestMessageIndicator);
 DEFINE_STRING(Username);
 DEFINE_STRING(Password);
 DEFINE_NUMINGROUP(NoHops);
 DEFINE_STRING(HopCompID);
 DEFINE_UTCTIMESTAMP(HopSendingTime);
 DEFINE_SEQNUM(HopRefID);
 DEFINE_SEQNUM(NextExpectedMsgSeqNum);
 DEFINE_STRING(ApplVerID);
 DEFINE_STRING(CstmApplVerID);
 DEFINE_STRING(RefApplVerID);
 DEFINE_STRING(RefCstmApplVerID);
 DEFINE_STRING(DefaultApplVerID);
}
#endif //FIXT_FIELDS_H

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

package org.quickfix.fix41;

import org.quickfix.FieldNotFound;
import org.quickfix.field.*;

public class Message extends org.quickfix.Message {
    public Message() {
        super();
        header = new Header();
        trailer = new Trailer();
        getHeader().setField(new BeginString("FIX.4.1"));
    }

    public class Header extends org.quickfix.Message.Header {

        public void set(BeginString value) {
            super.setField(value);
        }
        BeginString get(BeginString value) throws FieldNotFound {
            super.getField(value);
            return value;
        }

        public void set(BodyLength value) {
            super.setField(value);
        }
        BodyLength get(BodyLength value) throws FieldNotFound {
            super.getField(value);
            return value;
        }

        public void set(MsgType value) {
            super.setField(value);
        }
        MsgType get(MsgType value) throws FieldNotFound {
            super.getField(value);
            return value;
        }

        public void set(SenderCompID value) {
            super.setField(value);
        }
        SenderCompID get(SenderCompID value) throws FieldNotFound {
            super.getField(value);
            return value;
        }

        public void set(TargetCompID value) {
            super.setField(value);
        }
        TargetCompID get(TargetCompID value) throws FieldNotFound {
            super.getField(value);
            return value;
        }

        public void set(OnBehalfOfCompID value) {
            super.setField(value);
        }
        OnBehalfOfCompID get(OnBehalfOfCompID value) throws FieldNotFound {
            super.getField(value);
            return value;
        }

        public void set(DeliverToCompID value) {
            super.setField(value);
        }
        DeliverToCompID get(DeliverToCompID value) throws FieldNotFound {
            super.getField(value);
            return value;
        }

        public void set(SecureDataLen value) {
            super.setField(value);
        }
        SecureDataLen get(SecureDataLen value) throws FieldNotFound {
            super.getField(value);
            return value;
        }

        public void set(SecureData value) {
            super.setField(value);
        }
        SecureData get(SecureData value) throws FieldNotFound {
            super.getField(value);
            return value;
        }

        public void set(MsgSeqNum value) {
            super.setField(value);
        }
        MsgSeqNum get(MsgSeqNum value) throws FieldNotFound {
            super.getField(value);
            return value;
        }

        public void set(SenderSubID value) {
            super.setField(value);
        }
        SenderSubID get(SenderSubID value) throws FieldNotFound {
            super.getField(value);
            return value;
        }

        public void set(SenderLocationID value) {
            super.setField(value);
        }
        SenderLocationID get(SenderLocationID value) throws FieldNotFound {
            super.getField(value);
            return value;
        }

        public void set(TargetSubID value) {
            super.setField(value);
        }
        TargetSubID get(TargetSubID value) throws FieldNotFound {
            super.getField(value);
            return value;
        }

        public void set(TargetLocationID value) {
            super.setField(value);
        }
        TargetLocationID get(TargetLocationID value) throws FieldNotFound {
            super.getField(value);
            return value;
        }

        public void set(OnBehalfOfSubID value) {
            super.setField(value);
        }
        OnBehalfOfSubID get(OnBehalfOfSubID value) throws FieldNotFound {
            super.getField(value);
            return value;
        }

        public void set(OnBehalfOfLocationID value) {
            super.setField(value);
        }
        OnBehalfOfLocationID get(OnBehalfOfLocationID value) throws FieldNotFound {
            super.getField(value);
            return value;
        }

        public void set(DeliverToSubID value) {
            super.setField(value);
        }
        DeliverToSubID get(DeliverToSubID value) throws FieldNotFound {
            super.getField(value);
            return value;
        }

        public void set(DeliverToLocationID value) {
            super.setField(value);
        }
        DeliverToLocationID get(DeliverToLocationID value) throws FieldNotFound {
            super.getField(value);
            return value;
        }

        public void set(PossDupFlag value) {
            super.setField(value);
        }
        PossDupFlag get(PossDupFlag value) throws FieldNotFound {
            super.getField(value);
            return value;
        }

        public void set(PossResend value) {
            super.setField(value);
        }
        PossResend get(PossResend value) throws FieldNotFound {
            super.getField(value);
            return value;
        }

        public void set(SendingTime value) {
            super.setField(value);
        }
        SendingTime get(SendingTime value) throws FieldNotFound {
            super.getField(value);
            return value;
        }

        public void set(OrigSendingTime value) {
            super.setField(value);
        }
        OrigSendingTime get(OrigSendingTime value) throws FieldNotFound {
            super.getField(value);
            return value;
        }

    }
}


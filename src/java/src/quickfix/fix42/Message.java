package org.quickfix.fix42;
import org.quickfix.FieldNotFound;
import org.quickfix.Group;
import org.quickfix.field.*;

public class Message extends org.quickfix.Message {
  public Message() {
    super();
    header = new Header();
    trailer = new Trailer();
    getHeader().setField(new BeginString("FIX.4.2"));
  }
  public class Header extends org.quickfix.Message.Header {
      public void set(org.quickfix.field.BeginString value)
      { setField(value); }
      public org.quickfix.field.BeginString get(org.quickfix.field.BeginString  value)
        throws FieldNotFound
      { getField(value); return value; }
      public org.quickfix.field.BeginString getBeginString() throws FieldNotFound
      { org.quickfix.field.BeginString value = new org.quickfix.field.BeginString();
        getField(value); return value; }
      public boolean isSet(org.quickfix.field.BeginString field)
      { return isSetField(field); }
      public boolean isSetBeginString()
      { return isSetField(8); }
      public void set(org.quickfix.field.BodyLength value)
      { setField(value); }
      public org.quickfix.field.BodyLength get(org.quickfix.field.BodyLength  value)
        throws FieldNotFound
      { getField(value); return value; }
      public org.quickfix.field.BodyLength getBodyLength() throws FieldNotFound
      { org.quickfix.field.BodyLength value = new org.quickfix.field.BodyLength();
        getField(value); return value; }
      public boolean isSet(org.quickfix.field.BodyLength field)
      { return isSetField(field); }
      public boolean isSetBodyLength()
      { return isSetField(9); }
      public void set(org.quickfix.field.MsgType value)
      { setField(value); }
      public org.quickfix.field.MsgType get(org.quickfix.field.MsgType  value)
        throws FieldNotFound
      { getField(value); return value; }
      public org.quickfix.field.MsgType getMsgType() throws FieldNotFound
      { org.quickfix.field.MsgType value = new org.quickfix.field.MsgType();
        getField(value); return value; }
      public boolean isSet(org.quickfix.field.MsgType field)
      { return isSetField(field); }
      public boolean isSetMsgType()
      { return isSetField(35); }
      public void set(org.quickfix.field.SenderCompID value)
      { setField(value); }
      public org.quickfix.field.SenderCompID get(org.quickfix.field.SenderCompID  value)
        throws FieldNotFound
      { getField(value); return value; }
      public org.quickfix.field.SenderCompID getSenderCompID() throws FieldNotFound
      { org.quickfix.field.SenderCompID value = new org.quickfix.field.SenderCompID();
        getField(value); return value; }
      public boolean isSet(org.quickfix.field.SenderCompID field)
      { return isSetField(field); }
      public boolean isSetSenderCompID()
      { return isSetField(49); }
      public void set(org.quickfix.field.TargetCompID value)
      { setField(value); }
      public org.quickfix.field.TargetCompID get(org.quickfix.field.TargetCompID  value)
        throws FieldNotFound
      { getField(value); return value; }
      public org.quickfix.field.TargetCompID getTargetCompID() throws FieldNotFound
      { org.quickfix.field.TargetCompID value = new org.quickfix.field.TargetCompID();
        getField(value); return value; }
      public boolean isSet(org.quickfix.field.TargetCompID field)
      { return isSetField(field); }
      public boolean isSetTargetCompID()
      { return isSetField(56); }
      public void set(org.quickfix.field.OnBehalfOfCompID value)
      { setField(value); }
      public org.quickfix.field.OnBehalfOfCompID get(org.quickfix.field.OnBehalfOfCompID  value)
        throws FieldNotFound
      { getField(value); return value; }
      public org.quickfix.field.OnBehalfOfCompID getOnBehalfOfCompID() throws FieldNotFound
      { org.quickfix.field.OnBehalfOfCompID value = new org.quickfix.field.OnBehalfOfCompID();
        getField(value); return value; }
      public boolean isSet(org.quickfix.field.OnBehalfOfCompID field)
      { return isSetField(field); }
      public boolean isSetOnBehalfOfCompID()
      { return isSetField(115); }
      public void set(org.quickfix.field.DeliverToCompID value)
      { setField(value); }
      public org.quickfix.field.DeliverToCompID get(org.quickfix.field.DeliverToCompID  value)
        throws FieldNotFound
      { getField(value); return value; }
      public org.quickfix.field.DeliverToCompID getDeliverToCompID() throws FieldNotFound
      { org.quickfix.field.DeliverToCompID value = new org.quickfix.field.DeliverToCompID();
        getField(value); return value; }
      public boolean isSet(org.quickfix.field.DeliverToCompID field)
      { return isSetField(field); }
      public boolean isSetDeliverToCompID()
      { return isSetField(128); }
      public void set(org.quickfix.field.SecureDataLen value)
      { setField(value); }
      public org.quickfix.field.SecureDataLen get(org.quickfix.field.SecureDataLen  value)
        throws FieldNotFound
      { getField(value); return value; }
      public org.quickfix.field.SecureDataLen getSecureDataLen() throws FieldNotFound
      { org.quickfix.field.SecureDataLen value = new org.quickfix.field.SecureDataLen();
        getField(value); return value; }
      public boolean isSet(org.quickfix.field.SecureDataLen field)
      { return isSetField(field); }
      public boolean isSetSecureDataLen()
      { return isSetField(90); }
      public void set(org.quickfix.field.SecureData value)
      { setField(value); }
      public org.quickfix.field.SecureData get(org.quickfix.field.SecureData  value)
        throws FieldNotFound
      { getField(value); return value; }
      public org.quickfix.field.SecureData getSecureData() throws FieldNotFound
      { org.quickfix.field.SecureData value = new org.quickfix.field.SecureData();
        getField(value); return value; }
      public boolean isSet(org.quickfix.field.SecureData field)
      { return isSetField(field); }
      public boolean isSetSecureData()
      { return isSetField(91); }
      public void set(org.quickfix.field.MsgSeqNum value)
      { setField(value); }
      public org.quickfix.field.MsgSeqNum get(org.quickfix.field.MsgSeqNum  value)
        throws FieldNotFound
      { getField(value); return value; }
      public org.quickfix.field.MsgSeqNum getMsgSeqNum() throws FieldNotFound
      { org.quickfix.field.MsgSeqNum value = new org.quickfix.field.MsgSeqNum();
        getField(value); return value; }
      public boolean isSet(org.quickfix.field.MsgSeqNum field)
      { return isSetField(field); }
      public boolean isSetMsgSeqNum()
      { return isSetField(34); }
      public void set(org.quickfix.field.SenderSubID value)
      { setField(value); }
      public org.quickfix.field.SenderSubID get(org.quickfix.field.SenderSubID  value)
        throws FieldNotFound
      { getField(value); return value; }
      public org.quickfix.field.SenderSubID getSenderSubID() throws FieldNotFound
      { org.quickfix.field.SenderSubID value = new org.quickfix.field.SenderSubID();
        getField(value); return value; }
      public boolean isSet(org.quickfix.field.SenderSubID field)
      { return isSetField(field); }
      public boolean isSetSenderSubID()
      { return isSetField(50); }
      public void set(org.quickfix.field.SenderLocationID value)
      { setField(value); }
      public org.quickfix.field.SenderLocationID get(org.quickfix.field.SenderLocationID  value)
        throws FieldNotFound
      { getField(value); return value; }
      public org.quickfix.field.SenderLocationID getSenderLocationID() throws FieldNotFound
      { org.quickfix.field.SenderLocationID value = new org.quickfix.field.SenderLocationID();
        getField(value); return value; }
      public boolean isSet(org.quickfix.field.SenderLocationID field)
      { return isSetField(field); }
      public boolean isSetSenderLocationID()
      { return isSetField(142); }
      public void set(org.quickfix.field.TargetSubID value)
      { setField(value); }
      public org.quickfix.field.TargetSubID get(org.quickfix.field.TargetSubID  value)
        throws FieldNotFound
      { getField(value); return value; }
      public org.quickfix.field.TargetSubID getTargetSubID() throws FieldNotFound
      { org.quickfix.field.TargetSubID value = new org.quickfix.field.TargetSubID();
        getField(value); return value; }
      public boolean isSet(org.quickfix.field.TargetSubID field)
      { return isSetField(field); }
      public boolean isSetTargetSubID()
      { return isSetField(57); }
      public void set(org.quickfix.field.TargetLocationID value)
      { setField(value); }
      public org.quickfix.field.TargetLocationID get(org.quickfix.field.TargetLocationID  value)
        throws FieldNotFound
      { getField(value); return value; }
      public org.quickfix.field.TargetLocationID getTargetLocationID() throws FieldNotFound
      { org.quickfix.field.TargetLocationID value = new org.quickfix.field.TargetLocationID();
        getField(value); return value; }
      public boolean isSet(org.quickfix.field.TargetLocationID field)
      { return isSetField(field); }
      public boolean isSetTargetLocationID()
      { return isSetField(143); }
      public void set(org.quickfix.field.OnBehalfOfSubID value)
      { setField(value); }
      public org.quickfix.field.OnBehalfOfSubID get(org.quickfix.field.OnBehalfOfSubID  value)
        throws FieldNotFound
      { getField(value); return value; }
      public org.quickfix.field.OnBehalfOfSubID getOnBehalfOfSubID() throws FieldNotFound
      { org.quickfix.field.OnBehalfOfSubID value = new org.quickfix.field.OnBehalfOfSubID();
        getField(value); return value; }
      public boolean isSet(org.quickfix.field.OnBehalfOfSubID field)
      { return isSetField(field); }
      public boolean isSetOnBehalfOfSubID()
      { return isSetField(116); }
      public void set(org.quickfix.field.OnBehalfOfLocationID value)
      { setField(value); }
      public org.quickfix.field.OnBehalfOfLocationID get(org.quickfix.field.OnBehalfOfLocationID  value)
        throws FieldNotFound
      { getField(value); return value; }
      public org.quickfix.field.OnBehalfOfLocationID getOnBehalfOfLocationID() throws FieldNotFound
      { org.quickfix.field.OnBehalfOfLocationID value = new org.quickfix.field.OnBehalfOfLocationID();
        getField(value); return value; }
      public boolean isSet(org.quickfix.field.OnBehalfOfLocationID field)
      { return isSetField(field); }
      public boolean isSetOnBehalfOfLocationID()
      { return isSetField(144); }
      public void set(org.quickfix.field.DeliverToSubID value)
      { setField(value); }
      public org.quickfix.field.DeliverToSubID get(org.quickfix.field.DeliverToSubID  value)
        throws FieldNotFound
      { getField(value); return value; }
      public org.quickfix.field.DeliverToSubID getDeliverToSubID() throws FieldNotFound
      { org.quickfix.field.DeliverToSubID value = new org.quickfix.field.DeliverToSubID();
        getField(value); return value; }
      public boolean isSet(org.quickfix.field.DeliverToSubID field)
      { return isSetField(field); }
      public boolean isSetDeliverToSubID()
      { return isSetField(129); }
      public void set(org.quickfix.field.DeliverToLocationID value)
      { setField(value); }
      public org.quickfix.field.DeliverToLocationID get(org.quickfix.field.DeliverToLocationID  value)
        throws FieldNotFound
      { getField(value); return value; }
      public org.quickfix.field.DeliverToLocationID getDeliverToLocationID() throws FieldNotFound
      { org.quickfix.field.DeliverToLocationID value = new org.quickfix.field.DeliverToLocationID();
        getField(value); return value; }
      public boolean isSet(org.quickfix.field.DeliverToLocationID field)
      { return isSetField(field); }
      public boolean isSetDeliverToLocationID()
      { return isSetField(145); }
      public void set(org.quickfix.field.PossDupFlag value)
      { setField(value); }
      public org.quickfix.field.PossDupFlag get(org.quickfix.field.PossDupFlag  value)
        throws FieldNotFound
      { getField(value); return value; }
      public org.quickfix.field.PossDupFlag getPossDupFlag() throws FieldNotFound
      { org.quickfix.field.PossDupFlag value = new org.quickfix.field.PossDupFlag();
        getField(value); return value; }
      public boolean isSet(org.quickfix.field.PossDupFlag field)
      { return isSetField(field); }
      public boolean isSetPossDupFlag()
      { return isSetField(43); }
      public void set(org.quickfix.field.PossResend value)
      { setField(value); }
      public org.quickfix.field.PossResend get(org.quickfix.field.PossResend  value)
        throws FieldNotFound
      { getField(value); return value; }
      public org.quickfix.field.PossResend getPossResend() throws FieldNotFound
      { org.quickfix.field.PossResend value = new org.quickfix.field.PossResend();
        getField(value); return value; }
      public boolean isSet(org.quickfix.field.PossResend field)
      { return isSetField(field); }
      public boolean isSetPossResend()
      { return isSetField(97); }
      public void set(org.quickfix.field.SendingTime value)
      { setField(value); }
      public org.quickfix.field.SendingTime get(org.quickfix.field.SendingTime  value)
        throws FieldNotFound
      { getField(value); return value; }
      public org.quickfix.field.SendingTime getSendingTime() throws FieldNotFound
      { org.quickfix.field.SendingTime value = new org.quickfix.field.SendingTime();
        getField(value); return value; }
      public boolean isSet(org.quickfix.field.SendingTime field)
      { return isSetField(field); }
      public boolean isSetSendingTime()
      { return isSetField(52); }
      public void set(org.quickfix.field.OrigSendingTime value)
      { setField(value); }
      public org.quickfix.field.OrigSendingTime get(org.quickfix.field.OrigSendingTime  value)
        throws FieldNotFound
      { getField(value); return value; }
      public org.quickfix.field.OrigSendingTime getOrigSendingTime() throws FieldNotFound
      { org.quickfix.field.OrigSendingTime value = new org.quickfix.field.OrigSendingTime();
        getField(value); return value; }
      public boolean isSet(org.quickfix.field.OrigSendingTime field)
      { return isSetField(field); }
      public boolean isSetOrigSendingTime()
      { return isSetField(122); }
      public void set(org.quickfix.field.XmlDataLen value)
      { setField(value); }
      public org.quickfix.field.XmlDataLen get(org.quickfix.field.XmlDataLen  value)
        throws FieldNotFound
      { getField(value); return value; }
      public org.quickfix.field.XmlDataLen getXmlDataLen() throws FieldNotFound
      { org.quickfix.field.XmlDataLen value = new org.quickfix.field.XmlDataLen();
        getField(value); return value; }
      public boolean isSet(org.quickfix.field.XmlDataLen field)
      { return isSetField(field); }
      public boolean isSetXmlDataLen()
      { return isSetField(212); }
      public void set(org.quickfix.field.XmlData value)
      { setField(value); }
      public org.quickfix.field.XmlData get(org.quickfix.field.XmlData  value)
        throws FieldNotFound
      { getField(value); return value; }
      public org.quickfix.field.XmlData getXmlData() throws FieldNotFound
      { org.quickfix.field.XmlData value = new org.quickfix.field.XmlData();
        getField(value); return value; }
      public boolean isSet(org.quickfix.field.XmlData field)
      { return isSetField(field); }
      public boolean isSetXmlData()
      { return isSetField(213); }
      public void set(org.quickfix.field.MessageEncoding value)
      { setField(value); }
      public org.quickfix.field.MessageEncoding get(org.quickfix.field.MessageEncoding  value)
        throws FieldNotFound
      { getField(value); return value; }
      public org.quickfix.field.MessageEncoding getMessageEncoding() throws FieldNotFound
      { org.quickfix.field.MessageEncoding value = new org.quickfix.field.MessageEncoding();
        getField(value); return value; }
      public boolean isSet(org.quickfix.field.MessageEncoding field)
      { return isSetField(field); }
      public boolean isSetMessageEncoding()
      { return isSetField(347); }
      public void set(org.quickfix.field.LastMsgSeqNumProcessed value)
      { setField(value); }
      public org.quickfix.field.LastMsgSeqNumProcessed get(org.quickfix.field.LastMsgSeqNumProcessed  value)
        throws FieldNotFound
      { getField(value); return value; }
      public org.quickfix.field.LastMsgSeqNumProcessed getLastMsgSeqNumProcessed() throws FieldNotFound
      { org.quickfix.field.LastMsgSeqNumProcessed value = new org.quickfix.field.LastMsgSeqNumProcessed();
        getField(value); return value; }
      public boolean isSet(org.quickfix.field.LastMsgSeqNumProcessed field)
      { return isSetField(field); }
      public boolean isSetLastMsgSeqNumProcessed()
      { return isSetField(369); }
      public void set(org.quickfix.field.OnBehalfOfSendingTime value)
      { setField(value); }
      public org.quickfix.field.OnBehalfOfSendingTime get(org.quickfix.field.OnBehalfOfSendingTime  value)
        throws FieldNotFound
      { getField(value); return value; }
      public org.quickfix.field.OnBehalfOfSendingTime getOnBehalfOfSendingTime() throws FieldNotFound
      { org.quickfix.field.OnBehalfOfSendingTime value = new org.quickfix.field.OnBehalfOfSendingTime();
        getField(value); return value; }
      public boolean isSet(org.quickfix.field.OnBehalfOfSendingTime field)
      { return isSetField(field); }
      public boolean isSetOnBehalfOfSendingTime()
      { return isSetField(370); }
  }

    public void set(org.quickfix.field.SignatureLength value)
    { setField(value); }
    public org.quickfix.field.SignatureLength get(org.quickfix.field.SignatureLength  value)
      throws FieldNotFound
    { getField(value); return value; }
    public org.quickfix.field.SignatureLength getSignatureLength() throws FieldNotFound
    { org.quickfix.field.SignatureLength value = new org.quickfix.field.SignatureLength();
      getField(value); return value; }
    public boolean isSet(org.quickfix.field.SignatureLength field)
    { return isSetField(field); }
    public boolean isSetSignatureLength()
    { return isSetField(93); }
    public void set(org.quickfix.field.Signature value)
    { setField(value); }
    public org.quickfix.field.Signature get(org.quickfix.field.Signature  value)
      throws FieldNotFound
    { getField(value); return value; }
    public org.quickfix.field.Signature getSignature() throws FieldNotFound
    { org.quickfix.field.Signature value = new org.quickfix.field.Signature();
      getField(value); return value; }
    public boolean isSet(org.quickfix.field.Signature field)
    { return isSetField(field); }
    public boolean isSetSignature()
    { return isSetField(89); }
    public void set(org.quickfix.field.CheckSum value)
    { setField(value); }
    public org.quickfix.field.CheckSum get(org.quickfix.field.CheckSum  value)
      throws FieldNotFound
    { getField(value); return value; }
    public org.quickfix.field.CheckSum getCheckSum() throws FieldNotFound
    { org.quickfix.field.CheckSum value = new org.quickfix.field.CheckSum();
      getField(value); return value; }
    public boolean isSet(org.quickfix.field.CheckSum field)
    { return isSetField(field); }
    public boolean isSetCheckSum()
    { return isSetField(10); }
}

package quickfix.fix44;
import quickfix.FieldNotFound;
import quickfix.Group;
import quickfix.field.*;

public class Message extends quickfix.Message {
  public Message() {
    super();
    header = new Header( this );
    trailer = new Trailer( this );
    getHeader().setField(new BeginString("FIX.4.4"));
  }
  public class Header extends quickfix.Message.Header {
    public Header( Message message ) {
      super( message );
    }
      public void set(quickfix.field.BeginString value)
      { setField(value); }
      public quickfix.field.BeginString get(quickfix.field.BeginString  value)
        throws FieldNotFound
      { getField(value); return value; }
      public quickfix.field.BeginString getBeginString() throws FieldNotFound
      { quickfix.field.BeginString value = new quickfix.field.BeginString();
        getField(value); return value; }
      public boolean isSet(quickfix.field.BeginString field)
      { return isSetField(field); }
      public boolean isSetBeginString()
      { return isSetField(8); }
      public void set(quickfix.field.BodyLength value)
      { setField(value); }
      public quickfix.field.BodyLength get(quickfix.field.BodyLength  value)
        throws FieldNotFound
      { getField(value); return value; }
      public quickfix.field.BodyLength getBodyLength() throws FieldNotFound
      { quickfix.field.BodyLength value = new quickfix.field.BodyLength();
        getField(value); return value; }
      public boolean isSet(quickfix.field.BodyLength field)
      { return isSetField(field); }
      public boolean isSetBodyLength()
      { return isSetField(9); }
      public void set(quickfix.field.MsgType value)
      { setField(value); }
      public quickfix.field.MsgType get(quickfix.field.MsgType  value)
        throws FieldNotFound
      { getField(value); return value; }
      public quickfix.field.MsgType getMsgType() throws FieldNotFound
      { quickfix.field.MsgType value = new quickfix.field.MsgType();
        getField(value); return value; }
      public boolean isSet(quickfix.field.MsgType field)
      { return isSetField(field); }
      public boolean isSetMsgType()
      { return isSetField(35); }
      public void set(quickfix.field.SenderCompID value)
      { setField(value); }
      public quickfix.field.SenderCompID get(quickfix.field.SenderCompID  value)
        throws FieldNotFound
      { getField(value); return value; }
      public quickfix.field.SenderCompID getSenderCompID() throws FieldNotFound
      { quickfix.field.SenderCompID value = new quickfix.field.SenderCompID();
        getField(value); return value; }
      public boolean isSet(quickfix.field.SenderCompID field)
      { return isSetField(field); }
      public boolean isSetSenderCompID()
      { return isSetField(49); }
      public void set(quickfix.field.TargetCompID value)
      { setField(value); }
      public quickfix.field.TargetCompID get(quickfix.field.TargetCompID  value)
        throws FieldNotFound
      { getField(value); return value; }
      public quickfix.field.TargetCompID getTargetCompID() throws FieldNotFound
      { quickfix.field.TargetCompID value = new quickfix.field.TargetCompID();
        getField(value); return value; }
      public boolean isSet(quickfix.field.TargetCompID field)
      { return isSetField(field); }
      public boolean isSetTargetCompID()
      { return isSetField(56); }
      public void set(quickfix.field.OnBehalfOfCompID value)
      { setField(value); }
      public quickfix.field.OnBehalfOfCompID get(quickfix.field.OnBehalfOfCompID  value)
        throws FieldNotFound
      { getField(value); return value; }
      public quickfix.field.OnBehalfOfCompID getOnBehalfOfCompID() throws FieldNotFound
      { quickfix.field.OnBehalfOfCompID value = new quickfix.field.OnBehalfOfCompID();
        getField(value); return value; }
      public boolean isSet(quickfix.field.OnBehalfOfCompID field)
      { return isSetField(field); }
      public boolean isSetOnBehalfOfCompID()
      { return isSetField(115); }
      public void set(quickfix.field.DeliverToCompID value)
      { setField(value); }
      public quickfix.field.DeliverToCompID get(quickfix.field.DeliverToCompID  value)
        throws FieldNotFound
      { getField(value); return value; }
      public quickfix.field.DeliverToCompID getDeliverToCompID() throws FieldNotFound
      { quickfix.field.DeliverToCompID value = new quickfix.field.DeliverToCompID();
        getField(value); return value; }
      public boolean isSet(quickfix.field.DeliverToCompID field)
      { return isSetField(field); }
      public boolean isSetDeliverToCompID()
      { return isSetField(128); }
      public void set(quickfix.field.SecureDataLen value)
      { setField(value); }
      public quickfix.field.SecureDataLen get(quickfix.field.SecureDataLen  value)
        throws FieldNotFound
      { getField(value); return value; }
      public quickfix.field.SecureDataLen getSecureDataLen() throws FieldNotFound
      { quickfix.field.SecureDataLen value = new quickfix.field.SecureDataLen();
        getField(value); return value; }
      public boolean isSet(quickfix.field.SecureDataLen field)
      { return isSetField(field); }
      public boolean isSetSecureDataLen()
      { return isSetField(90); }
      public void set(quickfix.field.SecureData value)
      { setField(value); }
      public quickfix.field.SecureData get(quickfix.field.SecureData  value)
        throws FieldNotFound
      { getField(value); return value; }
      public quickfix.field.SecureData getSecureData() throws FieldNotFound
      { quickfix.field.SecureData value = new quickfix.field.SecureData();
        getField(value); return value; }
      public boolean isSet(quickfix.field.SecureData field)
      { return isSetField(field); }
      public boolean isSetSecureData()
      { return isSetField(91); }
      public void set(quickfix.field.MsgSeqNum value)
      { setField(value); }
      public quickfix.field.MsgSeqNum get(quickfix.field.MsgSeqNum  value)
        throws FieldNotFound
      { getField(value); return value; }
      public quickfix.field.MsgSeqNum getMsgSeqNum() throws FieldNotFound
      { quickfix.field.MsgSeqNum value = new quickfix.field.MsgSeqNum();
        getField(value); return value; }
      public boolean isSet(quickfix.field.MsgSeqNum field)
      { return isSetField(field); }
      public boolean isSetMsgSeqNum()
      { return isSetField(34); }
      public void set(quickfix.field.SenderSubID value)
      { setField(value); }
      public quickfix.field.SenderSubID get(quickfix.field.SenderSubID  value)
        throws FieldNotFound
      { getField(value); return value; }
      public quickfix.field.SenderSubID getSenderSubID() throws FieldNotFound
      { quickfix.field.SenderSubID value = new quickfix.field.SenderSubID();
        getField(value); return value; }
      public boolean isSet(quickfix.field.SenderSubID field)
      { return isSetField(field); }
      public boolean isSetSenderSubID()
      { return isSetField(50); }
      public void set(quickfix.field.SenderLocationID value)
      { setField(value); }
      public quickfix.field.SenderLocationID get(quickfix.field.SenderLocationID  value)
        throws FieldNotFound
      { getField(value); return value; }
      public quickfix.field.SenderLocationID getSenderLocationID() throws FieldNotFound
      { quickfix.field.SenderLocationID value = new quickfix.field.SenderLocationID();
        getField(value); return value; }
      public boolean isSet(quickfix.field.SenderLocationID field)
      { return isSetField(field); }
      public boolean isSetSenderLocationID()
      { return isSetField(142); }
      public void set(quickfix.field.TargetSubID value)
      { setField(value); }
      public quickfix.field.TargetSubID get(quickfix.field.TargetSubID  value)
        throws FieldNotFound
      { getField(value); return value; }
      public quickfix.field.TargetSubID getTargetSubID() throws FieldNotFound
      { quickfix.field.TargetSubID value = new quickfix.field.TargetSubID();
        getField(value); return value; }
      public boolean isSet(quickfix.field.TargetSubID field)
      { return isSetField(field); }
      public boolean isSetTargetSubID()
      { return isSetField(57); }
      public void set(quickfix.field.TargetLocationID value)
      { setField(value); }
      public quickfix.field.TargetLocationID get(quickfix.field.TargetLocationID  value)
        throws FieldNotFound
      { getField(value); return value; }
      public quickfix.field.TargetLocationID getTargetLocationID() throws FieldNotFound
      { quickfix.field.TargetLocationID value = new quickfix.field.TargetLocationID();
        getField(value); return value; }
      public boolean isSet(quickfix.field.TargetLocationID field)
      { return isSetField(field); }
      public boolean isSetTargetLocationID()
      { return isSetField(143); }
      public void set(quickfix.field.OnBehalfOfSubID value)
      { setField(value); }
      public quickfix.field.OnBehalfOfSubID get(quickfix.field.OnBehalfOfSubID  value)
        throws FieldNotFound
      { getField(value); return value; }
      public quickfix.field.OnBehalfOfSubID getOnBehalfOfSubID() throws FieldNotFound
      { quickfix.field.OnBehalfOfSubID value = new quickfix.field.OnBehalfOfSubID();
        getField(value); return value; }
      public boolean isSet(quickfix.field.OnBehalfOfSubID field)
      { return isSetField(field); }
      public boolean isSetOnBehalfOfSubID()
      { return isSetField(116); }
      public void set(quickfix.field.OnBehalfOfLocationID value)
      { setField(value); }
      public quickfix.field.OnBehalfOfLocationID get(quickfix.field.OnBehalfOfLocationID  value)
        throws FieldNotFound
      { getField(value); return value; }
      public quickfix.field.OnBehalfOfLocationID getOnBehalfOfLocationID() throws FieldNotFound
      { quickfix.field.OnBehalfOfLocationID value = new quickfix.field.OnBehalfOfLocationID();
        getField(value); return value; }
      public boolean isSet(quickfix.field.OnBehalfOfLocationID field)
      { return isSetField(field); }
      public boolean isSetOnBehalfOfLocationID()
      { return isSetField(144); }
      public void set(quickfix.field.DeliverToSubID value)
      { setField(value); }
      public quickfix.field.DeliverToSubID get(quickfix.field.DeliverToSubID  value)
        throws FieldNotFound
      { getField(value); return value; }
      public quickfix.field.DeliverToSubID getDeliverToSubID() throws FieldNotFound
      { quickfix.field.DeliverToSubID value = new quickfix.field.DeliverToSubID();
        getField(value); return value; }
      public boolean isSet(quickfix.field.DeliverToSubID field)
      { return isSetField(field); }
      public boolean isSetDeliverToSubID()
      { return isSetField(129); }
      public void set(quickfix.field.DeliverToLocationID value)
      { setField(value); }
      public quickfix.field.DeliverToLocationID get(quickfix.field.DeliverToLocationID  value)
        throws FieldNotFound
      { getField(value); return value; }
      public quickfix.field.DeliverToLocationID getDeliverToLocationID() throws FieldNotFound
      { quickfix.field.DeliverToLocationID value = new quickfix.field.DeliverToLocationID();
        getField(value); return value; }
      public boolean isSet(quickfix.field.DeliverToLocationID field)
      { return isSetField(field); }
      public boolean isSetDeliverToLocationID()
      { return isSetField(145); }
      public void set(quickfix.field.PossDupFlag value)
      { setField(value); }
      public quickfix.field.PossDupFlag get(quickfix.field.PossDupFlag  value)
        throws FieldNotFound
      { getField(value); return value; }
      public quickfix.field.PossDupFlag getPossDupFlag() throws FieldNotFound
      { quickfix.field.PossDupFlag value = new quickfix.field.PossDupFlag();
        getField(value); return value; }
      public boolean isSet(quickfix.field.PossDupFlag field)
      { return isSetField(field); }
      public boolean isSetPossDupFlag()
      { return isSetField(43); }
      public void set(quickfix.field.PossResend value)
      { setField(value); }
      public quickfix.field.PossResend get(quickfix.field.PossResend  value)
        throws FieldNotFound
      { getField(value); return value; }
      public quickfix.field.PossResend getPossResend() throws FieldNotFound
      { quickfix.field.PossResend value = new quickfix.field.PossResend();
        getField(value); return value; }
      public boolean isSet(quickfix.field.PossResend field)
      { return isSetField(field); }
      public boolean isSetPossResend()
      { return isSetField(97); }
      public void set(quickfix.field.SendingTime value)
      { setField(value); }
      public quickfix.field.SendingTime get(quickfix.field.SendingTime  value)
        throws FieldNotFound
      { getField(value); return value; }
      public quickfix.field.SendingTime getSendingTime() throws FieldNotFound
      { quickfix.field.SendingTime value = new quickfix.field.SendingTime();
        getField(value); return value; }
      public boolean isSet(quickfix.field.SendingTime field)
      { return isSetField(field); }
      public boolean isSetSendingTime()
      { return isSetField(52); }
      public void set(quickfix.field.OrigSendingTime value)
      { setField(value); }
      public quickfix.field.OrigSendingTime get(quickfix.field.OrigSendingTime  value)
        throws FieldNotFound
      { getField(value); return value; }
      public quickfix.field.OrigSendingTime getOrigSendingTime() throws FieldNotFound
      { quickfix.field.OrigSendingTime value = new quickfix.field.OrigSendingTime();
        getField(value); return value; }
      public boolean isSet(quickfix.field.OrigSendingTime field)
      { return isSetField(field); }
      public boolean isSetOrigSendingTime()
      { return isSetField(122); }
      public void set(quickfix.field.XmlDataLen value)
      { setField(value); }
      public quickfix.field.XmlDataLen get(quickfix.field.XmlDataLen  value)
        throws FieldNotFound
      { getField(value); return value; }
      public quickfix.field.XmlDataLen getXmlDataLen() throws FieldNotFound
      { quickfix.field.XmlDataLen value = new quickfix.field.XmlDataLen();
        getField(value); return value; }
      public boolean isSet(quickfix.field.XmlDataLen field)
      { return isSetField(field); }
      public boolean isSetXmlDataLen()
      { return isSetField(212); }
      public void set(quickfix.field.XmlData value)
      { setField(value); }
      public quickfix.field.XmlData get(quickfix.field.XmlData  value)
        throws FieldNotFound
      { getField(value); return value; }
      public quickfix.field.XmlData getXmlData() throws FieldNotFound
      { quickfix.field.XmlData value = new quickfix.field.XmlData();
        getField(value); return value; }
      public boolean isSet(quickfix.field.XmlData field)
      { return isSetField(field); }
      public boolean isSetXmlData()
      { return isSetField(213); }
      public void set(quickfix.field.MessageEncoding value)
      { setField(value); }
      public quickfix.field.MessageEncoding get(quickfix.field.MessageEncoding  value)
        throws FieldNotFound
      { getField(value); return value; }
      public quickfix.field.MessageEncoding getMessageEncoding() throws FieldNotFound
      { quickfix.field.MessageEncoding value = new quickfix.field.MessageEncoding();
        getField(value); return value; }
      public boolean isSet(quickfix.field.MessageEncoding field)
      { return isSetField(field); }
      public boolean isSetMessageEncoding()
      { return isSetField(347); }
      public void set(quickfix.field.LastMsgSeqNumProcessed value)
      { setField(value); }
      public quickfix.field.LastMsgSeqNumProcessed get(quickfix.field.LastMsgSeqNumProcessed  value)
        throws FieldNotFound
      { getField(value); return value; }
      public quickfix.field.LastMsgSeqNumProcessed getLastMsgSeqNumProcessed() throws FieldNotFound
      { quickfix.field.LastMsgSeqNumProcessed value = new quickfix.field.LastMsgSeqNumProcessed();
        getField(value); return value; }
      public boolean isSet(quickfix.field.LastMsgSeqNumProcessed field)
      { return isSetField(field); }
      public boolean isSetLastMsgSeqNumProcessed()
      { return isSetField(369); }
      public void set(quickfix.field.NoHops value)
      { setField(value); }
      public quickfix.field.NoHops get(quickfix.field.NoHops  value)
        throws FieldNotFound
      { getField(value); return value; }
      public quickfix.field.NoHops getNoHops() throws FieldNotFound
      { quickfix.field.NoHops value = new quickfix.field.NoHops();
        getField(value); return value; }
      public boolean isSet(quickfix.field.NoHops field)
      { return isSetField(field); }
      public boolean isSetNoHops()
      { return isSetField(627); }
/*
      public static class NoHops extends Group {
        public NoHops() {
          super(627,628,
          new int[] {628,629,630,0 } ); }
        public void set(quickfix.field.HopCompID value)
        { setField(value); }
        public quickfix.field.HopCompID get(quickfix.field.HopCompID  value)
          throws FieldNotFound
        { getField(value); return value; }
        public quickfix.field.HopCompID getHopCompID() throws FieldNotFound
        { quickfix.field.HopCompID value = new quickfix.field.HopCompID();
          getField(value); return value; }
        public boolean isSet(quickfix.field.HopCompID field)
        { return isSetField(field); }
        public boolean isSetHopCompID()
        { return isSetField(628); }
        public void set(quickfix.field.HopSendingTime value)
        { setField(value); }
        public quickfix.field.HopSendingTime get(quickfix.field.HopSendingTime  value)
          throws FieldNotFound
        { getField(value); return value; }
        public quickfix.field.HopSendingTime getHopSendingTime() throws FieldNotFound
        { quickfix.field.HopSendingTime value = new quickfix.field.HopSendingTime();
          getField(value); return value; }
        public boolean isSet(quickfix.field.HopSendingTime field)
        { return isSetField(field); }
        public boolean isSetHopSendingTime()
        { return isSetField(629); }
        public void set(quickfix.field.HopRefID value)
        { setField(value); }
        public quickfix.field.HopRefID get(quickfix.field.HopRefID  value)
          throws FieldNotFound
        { getField(value); return value; }
        public quickfix.field.HopRefID getHopRefID() throws FieldNotFound
        { quickfix.field.HopRefID value = new quickfix.field.HopRefID();
          getField(value); return value; }
        public boolean isSet(quickfix.field.HopRefID field)
        { return isSetField(field); }
        public boolean isSetHopRefID()
        { return isSetField(630); }
    }
*/
  }

    public void set(quickfix.field.SignatureLength value)
    { setField(value); }
    public quickfix.field.SignatureLength get(quickfix.field.SignatureLength  value)
      throws FieldNotFound
    { getField(value); return value; }
    public quickfix.field.SignatureLength getSignatureLength() throws FieldNotFound
    { quickfix.field.SignatureLength value = new quickfix.field.SignatureLength();
      getField(value); return value; }
    public boolean isSet(quickfix.field.SignatureLength field)
    { return isSetField(field); }
    public boolean isSetSignatureLength()
    { return isSetField(93); }
    public void set(quickfix.field.Signature value)
    { setField(value); }
    public quickfix.field.Signature get(quickfix.field.Signature  value)
      throws FieldNotFound
    { getField(value); return value; }
    public quickfix.field.Signature getSignature() throws FieldNotFound
    { quickfix.field.Signature value = new quickfix.field.Signature();
      getField(value); return value; }
    public boolean isSet(quickfix.field.Signature field)
    { return isSetField(field); }
    public boolean isSetSignature()
    { return isSetField(89); }
    public void set(quickfix.field.CheckSum value)
    { setField(value); }
    public quickfix.field.CheckSum get(quickfix.field.CheckSum  value)
      throws FieldNotFound
    { getField(value); return value; }
    public quickfix.field.CheckSum getCheckSum() throws FieldNotFound
    { quickfix.field.CheckSum value = new quickfix.field.CheckSum();
      getField(value); return value; }
    public boolean isSet(quickfix.field.CheckSum field)
    { return isSetField(field); }
    public boolean isSetCheckSum()
    { return isSetField(10); }
}

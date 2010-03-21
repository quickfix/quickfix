namespace QuickFix50Sp2
{

  public class StreamAssignmentReportACK : Message
  {
    public StreamAssignmentReportACK() : base(MsgType()) {}
    static QuickFix.MsgType MsgType() { return new QuickFix.MsgType("CE"); }

    public StreamAssignmentReportACK(
      QuickFix.StreamAsgnAckType aStreamAsgnAckType,
      QuickFix.StreamAsgnRptID aStreamAsgnRptID )
    : base(MsgType()) {
      set(aStreamAsgnAckType);
      set(aStreamAsgnRptID);
    }

    public void set(QuickFix.StreamAsgnAckType value)
    { setField(value); }
    public QuickFix.StreamAsgnAckType get(QuickFix.StreamAsgnAckType  value)
    { getField(value); return value; }
    public QuickFix.StreamAsgnAckType getStreamAsgnAckType()
    { QuickFix.StreamAsgnAckType value = new QuickFix.StreamAsgnAckType();
      getField(value); return value; }
    public bool isSet(QuickFix.StreamAsgnAckType field)
    { return isSetField(field); }
    public bool isSetStreamAsgnAckType()
    { return isSetField(1503); }

    public void set(QuickFix.StreamAsgnRptID value)
    { setField(value); }
    public QuickFix.StreamAsgnRptID get(QuickFix.StreamAsgnRptID  value)
    { getField(value); return value; }
    public QuickFix.StreamAsgnRptID getStreamAsgnRptID()
    { QuickFix.StreamAsgnRptID value = new QuickFix.StreamAsgnRptID();
      getField(value); return value; }
    public bool isSet(QuickFix.StreamAsgnRptID field)
    { return isSetField(field); }
    public bool isSetStreamAsgnRptID()
    { return isSetField(1501); }

    public void set(QuickFix.StreamAsgnRejReason value)
    { setField(value); }
    public QuickFix.StreamAsgnRejReason get(QuickFix.StreamAsgnRejReason  value)
    { getField(value); return value; }
    public QuickFix.StreamAsgnRejReason getStreamAsgnRejReason()
    { QuickFix.StreamAsgnRejReason value = new QuickFix.StreamAsgnRejReason();
      getField(value); return value; }
    public bool isSet(QuickFix.StreamAsgnRejReason field)
    { return isSetField(field); }
    public bool isSetStreamAsgnRejReason()
    { return isSetField(1502); }

    public void set(QuickFix.Text value)
    { setField(value); }
    public QuickFix.Text get(QuickFix.Text  value)
    { getField(value); return value; }
    public QuickFix.Text getText()
    { QuickFix.Text value = new QuickFix.Text();
      getField(value); return value; }
    public bool isSet(QuickFix.Text field)
    { return isSetField(field); }
    public bool isSetText()
    { return isSetField(58); }

    public void set(QuickFix.EncodedTextLen value)
    { setField(value); }
    public QuickFix.EncodedTextLen get(QuickFix.EncodedTextLen  value)
    { getField(value); return value; }
    public QuickFix.EncodedTextLen getEncodedTextLen()
    { QuickFix.EncodedTextLen value = new QuickFix.EncodedTextLen();
      getField(value); return value; }
    public bool isSet(QuickFix.EncodedTextLen field)
    { return isSetField(field); }
    public bool isSetEncodedTextLen()
    { return isSetField(354); }

    public void set(QuickFix.EncodedText value)
    { setField(value); }
    public QuickFix.EncodedText get(QuickFix.EncodedText  value)
    { getField(value); return value; }
    public QuickFix.EncodedText getEncodedText()
    { QuickFix.EncodedText value = new QuickFix.EncodedText();
      getField(value); return value; }
    public bool isSet(QuickFix.EncodedText field)
    { return isSetField(field); }
    public bool isSetEncodedText()
    { return isSetField(355); }

  };

}


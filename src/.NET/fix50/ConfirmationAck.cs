namespace QuickFix50
{

  public class ConfirmationAck : Message
  {
    public ConfirmationAck() : base(MsgType()) {}
    static QuickFix.MsgType MsgType() { return new QuickFix.MsgType("AU"); }

    public ConfirmationAck(
      QuickFix.ConfirmID aConfirmID,
      QuickFix.TradeDate aTradeDate,
      QuickFix.TransactTime aTransactTime,
      QuickFix.AffirmStatus aAffirmStatus )
    : base(MsgType()) {
      set(aConfirmID);
      set(aTradeDate);
      set(aTransactTime);
      set(aAffirmStatus);
    }

    public void set(QuickFix.ConfirmID value)
    { setField(value); }
    public QuickFix.ConfirmID get(QuickFix.ConfirmID  value)
    { getField(value); return value; }
    public QuickFix.ConfirmID getConfirmID()
    { QuickFix.ConfirmID value = new QuickFix.ConfirmID();
      getField(value); return value; }
    public bool isSet(QuickFix.ConfirmID field)
    { return isSetField(field); }
    public bool isSetConfirmID()
    { return isSetField(664); }

    public void set(QuickFix.TradeDate value)
    { setField(value); }
    public QuickFix.TradeDate get(QuickFix.TradeDate  value)
    { getField(value); return value; }
    public QuickFix.TradeDate getTradeDate()
    { QuickFix.TradeDate value = new QuickFix.TradeDate();
      getField(value); return value; }
    public bool isSet(QuickFix.TradeDate field)
    { return isSetField(field); }
    public bool isSetTradeDate()
    { return isSetField(75); }

    public void set(QuickFix.TransactTime value)
    { setField(value); }
    public QuickFix.TransactTime get(QuickFix.TransactTime  value)
    { getField(value); return value; }
    public QuickFix.TransactTime getTransactTime()
    { QuickFix.TransactTime value = new QuickFix.TransactTime();
      getField(value); return value; }
    public bool isSet(QuickFix.TransactTime field)
    { return isSetField(field); }
    public bool isSetTransactTime()
    { return isSetField(60); }

    public void set(QuickFix.AffirmStatus value)
    { setField(value); }
    public QuickFix.AffirmStatus get(QuickFix.AffirmStatus  value)
    { getField(value); return value; }
    public QuickFix.AffirmStatus getAffirmStatus()
    { QuickFix.AffirmStatus value = new QuickFix.AffirmStatus();
      getField(value); return value; }
    public bool isSet(QuickFix.AffirmStatus field)
    { return isSetField(field); }
    public bool isSetAffirmStatus()
    { return isSetField(940); }

    public void set(QuickFix.ConfirmRejReason value)
    { setField(value); }
    public QuickFix.ConfirmRejReason get(QuickFix.ConfirmRejReason  value)
    { getField(value); return value; }
    public QuickFix.ConfirmRejReason getConfirmRejReason()
    { QuickFix.ConfirmRejReason value = new QuickFix.ConfirmRejReason();
      getField(value); return value; }
    public bool isSet(QuickFix.ConfirmRejReason field)
    { return isSetField(field); }
    public bool isSetConfirmRejReason()
    { return isSetField(774); }

    public void set(QuickFix.MatchStatus value)
    { setField(value); }
    public QuickFix.MatchStatus get(QuickFix.MatchStatus  value)
    { getField(value); return value; }
    public QuickFix.MatchStatus getMatchStatus()
    { QuickFix.MatchStatus value = new QuickFix.MatchStatus();
      getField(value); return value; }
    public bool isSet(QuickFix.MatchStatus field)
    { return isSetField(field); }
    public bool isSetMatchStatus()
    { return isSetField(573); }

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


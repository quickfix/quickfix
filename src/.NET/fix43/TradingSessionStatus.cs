namespace QuickFix43
{

  public class TradingSessionStatus : Message
  {
    public TradingSessionStatus() : base(MsgType()) {}
    static QuickFix.MsgType MsgType() { return new QuickFix.MsgType("h"); }

    public TradingSessionStatus(
      QuickFix.TradingSessionID aTradingSessionID,
      QuickFix.TradSesStatus aTradSesStatus )
    : base(MsgType()) {
      set(aTradingSessionID);
      set(aTradSesStatus);
    }

    public void set(QuickFix.TradSesReqID value)
    { setField(value); }
    public QuickFix.TradSesReqID get(QuickFix.TradSesReqID  value)
    { getField(value); return value; }
    public QuickFix.TradSesReqID getTradSesReqID()
    { QuickFix.TradSesReqID value = new QuickFix.TradSesReqID();
      getField(value); return value; }
    public bool isSet(QuickFix.TradSesReqID field)
    { return isSetField(field); }
    public bool isSetTradSesReqID()
    { return isSetField(335); }

    public void set(QuickFix.TradingSessionID value)
    { setField(value); }
    public QuickFix.TradingSessionID get(QuickFix.TradingSessionID  value)
    { getField(value); return value; }
    public QuickFix.TradingSessionID getTradingSessionID()
    { QuickFix.TradingSessionID value = new QuickFix.TradingSessionID();
      getField(value); return value; }
    public bool isSet(QuickFix.TradingSessionID field)
    { return isSetField(field); }
    public bool isSetTradingSessionID()
    { return isSetField(336); }

    public void set(QuickFix.TradingSessionSubID value)
    { setField(value); }
    public QuickFix.TradingSessionSubID get(QuickFix.TradingSessionSubID  value)
    { getField(value); return value; }
    public QuickFix.TradingSessionSubID getTradingSessionSubID()
    { QuickFix.TradingSessionSubID value = new QuickFix.TradingSessionSubID();
      getField(value); return value; }
    public bool isSet(QuickFix.TradingSessionSubID field)
    { return isSetField(field); }
    public bool isSetTradingSessionSubID()
    { return isSetField(625); }

    public void set(QuickFix.TradSesMethod value)
    { setField(value); }
    public QuickFix.TradSesMethod get(QuickFix.TradSesMethod  value)
    { getField(value); return value; }
    public QuickFix.TradSesMethod getTradSesMethod()
    { QuickFix.TradSesMethod value = new QuickFix.TradSesMethod();
      getField(value); return value; }
    public bool isSet(QuickFix.TradSesMethod field)
    { return isSetField(field); }
    public bool isSetTradSesMethod()
    { return isSetField(338); }

    public void set(QuickFix.TradSesMode value)
    { setField(value); }
    public QuickFix.TradSesMode get(QuickFix.TradSesMode  value)
    { getField(value); return value; }
    public QuickFix.TradSesMode getTradSesMode()
    { QuickFix.TradSesMode value = new QuickFix.TradSesMode();
      getField(value); return value; }
    public bool isSet(QuickFix.TradSesMode field)
    { return isSetField(field); }
    public bool isSetTradSesMode()
    { return isSetField(339); }

    public void set(QuickFix.UnsolicitedIndicator value)
    { setField(value); }
    public QuickFix.UnsolicitedIndicator get(QuickFix.UnsolicitedIndicator  value)
    { getField(value); return value; }
    public QuickFix.UnsolicitedIndicator getUnsolicitedIndicator()
    { QuickFix.UnsolicitedIndicator value = new QuickFix.UnsolicitedIndicator();
      getField(value); return value; }
    public bool isSet(QuickFix.UnsolicitedIndicator field)
    { return isSetField(field); }
    public bool isSetUnsolicitedIndicator()
    { return isSetField(325); }

    public void set(QuickFix.TradSesStatus value)
    { setField(value); }
    public QuickFix.TradSesStatus get(QuickFix.TradSesStatus  value)
    { getField(value); return value; }
    public QuickFix.TradSesStatus getTradSesStatus()
    { QuickFix.TradSesStatus value = new QuickFix.TradSesStatus();
      getField(value); return value; }
    public bool isSet(QuickFix.TradSesStatus field)
    { return isSetField(field); }
    public bool isSetTradSesStatus()
    { return isSetField(340); }

    public void set(QuickFix.TradSesStatusRejReason value)
    { setField(value); }
    public QuickFix.TradSesStatusRejReason get(QuickFix.TradSesStatusRejReason  value)
    { getField(value); return value; }
    public QuickFix.TradSesStatusRejReason getTradSesStatusRejReason()
    { QuickFix.TradSesStatusRejReason value = new QuickFix.TradSesStatusRejReason();
      getField(value); return value; }
    public bool isSet(QuickFix.TradSesStatusRejReason field)
    { return isSetField(field); }
    public bool isSetTradSesStatusRejReason()
    { return isSetField(567); }

    public void set(QuickFix.TradSesStartTime value)
    { setField(value); }
    public QuickFix.TradSesStartTime get(QuickFix.TradSesStartTime  value)
    { getField(value); return value; }
    public QuickFix.TradSesStartTime getTradSesStartTime()
    { QuickFix.TradSesStartTime value = new QuickFix.TradSesStartTime();
      getField(value); return value; }
    public bool isSet(QuickFix.TradSesStartTime field)
    { return isSetField(field); }
    public bool isSetTradSesStartTime()
    { return isSetField(341); }

    public void set(QuickFix.TradSesOpenTime value)
    { setField(value); }
    public QuickFix.TradSesOpenTime get(QuickFix.TradSesOpenTime  value)
    { getField(value); return value; }
    public QuickFix.TradSesOpenTime getTradSesOpenTime()
    { QuickFix.TradSesOpenTime value = new QuickFix.TradSesOpenTime();
      getField(value); return value; }
    public bool isSet(QuickFix.TradSesOpenTime field)
    { return isSetField(field); }
    public bool isSetTradSesOpenTime()
    { return isSetField(342); }

    public void set(QuickFix.TradSesPreCloseTime value)
    { setField(value); }
    public QuickFix.TradSesPreCloseTime get(QuickFix.TradSesPreCloseTime  value)
    { getField(value); return value; }
    public QuickFix.TradSesPreCloseTime getTradSesPreCloseTime()
    { QuickFix.TradSesPreCloseTime value = new QuickFix.TradSesPreCloseTime();
      getField(value); return value; }
    public bool isSet(QuickFix.TradSesPreCloseTime field)
    { return isSetField(field); }
    public bool isSetTradSesPreCloseTime()
    { return isSetField(343); }

    public void set(QuickFix.TradSesCloseTime value)
    { setField(value); }
    public QuickFix.TradSesCloseTime get(QuickFix.TradSesCloseTime  value)
    { getField(value); return value; }
    public QuickFix.TradSesCloseTime getTradSesCloseTime()
    { QuickFix.TradSesCloseTime value = new QuickFix.TradSesCloseTime();
      getField(value); return value; }
    public bool isSet(QuickFix.TradSesCloseTime field)
    { return isSetField(field); }
    public bool isSetTradSesCloseTime()
    { return isSetField(344); }

    public void set(QuickFix.TradSesEndTime value)
    { setField(value); }
    public QuickFix.TradSesEndTime get(QuickFix.TradSesEndTime  value)
    { getField(value); return value; }
    public QuickFix.TradSesEndTime getTradSesEndTime()
    { QuickFix.TradSesEndTime value = new QuickFix.TradSesEndTime();
      getField(value); return value; }
    public bool isSet(QuickFix.TradSesEndTime field)
    { return isSetField(field); }
    public bool isSetTradSesEndTime()
    { return isSetField(345); }

    public void set(QuickFix.TotalVolumeTraded value)
    { setField(value); }
    public QuickFix.TotalVolumeTraded get(QuickFix.TotalVolumeTraded  value)
    { getField(value); return value; }
    public QuickFix.TotalVolumeTraded getTotalVolumeTraded()
    { QuickFix.TotalVolumeTraded value = new QuickFix.TotalVolumeTraded();
      getField(value); return value; }
    public bool isSet(QuickFix.TotalVolumeTraded field)
    { return isSetField(field); }
    public bool isSetTotalVolumeTraded()
    { return isSetField(387); }

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


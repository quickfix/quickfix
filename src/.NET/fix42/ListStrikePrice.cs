namespace QuickFix42
{

  public class ListStrikePrice : Message
  {
    public ListStrikePrice() : base(MsgType()) {}
    static QuickFix.MsgType MsgType() { return new QuickFix.MsgType("m"); }

    public ListStrikePrice(
      QuickFix.ListID aListID,
      QuickFix.TotNoStrikes aTotNoStrikes )
    : base(MsgType()) {
      set(aListID);
      set(aTotNoStrikes);
    }

    public void set(QuickFix.ListID value)
    { setField(value); }
    public QuickFix.ListID get(QuickFix.ListID  value)
    { getField(value); return value; }
    public QuickFix.ListID getListID()
    { QuickFix.ListID value = new QuickFix.ListID();
      getField(value); return value; }
    public bool isSet(QuickFix.ListID field)
    { return isSetField(field); }
    public bool isSetListID()
    { return isSetField(66); }

    public void set(QuickFix.TotNoStrikes value)
    { setField(value); }
    public QuickFix.TotNoStrikes get(QuickFix.TotNoStrikes  value)
    { getField(value); return value; }
    public QuickFix.TotNoStrikes getTotNoStrikes()
    { QuickFix.TotNoStrikes value = new QuickFix.TotNoStrikes();
      getField(value); return value; }
    public bool isSet(QuickFix.TotNoStrikes field)
    { return isSetField(field); }
    public bool isSetTotNoStrikes()
    { return isSetField(422); }

    public void set(QuickFix.NoStrikes value)
    { setField(value); }
    public QuickFix.NoStrikes get(QuickFix.NoStrikes  value)
    { getField(value); return value; }
    public QuickFix.NoStrikes getNoStrikes()
    { QuickFix.NoStrikes value = new QuickFix.NoStrikes();
      getField(value); return value; }
    public bool isSet(QuickFix.NoStrikes field)
    { return isSetField(field); }
    public bool isSetNoStrikes()
    { return isSetField(428); }

    public class NoStrikes: QuickFix.Group
    {
    public NoStrikes() : base(428,55,message_order ) {}
    static int[] message_order = new int[] {55,65,48,22,167,200,205,201,202,206,231,223,207,106,348,349,107,350,351,140,11,54,44,15,58,354,355,0};
      public void set(QuickFix.Symbol value)
      { setField(value); }
      public QuickFix.Symbol get(QuickFix.Symbol  value)
      { getField(value); return value; }
      public QuickFix.Symbol getSymbol()
      { QuickFix.Symbol value = new QuickFix.Symbol();
        getField(value); return value; }
      public bool isSet(QuickFix.Symbol field)
      { return isSetField(field); }
      public bool isSetSymbol()
      { return isSetField(55); }

      public void set(QuickFix.SymbolSfx value)
      { setField(value); }
      public QuickFix.SymbolSfx get(QuickFix.SymbolSfx  value)
      { getField(value); return value; }
      public QuickFix.SymbolSfx getSymbolSfx()
      { QuickFix.SymbolSfx value = new QuickFix.SymbolSfx();
        getField(value); return value; }
      public bool isSet(QuickFix.SymbolSfx field)
      { return isSetField(field); }
      public bool isSetSymbolSfx()
      { return isSetField(65); }

      public void set(QuickFix.SecurityID value)
      { setField(value); }
      public QuickFix.SecurityID get(QuickFix.SecurityID  value)
      { getField(value); return value; }
      public QuickFix.SecurityID getSecurityID()
      { QuickFix.SecurityID value = new QuickFix.SecurityID();
        getField(value); return value; }
      public bool isSet(QuickFix.SecurityID field)
      { return isSetField(field); }
      public bool isSetSecurityID()
      { return isSetField(48); }

      public void set(QuickFix.IDSource value)
      { setField(value); }
      public QuickFix.IDSource get(QuickFix.IDSource  value)
      { getField(value); return value; }
      public QuickFix.IDSource getIDSource()
      { QuickFix.IDSource value = new QuickFix.IDSource();
        getField(value); return value; }
      public bool isSet(QuickFix.IDSource field)
      { return isSetField(field); }
      public bool isSetIDSource()
      { return isSetField(22); }

      public void set(QuickFix.SecurityType value)
      { setField(value); }
      public QuickFix.SecurityType get(QuickFix.SecurityType  value)
      { getField(value); return value; }
      public QuickFix.SecurityType getSecurityType()
      { QuickFix.SecurityType value = new QuickFix.SecurityType();
        getField(value); return value; }
      public bool isSet(QuickFix.SecurityType field)
      { return isSetField(field); }
      public bool isSetSecurityType()
      { return isSetField(167); }

      public void set(QuickFix.MaturityMonthYear value)
      { setField(value); }
      public QuickFix.MaturityMonthYear get(QuickFix.MaturityMonthYear  value)
      { getField(value); return value; }
      public QuickFix.MaturityMonthYear getMaturityMonthYear()
      { QuickFix.MaturityMonthYear value = new QuickFix.MaturityMonthYear();
        getField(value); return value; }
      public bool isSet(QuickFix.MaturityMonthYear field)
      { return isSetField(field); }
      public bool isSetMaturityMonthYear()
      { return isSetField(200); }

      public void set(QuickFix.MaturityDay value)
      { setField(value); }
      public QuickFix.MaturityDay get(QuickFix.MaturityDay  value)
      { getField(value); return value; }
      public QuickFix.MaturityDay getMaturityDay()
      { QuickFix.MaturityDay value = new QuickFix.MaturityDay();
        getField(value); return value; }
      public bool isSet(QuickFix.MaturityDay field)
      { return isSetField(field); }
      public bool isSetMaturityDay()
      { return isSetField(205); }

      public void set(QuickFix.PutOrCall value)
      { setField(value); }
      public QuickFix.PutOrCall get(QuickFix.PutOrCall  value)
      { getField(value); return value; }
      public QuickFix.PutOrCall getPutOrCall()
      { QuickFix.PutOrCall value = new QuickFix.PutOrCall();
        getField(value); return value; }
      public bool isSet(QuickFix.PutOrCall field)
      { return isSetField(field); }
      public bool isSetPutOrCall()
      { return isSetField(201); }

      public void set(QuickFix.StrikePrice value)
      { setField(value); }
      public QuickFix.StrikePrice get(QuickFix.StrikePrice  value)
      { getField(value); return value; }
      public QuickFix.StrikePrice getStrikePrice()
      { QuickFix.StrikePrice value = new QuickFix.StrikePrice();
        getField(value); return value; }
      public bool isSet(QuickFix.StrikePrice field)
      { return isSetField(field); }
      public bool isSetStrikePrice()
      { return isSetField(202); }

      public void set(QuickFix.OptAttribute value)
      { setField(value); }
      public QuickFix.OptAttribute get(QuickFix.OptAttribute  value)
      { getField(value); return value; }
      public QuickFix.OptAttribute getOptAttribute()
      { QuickFix.OptAttribute value = new QuickFix.OptAttribute();
        getField(value); return value; }
      public bool isSet(QuickFix.OptAttribute field)
      { return isSetField(field); }
      public bool isSetOptAttribute()
      { return isSetField(206); }

      public void set(QuickFix.ContractMultiplier value)
      { setField(value); }
      public QuickFix.ContractMultiplier get(QuickFix.ContractMultiplier  value)
      { getField(value); return value; }
      public QuickFix.ContractMultiplier getContractMultiplier()
      { QuickFix.ContractMultiplier value = new QuickFix.ContractMultiplier();
        getField(value); return value; }
      public bool isSet(QuickFix.ContractMultiplier field)
      { return isSetField(field); }
      public bool isSetContractMultiplier()
      { return isSetField(231); }

      public void set(QuickFix.CouponRate value)
      { setField(value); }
      public QuickFix.CouponRate get(QuickFix.CouponRate  value)
      { getField(value); return value; }
      public QuickFix.CouponRate getCouponRate()
      { QuickFix.CouponRate value = new QuickFix.CouponRate();
        getField(value); return value; }
      public bool isSet(QuickFix.CouponRate field)
      { return isSetField(field); }
      public bool isSetCouponRate()
      { return isSetField(223); }

      public void set(QuickFix.SecurityExchange value)
      { setField(value); }
      public QuickFix.SecurityExchange get(QuickFix.SecurityExchange  value)
      { getField(value); return value; }
      public QuickFix.SecurityExchange getSecurityExchange()
      { QuickFix.SecurityExchange value = new QuickFix.SecurityExchange();
        getField(value); return value; }
      public bool isSet(QuickFix.SecurityExchange field)
      { return isSetField(field); }
      public bool isSetSecurityExchange()
      { return isSetField(207); }

      public void set(QuickFix.Issuer value)
      { setField(value); }
      public QuickFix.Issuer get(QuickFix.Issuer  value)
      { getField(value); return value; }
      public QuickFix.Issuer getIssuer()
      { QuickFix.Issuer value = new QuickFix.Issuer();
        getField(value); return value; }
      public bool isSet(QuickFix.Issuer field)
      { return isSetField(field); }
      public bool isSetIssuer()
      { return isSetField(106); }

      public void set(QuickFix.EncodedIssuerLen value)
      { setField(value); }
      public QuickFix.EncodedIssuerLen get(QuickFix.EncodedIssuerLen  value)
      { getField(value); return value; }
      public QuickFix.EncodedIssuerLen getEncodedIssuerLen()
      { QuickFix.EncodedIssuerLen value = new QuickFix.EncodedIssuerLen();
        getField(value); return value; }
      public bool isSet(QuickFix.EncodedIssuerLen field)
      { return isSetField(field); }
      public bool isSetEncodedIssuerLen()
      { return isSetField(348); }

      public void set(QuickFix.EncodedIssuer value)
      { setField(value); }
      public QuickFix.EncodedIssuer get(QuickFix.EncodedIssuer  value)
      { getField(value); return value; }
      public QuickFix.EncodedIssuer getEncodedIssuer()
      { QuickFix.EncodedIssuer value = new QuickFix.EncodedIssuer();
        getField(value); return value; }
      public bool isSet(QuickFix.EncodedIssuer field)
      { return isSetField(field); }
      public bool isSetEncodedIssuer()
      { return isSetField(349); }

      public void set(QuickFix.SecurityDesc value)
      { setField(value); }
      public QuickFix.SecurityDesc get(QuickFix.SecurityDesc  value)
      { getField(value); return value; }
      public QuickFix.SecurityDesc getSecurityDesc()
      { QuickFix.SecurityDesc value = new QuickFix.SecurityDesc();
        getField(value); return value; }
      public bool isSet(QuickFix.SecurityDesc field)
      { return isSetField(field); }
      public bool isSetSecurityDesc()
      { return isSetField(107); }

      public void set(QuickFix.EncodedSecurityDescLen value)
      { setField(value); }
      public QuickFix.EncodedSecurityDescLen get(QuickFix.EncodedSecurityDescLen  value)
      { getField(value); return value; }
      public QuickFix.EncodedSecurityDescLen getEncodedSecurityDescLen()
      { QuickFix.EncodedSecurityDescLen value = new QuickFix.EncodedSecurityDescLen();
        getField(value); return value; }
      public bool isSet(QuickFix.EncodedSecurityDescLen field)
      { return isSetField(field); }
      public bool isSetEncodedSecurityDescLen()
      { return isSetField(350); }

      public void set(QuickFix.EncodedSecurityDesc value)
      { setField(value); }
      public QuickFix.EncodedSecurityDesc get(QuickFix.EncodedSecurityDesc  value)
      { getField(value); return value; }
      public QuickFix.EncodedSecurityDesc getEncodedSecurityDesc()
      { QuickFix.EncodedSecurityDesc value = new QuickFix.EncodedSecurityDesc();
        getField(value); return value; }
      public bool isSet(QuickFix.EncodedSecurityDesc field)
      { return isSetField(field); }
      public bool isSetEncodedSecurityDesc()
      { return isSetField(351); }

      public void set(QuickFix.PrevClosePx value)
      { setField(value); }
      public QuickFix.PrevClosePx get(QuickFix.PrevClosePx  value)
      { getField(value); return value; }
      public QuickFix.PrevClosePx getPrevClosePx()
      { QuickFix.PrevClosePx value = new QuickFix.PrevClosePx();
        getField(value); return value; }
      public bool isSet(QuickFix.PrevClosePx field)
      { return isSetField(field); }
      public bool isSetPrevClosePx()
      { return isSetField(140); }

      public void set(QuickFix.ClOrdID value)
      { setField(value); }
      public QuickFix.ClOrdID get(QuickFix.ClOrdID  value)
      { getField(value); return value; }
      public QuickFix.ClOrdID getClOrdID()
      { QuickFix.ClOrdID value = new QuickFix.ClOrdID();
        getField(value); return value; }
      public bool isSet(QuickFix.ClOrdID field)
      { return isSetField(field); }
      public bool isSetClOrdID()
      { return isSetField(11); }

      public void set(QuickFix.Side value)
      { setField(value); }
      public QuickFix.Side get(QuickFix.Side  value)
      { getField(value); return value; }
      public QuickFix.Side getSide()
      { QuickFix.Side value = new QuickFix.Side();
        getField(value); return value; }
      public bool isSet(QuickFix.Side field)
      { return isSetField(field); }
      public bool isSetSide()
      { return isSetField(54); }

      public void set(QuickFix.Price value)
      { setField(value); }
      public QuickFix.Price get(QuickFix.Price  value)
      { getField(value); return value; }
      public QuickFix.Price getPrice()
      { QuickFix.Price value = new QuickFix.Price();
        getField(value); return value; }
      public bool isSet(QuickFix.Price field)
      { return isSetField(field); }
      public bool isSetPrice()
      { return isSetField(44); }

      public void set(QuickFix.Currency value)
      { setField(value); }
      public QuickFix.Currency get(QuickFix.Currency  value)
      { getField(value); return value; }
      public QuickFix.Currency getCurrency()
      { QuickFix.Currency value = new QuickFix.Currency();
        getField(value); return value; }
      public bool isSet(QuickFix.Currency field)
      { return isSetField(field); }
      public bool isSetCurrency()
      { return isSetField(15); }

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
  };

}


namespace QuickFix40
{

  public class Advertisement : Message
  {
    public Advertisement() : base(MsgType()) {}
    static QuickFix.MsgType MsgType() { return new QuickFix.MsgType("7"); }

    public Advertisement(
      QuickFix.AdvId aAdvId,
      QuickFix.AdvTransType aAdvTransType,
      QuickFix.Symbol aSymbol,
      QuickFix.AdvSide aAdvSide,
      QuickFix.Shares aShares )
    : base(MsgType()) {
      set(aAdvId);
      set(aAdvTransType);
      set(aSymbol);
      set(aAdvSide);
      set(aShares);
    }

    public void set(QuickFix.AdvId value)
    { setField(value); }
    public QuickFix.AdvId get(QuickFix.AdvId  value)
    { getField(value); return value; }
    public QuickFix.AdvId getAdvId()
    { QuickFix.AdvId value = new QuickFix.AdvId();
      getField(value); return value; }
    public bool isSet(QuickFix.AdvId field)
    { return isSetField(field); }
    public bool isSetAdvId()
    { return isSetField(2); }

    public void set(QuickFix.AdvTransType value)
    { setField(value); }
    public QuickFix.AdvTransType get(QuickFix.AdvTransType  value)
    { getField(value); return value; }
    public QuickFix.AdvTransType getAdvTransType()
    { QuickFix.AdvTransType value = new QuickFix.AdvTransType();
      getField(value); return value; }
    public bool isSet(QuickFix.AdvTransType field)
    { return isSetField(field); }
    public bool isSetAdvTransType()
    { return isSetField(5); }

    public void set(QuickFix.AdvRefID value)
    { setField(value); }
    public QuickFix.AdvRefID get(QuickFix.AdvRefID  value)
    { getField(value); return value; }
    public QuickFix.AdvRefID getAdvRefID()
    { QuickFix.AdvRefID value = new QuickFix.AdvRefID();
      getField(value); return value; }
    public bool isSet(QuickFix.AdvRefID field)
    { return isSetField(field); }
    public bool isSetAdvRefID()
    { return isSetField(3); }

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

    public void set(QuickFix.AdvSide value)
    { setField(value); }
    public QuickFix.AdvSide get(QuickFix.AdvSide  value)
    { getField(value); return value; }
    public QuickFix.AdvSide getAdvSide()
    { QuickFix.AdvSide value = new QuickFix.AdvSide();
      getField(value); return value; }
    public bool isSet(QuickFix.AdvSide field)
    { return isSetField(field); }
    public bool isSetAdvSide()
    { return isSetField(4); }

    public void set(QuickFix.Shares value)
    { setField(value); }
    public QuickFix.Shares get(QuickFix.Shares  value)
    { getField(value); return value; }
    public QuickFix.Shares getShares()
    { QuickFix.Shares value = new QuickFix.Shares();
      getField(value); return value; }
    public bool isSet(QuickFix.Shares field)
    { return isSetField(field); }
    public bool isSetShares()
    { return isSetField(53); }

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

  };

}


namespace QuickFix40
{

  public class DontKnowTrade : Message
  {
    public DontKnowTrade() : base(MsgType()) {}
    static QuickFix.MsgType MsgType() { return new QuickFix.MsgType("Q"); }

    public DontKnowTrade(
      QuickFix.DKReason aDKReason,
      QuickFix.Symbol aSymbol,
      QuickFix.Side aSide,
      QuickFix.OrderQty aOrderQty,
      QuickFix.LastShares aLastShares,
      QuickFix.LastPx aLastPx )
    : base(MsgType()) {
      set(aDKReason);
      set(aSymbol);
      set(aSide);
      set(aOrderQty);
      set(aLastShares);
      set(aLastPx);
    }

    public void set(QuickFix.OrderID value)
    { setField(value); }
    public QuickFix.OrderID get(QuickFix.OrderID  value)
    { getField(value); return value; }
    public QuickFix.OrderID getOrderID()
    { QuickFix.OrderID value = new QuickFix.OrderID();
      getField(value); return value; }
    public bool isSet(QuickFix.OrderID field)
    { return isSetField(field); }
    public bool isSetOrderID()
    { return isSetField(37); }

    public void set(QuickFix.ExecID value)
    { setField(value); }
    public QuickFix.ExecID get(QuickFix.ExecID  value)
    { getField(value); return value; }
    public QuickFix.ExecID getExecID()
    { QuickFix.ExecID value = new QuickFix.ExecID();
      getField(value); return value; }
    public bool isSet(QuickFix.ExecID field)
    { return isSetField(field); }
    public bool isSetExecID()
    { return isSetField(17); }

    public void set(QuickFix.DKReason value)
    { setField(value); }
    public QuickFix.DKReason get(QuickFix.DKReason  value)
    { getField(value); return value; }
    public QuickFix.DKReason getDKReason()
    { QuickFix.DKReason value = new QuickFix.DKReason();
      getField(value); return value; }
    public bool isSet(QuickFix.DKReason field)
    { return isSetField(field); }
    public bool isSetDKReason()
    { return isSetField(127); }

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

    public void set(QuickFix.OrderQty value)
    { setField(value); }
    public QuickFix.OrderQty get(QuickFix.OrderQty  value)
    { getField(value); return value; }
    public QuickFix.OrderQty getOrderQty()
    { QuickFix.OrderQty value = new QuickFix.OrderQty();
      getField(value); return value; }
    public bool isSet(QuickFix.OrderQty field)
    { return isSetField(field); }
    public bool isSetOrderQty()
    { return isSetField(38); }

    public void set(QuickFix.LastShares value)
    { setField(value); }
    public QuickFix.LastShares get(QuickFix.LastShares  value)
    { getField(value); return value; }
    public QuickFix.LastShares getLastShares()
    { QuickFix.LastShares value = new QuickFix.LastShares();
      getField(value); return value; }
    public bool isSet(QuickFix.LastShares field)
    { return isSetField(field); }
    public bool isSetLastShares()
    { return isSetField(32); }

    public void set(QuickFix.LastPx value)
    { setField(value); }
    public QuickFix.LastPx get(QuickFix.LastPx  value)
    { getField(value); return value; }
    public QuickFix.LastPx getLastPx()
    { QuickFix.LastPx value = new QuickFix.LastPx();
      getField(value); return value; }
    public bool isSet(QuickFix.LastPx field)
    { return isSetField(field); }
    public bool isSetLastPx()
    { return isSetField(31); }

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


namespace QuickFix41
{

  public class ListStatus : Message
  {
    public ListStatus() : base(MsgType()) {}
    static QuickFix.MsgType MsgType() { return new QuickFix.MsgType("N"); }

    public ListStatus(
      QuickFix.ListID aListID,
      QuickFix.NoRpts aNoRpts,
      QuickFix.RptSeq aRptSeq )
    : base(MsgType()) {
      set(aListID);
      set(aNoRpts);
      set(aRptSeq);
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

    public void set(QuickFix.WaveNo value)
    { setField(value); }
    public QuickFix.WaveNo get(QuickFix.WaveNo  value)
    { getField(value); return value; }
    public QuickFix.WaveNo getWaveNo()
    { QuickFix.WaveNo value = new QuickFix.WaveNo();
      getField(value); return value; }
    public bool isSet(QuickFix.WaveNo field)
    { return isSetField(field); }
    public bool isSetWaveNo()
    { return isSetField(105); }

    public void set(QuickFix.NoRpts value)
    { setField(value); }
    public QuickFix.NoRpts get(QuickFix.NoRpts  value)
    { getField(value); return value; }
    public QuickFix.NoRpts getNoRpts()
    { QuickFix.NoRpts value = new QuickFix.NoRpts();
      getField(value); return value; }
    public bool isSet(QuickFix.NoRpts field)
    { return isSetField(field); }
    public bool isSetNoRpts()
    { return isSetField(82); }

    public void set(QuickFix.RptSeq value)
    { setField(value); }
    public QuickFix.RptSeq get(QuickFix.RptSeq  value)
    { getField(value); return value; }
    public QuickFix.RptSeq getRptSeq()
    { QuickFix.RptSeq value = new QuickFix.RptSeq();
      getField(value); return value; }
    public bool isSet(QuickFix.RptSeq field)
    { return isSetField(field); }
    public bool isSetRptSeq()
    { return isSetField(83); }

    public void set(QuickFix.NoOrders value)
    { setField(value); }
    public QuickFix.NoOrders get(QuickFix.NoOrders  value)
    { getField(value); return value; }
    public QuickFix.NoOrders getNoOrders()
    { QuickFix.NoOrders value = new QuickFix.NoOrders();
      getField(value); return value; }
    public bool isSet(QuickFix.NoOrders field)
    { return isSetField(field); }
    public bool isSetNoOrders()
    { return isSetField(73); }

    public class NoOrders: QuickFix.Group
    {
    public NoOrders() : base(73,11,message_order ) {}
    static int[] message_order = new int[] {11,14,151,84,6,0};
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

      public void set(QuickFix.CumQty value)
      { setField(value); }
      public QuickFix.CumQty get(QuickFix.CumQty  value)
      { getField(value); return value; }
      public QuickFix.CumQty getCumQty()
      { QuickFix.CumQty value = new QuickFix.CumQty();
        getField(value); return value; }
      public bool isSet(QuickFix.CumQty field)
      { return isSetField(field); }
      public bool isSetCumQty()
      { return isSetField(14); }

      public void set(QuickFix.LeavesQty value)
      { setField(value); }
      public QuickFix.LeavesQty get(QuickFix.LeavesQty  value)
      { getField(value); return value; }
      public QuickFix.LeavesQty getLeavesQty()
      { QuickFix.LeavesQty value = new QuickFix.LeavesQty();
        getField(value); return value; }
      public bool isSet(QuickFix.LeavesQty field)
      { return isSetField(field); }
      public bool isSetLeavesQty()
      { return isSetField(151); }

      public void set(QuickFix.CxlQty value)
      { setField(value); }
      public QuickFix.CxlQty get(QuickFix.CxlQty  value)
      { getField(value); return value; }
      public QuickFix.CxlQty getCxlQty()
      { QuickFix.CxlQty value = new QuickFix.CxlQty();
        getField(value); return value; }
      public bool isSet(QuickFix.CxlQty field)
      { return isSetField(field); }
      public bool isSetCxlQty()
      { return isSetField(84); }

      public void set(QuickFix.AvgPx value)
      { setField(value); }
      public QuickFix.AvgPx get(QuickFix.AvgPx  value)
      { getField(value); return value; }
      public QuickFix.AvgPx getAvgPx()
      { QuickFix.AvgPx value = new QuickFix.AvgPx();
        getField(value); return value; }
      public bool isSet(QuickFix.AvgPx field)
      { return isSetField(field); }
      public bool isSetAvgPx()
      { return isSetField(6); }

    };
  };

}


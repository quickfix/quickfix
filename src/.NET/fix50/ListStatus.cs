namespace QuickFix50
{

  public class ListStatus : Message
  {
    public ListStatus() : base(MsgType()) {}
    static QuickFix.MsgType MsgType() { return new QuickFix.MsgType("N"); }

    public ListStatus(
      QuickFix.ListID aListID,
      QuickFix.ListStatusType aListStatusType,
      QuickFix.NoRpts aNoRpts,
      QuickFix.ListOrderStatus aListOrderStatus,
      QuickFix.RptSeq aRptSeq,
      QuickFix.TotNoOrders aTotNoOrders )
    : base(MsgType()) {
      set(aListID);
      set(aListStatusType);
      set(aNoRpts);
      set(aListOrderStatus);
      set(aRptSeq);
      set(aTotNoOrders);
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

    public void set(QuickFix.ListStatusType value)
    { setField(value); }
    public QuickFix.ListStatusType get(QuickFix.ListStatusType  value)
    { getField(value); return value; }
    public QuickFix.ListStatusType getListStatusType()
    { QuickFix.ListStatusType value = new QuickFix.ListStatusType();
      getField(value); return value; }
    public bool isSet(QuickFix.ListStatusType field)
    { return isSetField(field); }
    public bool isSetListStatusType()
    { return isSetField(429); }

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

    public void set(QuickFix.ListOrderStatus value)
    { setField(value); }
    public QuickFix.ListOrderStatus get(QuickFix.ListOrderStatus  value)
    { getField(value); return value; }
    public QuickFix.ListOrderStatus getListOrderStatus()
    { QuickFix.ListOrderStatus value = new QuickFix.ListOrderStatus();
      getField(value); return value; }
    public bool isSet(QuickFix.ListOrderStatus field)
    { return isSetField(field); }
    public bool isSetListOrderStatus()
    { return isSetField(431); }

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

    public void set(QuickFix.ListStatusText value)
    { setField(value); }
    public QuickFix.ListStatusText get(QuickFix.ListStatusText  value)
    { getField(value); return value; }
    public QuickFix.ListStatusText getListStatusText()
    { QuickFix.ListStatusText value = new QuickFix.ListStatusText();
      getField(value); return value; }
    public bool isSet(QuickFix.ListStatusText field)
    { return isSetField(field); }
    public bool isSetListStatusText()
    { return isSetField(444); }

    public void set(QuickFix.EncodedListStatusTextLen value)
    { setField(value); }
    public QuickFix.EncodedListStatusTextLen get(QuickFix.EncodedListStatusTextLen  value)
    { getField(value); return value; }
    public QuickFix.EncodedListStatusTextLen getEncodedListStatusTextLen()
    { QuickFix.EncodedListStatusTextLen value = new QuickFix.EncodedListStatusTextLen();
      getField(value); return value; }
    public bool isSet(QuickFix.EncodedListStatusTextLen field)
    { return isSetField(field); }
    public bool isSetEncodedListStatusTextLen()
    { return isSetField(445); }

    public void set(QuickFix.EncodedListStatusText value)
    { setField(value); }
    public QuickFix.EncodedListStatusText get(QuickFix.EncodedListStatusText  value)
    { getField(value); return value; }
    public QuickFix.EncodedListStatusText getEncodedListStatusText()
    { QuickFix.EncodedListStatusText value = new QuickFix.EncodedListStatusText();
      getField(value); return value; }
    public bool isSet(QuickFix.EncodedListStatusText field)
    { return isSetField(field); }
    public bool isSetEncodedListStatusText()
    { return isSetField(446); }

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

    public void set(QuickFix.TotNoOrders value)
    { setField(value); }
    public QuickFix.TotNoOrders get(QuickFix.TotNoOrders  value)
    { getField(value); return value; }
    public QuickFix.TotNoOrders getTotNoOrders()
    { QuickFix.TotNoOrders value = new QuickFix.TotNoOrders();
      getField(value); return value; }
    public bool isSet(QuickFix.TotNoOrders field)
    { return isSetField(field); }
    public bool isSetTotNoOrders()
    { return isSetField(68); }

    public void set(QuickFix.LastFragment value)
    { setField(value); }
    public QuickFix.LastFragment get(QuickFix.LastFragment  value)
    { getField(value); return value; }
    public QuickFix.LastFragment getLastFragment()
    { QuickFix.LastFragment value = new QuickFix.LastFragment();
      getField(value); return value; }
    public bool isSet(QuickFix.LastFragment field)
    { return isSetField(field); }
    public bool isSetLastFragment()
    { return isSetField(893); }

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
    static int[] message_order = new int[] {11,526,14,39,636,151,84,6,103,58,354,355,0};
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

      public void set(QuickFix.SecondaryClOrdID value)
      { setField(value); }
      public QuickFix.SecondaryClOrdID get(QuickFix.SecondaryClOrdID  value)
      { getField(value); return value; }
      public QuickFix.SecondaryClOrdID getSecondaryClOrdID()
      { QuickFix.SecondaryClOrdID value = new QuickFix.SecondaryClOrdID();
        getField(value); return value; }
      public bool isSet(QuickFix.SecondaryClOrdID field)
      { return isSetField(field); }
      public bool isSetSecondaryClOrdID()
      { return isSetField(526); }

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

      public void set(QuickFix.OrdStatus value)
      { setField(value); }
      public QuickFix.OrdStatus get(QuickFix.OrdStatus  value)
      { getField(value); return value; }
      public QuickFix.OrdStatus getOrdStatus()
      { QuickFix.OrdStatus value = new QuickFix.OrdStatus();
        getField(value); return value; }
      public bool isSet(QuickFix.OrdStatus field)
      { return isSetField(field); }
      public bool isSetOrdStatus()
      { return isSetField(39); }

      public void set(QuickFix.WorkingIndicator value)
      { setField(value); }
      public QuickFix.WorkingIndicator get(QuickFix.WorkingIndicator  value)
      { getField(value); return value; }
      public QuickFix.WorkingIndicator getWorkingIndicator()
      { QuickFix.WorkingIndicator value = new QuickFix.WorkingIndicator();
        getField(value); return value; }
      public bool isSet(QuickFix.WorkingIndicator field)
      { return isSetField(field); }
      public bool isSetWorkingIndicator()
      { return isSetField(636); }

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

      public void set(QuickFix.OrdRejReason value)
      { setField(value); }
      public QuickFix.OrdRejReason get(QuickFix.OrdRejReason  value)
      { getField(value); return value; }
      public QuickFix.OrdRejReason getOrdRejReason()
      { QuickFix.OrdRejReason value = new QuickFix.OrdRejReason();
        getField(value); return value; }
      public bool isSet(QuickFix.OrdRejReason field)
      { return isSetField(field); }
      public bool isSetOrdRejReason()
      { return isSetField(103); }

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


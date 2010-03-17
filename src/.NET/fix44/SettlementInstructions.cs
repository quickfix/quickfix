namespace QuickFix44
{

  public class SettlementInstructions : Message
  {
    public SettlementInstructions() : base(MsgType()) {}
    static QuickFix.MsgType MsgType() { return new QuickFix.MsgType("T"); }

    public SettlementInstructions(
      QuickFix.SettlInstMsgID aSettlInstMsgID,
      QuickFix.SettlInstMode aSettlInstMode,
      QuickFix.TransactTime aTransactTime )
    : base(MsgType()) {
      set(aSettlInstMsgID);
      set(aSettlInstMode);
      set(aTransactTime);
    }

    public void set(QuickFix.SettlInstMsgID value)
    { setField(value); }
    public QuickFix.SettlInstMsgID get(QuickFix.SettlInstMsgID  value)
    { getField(value); return value; }
    public QuickFix.SettlInstMsgID getSettlInstMsgID()
    { QuickFix.SettlInstMsgID value = new QuickFix.SettlInstMsgID();
      getField(value); return value; }
    public bool isSet(QuickFix.SettlInstMsgID field)
    { return isSetField(field); }
    public bool isSetSettlInstMsgID()
    { return isSetField(777); }

    public void set(QuickFix.SettlInstReqID value)
    { setField(value); }
    public QuickFix.SettlInstReqID get(QuickFix.SettlInstReqID  value)
    { getField(value); return value; }
    public QuickFix.SettlInstReqID getSettlInstReqID()
    { QuickFix.SettlInstReqID value = new QuickFix.SettlInstReqID();
      getField(value); return value; }
    public bool isSet(QuickFix.SettlInstReqID field)
    { return isSetField(field); }
    public bool isSetSettlInstReqID()
    { return isSetField(791); }

    public void set(QuickFix.SettlInstMode value)
    { setField(value); }
    public QuickFix.SettlInstMode get(QuickFix.SettlInstMode  value)
    { getField(value); return value; }
    public QuickFix.SettlInstMode getSettlInstMode()
    { QuickFix.SettlInstMode value = new QuickFix.SettlInstMode();
      getField(value); return value; }
    public bool isSet(QuickFix.SettlInstMode field)
    { return isSetField(field); }
    public bool isSetSettlInstMode()
    { return isSetField(160); }

    public void set(QuickFix.SettlInstReqRejCode value)
    { setField(value); }
    public QuickFix.SettlInstReqRejCode get(QuickFix.SettlInstReqRejCode  value)
    { getField(value); return value; }
    public QuickFix.SettlInstReqRejCode getSettlInstReqRejCode()
    { QuickFix.SettlInstReqRejCode value = new QuickFix.SettlInstReqRejCode();
      getField(value); return value; }
    public bool isSet(QuickFix.SettlInstReqRejCode field)
    { return isSetField(field); }
    public bool isSetSettlInstReqRejCode()
    { return isSetField(792); }

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

    public void set(QuickFix.NoSettlInst value)
    { setField(value); }
    public QuickFix.NoSettlInst get(QuickFix.NoSettlInst  value)
    { getField(value); return value; }
    public QuickFix.NoSettlInst getNoSettlInst()
    { QuickFix.NoSettlInst value = new QuickFix.NoSettlInst();
      getField(value); return value; }
    public bool isSet(QuickFix.NoSettlInst field)
    { return isSetField(field); }
    public bool isSetNoSettlInst()
    { return isSetField(778); }

    public class NoSettlInst: QuickFix.Group
    {
    public NoSettlInst() : base(778,162,message_order ) {}
    static int[] message_order = new int[] {162,163,214,453,54,460,167,461,168,126,779,172,169,170,171,85,492,476,488,489,503,490,491,504,505,0};
      public void set(QuickFix.SettlInstID value)
      { setField(value); }
      public QuickFix.SettlInstID get(QuickFix.SettlInstID  value)
      { getField(value); return value; }
      public QuickFix.SettlInstID getSettlInstID()
      { QuickFix.SettlInstID value = new QuickFix.SettlInstID();
        getField(value); return value; }
      public bool isSet(QuickFix.SettlInstID field)
      { return isSetField(field); }
      public bool isSetSettlInstID()
      { return isSetField(162); }

      public void set(QuickFix.SettlInstTransType value)
      { setField(value); }
      public QuickFix.SettlInstTransType get(QuickFix.SettlInstTransType  value)
      { getField(value); return value; }
      public QuickFix.SettlInstTransType getSettlInstTransType()
      { QuickFix.SettlInstTransType value = new QuickFix.SettlInstTransType();
        getField(value); return value; }
      public bool isSet(QuickFix.SettlInstTransType field)
      { return isSetField(field); }
      public bool isSetSettlInstTransType()
      { return isSetField(163); }

      public void set(QuickFix.SettlInstRefID value)
      { setField(value); }
      public QuickFix.SettlInstRefID get(QuickFix.SettlInstRefID  value)
      { getField(value); return value; }
      public QuickFix.SettlInstRefID getSettlInstRefID()
      { QuickFix.SettlInstRefID value = new QuickFix.SettlInstRefID();
        getField(value); return value; }
      public bool isSet(QuickFix.SettlInstRefID field)
      { return isSetField(field); }
      public bool isSetSettlInstRefID()
      { return isSetField(214); }

      public void set(QuickFix.NoPartyIDs value)
      { setField(value); }
      public QuickFix.NoPartyIDs get(QuickFix.NoPartyIDs  value)
      { getField(value); return value; }
      public QuickFix.NoPartyIDs getNoPartyIDs()
      { QuickFix.NoPartyIDs value = new QuickFix.NoPartyIDs();
        getField(value); return value; }
      public bool isSet(QuickFix.NoPartyIDs field)
      { return isSetField(field); }
      public bool isSetNoPartyIDs()
      { return isSetField(453); }

      public class NoPartyIDs: QuickFix.Group
      {
      public NoPartyIDs() : base(453,448,message_order ) {}
      static int[] message_order = new int[] {448,447,452,802,0};
        public void set(QuickFix.PartyID value)
        { setField(value); }
        public QuickFix.PartyID get(QuickFix.PartyID  value)
        { getField(value); return value; }
        public QuickFix.PartyID getPartyID()
        { QuickFix.PartyID value = new QuickFix.PartyID();
          getField(value); return value; }
        public bool isSet(QuickFix.PartyID field)
        { return isSetField(field); }
        public bool isSetPartyID()
        { return isSetField(448); }

        public void set(QuickFix.PartyIDSource value)
        { setField(value); }
        public QuickFix.PartyIDSource get(QuickFix.PartyIDSource  value)
        { getField(value); return value; }
        public QuickFix.PartyIDSource getPartyIDSource()
        { QuickFix.PartyIDSource value = new QuickFix.PartyIDSource();
          getField(value); return value; }
        public bool isSet(QuickFix.PartyIDSource field)
        { return isSetField(field); }
        public bool isSetPartyIDSource()
        { return isSetField(447); }

        public void set(QuickFix.PartyRole value)
        { setField(value); }
        public QuickFix.PartyRole get(QuickFix.PartyRole  value)
        { getField(value); return value; }
        public QuickFix.PartyRole getPartyRole()
        { QuickFix.PartyRole value = new QuickFix.PartyRole();
          getField(value); return value; }
        public bool isSet(QuickFix.PartyRole field)
        { return isSetField(field); }
        public bool isSetPartyRole()
        { return isSetField(452); }

        public void set(QuickFix.NoPartySubIDs value)
        { setField(value); }
        public QuickFix.NoPartySubIDs get(QuickFix.NoPartySubIDs  value)
        { getField(value); return value; }
        public QuickFix.NoPartySubIDs getNoPartySubIDs()
        { QuickFix.NoPartySubIDs value = new QuickFix.NoPartySubIDs();
          getField(value); return value; }
        public bool isSet(QuickFix.NoPartySubIDs field)
        { return isSetField(field); }
        public bool isSetNoPartySubIDs()
        { return isSetField(802); }

        public class NoPartySubIDs: QuickFix.Group
        {
        public NoPartySubIDs() : base(802,523,message_order ) {}
        static int[] message_order = new int[] {523,803,0};
          public void set(QuickFix.PartySubID value)
          { setField(value); }
          public QuickFix.PartySubID get(QuickFix.PartySubID  value)
          { getField(value); return value; }
          public QuickFix.PartySubID getPartySubID()
          { QuickFix.PartySubID value = new QuickFix.PartySubID();
            getField(value); return value; }
          public bool isSet(QuickFix.PartySubID field)
          { return isSetField(field); }
          public bool isSetPartySubID()
          { return isSetField(523); }

          public void set(QuickFix.PartySubIDType value)
          { setField(value); }
          public QuickFix.PartySubIDType get(QuickFix.PartySubIDType  value)
          { getField(value); return value; }
          public QuickFix.PartySubIDType getPartySubIDType()
          { QuickFix.PartySubIDType value = new QuickFix.PartySubIDType();
            getField(value); return value; }
          public bool isSet(QuickFix.PartySubIDType field)
          { return isSetField(field); }
          public bool isSetPartySubIDType()
          { return isSetField(803); }

        };
      };
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

      public void set(QuickFix.Product value)
      { setField(value); }
      public QuickFix.Product get(QuickFix.Product  value)
      { getField(value); return value; }
      public QuickFix.Product getProduct()
      { QuickFix.Product value = new QuickFix.Product();
        getField(value); return value; }
      public bool isSet(QuickFix.Product field)
      { return isSetField(field); }
      public bool isSetProduct()
      { return isSetField(460); }

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

      public void set(QuickFix.CFICode value)
      { setField(value); }
      public QuickFix.CFICode get(QuickFix.CFICode  value)
      { getField(value); return value; }
      public QuickFix.CFICode getCFICode()
      { QuickFix.CFICode value = new QuickFix.CFICode();
        getField(value); return value; }
      public bool isSet(QuickFix.CFICode field)
      { return isSetField(field); }
      public bool isSetCFICode()
      { return isSetField(461); }

      public void set(QuickFix.EffectiveTime value)
      { setField(value); }
      public QuickFix.EffectiveTime get(QuickFix.EffectiveTime  value)
      { getField(value); return value; }
      public QuickFix.EffectiveTime getEffectiveTime()
      { QuickFix.EffectiveTime value = new QuickFix.EffectiveTime();
        getField(value); return value; }
      public bool isSet(QuickFix.EffectiveTime field)
      { return isSetField(field); }
      public bool isSetEffectiveTime()
      { return isSetField(168); }

      public void set(QuickFix.ExpireTime value)
      { setField(value); }
      public QuickFix.ExpireTime get(QuickFix.ExpireTime  value)
      { getField(value); return value; }
      public QuickFix.ExpireTime getExpireTime()
      { QuickFix.ExpireTime value = new QuickFix.ExpireTime();
        getField(value); return value; }
      public bool isSet(QuickFix.ExpireTime field)
      { return isSetField(field); }
      public bool isSetExpireTime()
      { return isSetField(126); }

      public void set(QuickFix.LastUpdateTime value)
      { setField(value); }
      public QuickFix.LastUpdateTime get(QuickFix.LastUpdateTime  value)
      { getField(value); return value; }
      public QuickFix.LastUpdateTime getLastUpdateTime()
      { QuickFix.LastUpdateTime value = new QuickFix.LastUpdateTime();
        getField(value); return value; }
      public bool isSet(QuickFix.LastUpdateTime field)
      { return isSetField(field); }
      public bool isSetLastUpdateTime()
      { return isSetField(779); }

      public void set(QuickFix.SettlDeliveryType value)
      { setField(value); }
      public QuickFix.SettlDeliveryType get(QuickFix.SettlDeliveryType  value)
      { getField(value); return value; }
      public QuickFix.SettlDeliveryType getSettlDeliveryType()
      { QuickFix.SettlDeliveryType value = new QuickFix.SettlDeliveryType();
        getField(value); return value; }
      public bool isSet(QuickFix.SettlDeliveryType field)
      { return isSetField(field); }
      public bool isSetSettlDeliveryType()
      { return isSetField(172); }

      public void set(QuickFix.StandInstDbType value)
      { setField(value); }
      public QuickFix.StandInstDbType get(QuickFix.StandInstDbType  value)
      { getField(value); return value; }
      public QuickFix.StandInstDbType getStandInstDbType()
      { QuickFix.StandInstDbType value = new QuickFix.StandInstDbType();
        getField(value); return value; }
      public bool isSet(QuickFix.StandInstDbType field)
      { return isSetField(field); }
      public bool isSetStandInstDbType()
      { return isSetField(169); }

      public void set(QuickFix.StandInstDbName value)
      { setField(value); }
      public QuickFix.StandInstDbName get(QuickFix.StandInstDbName  value)
      { getField(value); return value; }
      public QuickFix.StandInstDbName getStandInstDbName()
      { QuickFix.StandInstDbName value = new QuickFix.StandInstDbName();
        getField(value); return value; }
      public bool isSet(QuickFix.StandInstDbName field)
      { return isSetField(field); }
      public bool isSetStandInstDbName()
      { return isSetField(170); }

      public void set(QuickFix.StandInstDbID value)
      { setField(value); }
      public QuickFix.StandInstDbID get(QuickFix.StandInstDbID  value)
      { getField(value); return value; }
      public QuickFix.StandInstDbID getStandInstDbID()
      { QuickFix.StandInstDbID value = new QuickFix.StandInstDbID();
        getField(value); return value; }
      public bool isSet(QuickFix.StandInstDbID field)
      { return isSetField(field); }
      public bool isSetStandInstDbID()
      { return isSetField(171); }

      public void set(QuickFix.NoDlvyInst value)
      { setField(value); }
      public QuickFix.NoDlvyInst get(QuickFix.NoDlvyInst  value)
      { getField(value); return value; }
      public QuickFix.NoDlvyInst getNoDlvyInst()
      { QuickFix.NoDlvyInst value = new QuickFix.NoDlvyInst();
        getField(value); return value; }
      public bool isSet(QuickFix.NoDlvyInst field)
      { return isSetField(field); }
      public bool isSetNoDlvyInst()
      { return isSetField(85); }

      public class NoDlvyInst: QuickFix.Group
      {
      public NoDlvyInst() : base(85,165,message_order ) {}
      static int[] message_order = new int[] {165,787,781,0};
        public void set(QuickFix.SettlInstSource value)
        { setField(value); }
        public QuickFix.SettlInstSource get(QuickFix.SettlInstSource  value)
        { getField(value); return value; }
        public QuickFix.SettlInstSource getSettlInstSource()
        { QuickFix.SettlInstSource value = new QuickFix.SettlInstSource();
          getField(value); return value; }
        public bool isSet(QuickFix.SettlInstSource field)
        { return isSetField(field); }
        public bool isSetSettlInstSource()
        { return isSetField(165); }

        public void set(QuickFix.DlvyInstType value)
        { setField(value); }
        public QuickFix.DlvyInstType get(QuickFix.DlvyInstType  value)
        { getField(value); return value; }
        public QuickFix.DlvyInstType getDlvyInstType()
        { QuickFix.DlvyInstType value = new QuickFix.DlvyInstType();
          getField(value); return value; }
        public bool isSet(QuickFix.DlvyInstType field)
        { return isSetField(field); }
        public bool isSetDlvyInstType()
        { return isSetField(787); }

        public void set(QuickFix.NoSettlPartyIDs value)
        { setField(value); }
        public QuickFix.NoSettlPartyIDs get(QuickFix.NoSettlPartyIDs  value)
        { getField(value); return value; }
        public QuickFix.NoSettlPartyIDs getNoSettlPartyIDs()
        { QuickFix.NoSettlPartyIDs value = new QuickFix.NoSettlPartyIDs();
          getField(value); return value; }
        public bool isSet(QuickFix.NoSettlPartyIDs field)
        { return isSetField(field); }
        public bool isSetNoSettlPartyIDs()
        { return isSetField(781); }

        public class NoSettlPartyIDs: QuickFix.Group
        {
        public NoSettlPartyIDs() : base(781,782,message_order ) {}
        static int[] message_order = new int[] {782,783,784,801,0};
          public void set(QuickFix.SettlPartyID value)
          { setField(value); }
          public QuickFix.SettlPartyID get(QuickFix.SettlPartyID  value)
          { getField(value); return value; }
          public QuickFix.SettlPartyID getSettlPartyID()
          { QuickFix.SettlPartyID value = new QuickFix.SettlPartyID();
            getField(value); return value; }
          public bool isSet(QuickFix.SettlPartyID field)
          { return isSetField(field); }
          public bool isSetSettlPartyID()
          { return isSetField(782); }

          public void set(QuickFix.SettlPartyIDSource value)
          { setField(value); }
          public QuickFix.SettlPartyIDSource get(QuickFix.SettlPartyIDSource  value)
          { getField(value); return value; }
          public QuickFix.SettlPartyIDSource getSettlPartyIDSource()
          { QuickFix.SettlPartyIDSource value = new QuickFix.SettlPartyIDSource();
            getField(value); return value; }
          public bool isSet(QuickFix.SettlPartyIDSource field)
          { return isSetField(field); }
          public bool isSetSettlPartyIDSource()
          { return isSetField(783); }

          public void set(QuickFix.SettlPartyRole value)
          { setField(value); }
          public QuickFix.SettlPartyRole get(QuickFix.SettlPartyRole  value)
          { getField(value); return value; }
          public QuickFix.SettlPartyRole getSettlPartyRole()
          { QuickFix.SettlPartyRole value = new QuickFix.SettlPartyRole();
            getField(value); return value; }
          public bool isSet(QuickFix.SettlPartyRole field)
          { return isSetField(field); }
          public bool isSetSettlPartyRole()
          { return isSetField(784); }

          public void set(QuickFix.NoSettlPartySubIDs value)
          { setField(value); }
          public QuickFix.NoSettlPartySubIDs get(QuickFix.NoSettlPartySubIDs  value)
          { getField(value); return value; }
          public QuickFix.NoSettlPartySubIDs getNoSettlPartySubIDs()
          { QuickFix.NoSettlPartySubIDs value = new QuickFix.NoSettlPartySubIDs();
            getField(value); return value; }
          public bool isSet(QuickFix.NoSettlPartySubIDs field)
          { return isSetField(field); }
          public bool isSetNoSettlPartySubIDs()
          { return isSetField(801); }

          public class NoSettlPartySubIDs: QuickFix.Group
          {
          public NoSettlPartySubIDs() : base(801,785,message_order ) {}
          static int[] message_order = new int[] {785,786,0};
            public void set(QuickFix.SettlPartySubID value)
            { setField(value); }
            public QuickFix.SettlPartySubID get(QuickFix.SettlPartySubID  value)
            { getField(value); return value; }
            public QuickFix.SettlPartySubID getSettlPartySubID()
            { QuickFix.SettlPartySubID value = new QuickFix.SettlPartySubID();
              getField(value); return value; }
            public bool isSet(QuickFix.SettlPartySubID field)
            { return isSetField(field); }
            public bool isSetSettlPartySubID()
            { return isSetField(785); }

            public void set(QuickFix.SettlPartySubIDType value)
            { setField(value); }
            public QuickFix.SettlPartySubIDType get(QuickFix.SettlPartySubIDType  value)
            { getField(value); return value; }
            public QuickFix.SettlPartySubIDType getSettlPartySubIDType()
            { QuickFix.SettlPartySubIDType value = new QuickFix.SettlPartySubIDType();
              getField(value); return value; }
            public bool isSet(QuickFix.SettlPartySubIDType field)
            { return isSetField(field); }
            public bool isSetSettlPartySubIDType()
            { return isSetField(786); }

          };
        };
      };
      public void set(QuickFix.PaymentMethod value)
      { setField(value); }
      public QuickFix.PaymentMethod get(QuickFix.PaymentMethod  value)
      { getField(value); return value; }
      public QuickFix.PaymentMethod getPaymentMethod()
      { QuickFix.PaymentMethod value = new QuickFix.PaymentMethod();
        getField(value); return value; }
      public bool isSet(QuickFix.PaymentMethod field)
      { return isSetField(field); }
      public bool isSetPaymentMethod()
      { return isSetField(492); }

      public void set(QuickFix.PaymentRef value)
      { setField(value); }
      public QuickFix.PaymentRef get(QuickFix.PaymentRef  value)
      { getField(value); return value; }
      public QuickFix.PaymentRef getPaymentRef()
      { QuickFix.PaymentRef value = new QuickFix.PaymentRef();
        getField(value); return value; }
      public bool isSet(QuickFix.PaymentRef field)
      { return isSetField(field); }
      public bool isSetPaymentRef()
      { return isSetField(476); }

      public void set(QuickFix.CardHolderName value)
      { setField(value); }
      public QuickFix.CardHolderName get(QuickFix.CardHolderName  value)
      { getField(value); return value; }
      public QuickFix.CardHolderName getCardHolderName()
      { QuickFix.CardHolderName value = new QuickFix.CardHolderName();
        getField(value); return value; }
      public bool isSet(QuickFix.CardHolderName field)
      { return isSetField(field); }
      public bool isSetCardHolderName()
      { return isSetField(488); }

      public void set(QuickFix.CardNumber value)
      { setField(value); }
      public QuickFix.CardNumber get(QuickFix.CardNumber  value)
      { getField(value); return value; }
      public QuickFix.CardNumber getCardNumber()
      { QuickFix.CardNumber value = new QuickFix.CardNumber();
        getField(value); return value; }
      public bool isSet(QuickFix.CardNumber field)
      { return isSetField(field); }
      public bool isSetCardNumber()
      { return isSetField(489); }

      public void set(QuickFix.CardStartDate value)
      { setField(value); }
      public QuickFix.CardStartDate get(QuickFix.CardStartDate  value)
      { getField(value); return value; }
      public QuickFix.CardStartDate getCardStartDate()
      { QuickFix.CardStartDate value = new QuickFix.CardStartDate();
        getField(value); return value; }
      public bool isSet(QuickFix.CardStartDate field)
      { return isSetField(field); }
      public bool isSetCardStartDate()
      { return isSetField(503); }

      public void set(QuickFix.CardExpDate value)
      { setField(value); }
      public QuickFix.CardExpDate get(QuickFix.CardExpDate  value)
      { getField(value); return value; }
      public QuickFix.CardExpDate getCardExpDate()
      { QuickFix.CardExpDate value = new QuickFix.CardExpDate();
        getField(value); return value; }
      public bool isSet(QuickFix.CardExpDate field)
      { return isSetField(field); }
      public bool isSetCardExpDate()
      { return isSetField(490); }

      public void set(QuickFix.CardIssNum value)
      { setField(value); }
      public QuickFix.CardIssNum get(QuickFix.CardIssNum  value)
      { getField(value); return value; }
      public QuickFix.CardIssNum getCardIssNum()
      { QuickFix.CardIssNum value = new QuickFix.CardIssNum();
        getField(value); return value; }
      public bool isSet(QuickFix.CardIssNum field)
      { return isSetField(field); }
      public bool isSetCardIssNum()
      { return isSetField(491); }

      public void set(QuickFix.PaymentDate value)
      { setField(value); }
      public QuickFix.PaymentDate get(QuickFix.PaymentDate  value)
      { getField(value); return value; }
      public QuickFix.PaymentDate getPaymentDate()
      { QuickFix.PaymentDate value = new QuickFix.PaymentDate();
        getField(value); return value; }
      public bool isSet(QuickFix.PaymentDate field)
      { return isSetField(field); }
      public bool isSetPaymentDate()
      { return isSetField(504); }

      public void set(QuickFix.PaymentRemitterID value)
      { setField(value); }
      public QuickFix.PaymentRemitterID get(QuickFix.PaymentRemitterID  value)
      { getField(value); return value; }
      public QuickFix.PaymentRemitterID getPaymentRemitterID()
      { QuickFix.PaymentRemitterID value = new QuickFix.PaymentRemitterID();
        getField(value); return value; }
      public bool isSet(QuickFix.PaymentRemitterID field)
      { return isSetField(field); }
      public bool isSetPaymentRemitterID()
      { return isSetField(505); }

    };
  };

}


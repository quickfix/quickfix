namespace QuickFix50Sp1
{

  public class RegistrationInstructions : Message
  {
    public RegistrationInstructions() : base(MsgType()) {}
    static QuickFix.MsgType MsgType() { return new QuickFix.MsgType("o"); }

    public RegistrationInstructions(
      QuickFix.RegistID aRegistID,
      QuickFix.RegistTransType aRegistTransType,
      QuickFix.RegistRefID aRegistRefID )
    : base(MsgType()) {
      set(aRegistID);
      set(aRegistTransType);
      set(aRegistRefID);
    }

    public void set(QuickFix.RegistID value)
    { setField(value); }
    public QuickFix.RegistID get(QuickFix.RegistID  value)
    { getField(value); return value; }
    public QuickFix.RegistID getRegistID()
    { QuickFix.RegistID value = new QuickFix.RegistID();
      getField(value); return value; }
    public bool isSet(QuickFix.RegistID field)
    { return isSetField(field); }
    public bool isSetRegistID()
    { return isSetField(513); }

    public void set(QuickFix.RegistTransType value)
    { setField(value); }
    public QuickFix.RegistTransType get(QuickFix.RegistTransType  value)
    { getField(value); return value; }
    public QuickFix.RegistTransType getRegistTransType()
    { QuickFix.RegistTransType value = new QuickFix.RegistTransType();
      getField(value); return value; }
    public bool isSet(QuickFix.RegistTransType field)
    { return isSetField(field); }
    public bool isSetRegistTransType()
    { return isSetField(514); }

    public void set(QuickFix.RegistRefID value)
    { setField(value); }
    public QuickFix.RegistRefID get(QuickFix.RegistRefID  value)
    { getField(value); return value; }
    public QuickFix.RegistRefID getRegistRefID()
    { QuickFix.RegistRefID value = new QuickFix.RegistRefID();
      getField(value); return value; }
    public bool isSet(QuickFix.RegistRefID field)
    { return isSetField(field); }
    public bool isSetRegistRefID()
    { return isSetField(508); }

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
    public void set(QuickFix.Account value)
    { setField(value); }
    public QuickFix.Account get(QuickFix.Account  value)
    { getField(value); return value; }
    public QuickFix.Account getAccount()
    { QuickFix.Account value = new QuickFix.Account();
      getField(value); return value; }
    public bool isSet(QuickFix.Account field)
    { return isSetField(field); }
    public bool isSetAccount()
    { return isSetField(1); }

    public void set(QuickFix.AcctIDSource value)
    { setField(value); }
    public QuickFix.AcctIDSource get(QuickFix.AcctIDSource  value)
    { getField(value); return value; }
    public QuickFix.AcctIDSource getAcctIDSource()
    { QuickFix.AcctIDSource value = new QuickFix.AcctIDSource();
      getField(value); return value; }
    public bool isSet(QuickFix.AcctIDSource field)
    { return isSetField(field); }
    public bool isSetAcctIDSource()
    { return isSetField(660); }

    public void set(QuickFix.RegistAcctType value)
    { setField(value); }
    public QuickFix.RegistAcctType get(QuickFix.RegistAcctType  value)
    { getField(value); return value; }
    public QuickFix.RegistAcctType getRegistAcctType()
    { QuickFix.RegistAcctType value = new QuickFix.RegistAcctType();
      getField(value); return value; }
    public bool isSet(QuickFix.RegistAcctType field)
    { return isSetField(field); }
    public bool isSetRegistAcctType()
    { return isSetField(493); }

    public void set(QuickFix.TaxAdvantageType value)
    { setField(value); }
    public QuickFix.TaxAdvantageType get(QuickFix.TaxAdvantageType  value)
    { getField(value); return value; }
    public QuickFix.TaxAdvantageType getTaxAdvantageType()
    { QuickFix.TaxAdvantageType value = new QuickFix.TaxAdvantageType();
      getField(value); return value; }
    public bool isSet(QuickFix.TaxAdvantageType field)
    { return isSetField(field); }
    public bool isSetTaxAdvantageType()
    { return isSetField(495); }

    public void set(QuickFix.OwnershipType value)
    { setField(value); }
    public QuickFix.OwnershipType get(QuickFix.OwnershipType  value)
    { getField(value); return value; }
    public QuickFix.OwnershipType getOwnershipType()
    { QuickFix.OwnershipType value = new QuickFix.OwnershipType();
      getField(value); return value; }
    public bool isSet(QuickFix.OwnershipType field)
    { return isSetField(field); }
    public bool isSetOwnershipType()
    { return isSetField(517); }

    public void set(QuickFix.NoRegistDtls value)
    { setField(value); }
    public QuickFix.NoRegistDtls get(QuickFix.NoRegistDtls  value)
    { getField(value); return value; }
    public QuickFix.NoRegistDtls getNoRegistDtls()
    { QuickFix.NoRegistDtls value = new QuickFix.NoRegistDtls();
      getField(value); return value; }
    public bool isSet(QuickFix.NoRegistDtls field)
    { return isSetField(field); }
    public bool isSetNoRegistDtls()
    { return isSetField(473); }

    public class NoRegistDtls: QuickFix.Group
    {
    public NoRegistDtls() : base(473,509,message_order ) {}
    static int[] message_order = new int[] {509,511,474,482,539,522,486,475,0};
      public void set(QuickFix.RegistDtls value)
      { setField(value); }
      public QuickFix.RegistDtls get(QuickFix.RegistDtls  value)
      { getField(value); return value; }
      public QuickFix.RegistDtls getRegistDtls()
      { QuickFix.RegistDtls value = new QuickFix.RegistDtls();
        getField(value); return value; }
      public bool isSet(QuickFix.RegistDtls field)
      { return isSetField(field); }
      public bool isSetRegistDtls()
      { return isSetField(509); }

      public void set(QuickFix.RegistEmail value)
      { setField(value); }
      public QuickFix.RegistEmail get(QuickFix.RegistEmail  value)
      { getField(value); return value; }
      public QuickFix.RegistEmail getRegistEmail()
      { QuickFix.RegistEmail value = new QuickFix.RegistEmail();
        getField(value); return value; }
      public bool isSet(QuickFix.RegistEmail field)
      { return isSetField(field); }
      public bool isSetRegistEmail()
      { return isSetField(511); }

      public void set(QuickFix.MailingDtls value)
      { setField(value); }
      public QuickFix.MailingDtls get(QuickFix.MailingDtls  value)
      { getField(value); return value; }
      public QuickFix.MailingDtls getMailingDtls()
      { QuickFix.MailingDtls value = new QuickFix.MailingDtls();
        getField(value); return value; }
      public bool isSet(QuickFix.MailingDtls field)
      { return isSetField(field); }
      public bool isSetMailingDtls()
      { return isSetField(474); }

      public void set(QuickFix.MailingInst value)
      { setField(value); }
      public QuickFix.MailingInst get(QuickFix.MailingInst  value)
      { getField(value); return value; }
      public QuickFix.MailingInst getMailingInst()
      { QuickFix.MailingInst value = new QuickFix.MailingInst();
        getField(value); return value; }
      public bool isSet(QuickFix.MailingInst field)
      { return isSetField(field); }
      public bool isSetMailingInst()
      { return isSetField(482); }

      public void set(QuickFix.NoNestedPartyIDs value)
      { setField(value); }
      public QuickFix.NoNestedPartyIDs get(QuickFix.NoNestedPartyIDs  value)
      { getField(value); return value; }
      public QuickFix.NoNestedPartyIDs getNoNestedPartyIDs()
      { QuickFix.NoNestedPartyIDs value = new QuickFix.NoNestedPartyIDs();
        getField(value); return value; }
      public bool isSet(QuickFix.NoNestedPartyIDs field)
      { return isSetField(field); }
      public bool isSetNoNestedPartyIDs()
      { return isSetField(539); }

      public class NoNestedPartyIDs: QuickFix.Group
      {
      public NoNestedPartyIDs() : base(539,524,message_order ) {}
      static int[] message_order = new int[] {524,525,538,804,0};
        public void set(QuickFix.NestedPartyID value)
        { setField(value); }
        public QuickFix.NestedPartyID get(QuickFix.NestedPartyID  value)
        { getField(value); return value; }
        public QuickFix.NestedPartyID getNestedPartyID()
        { QuickFix.NestedPartyID value = new QuickFix.NestedPartyID();
          getField(value); return value; }
        public bool isSet(QuickFix.NestedPartyID field)
        { return isSetField(field); }
        public bool isSetNestedPartyID()
        { return isSetField(524); }

        public void set(QuickFix.NestedPartyIDSource value)
        { setField(value); }
        public QuickFix.NestedPartyIDSource get(QuickFix.NestedPartyIDSource  value)
        { getField(value); return value; }
        public QuickFix.NestedPartyIDSource getNestedPartyIDSource()
        { QuickFix.NestedPartyIDSource value = new QuickFix.NestedPartyIDSource();
          getField(value); return value; }
        public bool isSet(QuickFix.NestedPartyIDSource field)
        { return isSetField(field); }
        public bool isSetNestedPartyIDSource()
        { return isSetField(525); }

        public void set(QuickFix.NestedPartyRole value)
        { setField(value); }
        public QuickFix.NestedPartyRole get(QuickFix.NestedPartyRole  value)
        { getField(value); return value; }
        public QuickFix.NestedPartyRole getNestedPartyRole()
        { QuickFix.NestedPartyRole value = new QuickFix.NestedPartyRole();
          getField(value); return value; }
        public bool isSet(QuickFix.NestedPartyRole field)
        { return isSetField(field); }
        public bool isSetNestedPartyRole()
        { return isSetField(538); }

        public void set(QuickFix.NoNestedPartySubIDs value)
        { setField(value); }
        public QuickFix.NoNestedPartySubIDs get(QuickFix.NoNestedPartySubIDs  value)
        { getField(value); return value; }
        public QuickFix.NoNestedPartySubIDs getNoNestedPartySubIDs()
        { QuickFix.NoNestedPartySubIDs value = new QuickFix.NoNestedPartySubIDs();
          getField(value); return value; }
        public bool isSet(QuickFix.NoNestedPartySubIDs field)
        { return isSetField(field); }
        public bool isSetNoNestedPartySubIDs()
        { return isSetField(804); }

        public class NoNestedPartySubIDs: QuickFix.Group
        {
        public NoNestedPartySubIDs() : base(804,545,message_order ) {}
        static int[] message_order = new int[] {545,805,0};
          public void set(QuickFix.NestedPartySubID value)
          { setField(value); }
          public QuickFix.NestedPartySubID get(QuickFix.NestedPartySubID  value)
          { getField(value); return value; }
          public QuickFix.NestedPartySubID getNestedPartySubID()
          { QuickFix.NestedPartySubID value = new QuickFix.NestedPartySubID();
            getField(value); return value; }
          public bool isSet(QuickFix.NestedPartySubID field)
          { return isSetField(field); }
          public bool isSetNestedPartySubID()
          { return isSetField(545); }

          public void set(QuickFix.NestedPartySubIDType value)
          { setField(value); }
          public QuickFix.NestedPartySubIDType get(QuickFix.NestedPartySubIDType  value)
          { getField(value); return value; }
          public QuickFix.NestedPartySubIDType getNestedPartySubIDType()
          { QuickFix.NestedPartySubIDType value = new QuickFix.NestedPartySubIDType();
            getField(value); return value; }
          public bool isSet(QuickFix.NestedPartySubIDType field)
          { return isSetField(field); }
          public bool isSetNestedPartySubIDType()
          { return isSetField(805); }

        };
      };
      public void set(QuickFix.OwnerType value)
      { setField(value); }
      public QuickFix.OwnerType get(QuickFix.OwnerType  value)
      { getField(value); return value; }
      public QuickFix.OwnerType getOwnerType()
      { QuickFix.OwnerType value = new QuickFix.OwnerType();
        getField(value); return value; }
      public bool isSet(QuickFix.OwnerType field)
      { return isSetField(field); }
      public bool isSetOwnerType()
      { return isSetField(522); }

      public void set(QuickFix.DateOfBirth value)
      { setField(value); }
      public QuickFix.DateOfBirth get(QuickFix.DateOfBirth  value)
      { getField(value); return value; }
      public QuickFix.DateOfBirth getDateOfBirth()
      { QuickFix.DateOfBirth value = new QuickFix.DateOfBirth();
        getField(value); return value; }
      public bool isSet(QuickFix.DateOfBirth field)
      { return isSetField(field); }
      public bool isSetDateOfBirth()
      { return isSetField(486); }

      public void set(QuickFix.InvestorCountryOfResidence value)
      { setField(value); }
      public QuickFix.InvestorCountryOfResidence get(QuickFix.InvestorCountryOfResidence  value)
      { getField(value); return value; }
      public QuickFix.InvestorCountryOfResidence getInvestorCountryOfResidence()
      { QuickFix.InvestorCountryOfResidence value = new QuickFix.InvestorCountryOfResidence();
        getField(value); return value; }
      public bool isSet(QuickFix.InvestorCountryOfResidence field)
      { return isSetField(field); }
      public bool isSetInvestorCountryOfResidence()
      { return isSetField(475); }

    };
    public void set(QuickFix.NoDistribInsts value)
    { setField(value); }
    public QuickFix.NoDistribInsts get(QuickFix.NoDistribInsts  value)
    { getField(value); return value; }
    public QuickFix.NoDistribInsts getNoDistribInsts()
    { QuickFix.NoDistribInsts value = new QuickFix.NoDistribInsts();
      getField(value); return value; }
    public bool isSet(QuickFix.NoDistribInsts field)
    { return isSetField(field); }
    public bool isSetNoDistribInsts()
    { return isSetField(510); }

    public class NoDistribInsts: QuickFix.Group
    {
    public NoDistribInsts() : base(510,477,message_order ) {}
    static int[] message_order = new int[] {477,512,478,498,499,500,501,502,0};
      public void set(QuickFix.DistribPaymentMethod value)
      { setField(value); }
      public QuickFix.DistribPaymentMethod get(QuickFix.DistribPaymentMethod  value)
      { getField(value); return value; }
      public QuickFix.DistribPaymentMethod getDistribPaymentMethod()
      { QuickFix.DistribPaymentMethod value = new QuickFix.DistribPaymentMethod();
        getField(value); return value; }
      public bool isSet(QuickFix.DistribPaymentMethod field)
      { return isSetField(field); }
      public bool isSetDistribPaymentMethod()
      { return isSetField(477); }

      public void set(QuickFix.DistribPercentage value)
      { setField(value); }
      public QuickFix.DistribPercentage get(QuickFix.DistribPercentage  value)
      { getField(value); return value; }
      public QuickFix.DistribPercentage getDistribPercentage()
      { QuickFix.DistribPercentage value = new QuickFix.DistribPercentage();
        getField(value); return value; }
      public bool isSet(QuickFix.DistribPercentage field)
      { return isSetField(field); }
      public bool isSetDistribPercentage()
      { return isSetField(512); }

      public void set(QuickFix.CashDistribCurr value)
      { setField(value); }
      public QuickFix.CashDistribCurr get(QuickFix.CashDistribCurr  value)
      { getField(value); return value; }
      public QuickFix.CashDistribCurr getCashDistribCurr()
      { QuickFix.CashDistribCurr value = new QuickFix.CashDistribCurr();
        getField(value); return value; }
      public bool isSet(QuickFix.CashDistribCurr field)
      { return isSetField(field); }
      public bool isSetCashDistribCurr()
      { return isSetField(478); }

      public void set(QuickFix.CashDistribAgentName value)
      { setField(value); }
      public QuickFix.CashDistribAgentName get(QuickFix.CashDistribAgentName  value)
      { getField(value); return value; }
      public QuickFix.CashDistribAgentName getCashDistribAgentName()
      { QuickFix.CashDistribAgentName value = new QuickFix.CashDistribAgentName();
        getField(value); return value; }
      public bool isSet(QuickFix.CashDistribAgentName field)
      { return isSetField(field); }
      public bool isSetCashDistribAgentName()
      { return isSetField(498); }

      public void set(QuickFix.CashDistribAgentCode value)
      { setField(value); }
      public QuickFix.CashDistribAgentCode get(QuickFix.CashDistribAgentCode  value)
      { getField(value); return value; }
      public QuickFix.CashDistribAgentCode getCashDistribAgentCode()
      { QuickFix.CashDistribAgentCode value = new QuickFix.CashDistribAgentCode();
        getField(value); return value; }
      public bool isSet(QuickFix.CashDistribAgentCode field)
      { return isSetField(field); }
      public bool isSetCashDistribAgentCode()
      { return isSetField(499); }

      public void set(QuickFix.CashDistribAgentAcctNumber value)
      { setField(value); }
      public QuickFix.CashDistribAgentAcctNumber get(QuickFix.CashDistribAgentAcctNumber  value)
      { getField(value); return value; }
      public QuickFix.CashDistribAgentAcctNumber getCashDistribAgentAcctNumber()
      { QuickFix.CashDistribAgentAcctNumber value = new QuickFix.CashDistribAgentAcctNumber();
        getField(value); return value; }
      public bool isSet(QuickFix.CashDistribAgentAcctNumber field)
      { return isSetField(field); }
      public bool isSetCashDistribAgentAcctNumber()
      { return isSetField(500); }

      public void set(QuickFix.CashDistribPayRef value)
      { setField(value); }
      public QuickFix.CashDistribPayRef get(QuickFix.CashDistribPayRef  value)
      { getField(value); return value; }
      public QuickFix.CashDistribPayRef getCashDistribPayRef()
      { QuickFix.CashDistribPayRef value = new QuickFix.CashDistribPayRef();
        getField(value); return value; }
      public bool isSet(QuickFix.CashDistribPayRef field)
      { return isSetField(field); }
      public bool isSetCashDistribPayRef()
      { return isSetField(501); }

      public void set(QuickFix.CashDistribAgentAcctName value)
      { setField(value); }
      public QuickFix.CashDistribAgentAcctName get(QuickFix.CashDistribAgentAcctName  value)
      { getField(value); return value; }
      public QuickFix.CashDistribAgentAcctName getCashDistribAgentAcctName()
      { QuickFix.CashDistribAgentAcctName value = new QuickFix.CashDistribAgentAcctName();
        getField(value); return value; }
      public bool isSet(QuickFix.CashDistribAgentAcctName field)
      { return isSetField(field); }
      public bool isSetCashDistribAgentAcctName()
      { return isSetField(502); }

    };
  };

}


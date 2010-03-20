namespace QuickFix50
{

  public class BidRequest : Message
  {
    public BidRequest() : base(MsgType()) {}
    static QuickFix.MsgType MsgType() { return new QuickFix.MsgType("k"); }

    public BidRequest(
      QuickFix.ClientBidID aClientBidID,
      QuickFix.BidRequestTransType aBidRequestTransType,
      QuickFix.TotNoRelatedSym aTotNoRelatedSym,
      QuickFix.BidType aBidType,
      QuickFix.BidTradeType aBidTradeType,
      QuickFix.BasisPxType aBasisPxType )
    : base(MsgType()) {
      set(aClientBidID);
      set(aBidRequestTransType);
      set(aTotNoRelatedSym);
      set(aBidType);
      set(aBidTradeType);
      set(aBasisPxType);
    }

    public void set(QuickFix.BidID value)
    { setField(value); }
    public QuickFix.BidID get(QuickFix.BidID  value)
    { getField(value); return value; }
    public QuickFix.BidID getBidID()
    { QuickFix.BidID value = new QuickFix.BidID();
      getField(value); return value; }
    public bool isSet(QuickFix.BidID field)
    { return isSetField(field); }
    public bool isSetBidID()
    { return isSetField(390); }

    public void set(QuickFix.ClientBidID value)
    { setField(value); }
    public QuickFix.ClientBidID get(QuickFix.ClientBidID  value)
    { getField(value); return value; }
    public QuickFix.ClientBidID getClientBidID()
    { QuickFix.ClientBidID value = new QuickFix.ClientBidID();
      getField(value); return value; }
    public bool isSet(QuickFix.ClientBidID field)
    { return isSetField(field); }
    public bool isSetClientBidID()
    { return isSetField(391); }

    public void set(QuickFix.BidRequestTransType value)
    { setField(value); }
    public QuickFix.BidRequestTransType get(QuickFix.BidRequestTransType  value)
    { getField(value); return value; }
    public QuickFix.BidRequestTransType getBidRequestTransType()
    { QuickFix.BidRequestTransType value = new QuickFix.BidRequestTransType();
      getField(value); return value; }
    public bool isSet(QuickFix.BidRequestTransType field)
    { return isSetField(field); }
    public bool isSetBidRequestTransType()
    { return isSetField(374); }

    public void set(QuickFix.ListName value)
    { setField(value); }
    public QuickFix.ListName get(QuickFix.ListName  value)
    { getField(value); return value; }
    public QuickFix.ListName getListName()
    { QuickFix.ListName value = new QuickFix.ListName();
      getField(value); return value; }
    public bool isSet(QuickFix.ListName field)
    { return isSetField(field); }
    public bool isSetListName()
    { return isSetField(392); }

    public void set(QuickFix.TotNoRelatedSym value)
    { setField(value); }
    public QuickFix.TotNoRelatedSym get(QuickFix.TotNoRelatedSym  value)
    { getField(value); return value; }
    public QuickFix.TotNoRelatedSym getTotNoRelatedSym()
    { QuickFix.TotNoRelatedSym value = new QuickFix.TotNoRelatedSym();
      getField(value); return value; }
    public bool isSet(QuickFix.TotNoRelatedSym field)
    { return isSetField(field); }
    public bool isSetTotNoRelatedSym()
    { return isSetField(393); }

    public void set(QuickFix.BidType value)
    { setField(value); }
    public QuickFix.BidType get(QuickFix.BidType  value)
    { getField(value); return value; }
    public QuickFix.BidType getBidType()
    { QuickFix.BidType value = new QuickFix.BidType();
      getField(value); return value; }
    public bool isSet(QuickFix.BidType field)
    { return isSetField(field); }
    public bool isSetBidType()
    { return isSetField(394); }

    public void set(QuickFix.NumTickets value)
    { setField(value); }
    public QuickFix.NumTickets get(QuickFix.NumTickets  value)
    { getField(value); return value; }
    public QuickFix.NumTickets getNumTickets()
    { QuickFix.NumTickets value = new QuickFix.NumTickets();
      getField(value); return value; }
    public bool isSet(QuickFix.NumTickets field)
    { return isSetField(field); }
    public bool isSetNumTickets()
    { return isSetField(395); }

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

    public void set(QuickFix.SideValue1 value)
    { setField(value); }
    public QuickFix.SideValue1 get(QuickFix.SideValue1  value)
    { getField(value); return value; }
    public QuickFix.SideValue1 getSideValue1()
    { QuickFix.SideValue1 value = new QuickFix.SideValue1();
      getField(value); return value; }
    public bool isSet(QuickFix.SideValue1 field)
    { return isSetField(field); }
    public bool isSetSideValue1()
    { return isSetField(396); }

    public void set(QuickFix.SideValue2 value)
    { setField(value); }
    public QuickFix.SideValue2 get(QuickFix.SideValue2  value)
    { getField(value); return value; }
    public QuickFix.SideValue2 getSideValue2()
    { QuickFix.SideValue2 value = new QuickFix.SideValue2();
      getField(value); return value; }
    public bool isSet(QuickFix.SideValue2 field)
    { return isSetField(field); }
    public bool isSetSideValue2()
    { return isSetField(397); }

    public void set(QuickFix.NoBidDescriptors value)
    { setField(value); }
    public QuickFix.NoBidDescriptors get(QuickFix.NoBidDescriptors  value)
    { getField(value); return value; }
    public QuickFix.NoBidDescriptors getNoBidDescriptors()
    { QuickFix.NoBidDescriptors value = new QuickFix.NoBidDescriptors();
      getField(value); return value; }
    public bool isSet(QuickFix.NoBidDescriptors field)
    { return isSetField(field); }
    public bool isSetNoBidDescriptors()
    { return isSetField(398); }

    public class NoBidDescriptors: QuickFix.Group
    {
    public NoBidDescriptors() : base(398,399,message_order ) {}
    static int[] message_order = new int[] {399,400,401,404,441,402,403,405,406,407,408,0};
      public void set(QuickFix.BidDescriptorType value)
      { setField(value); }
      public QuickFix.BidDescriptorType get(QuickFix.BidDescriptorType  value)
      { getField(value); return value; }
      public QuickFix.BidDescriptorType getBidDescriptorType()
      { QuickFix.BidDescriptorType value = new QuickFix.BidDescriptorType();
        getField(value); return value; }
      public bool isSet(QuickFix.BidDescriptorType field)
      { return isSetField(field); }
      public bool isSetBidDescriptorType()
      { return isSetField(399); }

      public void set(QuickFix.BidDescriptor value)
      { setField(value); }
      public QuickFix.BidDescriptor get(QuickFix.BidDescriptor  value)
      { getField(value); return value; }
      public QuickFix.BidDescriptor getBidDescriptor()
      { QuickFix.BidDescriptor value = new QuickFix.BidDescriptor();
        getField(value); return value; }
      public bool isSet(QuickFix.BidDescriptor field)
      { return isSetField(field); }
      public bool isSetBidDescriptor()
      { return isSetField(400); }

      public void set(QuickFix.SideValueInd value)
      { setField(value); }
      public QuickFix.SideValueInd get(QuickFix.SideValueInd  value)
      { getField(value); return value; }
      public QuickFix.SideValueInd getSideValueInd()
      { QuickFix.SideValueInd value = new QuickFix.SideValueInd();
        getField(value); return value; }
      public bool isSet(QuickFix.SideValueInd field)
      { return isSetField(field); }
      public bool isSetSideValueInd()
      { return isSetField(401); }

      public void set(QuickFix.LiquidityValue value)
      { setField(value); }
      public QuickFix.LiquidityValue get(QuickFix.LiquidityValue  value)
      { getField(value); return value; }
      public QuickFix.LiquidityValue getLiquidityValue()
      { QuickFix.LiquidityValue value = new QuickFix.LiquidityValue();
        getField(value); return value; }
      public bool isSet(QuickFix.LiquidityValue field)
      { return isSetField(field); }
      public bool isSetLiquidityValue()
      { return isSetField(404); }

      public void set(QuickFix.LiquidityNumSecurities value)
      { setField(value); }
      public QuickFix.LiquidityNumSecurities get(QuickFix.LiquidityNumSecurities  value)
      { getField(value); return value; }
      public QuickFix.LiquidityNumSecurities getLiquidityNumSecurities()
      { QuickFix.LiquidityNumSecurities value = new QuickFix.LiquidityNumSecurities();
        getField(value); return value; }
      public bool isSet(QuickFix.LiquidityNumSecurities field)
      { return isSetField(field); }
      public bool isSetLiquidityNumSecurities()
      { return isSetField(441); }

      public void set(QuickFix.LiquidityPctLow value)
      { setField(value); }
      public QuickFix.LiquidityPctLow get(QuickFix.LiquidityPctLow  value)
      { getField(value); return value; }
      public QuickFix.LiquidityPctLow getLiquidityPctLow()
      { QuickFix.LiquidityPctLow value = new QuickFix.LiquidityPctLow();
        getField(value); return value; }
      public bool isSet(QuickFix.LiquidityPctLow field)
      { return isSetField(field); }
      public bool isSetLiquidityPctLow()
      { return isSetField(402); }

      public void set(QuickFix.LiquidityPctHigh value)
      { setField(value); }
      public QuickFix.LiquidityPctHigh get(QuickFix.LiquidityPctHigh  value)
      { getField(value); return value; }
      public QuickFix.LiquidityPctHigh getLiquidityPctHigh()
      { QuickFix.LiquidityPctHigh value = new QuickFix.LiquidityPctHigh();
        getField(value); return value; }
      public bool isSet(QuickFix.LiquidityPctHigh field)
      { return isSetField(field); }
      public bool isSetLiquidityPctHigh()
      { return isSetField(403); }

      public void set(QuickFix.EFPTrackingError value)
      { setField(value); }
      public QuickFix.EFPTrackingError get(QuickFix.EFPTrackingError  value)
      { getField(value); return value; }
      public QuickFix.EFPTrackingError getEFPTrackingError()
      { QuickFix.EFPTrackingError value = new QuickFix.EFPTrackingError();
        getField(value); return value; }
      public bool isSet(QuickFix.EFPTrackingError field)
      { return isSetField(field); }
      public bool isSetEFPTrackingError()
      { return isSetField(405); }

      public void set(QuickFix.FairValue value)
      { setField(value); }
      public QuickFix.FairValue get(QuickFix.FairValue  value)
      { getField(value); return value; }
      public QuickFix.FairValue getFairValue()
      { QuickFix.FairValue value = new QuickFix.FairValue();
        getField(value); return value; }
      public bool isSet(QuickFix.FairValue field)
      { return isSetField(field); }
      public bool isSetFairValue()
      { return isSetField(406); }

      public void set(QuickFix.OutsideIndexPct value)
      { setField(value); }
      public QuickFix.OutsideIndexPct get(QuickFix.OutsideIndexPct  value)
      { getField(value); return value; }
      public QuickFix.OutsideIndexPct getOutsideIndexPct()
      { QuickFix.OutsideIndexPct value = new QuickFix.OutsideIndexPct();
        getField(value); return value; }
      public bool isSet(QuickFix.OutsideIndexPct field)
      { return isSetField(field); }
      public bool isSetOutsideIndexPct()
      { return isSetField(407); }

      public void set(QuickFix.ValueOfFutures value)
      { setField(value); }
      public QuickFix.ValueOfFutures get(QuickFix.ValueOfFutures  value)
      { getField(value); return value; }
      public QuickFix.ValueOfFutures getValueOfFutures()
      { QuickFix.ValueOfFutures value = new QuickFix.ValueOfFutures();
        getField(value); return value; }
      public bool isSet(QuickFix.ValueOfFutures field)
      { return isSetField(field); }
      public bool isSetValueOfFutures()
      { return isSetField(408); }

    };
    public void set(QuickFix.NoBidComponents value)
    { setField(value); }
    public QuickFix.NoBidComponents get(QuickFix.NoBidComponents  value)
    { getField(value); return value; }
    public QuickFix.NoBidComponents getNoBidComponents()
    { QuickFix.NoBidComponents value = new QuickFix.NoBidComponents();
      getField(value); return value; }
    public bool isSet(QuickFix.NoBidComponents field)
    { return isSetField(field); }
    public bool isSetNoBidComponents()
    { return isSetField(420); }

    public class NoBidComponents: QuickFix.Group
    {
    public NoBidComponents() : base(420,66,message_order ) {}
    static int[] message_order = new int[] {66,54,336,625,430,63,64,1,660,0};
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

      public void set(QuickFix.NetGrossInd value)
      { setField(value); }
      public QuickFix.NetGrossInd get(QuickFix.NetGrossInd  value)
      { getField(value); return value; }
      public QuickFix.NetGrossInd getNetGrossInd()
      { QuickFix.NetGrossInd value = new QuickFix.NetGrossInd();
        getField(value); return value; }
      public bool isSet(QuickFix.NetGrossInd field)
      { return isSetField(field); }
      public bool isSetNetGrossInd()
      { return isSetField(430); }

      public void set(QuickFix.SettlType value)
      { setField(value); }
      public QuickFix.SettlType get(QuickFix.SettlType  value)
      { getField(value); return value; }
      public QuickFix.SettlType getSettlType()
      { QuickFix.SettlType value = new QuickFix.SettlType();
        getField(value); return value; }
      public bool isSet(QuickFix.SettlType field)
      { return isSetField(field); }
      public bool isSetSettlType()
      { return isSetField(63); }

      public void set(QuickFix.SettlDate value)
      { setField(value); }
      public QuickFix.SettlDate get(QuickFix.SettlDate  value)
      { getField(value); return value; }
      public QuickFix.SettlDate getSettlDate()
      { QuickFix.SettlDate value = new QuickFix.SettlDate();
        getField(value); return value; }
      public bool isSet(QuickFix.SettlDate field)
      { return isSetField(field); }
      public bool isSetSettlDate()
      { return isSetField(64); }

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

    };
    public void set(QuickFix.LiquidityIndType value)
    { setField(value); }
    public QuickFix.LiquidityIndType get(QuickFix.LiquidityIndType  value)
    { getField(value); return value; }
    public QuickFix.LiquidityIndType getLiquidityIndType()
    { QuickFix.LiquidityIndType value = new QuickFix.LiquidityIndType();
      getField(value); return value; }
    public bool isSet(QuickFix.LiquidityIndType field)
    { return isSetField(field); }
    public bool isSetLiquidityIndType()
    { return isSetField(409); }

    public void set(QuickFix.WtAverageLiquidity value)
    { setField(value); }
    public QuickFix.WtAverageLiquidity get(QuickFix.WtAverageLiquidity  value)
    { getField(value); return value; }
    public QuickFix.WtAverageLiquidity getWtAverageLiquidity()
    { QuickFix.WtAverageLiquidity value = new QuickFix.WtAverageLiquidity();
      getField(value); return value; }
    public bool isSet(QuickFix.WtAverageLiquidity field)
    { return isSetField(field); }
    public bool isSetWtAverageLiquidity()
    { return isSetField(410); }

    public void set(QuickFix.ExchangeForPhysical value)
    { setField(value); }
    public QuickFix.ExchangeForPhysical get(QuickFix.ExchangeForPhysical  value)
    { getField(value); return value; }
    public QuickFix.ExchangeForPhysical getExchangeForPhysical()
    { QuickFix.ExchangeForPhysical value = new QuickFix.ExchangeForPhysical();
      getField(value); return value; }
    public bool isSet(QuickFix.ExchangeForPhysical field)
    { return isSetField(field); }
    public bool isSetExchangeForPhysical()
    { return isSetField(411); }

    public void set(QuickFix.OutMainCntryUIndex value)
    { setField(value); }
    public QuickFix.OutMainCntryUIndex get(QuickFix.OutMainCntryUIndex  value)
    { getField(value); return value; }
    public QuickFix.OutMainCntryUIndex getOutMainCntryUIndex()
    { QuickFix.OutMainCntryUIndex value = new QuickFix.OutMainCntryUIndex();
      getField(value); return value; }
    public bool isSet(QuickFix.OutMainCntryUIndex field)
    { return isSetField(field); }
    public bool isSetOutMainCntryUIndex()
    { return isSetField(412); }

    public void set(QuickFix.CrossPercent value)
    { setField(value); }
    public QuickFix.CrossPercent get(QuickFix.CrossPercent  value)
    { getField(value); return value; }
    public QuickFix.CrossPercent getCrossPercent()
    { QuickFix.CrossPercent value = new QuickFix.CrossPercent();
      getField(value); return value; }
    public bool isSet(QuickFix.CrossPercent field)
    { return isSetField(field); }
    public bool isSetCrossPercent()
    { return isSetField(413); }

    public void set(QuickFix.ProgRptReqs value)
    { setField(value); }
    public QuickFix.ProgRptReqs get(QuickFix.ProgRptReqs  value)
    { getField(value); return value; }
    public QuickFix.ProgRptReqs getProgRptReqs()
    { QuickFix.ProgRptReqs value = new QuickFix.ProgRptReqs();
      getField(value); return value; }
    public bool isSet(QuickFix.ProgRptReqs field)
    { return isSetField(field); }
    public bool isSetProgRptReqs()
    { return isSetField(414); }

    public void set(QuickFix.ProgPeriodInterval value)
    { setField(value); }
    public QuickFix.ProgPeriodInterval get(QuickFix.ProgPeriodInterval  value)
    { getField(value); return value; }
    public QuickFix.ProgPeriodInterval getProgPeriodInterval()
    { QuickFix.ProgPeriodInterval value = new QuickFix.ProgPeriodInterval();
      getField(value); return value; }
    public bool isSet(QuickFix.ProgPeriodInterval field)
    { return isSetField(field); }
    public bool isSetProgPeriodInterval()
    { return isSetField(415); }

    public void set(QuickFix.IncTaxInd value)
    { setField(value); }
    public QuickFix.IncTaxInd get(QuickFix.IncTaxInd  value)
    { getField(value); return value; }
    public QuickFix.IncTaxInd getIncTaxInd()
    { QuickFix.IncTaxInd value = new QuickFix.IncTaxInd();
      getField(value); return value; }
    public bool isSet(QuickFix.IncTaxInd field)
    { return isSetField(field); }
    public bool isSetIncTaxInd()
    { return isSetField(416); }

    public void set(QuickFix.ForexReq value)
    { setField(value); }
    public QuickFix.ForexReq get(QuickFix.ForexReq  value)
    { getField(value); return value; }
    public QuickFix.ForexReq getForexReq()
    { QuickFix.ForexReq value = new QuickFix.ForexReq();
      getField(value); return value; }
    public bool isSet(QuickFix.ForexReq field)
    { return isSetField(field); }
    public bool isSetForexReq()
    { return isSetField(121); }

    public void set(QuickFix.NumBidders value)
    { setField(value); }
    public QuickFix.NumBidders get(QuickFix.NumBidders  value)
    { getField(value); return value; }
    public QuickFix.NumBidders getNumBidders()
    { QuickFix.NumBidders value = new QuickFix.NumBidders();
      getField(value); return value; }
    public bool isSet(QuickFix.NumBidders field)
    { return isSetField(field); }
    public bool isSetNumBidders()
    { return isSetField(417); }

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

    public void set(QuickFix.BidTradeType value)
    { setField(value); }
    public QuickFix.BidTradeType get(QuickFix.BidTradeType  value)
    { getField(value); return value; }
    public QuickFix.BidTradeType getBidTradeType()
    { QuickFix.BidTradeType value = new QuickFix.BidTradeType();
      getField(value); return value; }
    public bool isSet(QuickFix.BidTradeType field)
    { return isSetField(field); }
    public bool isSetBidTradeType()
    { return isSetField(418); }

    public void set(QuickFix.BasisPxType value)
    { setField(value); }
    public QuickFix.BasisPxType get(QuickFix.BasisPxType  value)
    { getField(value); return value; }
    public QuickFix.BasisPxType getBasisPxType()
    { QuickFix.BasisPxType value = new QuickFix.BasisPxType();
      getField(value); return value; }
    public bool isSet(QuickFix.BasisPxType field)
    { return isSetField(field); }
    public bool isSetBasisPxType()
    { return isSetField(419); }

    public void set(QuickFix.StrikeTime value)
    { setField(value); }
    public QuickFix.StrikeTime get(QuickFix.StrikeTime  value)
    { getField(value); return value; }
    public QuickFix.StrikeTime getStrikeTime()
    { QuickFix.StrikeTime value = new QuickFix.StrikeTime();
      getField(value); return value; }
    public bool isSet(QuickFix.StrikeTime field)
    { return isSetField(field); }
    public bool isSetStrikeTime()
    { return isSetField(443); }

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


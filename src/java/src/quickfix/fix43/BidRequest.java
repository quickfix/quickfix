package quickfix.fix43;
import quickfix.FieldNotFound;
import quickfix.Group;
import quickfix.field.*;

public class BidRequest extends Message
{
  public BidRequest()
  {
    getHeader().setField(new MsgType("k"));
  }
  public BidRequest(
    quickfix.field.ClientBidID aClientBidID,
    quickfix.field.BidRequestTransType aBidRequestTransType,
    quickfix.field.TotalNumSecurities aTotalNumSecurities,
    quickfix.field.BidType aBidType,
    quickfix.field.TradeType aTradeType,
    quickfix.field.BasisPxType aBasisPxType ) {

    getHeader().setField(new MsgType("k"));
    set(aClientBidID);
    set(aBidRequestTransType);
    set(aTotalNumSecurities);
    set(aBidType);
    set(aTradeType);
    set(aBasisPxType);
  }

  public void set(quickfix.field.BidID value)
  { setField(value); }
  public quickfix.field.BidID get(quickfix.field.BidID  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.BidID getBidID() throws FieldNotFound
  { quickfix.field.BidID value = new quickfix.field.BidID();
    getField(value); return value; }
  public boolean isSet(quickfix.field.BidID field)
  { return isSetField(field); }
  public boolean isSetBidID()
  { return isSetField(390); }
  public void set(quickfix.field.ClientBidID value)
  { setField(value); }
  public quickfix.field.ClientBidID get(quickfix.field.ClientBidID  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.ClientBidID getClientBidID() throws FieldNotFound
  { quickfix.field.ClientBidID value = new quickfix.field.ClientBidID();
    getField(value); return value; }
  public boolean isSet(quickfix.field.ClientBidID field)
  { return isSetField(field); }
  public boolean isSetClientBidID()
  { return isSetField(391); }
  public void set(quickfix.field.BidRequestTransType value)
  { setField(value); }
  public quickfix.field.BidRequestTransType get(quickfix.field.BidRequestTransType  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.BidRequestTransType getBidRequestTransType() throws FieldNotFound
  { quickfix.field.BidRequestTransType value = new quickfix.field.BidRequestTransType();
    getField(value); return value; }
  public boolean isSet(quickfix.field.BidRequestTransType field)
  { return isSetField(field); }
  public boolean isSetBidRequestTransType()
  { return isSetField(374); }
  public void set(quickfix.field.ListName value)
  { setField(value); }
  public quickfix.field.ListName get(quickfix.field.ListName  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.ListName getListName() throws FieldNotFound
  { quickfix.field.ListName value = new quickfix.field.ListName();
    getField(value); return value; }
  public boolean isSet(quickfix.field.ListName field)
  { return isSetField(field); }
  public boolean isSetListName()
  { return isSetField(392); }
  public void set(quickfix.field.TotalNumSecurities value)
  { setField(value); }
  public quickfix.field.TotalNumSecurities get(quickfix.field.TotalNumSecurities  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.TotalNumSecurities getTotalNumSecurities() throws FieldNotFound
  { quickfix.field.TotalNumSecurities value = new quickfix.field.TotalNumSecurities();
    getField(value); return value; }
  public boolean isSet(quickfix.field.TotalNumSecurities field)
  { return isSetField(field); }
  public boolean isSetTotalNumSecurities()
  { return isSetField(393); }
  public void set(quickfix.field.BidType value)
  { setField(value); }
  public quickfix.field.BidType get(quickfix.field.BidType  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.BidType getBidType() throws FieldNotFound
  { quickfix.field.BidType value = new quickfix.field.BidType();
    getField(value); return value; }
  public boolean isSet(quickfix.field.BidType field)
  { return isSetField(field); }
  public boolean isSetBidType()
  { return isSetField(394); }
  public void set(quickfix.field.NumTickets value)
  { setField(value); }
  public quickfix.field.NumTickets get(quickfix.field.NumTickets  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.NumTickets getNumTickets() throws FieldNotFound
  { quickfix.field.NumTickets value = new quickfix.field.NumTickets();
    getField(value); return value; }
  public boolean isSet(quickfix.field.NumTickets field)
  { return isSetField(field); }
  public boolean isSetNumTickets()
  { return isSetField(395); }
  public void set(quickfix.field.Currency value)
  { setField(value); }
  public quickfix.field.Currency get(quickfix.field.Currency  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.Currency getCurrency() throws FieldNotFound
  { quickfix.field.Currency value = new quickfix.field.Currency();
    getField(value); return value; }
  public boolean isSet(quickfix.field.Currency field)
  { return isSetField(field); }
  public boolean isSetCurrency()
  { return isSetField(15); }
  public void set(quickfix.field.SideValue1 value)
  { setField(value); }
  public quickfix.field.SideValue1 get(quickfix.field.SideValue1  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.SideValue1 getSideValue1() throws FieldNotFound
  { quickfix.field.SideValue1 value = new quickfix.field.SideValue1();
    getField(value); return value; }
  public boolean isSet(quickfix.field.SideValue1 field)
  { return isSetField(field); }
  public boolean isSetSideValue1()
  { return isSetField(396); }
  public void set(quickfix.field.SideValue2 value)
  { setField(value); }
  public quickfix.field.SideValue2 get(quickfix.field.SideValue2  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.SideValue2 getSideValue2() throws FieldNotFound
  { quickfix.field.SideValue2 value = new quickfix.field.SideValue2();
    getField(value); return value; }
  public boolean isSet(quickfix.field.SideValue2 field)
  { return isSetField(field); }
  public boolean isSetSideValue2()
  { return isSetField(397); }
  public void set(quickfix.field.LiquidityIndType value)
  { setField(value); }
  public quickfix.field.LiquidityIndType get(quickfix.field.LiquidityIndType  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.LiquidityIndType getLiquidityIndType() throws FieldNotFound
  { quickfix.field.LiquidityIndType value = new quickfix.field.LiquidityIndType();
    getField(value); return value; }
  public boolean isSet(quickfix.field.LiquidityIndType field)
  { return isSetField(field); }
  public boolean isSetLiquidityIndType()
  { return isSetField(409); }
  public void set(quickfix.field.WtAverageLiquidity value)
  { setField(value); }
  public quickfix.field.WtAverageLiquidity get(quickfix.field.WtAverageLiquidity  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.WtAverageLiquidity getWtAverageLiquidity() throws FieldNotFound
  { quickfix.field.WtAverageLiquidity value = new quickfix.field.WtAverageLiquidity();
    getField(value); return value; }
  public boolean isSet(quickfix.field.WtAverageLiquidity field)
  { return isSetField(field); }
  public boolean isSetWtAverageLiquidity()
  { return isSetField(410); }
  public void set(quickfix.field.ExchangeForPhysical value)
  { setField(value); }
  public quickfix.field.ExchangeForPhysical get(quickfix.field.ExchangeForPhysical  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.ExchangeForPhysical getExchangeForPhysical() throws FieldNotFound
  { quickfix.field.ExchangeForPhysical value = new quickfix.field.ExchangeForPhysical();
    getField(value); return value; }
  public boolean isSet(quickfix.field.ExchangeForPhysical field)
  { return isSetField(field); }
  public boolean isSetExchangeForPhysical()
  { return isSetField(411); }
  public void set(quickfix.field.OutMainCntryUIndex value)
  { setField(value); }
  public quickfix.field.OutMainCntryUIndex get(quickfix.field.OutMainCntryUIndex  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.OutMainCntryUIndex getOutMainCntryUIndex() throws FieldNotFound
  { quickfix.field.OutMainCntryUIndex value = new quickfix.field.OutMainCntryUIndex();
    getField(value); return value; }
  public boolean isSet(quickfix.field.OutMainCntryUIndex field)
  { return isSetField(field); }
  public boolean isSetOutMainCntryUIndex()
  { return isSetField(412); }
  public void set(quickfix.field.CrossPercent value)
  { setField(value); }
  public quickfix.field.CrossPercent get(quickfix.field.CrossPercent  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.CrossPercent getCrossPercent() throws FieldNotFound
  { quickfix.field.CrossPercent value = new quickfix.field.CrossPercent();
    getField(value); return value; }
  public boolean isSet(quickfix.field.CrossPercent field)
  { return isSetField(field); }
  public boolean isSetCrossPercent()
  { return isSetField(413); }
  public void set(quickfix.field.ProgRptReqs value)
  { setField(value); }
  public quickfix.field.ProgRptReqs get(quickfix.field.ProgRptReqs  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.ProgRptReqs getProgRptReqs() throws FieldNotFound
  { quickfix.field.ProgRptReqs value = new quickfix.field.ProgRptReqs();
    getField(value); return value; }
  public boolean isSet(quickfix.field.ProgRptReqs field)
  { return isSetField(field); }
  public boolean isSetProgRptReqs()
  { return isSetField(414); }
  public void set(quickfix.field.ProgPeriodInterval value)
  { setField(value); }
  public quickfix.field.ProgPeriodInterval get(quickfix.field.ProgPeriodInterval  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.ProgPeriodInterval getProgPeriodInterval() throws FieldNotFound
  { quickfix.field.ProgPeriodInterval value = new quickfix.field.ProgPeriodInterval();
    getField(value); return value; }
  public boolean isSet(quickfix.field.ProgPeriodInterval field)
  { return isSetField(field); }
  public boolean isSetProgPeriodInterval()
  { return isSetField(415); }
  public void set(quickfix.field.IncTaxInd value)
  { setField(value); }
  public quickfix.field.IncTaxInd get(quickfix.field.IncTaxInd  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.IncTaxInd getIncTaxInd() throws FieldNotFound
  { quickfix.field.IncTaxInd value = new quickfix.field.IncTaxInd();
    getField(value); return value; }
  public boolean isSet(quickfix.field.IncTaxInd field)
  { return isSetField(field); }
  public boolean isSetIncTaxInd()
  { return isSetField(416); }
  public void set(quickfix.field.ForexReq value)
  { setField(value); }
  public quickfix.field.ForexReq get(quickfix.field.ForexReq  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.ForexReq getForexReq() throws FieldNotFound
  { quickfix.field.ForexReq value = new quickfix.field.ForexReq();
    getField(value); return value; }
  public boolean isSet(quickfix.field.ForexReq field)
  { return isSetField(field); }
  public boolean isSetForexReq()
  { return isSetField(121); }
  public void set(quickfix.field.NumBidders value)
  { setField(value); }
  public quickfix.field.NumBidders get(quickfix.field.NumBidders  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.NumBidders getNumBidders() throws FieldNotFound
  { quickfix.field.NumBidders value = new quickfix.field.NumBidders();
    getField(value); return value; }
  public boolean isSet(quickfix.field.NumBidders field)
  { return isSetField(field); }
  public boolean isSetNumBidders()
  { return isSetField(417); }
  public void set(quickfix.field.TradeDate value)
  { setField(value); }
  public quickfix.field.TradeDate get(quickfix.field.TradeDate  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.TradeDate getTradeDate() throws FieldNotFound
  { quickfix.field.TradeDate value = new quickfix.field.TradeDate();
    getField(value); return value; }
  public boolean isSet(quickfix.field.TradeDate field)
  { return isSetField(field); }
  public boolean isSetTradeDate()
  { return isSetField(75); }
  public void set(quickfix.field.TradeType value)
  { setField(value); }
  public quickfix.field.TradeType get(quickfix.field.TradeType  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.TradeType getTradeType() throws FieldNotFound
  { quickfix.field.TradeType value = new quickfix.field.TradeType();
    getField(value); return value; }
  public boolean isSet(quickfix.field.TradeType field)
  { return isSetField(field); }
  public boolean isSetTradeType()
  { return isSetField(418); }
  public void set(quickfix.field.BasisPxType value)
  { setField(value); }
  public quickfix.field.BasisPxType get(quickfix.field.BasisPxType  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.BasisPxType getBasisPxType() throws FieldNotFound
  { quickfix.field.BasisPxType value = new quickfix.field.BasisPxType();
    getField(value); return value; }
  public boolean isSet(quickfix.field.BasisPxType field)
  { return isSetField(field); }
  public boolean isSetBasisPxType()
  { return isSetField(419); }
  public void set(quickfix.field.StrikeTime value)
  { setField(value); }
  public quickfix.field.StrikeTime get(quickfix.field.StrikeTime  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.StrikeTime getStrikeTime() throws FieldNotFound
  { quickfix.field.StrikeTime value = new quickfix.field.StrikeTime();
    getField(value); return value; }
  public boolean isSet(quickfix.field.StrikeTime field)
  { return isSetField(field); }
  public boolean isSetStrikeTime()
  { return isSetField(443); }
  public void set(quickfix.field.Text value)
  { setField(value); }
  public quickfix.field.Text get(quickfix.field.Text  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.Text getText() throws FieldNotFound
  { quickfix.field.Text value = new quickfix.field.Text();
    getField(value); return value; }
  public boolean isSet(quickfix.field.Text field)
  { return isSetField(field); }
  public boolean isSetText()
  { return isSetField(58); }
  public void set(quickfix.field.EncodedTextLen value)
  { setField(value); }
  public quickfix.field.EncodedTextLen get(quickfix.field.EncodedTextLen  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.EncodedTextLen getEncodedTextLen() throws FieldNotFound
  { quickfix.field.EncodedTextLen value = new quickfix.field.EncodedTextLen();
    getField(value); return value; }
  public boolean isSet(quickfix.field.EncodedTextLen field)
  { return isSetField(field); }
  public boolean isSetEncodedTextLen()
  { return isSetField(354); }
  public void set(quickfix.field.EncodedText value)
  { setField(value); }
  public quickfix.field.EncodedText get(quickfix.field.EncodedText  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.EncodedText getEncodedText() throws FieldNotFound
  { quickfix.field.EncodedText value = new quickfix.field.EncodedText();
    getField(value); return value; }
  public boolean isSet(quickfix.field.EncodedText field)
  { return isSetField(field); }
  public boolean isSetEncodedText()
  { return isSetField(355); }
  public void set(quickfix.field.NoBidDescriptors value)
  { setField(value); }
  public quickfix.field.NoBidDescriptors get(quickfix.field.NoBidDescriptors  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.NoBidDescriptors getNoBidDescriptors() throws FieldNotFound
  { quickfix.field.NoBidDescriptors value = new quickfix.field.NoBidDescriptors();
    getField(value); return value; }
  public boolean isSet(quickfix.field.NoBidDescriptors field)
  { return isSetField(field); }
  public boolean isSetNoBidDescriptors()
  { return isSetField(398); }
  public static class NoBidDescriptors extends Group {
    public NoBidDescriptors() {
      super(398,399,
      new int[] {399,400,401,404,441,402,403,405,406,407,408,0 } ); }
  public void set(quickfix.field.BidDescriptorType value)
  { setField(value); }
  public quickfix.field.BidDescriptorType get(quickfix.field.BidDescriptorType  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.BidDescriptorType getBidDescriptorType() throws FieldNotFound
  { quickfix.field.BidDescriptorType value = new quickfix.field.BidDescriptorType();
    getField(value); return value; }
  public boolean isSet(quickfix.field.BidDescriptorType field)
  { return isSetField(field); }
  public boolean isSetBidDescriptorType()
  { return isSetField(399); }
  public void set(quickfix.field.BidDescriptor value)
  { setField(value); }
  public quickfix.field.BidDescriptor get(quickfix.field.BidDescriptor  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.BidDescriptor getBidDescriptor() throws FieldNotFound
  { quickfix.field.BidDescriptor value = new quickfix.field.BidDescriptor();
    getField(value); return value; }
  public boolean isSet(quickfix.field.BidDescriptor field)
  { return isSetField(field); }
  public boolean isSetBidDescriptor()
  { return isSetField(400); }
  public void set(quickfix.field.SideValueInd value)
  { setField(value); }
  public quickfix.field.SideValueInd get(quickfix.field.SideValueInd  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.SideValueInd getSideValueInd() throws FieldNotFound
  { quickfix.field.SideValueInd value = new quickfix.field.SideValueInd();
    getField(value); return value; }
  public boolean isSet(quickfix.field.SideValueInd field)
  { return isSetField(field); }
  public boolean isSetSideValueInd()
  { return isSetField(401); }
  public void set(quickfix.field.LiquidityValue value)
  { setField(value); }
  public quickfix.field.LiquidityValue get(quickfix.field.LiquidityValue  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.LiquidityValue getLiquidityValue() throws FieldNotFound
  { quickfix.field.LiquidityValue value = new quickfix.field.LiquidityValue();
    getField(value); return value; }
  public boolean isSet(quickfix.field.LiquidityValue field)
  { return isSetField(field); }
  public boolean isSetLiquidityValue()
  { return isSetField(404); }
  public void set(quickfix.field.LiquidityNumSecurities value)
  { setField(value); }
  public quickfix.field.LiquidityNumSecurities get(quickfix.field.LiquidityNumSecurities  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.LiquidityNumSecurities getLiquidityNumSecurities() throws FieldNotFound
  { quickfix.field.LiquidityNumSecurities value = new quickfix.field.LiquidityNumSecurities();
    getField(value); return value; }
  public boolean isSet(quickfix.field.LiquidityNumSecurities field)
  { return isSetField(field); }
  public boolean isSetLiquidityNumSecurities()
  { return isSetField(441); }
  public void set(quickfix.field.LiquidityPctLow value)
  { setField(value); }
  public quickfix.field.LiquidityPctLow get(quickfix.field.LiquidityPctLow  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.LiquidityPctLow getLiquidityPctLow() throws FieldNotFound
  { quickfix.field.LiquidityPctLow value = new quickfix.field.LiquidityPctLow();
    getField(value); return value; }
  public boolean isSet(quickfix.field.LiquidityPctLow field)
  { return isSetField(field); }
  public boolean isSetLiquidityPctLow()
  { return isSetField(402); }
  public void set(quickfix.field.LiquidityPctHigh value)
  { setField(value); }
  public quickfix.field.LiquidityPctHigh get(quickfix.field.LiquidityPctHigh  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.LiquidityPctHigh getLiquidityPctHigh() throws FieldNotFound
  { quickfix.field.LiquidityPctHigh value = new quickfix.field.LiquidityPctHigh();
    getField(value); return value; }
  public boolean isSet(quickfix.field.LiquidityPctHigh field)
  { return isSetField(field); }
  public boolean isSetLiquidityPctHigh()
  { return isSetField(403); }
  public void set(quickfix.field.EFPTrackingError value)
  { setField(value); }
  public quickfix.field.EFPTrackingError get(quickfix.field.EFPTrackingError  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.EFPTrackingError getEFPTrackingError() throws FieldNotFound
  { quickfix.field.EFPTrackingError value = new quickfix.field.EFPTrackingError();
    getField(value); return value; }
  public boolean isSet(quickfix.field.EFPTrackingError field)
  { return isSetField(field); }
  public boolean isSetEFPTrackingError()
  { return isSetField(405); }
  public void set(quickfix.field.FairValue value)
  { setField(value); }
  public quickfix.field.FairValue get(quickfix.field.FairValue  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.FairValue getFairValue() throws FieldNotFound
  { quickfix.field.FairValue value = new quickfix.field.FairValue();
    getField(value); return value; }
  public boolean isSet(quickfix.field.FairValue field)
  { return isSetField(field); }
  public boolean isSetFairValue()
  { return isSetField(406); }
  public void set(quickfix.field.OutsideIndexPct value)
  { setField(value); }
  public quickfix.field.OutsideIndexPct get(quickfix.field.OutsideIndexPct  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.OutsideIndexPct getOutsideIndexPct() throws FieldNotFound
  { quickfix.field.OutsideIndexPct value = new quickfix.field.OutsideIndexPct();
    getField(value); return value; }
  public boolean isSet(quickfix.field.OutsideIndexPct field)
  { return isSetField(field); }
  public boolean isSetOutsideIndexPct()
  { return isSetField(407); }
  public void set(quickfix.field.ValueOfFutures value)
  { setField(value); }
  public quickfix.field.ValueOfFutures get(quickfix.field.ValueOfFutures  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.ValueOfFutures getValueOfFutures() throws FieldNotFound
  { quickfix.field.ValueOfFutures value = new quickfix.field.ValueOfFutures();
    getField(value); return value; }
  public boolean isSet(quickfix.field.ValueOfFutures field)
  { return isSetField(field); }
  public boolean isSetValueOfFutures()
  { return isSetField(408); }
}
  public void set(quickfix.field.NoBidComponents value)
  { setField(value); }
  public quickfix.field.NoBidComponents get(quickfix.field.NoBidComponents  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.NoBidComponents getNoBidComponents() throws FieldNotFound
  { quickfix.field.NoBidComponents value = new quickfix.field.NoBidComponents();
    getField(value); return value; }
  public boolean isSet(quickfix.field.NoBidComponents field)
  { return isSetField(field); }
  public boolean isSetNoBidComponents()
  { return isSetField(420); }
  public static class NoBidComponents extends Group {
    public NoBidComponents() {
      super(420,66,
      new int[] {66,54,336,625,430,63,64,1,0 } ); }
  public void set(quickfix.field.ListID value)
  { setField(value); }
  public quickfix.field.ListID get(quickfix.field.ListID  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.ListID getListID() throws FieldNotFound
  { quickfix.field.ListID value = new quickfix.field.ListID();
    getField(value); return value; }
  public boolean isSet(quickfix.field.ListID field)
  { return isSetField(field); }
  public boolean isSetListID()
  { return isSetField(66); }
  public void set(quickfix.field.Side value)
  { setField(value); }
  public quickfix.field.Side get(quickfix.field.Side  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.Side getSide() throws FieldNotFound
  { quickfix.field.Side value = new quickfix.field.Side();
    getField(value); return value; }
  public boolean isSet(quickfix.field.Side field)
  { return isSetField(field); }
  public boolean isSetSide()
  { return isSetField(54); }
  public void set(quickfix.field.TradingSessionID value)
  { setField(value); }
  public quickfix.field.TradingSessionID get(quickfix.field.TradingSessionID  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.TradingSessionID getTradingSessionID() throws FieldNotFound
  { quickfix.field.TradingSessionID value = new quickfix.field.TradingSessionID();
    getField(value); return value; }
  public boolean isSet(quickfix.field.TradingSessionID field)
  { return isSetField(field); }
  public boolean isSetTradingSessionID()
  { return isSetField(336); }
  public void set(quickfix.field.TradingSessionSubID value)
  { setField(value); }
  public quickfix.field.TradingSessionSubID get(quickfix.field.TradingSessionSubID  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.TradingSessionSubID getTradingSessionSubID() throws FieldNotFound
  { quickfix.field.TradingSessionSubID value = new quickfix.field.TradingSessionSubID();
    getField(value); return value; }
  public boolean isSet(quickfix.field.TradingSessionSubID field)
  { return isSetField(field); }
  public boolean isSetTradingSessionSubID()
  { return isSetField(625); }
  public void set(quickfix.field.NetGrossInd value)
  { setField(value); }
  public quickfix.field.NetGrossInd get(quickfix.field.NetGrossInd  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.NetGrossInd getNetGrossInd() throws FieldNotFound
  { quickfix.field.NetGrossInd value = new quickfix.field.NetGrossInd();
    getField(value); return value; }
  public boolean isSet(quickfix.field.NetGrossInd field)
  { return isSetField(field); }
  public boolean isSetNetGrossInd()
  { return isSetField(430); }
  public void set(quickfix.field.SettlmntTyp value)
  { setField(value); }
  public quickfix.field.SettlmntTyp get(quickfix.field.SettlmntTyp  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.SettlmntTyp getSettlmntTyp() throws FieldNotFound
  { quickfix.field.SettlmntTyp value = new quickfix.field.SettlmntTyp();
    getField(value); return value; }
  public boolean isSet(quickfix.field.SettlmntTyp field)
  { return isSetField(field); }
  public boolean isSetSettlmntTyp()
  { return isSetField(63); }
  public void set(quickfix.field.FutSettDate value)
  { setField(value); }
  public quickfix.field.FutSettDate get(quickfix.field.FutSettDate  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.FutSettDate getFutSettDate() throws FieldNotFound
  { quickfix.field.FutSettDate value = new quickfix.field.FutSettDate();
    getField(value); return value; }
  public boolean isSet(quickfix.field.FutSettDate field)
  { return isSetField(field); }
  public boolean isSetFutSettDate()
  { return isSetField(64); }
  public void set(quickfix.field.Account value)
  { setField(value); }
  public quickfix.field.Account get(quickfix.field.Account  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.Account getAccount() throws FieldNotFound
  { quickfix.field.Account value = new quickfix.field.Account();
    getField(value); return value; }
  public boolean isSet(quickfix.field.Account field)
  { return isSetField(field); }
  public boolean isSetAccount()
  { return isSetField(1); }
}
}


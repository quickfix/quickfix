package quickfix.fix50;
import quickfix.FieldNotFound;
import quickfix.Group;
import quickfix.field.*;

public class AllocationInstructionAlert extends Message
{
  public AllocationInstructionAlert()
  {
    getHeader().setField(new MsgType("BM"));
  }
  public AllocationInstructionAlert(
    quickfix.field.AllocID aAllocID,
    quickfix.field.AllocTransType aAllocTransType,
    quickfix.field.AllocType aAllocType,
    quickfix.field.Side aSide,
    quickfix.field.Quantity aQuantity,
    quickfix.field.TradeDate aTradeDate ) {

    getHeader().setField(new MsgType("BM"));
    set(aAllocID);
    set(aAllocTransType);
    set(aAllocType);
    set(aSide);
    set(aQuantity);
    set(aTradeDate);
  }

  public void set(quickfix.field.AllocID value)
  { setField(value); }
  public quickfix.field.AllocID get(quickfix.field.AllocID  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.AllocID getAllocID() throws FieldNotFound
  { quickfix.field.AllocID value = new quickfix.field.AllocID();
    getField(value); return value; }
  public boolean isSet(quickfix.field.AllocID field)
  { return isSetField(field); }
  public boolean isSetAllocID()
  { return isSetField(70); }
  public void set(quickfix.field.AllocTransType value)
  { setField(value); }
  public quickfix.field.AllocTransType get(quickfix.field.AllocTransType  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.AllocTransType getAllocTransType() throws FieldNotFound
  { quickfix.field.AllocTransType value = new quickfix.field.AllocTransType();
    getField(value); return value; }
  public boolean isSet(quickfix.field.AllocTransType field)
  { return isSetField(field); }
  public boolean isSetAllocTransType()
  { return isSetField(71); }
  public void set(quickfix.field.AllocType value)
  { setField(value); }
  public quickfix.field.AllocType get(quickfix.field.AllocType  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.AllocType getAllocType() throws FieldNotFound
  { quickfix.field.AllocType value = new quickfix.field.AllocType();
    getField(value); return value; }
  public boolean isSet(quickfix.field.AllocType field)
  { return isSetField(field); }
  public boolean isSetAllocType()
  { return isSetField(626); }
  public void set(quickfix.field.SecondaryAllocID value)
  { setField(value); }
  public quickfix.field.SecondaryAllocID get(quickfix.field.SecondaryAllocID  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.SecondaryAllocID getSecondaryAllocID() throws FieldNotFound
  { quickfix.field.SecondaryAllocID value = new quickfix.field.SecondaryAllocID();
    getField(value); return value; }
  public boolean isSet(quickfix.field.SecondaryAllocID field)
  { return isSetField(field); }
  public boolean isSetSecondaryAllocID()
  { return isSetField(793); }
  public void set(quickfix.field.RefAllocID value)
  { setField(value); }
  public quickfix.field.RefAllocID get(quickfix.field.RefAllocID  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.RefAllocID getRefAllocID() throws FieldNotFound
  { quickfix.field.RefAllocID value = new quickfix.field.RefAllocID();
    getField(value); return value; }
  public boolean isSet(quickfix.field.RefAllocID field)
  { return isSetField(field); }
  public boolean isSetRefAllocID()
  { return isSetField(72); }
  public void set(quickfix.field.AllocCancReplaceReason value)
  { setField(value); }
  public quickfix.field.AllocCancReplaceReason get(quickfix.field.AllocCancReplaceReason  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.AllocCancReplaceReason getAllocCancReplaceReason() throws FieldNotFound
  { quickfix.field.AllocCancReplaceReason value = new quickfix.field.AllocCancReplaceReason();
    getField(value); return value; }
  public boolean isSet(quickfix.field.AllocCancReplaceReason field)
  { return isSetField(field); }
  public boolean isSetAllocCancReplaceReason()
  { return isSetField(796); }
  public void set(quickfix.field.AllocIntermedReqType value)
  { setField(value); }
  public quickfix.field.AllocIntermedReqType get(quickfix.field.AllocIntermedReqType  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.AllocIntermedReqType getAllocIntermedReqType() throws FieldNotFound
  { quickfix.field.AllocIntermedReqType value = new quickfix.field.AllocIntermedReqType();
    getField(value); return value; }
  public boolean isSet(quickfix.field.AllocIntermedReqType field)
  { return isSetField(field); }
  public boolean isSetAllocIntermedReqType()
  { return isSetField(808); }
  public void set(quickfix.field.AllocLinkID value)
  { setField(value); }
  public quickfix.field.AllocLinkID get(quickfix.field.AllocLinkID  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.AllocLinkID getAllocLinkID() throws FieldNotFound
  { quickfix.field.AllocLinkID value = new quickfix.field.AllocLinkID();
    getField(value); return value; }
  public boolean isSet(quickfix.field.AllocLinkID field)
  { return isSetField(field); }
  public boolean isSetAllocLinkID()
  { return isSetField(196); }
  public void set(quickfix.field.AllocLinkType value)
  { setField(value); }
  public quickfix.field.AllocLinkType get(quickfix.field.AllocLinkType  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.AllocLinkType getAllocLinkType() throws FieldNotFound
  { quickfix.field.AllocLinkType value = new quickfix.field.AllocLinkType();
    getField(value); return value; }
  public boolean isSet(quickfix.field.AllocLinkType field)
  { return isSetField(field); }
  public boolean isSetAllocLinkType()
  { return isSetField(197); }
  public void set(quickfix.field.BookingRefID value)
  { setField(value); }
  public quickfix.field.BookingRefID get(quickfix.field.BookingRefID  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.BookingRefID getBookingRefID() throws FieldNotFound
  { quickfix.field.BookingRefID value = new quickfix.field.BookingRefID();
    getField(value); return value; }
  public boolean isSet(quickfix.field.BookingRefID field)
  { return isSetField(field); }
  public boolean isSetBookingRefID()
  { return isSetField(466); }
  public void set(quickfix.field.AllocNoOrdersType value)
  { setField(value); }
  public quickfix.field.AllocNoOrdersType get(quickfix.field.AllocNoOrdersType  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.AllocNoOrdersType getAllocNoOrdersType() throws FieldNotFound
  { quickfix.field.AllocNoOrdersType value = new quickfix.field.AllocNoOrdersType();
    getField(value); return value; }
  public boolean isSet(quickfix.field.AllocNoOrdersType field)
  { return isSetField(field); }
  public boolean isSetAllocNoOrdersType()
  { return isSetField(857); }
  public void set(quickfix.field.NoOrders value)
  { setField(value); }
  public quickfix.field.NoOrders get(quickfix.field.NoOrders  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.NoOrders getNoOrders() throws FieldNotFound
  { quickfix.field.NoOrders value = new quickfix.field.NoOrders();
    getField(value); return value; }
  public boolean isSet(quickfix.field.NoOrders field)
  { return isSetField(field); }
  public boolean isSetNoOrders()
  { return isSetField(73); }
  public static class NoOrders extends Group {
    public NoOrders() {
      super(73,11,
      new int[] {11,37,198,526,66,756,38,799,800,0 } ); }
  public void set(quickfix.field.ClOrdID value)
  { setField(value); }
  public quickfix.field.ClOrdID get(quickfix.field.ClOrdID  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.ClOrdID getClOrdID() throws FieldNotFound
  { quickfix.field.ClOrdID value = new quickfix.field.ClOrdID();
    getField(value); return value; }
  public boolean isSet(quickfix.field.ClOrdID field)
  { return isSetField(field); }
  public boolean isSetClOrdID()
  { return isSetField(11); }
  public void set(quickfix.field.OrderID value)
  { setField(value); }
  public quickfix.field.OrderID get(quickfix.field.OrderID  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.OrderID getOrderID() throws FieldNotFound
  { quickfix.field.OrderID value = new quickfix.field.OrderID();
    getField(value); return value; }
  public boolean isSet(quickfix.field.OrderID field)
  { return isSetField(field); }
  public boolean isSetOrderID()
  { return isSetField(37); }
  public void set(quickfix.field.SecondaryOrderID value)
  { setField(value); }
  public quickfix.field.SecondaryOrderID get(quickfix.field.SecondaryOrderID  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.SecondaryOrderID getSecondaryOrderID() throws FieldNotFound
  { quickfix.field.SecondaryOrderID value = new quickfix.field.SecondaryOrderID();
    getField(value); return value; }
  public boolean isSet(quickfix.field.SecondaryOrderID field)
  { return isSetField(field); }
  public boolean isSetSecondaryOrderID()
  { return isSetField(198); }
  public void set(quickfix.field.SecondaryClOrdID value)
  { setField(value); }
  public quickfix.field.SecondaryClOrdID get(quickfix.field.SecondaryClOrdID  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.SecondaryClOrdID getSecondaryClOrdID() throws FieldNotFound
  { quickfix.field.SecondaryClOrdID value = new quickfix.field.SecondaryClOrdID();
    getField(value); return value; }
  public boolean isSet(quickfix.field.SecondaryClOrdID field)
  { return isSetField(field); }
  public boolean isSetSecondaryClOrdID()
  { return isSetField(526); }
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
  public void set(quickfix.field.NoNested2PartyIDs value)
  { setField(value); }
  public quickfix.field.NoNested2PartyIDs get(quickfix.field.NoNested2PartyIDs  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.NoNested2PartyIDs getNoNested2PartyIDs() throws FieldNotFound
  { quickfix.field.NoNested2PartyIDs value = new quickfix.field.NoNested2PartyIDs();
    getField(value); return value; }
  public boolean isSet(quickfix.field.NoNested2PartyIDs field)
  { return isSetField(field); }
  public boolean isSetNoNested2PartyIDs()
  { return isSetField(756); }
  public static class NoNested2PartyIDs extends Group {
    public NoNested2PartyIDs() {
      super(756,757,
      new int[] {757,758,759,806,0 } ); }
  public void set(quickfix.field.Nested2PartyID value)
  { setField(value); }
  public quickfix.field.Nested2PartyID get(quickfix.field.Nested2PartyID  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.Nested2PartyID getNested2PartyID() throws FieldNotFound
  { quickfix.field.Nested2PartyID value = new quickfix.field.Nested2PartyID();
    getField(value); return value; }
  public boolean isSet(quickfix.field.Nested2PartyID field)
  { return isSetField(field); }
  public boolean isSetNested2PartyID()
  { return isSetField(757); }
  public void set(quickfix.field.Nested2PartyIDSource value)
  { setField(value); }
  public quickfix.field.Nested2PartyIDSource get(quickfix.field.Nested2PartyIDSource  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.Nested2PartyIDSource getNested2PartyIDSource() throws FieldNotFound
  { quickfix.field.Nested2PartyIDSource value = new quickfix.field.Nested2PartyIDSource();
    getField(value); return value; }
  public boolean isSet(quickfix.field.Nested2PartyIDSource field)
  { return isSetField(field); }
  public boolean isSetNested2PartyIDSource()
  { return isSetField(758); }
  public void set(quickfix.field.Nested2PartyRole value)
  { setField(value); }
  public quickfix.field.Nested2PartyRole get(quickfix.field.Nested2PartyRole  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.Nested2PartyRole getNested2PartyRole() throws FieldNotFound
  { quickfix.field.Nested2PartyRole value = new quickfix.field.Nested2PartyRole();
    getField(value); return value; }
  public boolean isSet(quickfix.field.Nested2PartyRole field)
  { return isSetField(field); }
  public boolean isSetNested2PartyRole()
  { return isSetField(759); }
  public void set(quickfix.field.NoNested2PartySubIDs value)
  { setField(value); }
  public quickfix.field.NoNested2PartySubIDs get(quickfix.field.NoNested2PartySubIDs  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.NoNested2PartySubIDs getNoNested2PartySubIDs() throws FieldNotFound
  { quickfix.field.NoNested2PartySubIDs value = new quickfix.field.NoNested2PartySubIDs();
    getField(value); return value; }
  public boolean isSet(quickfix.field.NoNested2PartySubIDs field)
  { return isSetField(field); }
  public boolean isSetNoNested2PartySubIDs()
  { return isSetField(806); }
  public static class NoNested2PartySubIDs extends Group {
    public NoNested2PartySubIDs() {
      super(806,760,
      new int[] {760,807,0 } ); }
  public void set(quickfix.field.Nested2PartySubID value)
  { setField(value); }
  public quickfix.field.Nested2PartySubID get(quickfix.field.Nested2PartySubID  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.Nested2PartySubID getNested2PartySubID() throws FieldNotFound
  { quickfix.field.Nested2PartySubID value = new quickfix.field.Nested2PartySubID();
    getField(value); return value; }
  public boolean isSet(quickfix.field.Nested2PartySubID field)
  { return isSetField(field); }
  public boolean isSetNested2PartySubID()
  { return isSetField(760); }
  public void set(quickfix.field.Nested2PartySubIDType value)
  { setField(value); }
  public quickfix.field.Nested2PartySubIDType get(quickfix.field.Nested2PartySubIDType  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.Nested2PartySubIDType getNested2PartySubIDType() throws FieldNotFound
  { quickfix.field.Nested2PartySubIDType value = new quickfix.field.Nested2PartySubIDType();
    getField(value); return value; }
  public boolean isSet(quickfix.field.Nested2PartySubIDType field)
  { return isSetField(field); }
  public boolean isSetNested2PartySubIDType()
  { return isSetField(807); }
}
}
  public void set(quickfix.field.OrderQty value)
  { setField(value); }
  public quickfix.field.OrderQty get(quickfix.field.OrderQty  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.OrderQty getOrderQty() throws FieldNotFound
  { quickfix.field.OrderQty value = new quickfix.field.OrderQty();
    getField(value); return value; }
  public boolean isSet(quickfix.field.OrderQty field)
  { return isSetField(field); }
  public boolean isSetOrderQty()
  { return isSetField(38); }
  public void set(quickfix.field.OrderAvgPx value)
  { setField(value); }
  public quickfix.field.OrderAvgPx get(quickfix.field.OrderAvgPx  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.OrderAvgPx getOrderAvgPx() throws FieldNotFound
  { quickfix.field.OrderAvgPx value = new quickfix.field.OrderAvgPx();
    getField(value); return value; }
  public boolean isSet(quickfix.field.OrderAvgPx field)
  { return isSetField(field); }
  public boolean isSetOrderAvgPx()
  { return isSetField(799); }
  public void set(quickfix.field.OrderBookingQty value)
  { setField(value); }
  public quickfix.field.OrderBookingQty get(quickfix.field.OrderBookingQty  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.OrderBookingQty getOrderBookingQty() throws FieldNotFound
  { quickfix.field.OrderBookingQty value = new quickfix.field.OrderBookingQty();
    getField(value); return value; }
  public boolean isSet(quickfix.field.OrderBookingQty field)
  { return isSetField(field); }
  public boolean isSetOrderBookingQty()
  { return isSetField(800); }
}
  public void set(quickfix.field.NoExecs value)
  { setField(value); }
  public quickfix.field.NoExecs get(quickfix.field.NoExecs  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.NoExecs getNoExecs() throws FieldNotFound
  { quickfix.field.NoExecs value = new quickfix.field.NoExecs();
    getField(value); return value; }
  public boolean isSet(quickfix.field.NoExecs field)
  { return isSetField(field); }
  public boolean isSetNoExecs()
  { return isSetField(124); }
  public static class NoExecs extends Group {
    public NoExecs() {
      super(124,32,
      new int[] {32,17,527,31,669,29,1003,1041,0 } ); }
  public void set(quickfix.field.LastQty value)
  { setField(value); }
  public quickfix.field.LastQty get(quickfix.field.LastQty  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.LastQty getLastQty() throws FieldNotFound
  { quickfix.field.LastQty value = new quickfix.field.LastQty();
    getField(value); return value; }
  public boolean isSet(quickfix.field.LastQty field)
  { return isSetField(field); }
  public boolean isSetLastQty()
  { return isSetField(32); }
  public void set(quickfix.field.ExecID value)
  { setField(value); }
  public quickfix.field.ExecID get(quickfix.field.ExecID  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.ExecID getExecID() throws FieldNotFound
  { quickfix.field.ExecID value = new quickfix.field.ExecID();
    getField(value); return value; }
  public boolean isSet(quickfix.field.ExecID field)
  { return isSetField(field); }
  public boolean isSetExecID()
  { return isSetField(17); }
  public void set(quickfix.field.SecondaryExecID value)
  { setField(value); }
  public quickfix.field.SecondaryExecID get(quickfix.field.SecondaryExecID  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.SecondaryExecID getSecondaryExecID() throws FieldNotFound
  { quickfix.field.SecondaryExecID value = new quickfix.field.SecondaryExecID();
    getField(value); return value; }
  public boolean isSet(quickfix.field.SecondaryExecID field)
  { return isSetField(field); }
  public boolean isSetSecondaryExecID()
  { return isSetField(527); }
  public void set(quickfix.field.LastPx value)
  { setField(value); }
  public quickfix.field.LastPx get(quickfix.field.LastPx  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.LastPx getLastPx() throws FieldNotFound
  { quickfix.field.LastPx value = new quickfix.field.LastPx();
    getField(value); return value; }
  public boolean isSet(quickfix.field.LastPx field)
  { return isSetField(field); }
  public boolean isSetLastPx()
  { return isSetField(31); }
  public void set(quickfix.field.LastParPx value)
  { setField(value); }
  public quickfix.field.LastParPx get(quickfix.field.LastParPx  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.LastParPx getLastParPx() throws FieldNotFound
  { quickfix.field.LastParPx value = new quickfix.field.LastParPx();
    getField(value); return value; }
  public boolean isSet(quickfix.field.LastParPx field)
  { return isSetField(field); }
  public boolean isSetLastParPx()
  { return isSetField(669); }
  public void set(quickfix.field.LastCapacity value)
  { setField(value); }
  public quickfix.field.LastCapacity get(quickfix.field.LastCapacity  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.LastCapacity getLastCapacity() throws FieldNotFound
  { quickfix.field.LastCapacity value = new quickfix.field.LastCapacity();
    getField(value); return value; }
  public boolean isSet(quickfix.field.LastCapacity field)
  { return isSetField(field); }
  public boolean isSetLastCapacity()
  { return isSetField(29); }
  public void set(quickfix.field.TradeID value)
  { setField(value); }
  public quickfix.field.TradeID get(quickfix.field.TradeID  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.TradeID getTradeID() throws FieldNotFound
  { quickfix.field.TradeID value = new quickfix.field.TradeID();
    getField(value); return value; }
  public boolean isSet(quickfix.field.TradeID field)
  { return isSetField(field); }
  public boolean isSetTradeID()
  { return isSetField(1003); }
  public void set(quickfix.field.FirmTradeID value)
  { setField(value); }
  public quickfix.field.FirmTradeID get(quickfix.field.FirmTradeID  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.FirmTradeID getFirmTradeID() throws FieldNotFound
  { quickfix.field.FirmTradeID value = new quickfix.field.FirmTradeID();
    getField(value); return value; }
  public boolean isSet(quickfix.field.FirmTradeID field)
  { return isSetField(field); }
  public boolean isSetFirmTradeID()
  { return isSetField(1041); }
}
  public void set(quickfix.field.PreviouslyReported value)
  { setField(value); }
  public quickfix.field.PreviouslyReported get(quickfix.field.PreviouslyReported  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.PreviouslyReported getPreviouslyReported() throws FieldNotFound
  { quickfix.field.PreviouslyReported value = new quickfix.field.PreviouslyReported();
    getField(value); return value; }
  public boolean isSet(quickfix.field.PreviouslyReported field)
  { return isSetField(field); }
  public boolean isSetPreviouslyReported()
  { return isSetField(570); }
  public void set(quickfix.field.ReversalIndicator value)
  { setField(value); }
  public quickfix.field.ReversalIndicator get(quickfix.field.ReversalIndicator  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.ReversalIndicator getReversalIndicator() throws FieldNotFound
  { quickfix.field.ReversalIndicator value = new quickfix.field.ReversalIndicator();
    getField(value); return value; }
  public boolean isSet(quickfix.field.ReversalIndicator field)
  { return isSetField(field); }
  public boolean isSetReversalIndicator()
  { return isSetField(700); }
  public void set(quickfix.field.MatchType value)
  { setField(value); }
  public quickfix.field.MatchType get(quickfix.field.MatchType  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.MatchType getMatchType() throws FieldNotFound
  { quickfix.field.MatchType value = new quickfix.field.MatchType();
    getField(value); return value; }
  public boolean isSet(quickfix.field.MatchType field)
  { return isSetField(field); }
  public boolean isSetMatchType()
  { return isSetField(574); }
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
  public void set(quickfix.field.Symbol value)
  { setField(value); }
  public quickfix.field.Symbol get(quickfix.field.Symbol  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.Symbol getSymbol() throws FieldNotFound
  { quickfix.field.Symbol value = new quickfix.field.Symbol();
    getField(value); return value; }
  public boolean isSet(quickfix.field.Symbol field)
  { return isSetField(field); }
  public boolean isSetSymbol()
  { return isSetField(55); }
  public void set(quickfix.field.SymbolSfx value)
  { setField(value); }
  public quickfix.field.SymbolSfx get(quickfix.field.SymbolSfx  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.SymbolSfx getSymbolSfx() throws FieldNotFound
  { quickfix.field.SymbolSfx value = new quickfix.field.SymbolSfx();
    getField(value); return value; }
  public boolean isSet(quickfix.field.SymbolSfx field)
  { return isSetField(field); }
  public boolean isSetSymbolSfx()
  { return isSetField(65); }
  public void set(quickfix.field.SecurityID value)
  { setField(value); }
  public quickfix.field.SecurityID get(quickfix.field.SecurityID  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.SecurityID getSecurityID() throws FieldNotFound
  { quickfix.field.SecurityID value = new quickfix.field.SecurityID();
    getField(value); return value; }
  public boolean isSet(quickfix.field.SecurityID field)
  { return isSetField(field); }
  public boolean isSetSecurityID()
  { return isSetField(48); }
  public void set(quickfix.field.SecurityIDSource value)
  { setField(value); }
  public quickfix.field.SecurityIDSource get(quickfix.field.SecurityIDSource  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.SecurityIDSource getSecurityIDSource() throws FieldNotFound
  { quickfix.field.SecurityIDSource value = new quickfix.field.SecurityIDSource();
    getField(value); return value; }
  public boolean isSet(quickfix.field.SecurityIDSource field)
  { return isSetField(field); }
  public boolean isSetSecurityIDSource()
  { return isSetField(22); }
  public void set(quickfix.field.Product value)
  { setField(value); }
  public quickfix.field.Product get(quickfix.field.Product  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.Product getProduct() throws FieldNotFound
  { quickfix.field.Product value = new quickfix.field.Product();
    getField(value); return value; }
  public boolean isSet(quickfix.field.Product field)
  { return isSetField(field); }
  public boolean isSetProduct()
  { return isSetField(460); }
  public void set(quickfix.field.CFICode value)
  { setField(value); }
  public quickfix.field.CFICode get(quickfix.field.CFICode  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.CFICode getCFICode() throws FieldNotFound
  { quickfix.field.CFICode value = new quickfix.field.CFICode();
    getField(value); return value; }
  public boolean isSet(quickfix.field.CFICode field)
  { return isSetField(field); }
  public boolean isSetCFICode()
  { return isSetField(461); }
  public void set(quickfix.field.SecurityType value)
  { setField(value); }
  public quickfix.field.SecurityType get(quickfix.field.SecurityType  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.SecurityType getSecurityType() throws FieldNotFound
  { quickfix.field.SecurityType value = new quickfix.field.SecurityType();
    getField(value); return value; }
  public boolean isSet(quickfix.field.SecurityType field)
  { return isSetField(field); }
  public boolean isSetSecurityType()
  { return isSetField(167); }
  public void set(quickfix.field.SecuritySubType value)
  { setField(value); }
  public quickfix.field.SecuritySubType get(quickfix.field.SecuritySubType  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.SecuritySubType getSecuritySubType() throws FieldNotFound
  { quickfix.field.SecuritySubType value = new quickfix.field.SecuritySubType();
    getField(value); return value; }
  public boolean isSet(quickfix.field.SecuritySubType field)
  { return isSetField(field); }
  public boolean isSetSecuritySubType()
  { return isSetField(762); }
  public void set(quickfix.field.MaturityMonthYear value)
  { setField(value); }
  public quickfix.field.MaturityMonthYear get(quickfix.field.MaturityMonthYear  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.MaturityMonthYear getMaturityMonthYear() throws FieldNotFound
  { quickfix.field.MaturityMonthYear value = new quickfix.field.MaturityMonthYear();
    getField(value); return value; }
  public boolean isSet(quickfix.field.MaturityMonthYear field)
  { return isSetField(field); }
  public boolean isSetMaturityMonthYear()
  { return isSetField(200); }
  public void set(quickfix.field.MaturityDate value)
  { setField(value); }
  public quickfix.field.MaturityDate get(quickfix.field.MaturityDate  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.MaturityDate getMaturityDate() throws FieldNotFound
  { quickfix.field.MaturityDate value = new quickfix.field.MaturityDate();
    getField(value); return value; }
  public boolean isSet(quickfix.field.MaturityDate field)
  { return isSetField(field); }
  public boolean isSetMaturityDate()
  { return isSetField(541); }
  public void set(quickfix.field.CouponPaymentDate value)
  { setField(value); }
  public quickfix.field.CouponPaymentDate get(quickfix.field.CouponPaymentDate  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.CouponPaymentDate getCouponPaymentDate() throws FieldNotFound
  { quickfix.field.CouponPaymentDate value = new quickfix.field.CouponPaymentDate();
    getField(value); return value; }
  public boolean isSet(quickfix.field.CouponPaymentDate field)
  { return isSetField(field); }
  public boolean isSetCouponPaymentDate()
  { return isSetField(224); }
  public void set(quickfix.field.IssueDate value)
  { setField(value); }
  public quickfix.field.IssueDate get(quickfix.field.IssueDate  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.IssueDate getIssueDate() throws FieldNotFound
  { quickfix.field.IssueDate value = new quickfix.field.IssueDate();
    getField(value); return value; }
  public boolean isSet(quickfix.field.IssueDate field)
  { return isSetField(field); }
  public boolean isSetIssueDate()
  { return isSetField(225); }
  public void set(quickfix.field.RepoCollateralSecurityType value)
  { setField(value); }
  public quickfix.field.RepoCollateralSecurityType get(quickfix.field.RepoCollateralSecurityType  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.RepoCollateralSecurityType getRepoCollateralSecurityType() throws FieldNotFound
  { quickfix.field.RepoCollateralSecurityType value = new quickfix.field.RepoCollateralSecurityType();
    getField(value); return value; }
  public boolean isSet(quickfix.field.RepoCollateralSecurityType field)
  { return isSetField(field); }
  public boolean isSetRepoCollateralSecurityType()
  { return isSetField(239); }
  public void set(quickfix.field.RepurchaseTerm value)
  { setField(value); }
  public quickfix.field.RepurchaseTerm get(quickfix.field.RepurchaseTerm  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.RepurchaseTerm getRepurchaseTerm() throws FieldNotFound
  { quickfix.field.RepurchaseTerm value = new quickfix.field.RepurchaseTerm();
    getField(value); return value; }
  public boolean isSet(quickfix.field.RepurchaseTerm field)
  { return isSetField(field); }
  public boolean isSetRepurchaseTerm()
  { return isSetField(226); }
  public void set(quickfix.field.RepurchaseRate value)
  { setField(value); }
  public quickfix.field.RepurchaseRate get(quickfix.field.RepurchaseRate  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.RepurchaseRate getRepurchaseRate() throws FieldNotFound
  { quickfix.field.RepurchaseRate value = new quickfix.field.RepurchaseRate();
    getField(value); return value; }
  public boolean isSet(quickfix.field.RepurchaseRate field)
  { return isSetField(field); }
  public boolean isSetRepurchaseRate()
  { return isSetField(227); }
  public void set(quickfix.field.Factor value)
  { setField(value); }
  public quickfix.field.Factor get(quickfix.field.Factor  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.Factor getFactor() throws FieldNotFound
  { quickfix.field.Factor value = new quickfix.field.Factor();
    getField(value); return value; }
  public boolean isSet(quickfix.field.Factor field)
  { return isSetField(field); }
  public boolean isSetFactor()
  { return isSetField(228); }
  public void set(quickfix.field.CreditRating value)
  { setField(value); }
  public quickfix.field.CreditRating get(quickfix.field.CreditRating  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.CreditRating getCreditRating() throws FieldNotFound
  { quickfix.field.CreditRating value = new quickfix.field.CreditRating();
    getField(value); return value; }
  public boolean isSet(quickfix.field.CreditRating field)
  { return isSetField(field); }
  public boolean isSetCreditRating()
  { return isSetField(255); }
  public void set(quickfix.field.InstrRegistry value)
  { setField(value); }
  public quickfix.field.InstrRegistry get(quickfix.field.InstrRegistry  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.InstrRegistry getInstrRegistry() throws FieldNotFound
  { quickfix.field.InstrRegistry value = new quickfix.field.InstrRegistry();
    getField(value); return value; }
  public boolean isSet(quickfix.field.InstrRegistry field)
  { return isSetField(field); }
  public boolean isSetInstrRegistry()
  { return isSetField(543); }
  public void set(quickfix.field.CountryOfIssue value)
  { setField(value); }
  public quickfix.field.CountryOfIssue get(quickfix.field.CountryOfIssue  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.CountryOfIssue getCountryOfIssue() throws FieldNotFound
  { quickfix.field.CountryOfIssue value = new quickfix.field.CountryOfIssue();
    getField(value); return value; }
  public boolean isSet(quickfix.field.CountryOfIssue field)
  { return isSetField(field); }
  public boolean isSetCountryOfIssue()
  { return isSetField(470); }
  public void set(quickfix.field.StateOrProvinceOfIssue value)
  { setField(value); }
  public quickfix.field.StateOrProvinceOfIssue get(quickfix.field.StateOrProvinceOfIssue  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.StateOrProvinceOfIssue getStateOrProvinceOfIssue() throws FieldNotFound
  { quickfix.field.StateOrProvinceOfIssue value = new quickfix.field.StateOrProvinceOfIssue();
    getField(value); return value; }
  public boolean isSet(quickfix.field.StateOrProvinceOfIssue field)
  { return isSetField(field); }
  public boolean isSetStateOrProvinceOfIssue()
  { return isSetField(471); }
  public void set(quickfix.field.LocaleOfIssue value)
  { setField(value); }
  public quickfix.field.LocaleOfIssue get(quickfix.field.LocaleOfIssue  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.LocaleOfIssue getLocaleOfIssue() throws FieldNotFound
  { quickfix.field.LocaleOfIssue value = new quickfix.field.LocaleOfIssue();
    getField(value); return value; }
  public boolean isSet(quickfix.field.LocaleOfIssue field)
  { return isSetField(field); }
  public boolean isSetLocaleOfIssue()
  { return isSetField(472); }
  public void set(quickfix.field.RedemptionDate value)
  { setField(value); }
  public quickfix.field.RedemptionDate get(quickfix.field.RedemptionDate  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.RedemptionDate getRedemptionDate() throws FieldNotFound
  { quickfix.field.RedemptionDate value = new quickfix.field.RedemptionDate();
    getField(value); return value; }
  public boolean isSet(quickfix.field.RedemptionDate field)
  { return isSetField(field); }
  public boolean isSetRedemptionDate()
  { return isSetField(240); }
  public void set(quickfix.field.StrikePrice value)
  { setField(value); }
  public quickfix.field.StrikePrice get(quickfix.field.StrikePrice  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.StrikePrice getStrikePrice() throws FieldNotFound
  { quickfix.field.StrikePrice value = new quickfix.field.StrikePrice();
    getField(value); return value; }
  public boolean isSet(quickfix.field.StrikePrice field)
  { return isSetField(field); }
  public boolean isSetStrikePrice()
  { return isSetField(202); }
  public void set(quickfix.field.StrikeCurrency value)
  { setField(value); }
  public quickfix.field.StrikeCurrency get(quickfix.field.StrikeCurrency  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.StrikeCurrency getStrikeCurrency() throws FieldNotFound
  { quickfix.field.StrikeCurrency value = new quickfix.field.StrikeCurrency();
    getField(value); return value; }
  public boolean isSet(quickfix.field.StrikeCurrency field)
  { return isSetField(field); }
  public boolean isSetStrikeCurrency()
  { return isSetField(947); }
  public void set(quickfix.field.OptAttribute value)
  { setField(value); }
  public quickfix.field.OptAttribute get(quickfix.field.OptAttribute  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.OptAttribute getOptAttribute() throws FieldNotFound
  { quickfix.field.OptAttribute value = new quickfix.field.OptAttribute();
    getField(value); return value; }
  public boolean isSet(quickfix.field.OptAttribute field)
  { return isSetField(field); }
  public boolean isSetOptAttribute()
  { return isSetField(206); }
  public void set(quickfix.field.ContractMultiplier value)
  { setField(value); }
  public quickfix.field.ContractMultiplier get(quickfix.field.ContractMultiplier  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.ContractMultiplier getContractMultiplier() throws FieldNotFound
  { quickfix.field.ContractMultiplier value = new quickfix.field.ContractMultiplier();
    getField(value); return value; }
  public boolean isSet(quickfix.field.ContractMultiplier field)
  { return isSetField(field); }
  public boolean isSetContractMultiplier()
  { return isSetField(231); }
  public void set(quickfix.field.CouponRate value)
  { setField(value); }
  public quickfix.field.CouponRate get(quickfix.field.CouponRate  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.CouponRate getCouponRate() throws FieldNotFound
  { quickfix.field.CouponRate value = new quickfix.field.CouponRate();
    getField(value); return value; }
  public boolean isSet(quickfix.field.CouponRate field)
  { return isSetField(field); }
  public boolean isSetCouponRate()
  { return isSetField(223); }
  public void set(quickfix.field.SecurityExchange value)
  { setField(value); }
  public quickfix.field.SecurityExchange get(quickfix.field.SecurityExchange  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.SecurityExchange getSecurityExchange() throws FieldNotFound
  { quickfix.field.SecurityExchange value = new quickfix.field.SecurityExchange();
    getField(value); return value; }
  public boolean isSet(quickfix.field.SecurityExchange field)
  { return isSetField(field); }
  public boolean isSetSecurityExchange()
  { return isSetField(207); }
  public void set(quickfix.field.Issuer value)
  { setField(value); }
  public quickfix.field.Issuer get(quickfix.field.Issuer  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.Issuer getIssuer() throws FieldNotFound
  { quickfix.field.Issuer value = new quickfix.field.Issuer();
    getField(value); return value; }
  public boolean isSet(quickfix.field.Issuer field)
  { return isSetField(field); }
  public boolean isSetIssuer()
  { return isSetField(106); }
  public void set(quickfix.field.EncodedIssuerLen value)
  { setField(value); }
  public quickfix.field.EncodedIssuerLen get(quickfix.field.EncodedIssuerLen  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.EncodedIssuerLen getEncodedIssuerLen() throws FieldNotFound
  { quickfix.field.EncodedIssuerLen value = new quickfix.field.EncodedIssuerLen();
    getField(value); return value; }
  public boolean isSet(quickfix.field.EncodedIssuerLen field)
  { return isSetField(field); }
  public boolean isSetEncodedIssuerLen()
  { return isSetField(348); }
  public void set(quickfix.field.EncodedIssuer value)
  { setField(value); }
  public quickfix.field.EncodedIssuer get(quickfix.field.EncodedIssuer  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.EncodedIssuer getEncodedIssuer() throws FieldNotFound
  { quickfix.field.EncodedIssuer value = new quickfix.field.EncodedIssuer();
    getField(value); return value; }
  public boolean isSet(quickfix.field.EncodedIssuer field)
  { return isSetField(field); }
  public boolean isSetEncodedIssuer()
  { return isSetField(349); }
  public void set(quickfix.field.SecurityDesc value)
  { setField(value); }
  public quickfix.field.SecurityDesc get(quickfix.field.SecurityDesc  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.SecurityDesc getSecurityDesc() throws FieldNotFound
  { quickfix.field.SecurityDesc value = new quickfix.field.SecurityDesc();
    getField(value); return value; }
  public boolean isSet(quickfix.field.SecurityDesc field)
  { return isSetField(field); }
  public boolean isSetSecurityDesc()
  { return isSetField(107); }
  public void set(quickfix.field.EncodedSecurityDescLen value)
  { setField(value); }
  public quickfix.field.EncodedSecurityDescLen get(quickfix.field.EncodedSecurityDescLen  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.EncodedSecurityDescLen getEncodedSecurityDescLen() throws FieldNotFound
  { quickfix.field.EncodedSecurityDescLen value = new quickfix.field.EncodedSecurityDescLen();
    getField(value); return value; }
  public boolean isSet(quickfix.field.EncodedSecurityDescLen field)
  { return isSetField(field); }
  public boolean isSetEncodedSecurityDescLen()
  { return isSetField(350); }
  public void set(quickfix.field.EncodedSecurityDesc value)
  { setField(value); }
  public quickfix.field.EncodedSecurityDesc get(quickfix.field.EncodedSecurityDesc  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.EncodedSecurityDesc getEncodedSecurityDesc() throws FieldNotFound
  { quickfix.field.EncodedSecurityDesc value = new quickfix.field.EncodedSecurityDesc();
    getField(value); return value; }
  public boolean isSet(quickfix.field.EncodedSecurityDesc field)
  { return isSetField(field); }
  public boolean isSetEncodedSecurityDesc()
  { return isSetField(351); }
  public void set(quickfix.field.Pool value)
  { setField(value); }
  public quickfix.field.Pool get(quickfix.field.Pool  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.Pool getPool() throws FieldNotFound
  { quickfix.field.Pool value = new quickfix.field.Pool();
    getField(value); return value; }
  public boolean isSet(quickfix.field.Pool field)
  { return isSetField(field); }
  public boolean isSetPool()
  { return isSetField(691); }
  public void set(quickfix.field.ContractSettlMonth value)
  { setField(value); }
  public quickfix.field.ContractSettlMonth get(quickfix.field.ContractSettlMonth  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.ContractSettlMonth getContractSettlMonth() throws FieldNotFound
  { quickfix.field.ContractSettlMonth value = new quickfix.field.ContractSettlMonth();
    getField(value); return value; }
  public boolean isSet(quickfix.field.ContractSettlMonth field)
  { return isSetField(field); }
  public boolean isSetContractSettlMonth()
  { return isSetField(667); }
  public void set(quickfix.field.CPProgram value)
  { setField(value); }
  public quickfix.field.CPProgram get(quickfix.field.CPProgram  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.CPProgram getCPProgram() throws FieldNotFound
  { quickfix.field.CPProgram value = new quickfix.field.CPProgram();
    getField(value); return value; }
  public boolean isSet(quickfix.field.CPProgram field)
  { return isSetField(field); }
  public boolean isSetCPProgram()
  { return isSetField(875); }
  public void set(quickfix.field.CPRegType value)
  { setField(value); }
  public quickfix.field.CPRegType get(quickfix.field.CPRegType  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.CPRegType getCPRegType() throws FieldNotFound
  { quickfix.field.CPRegType value = new quickfix.field.CPRegType();
    getField(value); return value; }
  public boolean isSet(quickfix.field.CPRegType field)
  { return isSetField(field); }
  public boolean isSetCPRegType()
  { return isSetField(876); }
  public void set(quickfix.field.DatedDate value)
  { setField(value); }
  public quickfix.field.DatedDate get(quickfix.field.DatedDate  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.DatedDate getDatedDate() throws FieldNotFound
  { quickfix.field.DatedDate value = new quickfix.field.DatedDate();
    getField(value); return value; }
  public boolean isSet(quickfix.field.DatedDate field)
  { return isSetField(field); }
  public boolean isSetDatedDate()
  { return isSetField(873); }
  public void set(quickfix.field.InterestAccrualDate value)
  { setField(value); }
  public quickfix.field.InterestAccrualDate get(quickfix.field.InterestAccrualDate  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.InterestAccrualDate getInterestAccrualDate() throws FieldNotFound
  { quickfix.field.InterestAccrualDate value = new quickfix.field.InterestAccrualDate();
    getField(value); return value; }
  public boolean isSet(quickfix.field.InterestAccrualDate field)
  { return isSetField(field); }
  public boolean isSetInterestAccrualDate()
  { return isSetField(874); }
  public void set(quickfix.field.SecurityStatus value)
  { setField(value); }
  public quickfix.field.SecurityStatus get(quickfix.field.SecurityStatus  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.SecurityStatus getSecurityStatus() throws FieldNotFound
  { quickfix.field.SecurityStatus value = new quickfix.field.SecurityStatus();
    getField(value); return value; }
  public boolean isSet(quickfix.field.SecurityStatus field)
  { return isSetField(field); }
  public boolean isSetSecurityStatus()
  { return isSetField(965); }
  public void set(quickfix.field.SettleOnOpenFlag value)
  { setField(value); }
  public quickfix.field.SettleOnOpenFlag get(quickfix.field.SettleOnOpenFlag  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.SettleOnOpenFlag getSettleOnOpenFlag() throws FieldNotFound
  { quickfix.field.SettleOnOpenFlag value = new quickfix.field.SettleOnOpenFlag();
    getField(value); return value; }
  public boolean isSet(quickfix.field.SettleOnOpenFlag field)
  { return isSetField(field); }
  public boolean isSetSettleOnOpenFlag()
  { return isSetField(966); }
  public void set(quickfix.field.InstrmtAssignmentMethod value)
  { setField(value); }
  public quickfix.field.InstrmtAssignmentMethod get(quickfix.field.InstrmtAssignmentMethod  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.InstrmtAssignmentMethod getInstrmtAssignmentMethod() throws FieldNotFound
  { quickfix.field.InstrmtAssignmentMethod value = new quickfix.field.InstrmtAssignmentMethod();
    getField(value); return value; }
  public boolean isSet(quickfix.field.InstrmtAssignmentMethod field)
  { return isSetField(field); }
  public boolean isSetInstrmtAssignmentMethod()
  { return isSetField(1049); }
  public void set(quickfix.field.StrikeMultiplier value)
  { setField(value); }
  public quickfix.field.StrikeMultiplier get(quickfix.field.StrikeMultiplier  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.StrikeMultiplier getStrikeMultiplier() throws FieldNotFound
  { quickfix.field.StrikeMultiplier value = new quickfix.field.StrikeMultiplier();
    getField(value); return value; }
  public boolean isSet(quickfix.field.StrikeMultiplier field)
  { return isSetField(field); }
  public boolean isSetStrikeMultiplier()
  { return isSetField(967); }
  public void set(quickfix.field.StrikeValue value)
  { setField(value); }
  public quickfix.field.StrikeValue get(quickfix.field.StrikeValue  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.StrikeValue getStrikeValue() throws FieldNotFound
  { quickfix.field.StrikeValue value = new quickfix.field.StrikeValue();
    getField(value); return value; }
  public boolean isSet(quickfix.field.StrikeValue field)
  { return isSetField(field); }
  public boolean isSetStrikeValue()
  { return isSetField(968); }
  public void set(quickfix.field.MinPriceIncrement value)
  { setField(value); }
  public quickfix.field.MinPriceIncrement get(quickfix.field.MinPriceIncrement  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.MinPriceIncrement getMinPriceIncrement() throws FieldNotFound
  { quickfix.field.MinPriceIncrement value = new quickfix.field.MinPriceIncrement();
    getField(value); return value; }
  public boolean isSet(quickfix.field.MinPriceIncrement field)
  { return isSetField(field); }
  public boolean isSetMinPriceIncrement()
  { return isSetField(969); }
  public void set(quickfix.field.PositionLimit value)
  { setField(value); }
  public quickfix.field.PositionLimit get(quickfix.field.PositionLimit  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.PositionLimit getPositionLimit() throws FieldNotFound
  { quickfix.field.PositionLimit value = new quickfix.field.PositionLimit();
    getField(value); return value; }
  public boolean isSet(quickfix.field.PositionLimit field)
  { return isSetField(field); }
  public boolean isSetPositionLimit()
  { return isSetField(970); }
  public void set(quickfix.field.NTPositionLimit value)
  { setField(value); }
  public quickfix.field.NTPositionLimit get(quickfix.field.NTPositionLimit  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.NTPositionLimit getNTPositionLimit() throws FieldNotFound
  { quickfix.field.NTPositionLimit value = new quickfix.field.NTPositionLimit();
    getField(value); return value; }
  public boolean isSet(quickfix.field.NTPositionLimit field)
  { return isSetField(field); }
  public boolean isSetNTPositionLimit()
  { return isSetField(971); }
  public void set(quickfix.field.UnitofMeasure value)
  { setField(value); }
  public quickfix.field.UnitofMeasure get(quickfix.field.UnitofMeasure  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.UnitofMeasure getUnitofMeasure() throws FieldNotFound
  { quickfix.field.UnitofMeasure value = new quickfix.field.UnitofMeasure();
    getField(value); return value; }
  public boolean isSet(quickfix.field.UnitofMeasure field)
  { return isSetField(field); }
  public boolean isSetUnitofMeasure()
  { return isSetField(996); }
  public void set(quickfix.field.TimeUnit value)
  { setField(value); }
  public quickfix.field.TimeUnit get(quickfix.field.TimeUnit  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.TimeUnit getTimeUnit() throws FieldNotFound
  { quickfix.field.TimeUnit value = new quickfix.field.TimeUnit();
    getField(value); return value; }
  public boolean isSet(quickfix.field.TimeUnit field)
  { return isSetField(field); }
  public boolean isSetTimeUnit()
  { return isSetField(997); }
  public void set(quickfix.field.MaturityTime value)
  { setField(value); }
  public quickfix.field.MaturityTime get(quickfix.field.MaturityTime  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.MaturityTime getMaturityTime() throws FieldNotFound
  { quickfix.field.MaturityTime value = new quickfix.field.MaturityTime();
    getField(value); return value; }
  public boolean isSet(quickfix.field.MaturityTime field)
  { return isSetField(field); }
  public boolean isSetMaturityTime()
  { return isSetField(1079); }
  public void set(quickfix.field.DeliveryForm value)
  { setField(value); }
  public quickfix.field.DeliveryForm get(quickfix.field.DeliveryForm  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.DeliveryForm getDeliveryForm() throws FieldNotFound
  { quickfix.field.DeliveryForm value = new quickfix.field.DeliveryForm();
    getField(value); return value; }
  public boolean isSet(quickfix.field.DeliveryForm field)
  { return isSetField(field); }
  public boolean isSetDeliveryForm()
  { return isSetField(668); }
  public void set(quickfix.field.PctAtRisk value)
  { setField(value); }
  public quickfix.field.PctAtRisk get(quickfix.field.PctAtRisk  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.PctAtRisk getPctAtRisk() throws FieldNotFound
  { quickfix.field.PctAtRisk value = new quickfix.field.PctAtRisk();
    getField(value); return value; }
  public boolean isSet(quickfix.field.PctAtRisk field)
  { return isSetField(field); }
  public boolean isSetPctAtRisk()
  { return isSetField(869); }
  public void set(quickfix.field.AgreementDesc value)
  { setField(value); }
  public quickfix.field.AgreementDesc get(quickfix.field.AgreementDesc  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.AgreementDesc getAgreementDesc() throws FieldNotFound
  { quickfix.field.AgreementDesc value = new quickfix.field.AgreementDesc();
    getField(value); return value; }
  public boolean isSet(quickfix.field.AgreementDesc field)
  { return isSetField(field); }
  public boolean isSetAgreementDesc()
  { return isSetField(913); }
  public void set(quickfix.field.AgreementID value)
  { setField(value); }
  public quickfix.field.AgreementID get(quickfix.field.AgreementID  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.AgreementID getAgreementID() throws FieldNotFound
  { quickfix.field.AgreementID value = new quickfix.field.AgreementID();
    getField(value); return value; }
  public boolean isSet(quickfix.field.AgreementID field)
  { return isSetField(field); }
  public boolean isSetAgreementID()
  { return isSetField(914); }
  public void set(quickfix.field.AgreementDate value)
  { setField(value); }
  public quickfix.field.AgreementDate get(quickfix.field.AgreementDate  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.AgreementDate getAgreementDate() throws FieldNotFound
  { quickfix.field.AgreementDate value = new quickfix.field.AgreementDate();
    getField(value); return value; }
  public boolean isSet(quickfix.field.AgreementDate field)
  { return isSetField(field); }
  public boolean isSetAgreementDate()
  { return isSetField(915); }
  public void set(quickfix.field.AgreementCurrency value)
  { setField(value); }
  public quickfix.field.AgreementCurrency get(quickfix.field.AgreementCurrency  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.AgreementCurrency getAgreementCurrency() throws FieldNotFound
  { quickfix.field.AgreementCurrency value = new quickfix.field.AgreementCurrency();
    getField(value); return value; }
  public boolean isSet(quickfix.field.AgreementCurrency field)
  { return isSetField(field); }
  public boolean isSetAgreementCurrency()
  { return isSetField(918); }
  public void set(quickfix.field.TerminationType value)
  { setField(value); }
  public quickfix.field.TerminationType get(quickfix.field.TerminationType  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.TerminationType getTerminationType() throws FieldNotFound
  { quickfix.field.TerminationType value = new quickfix.field.TerminationType();
    getField(value); return value; }
  public boolean isSet(quickfix.field.TerminationType field)
  { return isSetField(field); }
  public boolean isSetTerminationType()
  { return isSetField(788); }
  public void set(quickfix.field.StartDate value)
  { setField(value); }
  public quickfix.field.StartDate get(quickfix.field.StartDate  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.StartDate getStartDate() throws FieldNotFound
  { quickfix.field.StartDate value = new quickfix.field.StartDate();
    getField(value); return value; }
  public boolean isSet(quickfix.field.StartDate field)
  { return isSetField(field); }
  public boolean isSetStartDate()
  { return isSetField(916); }
  public void set(quickfix.field.EndDate value)
  { setField(value); }
  public quickfix.field.EndDate get(quickfix.field.EndDate  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.EndDate getEndDate() throws FieldNotFound
  { quickfix.field.EndDate value = new quickfix.field.EndDate();
    getField(value); return value; }
  public boolean isSet(quickfix.field.EndDate field)
  { return isSetField(field); }
  public boolean isSetEndDate()
  { return isSetField(917); }
  public void set(quickfix.field.DeliveryType value)
  { setField(value); }
  public quickfix.field.DeliveryType get(quickfix.field.DeliveryType  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.DeliveryType getDeliveryType() throws FieldNotFound
  { quickfix.field.DeliveryType value = new quickfix.field.DeliveryType();
    getField(value); return value; }
  public boolean isSet(quickfix.field.DeliveryType field)
  { return isSetField(field); }
  public boolean isSetDeliveryType()
  { return isSetField(919); }
  public void set(quickfix.field.MarginRatio value)
  { setField(value); }
  public quickfix.field.MarginRatio get(quickfix.field.MarginRatio  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.MarginRatio getMarginRatio() throws FieldNotFound
  { quickfix.field.MarginRatio value = new quickfix.field.MarginRatio();
    getField(value); return value; }
  public boolean isSet(quickfix.field.MarginRatio field)
  { return isSetField(field); }
  public boolean isSetMarginRatio()
  { return isSetField(898); }
  public void set(quickfix.field.NoUnderlyings value)
  { setField(value); }
  public quickfix.field.NoUnderlyings get(quickfix.field.NoUnderlyings  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.NoUnderlyings getNoUnderlyings() throws FieldNotFound
  { quickfix.field.NoUnderlyings value = new quickfix.field.NoUnderlyings();
    getField(value); return value; }
  public boolean isSet(quickfix.field.NoUnderlyings field)
  { return isSetField(field); }
  public boolean isSetNoUnderlyings()
  { return isSetField(711); }
  public static class NoUnderlyings extends Group {
    public NoUnderlyings() {
      super(711,311,
      new int[] {311,312,309,305,462,463,310,763,313,542,241,242,243,244,245,246,256,595,592,593,594,247,316,941,317,436,435,308,306,362,363,307,364,365,877,878,318,879,810,882,883,884,885,886,972,975,973,974,998,1000,1038,1039,1044,1045,1046,0 } ); }
  public void set(quickfix.field.UnderlyingSymbol value)
  { setField(value); }
  public quickfix.field.UnderlyingSymbol get(quickfix.field.UnderlyingSymbol  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.UnderlyingSymbol getUnderlyingSymbol() throws FieldNotFound
  { quickfix.field.UnderlyingSymbol value = new quickfix.field.UnderlyingSymbol();
    getField(value); return value; }
  public boolean isSet(quickfix.field.UnderlyingSymbol field)
  { return isSetField(field); }
  public boolean isSetUnderlyingSymbol()
  { return isSetField(311); }
  public void set(quickfix.field.UnderlyingSymbolSfx value)
  { setField(value); }
  public quickfix.field.UnderlyingSymbolSfx get(quickfix.field.UnderlyingSymbolSfx  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.UnderlyingSymbolSfx getUnderlyingSymbolSfx() throws FieldNotFound
  { quickfix.field.UnderlyingSymbolSfx value = new quickfix.field.UnderlyingSymbolSfx();
    getField(value); return value; }
  public boolean isSet(quickfix.field.UnderlyingSymbolSfx field)
  { return isSetField(field); }
  public boolean isSetUnderlyingSymbolSfx()
  { return isSetField(312); }
  public void set(quickfix.field.UnderlyingSecurityID value)
  { setField(value); }
  public quickfix.field.UnderlyingSecurityID get(quickfix.field.UnderlyingSecurityID  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.UnderlyingSecurityID getUnderlyingSecurityID() throws FieldNotFound
  { quickfix.field.UnderlyingSecurityID value = new quickfix.field.UnderlyingSecurityID();
    getField(value); return value; }
  public boolean isSet(quickfix.field.UnderlyingSecurityID field)
  { return isSetField(field); }
  public boolean isSetUnderlyingSecurityID()
  { return isSetField(309); }
  public void set(quickfix.field.UnderlyingSecurityIDSource value)
  { setField(value); }
  public quickfix.field.UnderlyingSecurityIDSource get(quickfix.field.UnderlyingSecurityIDSource  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.UnderlyingSecurityIDSource getUnderlyingSecurityIDSource() throws FieldNotFound
  { quickfix.field.UnderlyingSecurityIDSource value = new quickfix.field.UnderlyingSecurityIDSource();
    getField(value); return value; }
  public boolean isSet(quickfix.field.UnderlyingSecurityIDSource field)
  { return isSetField(field); }
  public boolean isSetUnderlyingSecurityIDSource()
  { return isSetField(305); }
  public void set(quickfix.field.UnderlyingProduct value)
  { setField(value); }
  public quickfix.field.UnderlyingProduct get(quickfix.field.UnderlyingProduct  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.UnderlyingProduct getUnderlyingProduct() throws FieldNotFound
  { quickfix.field.UnderlyingProduct value = new quickfix.field.UnderlyingProduct();
    getField(value); return value; }
  public boolean isSet(quickfix.field.UnderlyingProduct field)
  { return isSetField(field); }
  public boolean isSetUnderlyingProduct()
  { return isSetField(462); }
  public void set(quickfix.field.UnderlyingCFICode value)
  { setField(value); }
  public quickfix.field.UnderlyingCFICode get(quickfix.field.UnderlyingCFICode  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.UnderlyingCFICode getUnderlyingCFICode() throws FieldNotFound
  { quickfix.field.UnderlyingCFICode value = new quickfix.field.UnderlyingCFICode();
    getField(value); return value; }
  public boolean isSet(quickfix.field.UnderlyingCFICode field)
  { return isSetField(field); }
  public boolean isSetUnderlyingCFICode()
  { return isSetField(463); }
  public void set(quickfix.field.UnderlyingSecurityType value)
  { setField(value); }
  public quickfix.field.UnderlyingSecurityType get(quickfix.field.UnderlyingSecurityType  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.UnderlyingSecurityType getUnderlyingSecurityType() throws FieldNotFound
  { quickfix.field.UnderlyingSecurityType value = new quickfix.field.UnderlyingSecurityType();
    getField(value); return value; }
  public boolean isSet(quickfix.field.UnderlyingSecurityType field)
  { return isSetField(field); }
  public boolean isSetUnderlyingSecurityType()
  { return isSetField(310); }
  public void set(quickfix.field.UnderlyingSecuritySubType value)
  { setField(value); }
  public quickfix.field.UnderlyingSecuritySubType get(quickfix.field.UnderlyingSecuritySubType  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.UnderlyingSecuritySubType getUnderlyingSecuritySubType() throws FieldNotFound
  { quickfix.field.UnderlyingSecuritySubType value = new quickfix.field.UnderlyingSecuritySubType();
    getField(value); return value; }
  public boolean isSet(quickfix.field.UnderlyingSecuritySubType field)
  { return isSetField(field); }
  public boolean isSetUnderlyingSecuritySubType()
  { return isSetField(763); }
  public void set(quickfix.field.UnderlyingMaturityMonthYear value)
  { setField(value); }
  public quickfix.field.UnderlyingMaturityMonthYear get(quickfix.field.UnderlyingMaturityMonthYear  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.UnderlyingMaturityMonthYear getUnderlyingMaturityMonthYear() throws FieldNotFound
  { quickfix.field.UnderlyingMaturityMonthYear value = new quickfix.field.UnderlyingMaturityMonthYear();
    getField(value); return value; }
  public boolean isSet(quickfix.field.UnderlyingMaturityMonthYear field)
  { return isSetField(field); }
  public boolean isSetUnderlyingMaturityMonthYear()
  { return isSetField(313); }
  public void set(quickfix.field.UnderlyingMaturityDate value)
  { setField(value); }
  public quickfix.field.UnderlyingMaturityDate get(quickfix.field.UnderlyingMaturityDate  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.UnderlyingMaturityDate getUnderlyingMaturityDate() throws FieldNotFound
  { quickfix.field.UnderlyingMaturityDate value = new quickfix.field.UnderlyingMaturityDate();
    getField(value); return value; }
  public boolean isSet(quickfix.field.UnderlyingMaturityDate field)
  { return isSetField(field); }
  public boolean isSetUnderlyingMaturityDate()
  { return isSetField(542); }
  public void set(quickfix.field.UnderlyingCouponPaymentDate value)
  { setField(value); }
  public quickfix.field.UnderlyingCouponPaymentDate get(quickfix.field.UnderlyingCouponPaymentDate  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.UnderlyingCouponPaymentDate getUnderlyingCouponPaymentDate() throws FieldNotFound
  { quickfix.field.UnderlyingCouponPaymentDate value = new quickfix.field.UnderlyingCouponPaymentDate();
    getField(value); return value; }
  public boolean isSet(quickfix.field.UnderlyingCouponPaymentDate field)
  { return isSetField(field); }
  public boolean isSetUnderlyingCouponPaymentDate()
  { return isSetField(241); }
  public void set(quickfix.field.UnderlyingIssueDate value)
  { setField(value); }
  public quickfix.field.UnderlyingIssueDate get(quickfix.field.UnderlyingIssueDate  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.UnderlyingIssueDate getUnderlyingIssueDate() throws FieldNotFound
  { quickfix.field.UnderlyingIssueDate value = new quickfix.field.UnderlyingIssueDate();
    getField(value); return value; }
  public boolean isSet(quickfix.field.UnderlyingIssueDate field)
  { return isSetField(field); }
  public boolean isSetUnderlyingIssueDate()
  { return isSetField(242); }
  public void set(quickfix.field.UnderlyingRepoCollateralSecurityType value)
  { setField(value); }
  public quickfix.field.UnderlyingRepoCollateralSecurityType get(quickfix.field.UnderlyingRepoCollateralSecurityType  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.UnderlyingRepoCollateralSecurityType getUnderlyingRepoCollateralSecurityType() throws FieldNotFound
  { quickfix.field.UnderlyingRepoCollateralSecurityType value = new quickfix.field.UnderlyingRepoCollateralSecurityType();
    getField(value); return value; }
  public boolean isSet(quickfix.field.UnderlyingRepoCollateralSecurityType field)
  { return isSetField(field); }
  public boolean isSetUnderlyingRepoCollateralSecurityType()
  { return isSetField(243); }
  public void set(quickfix.field.UnderlyingRepurchaseTerm value)
  { setField(value); }
  public quickfix.field.UnderlyingRepurchaseTerm get(quickfix.field.UnderlyingRepurchaseTerm  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.UnderlyingRepurchaseTerm getUnderlyingRepurchaseTerm() throws FieldNotFound
  { quickfix.field.UnderlyingRepurchaseTerm value = new quickfix.field.UnderlyingRepurchaseTerm();
    getField(value); return value; }
  public boolean isSet(quickfix.field.UnderlyingRepurchaseTerm field)
  { return isSetField(field); }
  public boolean isSetUnderlyingRepurchaseTerm()
  { return isSetField(244); }
  public void set(quickfix.field.UnderlyingRepurchaseRate value)
  { setField(value); }
  public quickfix.field.UnderlyingRepurchaseRate get(quickfix.field.UnderlyingRepurchaseRate  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.UnderlyingRepurchaseRate getUnderlyingRepurchaseRate() throws FieldNotFound
  { quickfix.field.UnderlyingRepurchaseRate value = new quickfix.field.UnderlyingRepurchaseRate();
    getField(value); return value; }
  public boolean isSet(quickfix.field.UnderlyingRepurchaseRate field)
  { return isSetField(field); }
  public boolean isSetUnderlyingRepurchaseRate()
  { return isSetField(245); }
  public void set(quickfix.field.UnderlyingFactor value)
  { setField(value); }
  public quickfix.field.UnderlyingFactor get(quickfix.field.UnderlyingFactor  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.UnderlyingFactor getUnderlyingFactor() throws FieldNotFound
  { quickfix.field.UnderlyingFactor value = new quickfix.field.UnderlyingFactor();
    getField(value); return value; }
  public boolean isSet(quickfix.field.UnderlyingFactor field)
  { return isSetField(field); }
  public boolean isSetUnderlyingFactor()
  { return isSetField(246); }
  public void set(quickfix.field.UnderlyingCreditRating value)
  { setField(value); }
  public quickfix.field.UnderlyingCreditRating get(quickfix.field.UnderlyingCreditRating  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.UnderlyingCreditRating getUnderlyingCreditRating() throws FieldNotFound
  { quickfix.field.UnderlyingCreditRating value = new quickfix.field.UnderlyingCreditRating();
    getField(value); return value; }
  public boolean isSet(quickfix.field.UnderlyingCreditRating field)
  { return isSetField(field); }
  public boolean isSetUnderlyingCreditRating()
  { return isSetField(256); }
  public void set(quickfix.field.UnderlyingInstrRegistry value)
  { setField(value); }
  public quickfix.field.UnderlyingInstrRegistry get(quickfix.field.UnderlyingInstrRegistry  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.UnderlyingInstrRegistry getUnderlyingInstrRegistry() throws FieldNotFound
  { quickfix.field.UnderlyingInstrRegistry value = new quickfix.field.UnderlyingInstrRegistry();
    getField(value); return value; }
  public boolean isSet(quickfix.field.UnderlyingInstrRegistry field)
  { return isSetField(field); }
  public boolean isSetUnderlyingInstrRegistry()
  { return isSetField(595); }
  public void set(quickfix.field.UnderlyingCountryOfIssue value)
  { setField(value); }
  public quickfix.field.UnderlyingCountryOfIssue get(quickfix.field.UnderlyingCountryOfIssue  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.UnderlyingCountryOfIssue getUnderlyingCountryOfIssue() throws FieldNotFound
  { quickfix.field.UnderlyingCountryOfIssue value = new quickfix.field.UnderlyingCountryOfIssue();
    getField(value); return value; }
  public boolean isSet(quickfix.field.UnderlyingCountryOfIssue field)
  { return isSetField(field); }
  public boolean isSetUnderlyingCountryOfIssue()
  { return isSetField(592); }
  public void set(quickfix.field.UnderlyingStateOrProvinceOfIssue value)
  { setField(value); }
  public quickfix.field.UnderlyingStateOrProvinceOfIssue get(quickfix.field.UnderlyingStateOrProvinceOfIssue  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.UnderlyingStateOrProvinceOfIssue getUnderlyingStateOrProvinceOfIssue() throws FieldNotFound
  { quickfix.field.UnderlyingStateOrProvinceOfIssue value = new quickfix.field.UnderlyingStateOrProvinceOfIssue();
    getField(value); return value; }
  public boolean isSet(quickfix.field.UnderlyingStateOrProvinceOfIssue field)
  { return isSetField(field); }
  public boolean isSetUnderlyingStateOrProvinceOfIssue()
  { return isSetField(593); }
  public void set(quickfix.field.UnderlyingLocaleOfIssue value)
  { setField(value); }
  public quickfix.field.UnderlyingLocaleOfIssue get(quickfix.field.UnderlyingLocaleOfIssue  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.UnderlyingLocaleOfIssue getUnderlyingLocaleOfIssue() throws FieldNotFound
  { quickfix.field.UnderlyingLocaleOfIssue value = new quickfix.field.UnderlyingLocaleOfIssue();
    getField(value); return value; }
  public boolean isSet(quickfix.field.UnderlyingLocaleOfIssue field)
  { return isSetField(field); }
  public boolean isSetUnderlyingLocaleOfIssue()
  { return isSetField(594); }
  public void set(quickfix.field.UnderlyingRedemptionDate value)
  { setField(value); }
  public quickfix.field.UnderlyingRedemptionDate get(quickfix.field.UnderlyingRedemptionDate  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.UnderlyingRedemptionDate getUnderlyingRedemptionDate() throws FieldNotFound
  { quickfix.field.UnderlyingRedemptionDate value = new quickfix.field.UnderlyingRedemptionDate();
    getField(value); return value; }
  public boolean isSet(quickfix.field.UnderlyingRedemptionDate field)
  { return isSetField(field); }
  public boolean isSetUnderlyingRedemptionDate()
  { return isSetField(247); }
  public void set(quickfix.field.UnderlyingStrikePrice value)
  { setField(value); }
  public quickfix.field.UnderlyingStrikePrice get(quickfix.field.UnderlyingStrikePrice  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.UnderlyingStrikePrice getUnderlyingStrikePrice() throws FieldNotFound
  { quickfix.field.UnderlyingStrikePrice value = new quickfix.field.UnderlyingStrikePrice();
    getField(value); return value; }
  public boolean isSet(quickfix.field.UnderlyingStrikePrice field)
  { return isSetField(field); }
  public boolean isSetUnderlyingStrikePrice()
  { return isSetField(316); }
  public void set(quickfix.field.UnderlyingStrikeCurrency value)
  { setField(value); }
  public quickfix.field.UnderlyingStrikeCurrency get(quickfix.field.UnderlyingStrikeCurrency  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.UnderlyingStrikeCurrency getUnderlyingStrikeCurrency() throws FieldNotFound
  { quickfix.field.UnderlyingStrikeCurrency value = new quickfix.field.UnderlyingStrikeCurrency();
    getField(value); return value; }
  public boolean isSet(quickfix.field.UnderlyingStrikeCurrency field)
  { return isSetField(field); }
  public boolean isSetUnderlyingStrikeCurrency()
  { return isSetField(941); }
  public void set(quickfix.field.UnderlyingOptAttribute value)
  { setField(value); }
  public quickfix.field.UnderlyingOptAttribute get(quickfix.field.UnderlyingOptAttribute  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.UnderlyingOptAttribute getUnderlyingOptAttribute() throws FieldNotFound
  { quickfix.field.UnderlyingOptAttribute value = new quickfix.field.UnderlyingOptAttribute();
    getField(value); return value; }
  public boolean isSet(quickfix.field.UnderlyingOptAttribute field)
  { return isSetField(field); }
  public boolean isSetUnderlyingOptAttribute()
  { return isSetField(317); }
  public void set(quickfix.field.UnderlyingContractMultiplier value)
  { setField(value); }
  public quickfix.field.UnderlyingContractMultiplier get(quickfix.field.UnderlyingContractMultiplier  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.UnderlyingContractMultiplier getUnderlyingContractMultiplier() throws FieldNotFound
  { quickfix.field.UnderlyingContractMultiplier value = new quickfix.field.UnderlyingContractMultiplier();
    getField(value); return value; }
  public boolean isSet(quickfix.field.UnderlyingContractMultiplier field)
  { return isSetField(field); }
  public boolean isSetUnderlyingContractMultiplier()
  { return isSetField(436); }
  public void set(quickfix.field.UnderlyingCouponRate value)
  { setField(value); }
  public quickfix.field.UnderlyingCouponRate get(quickfix.field.UnderlyingCouponRate  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.UnderlyingCouponRate getUnderlyingCouponRate() throws FieldNotFound
  { quickfix.field.UnderlyingCouponRate value = new quickfix.field.UnderlyingCouponRate();
    getField(value); return value; }
  public boolean isSet(quickfix.field.UnderlyingCouponRate field)
  { return isSetField(field); }
  public boolean isSetUnderlyingCouponRate()
  { return isSetField(435); }
  public void set(quickfix.field.UnderlyingSecurityExchange value)
  { setField(value); }
  public quickfix.field.UnderlyingSecurityExchange get(quickfix.field.UnderlyingSecurityExchange  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.UnderlyingSecurityExchange getUnderlyingSecurityExchange() throws FieldNotFound
  { quickfix.field.UnderlyingSecurityExchange value = new quickfix.field.UnderlyingSecurityExchange();
    getField(value); return value; }
  public boolean isSet(quickfix.field.UnderlyingSecurityExchange field)
  { return isSetField(field); }
  public boolean isSetUnderlyingSecurityExchange()
  { return isSetField(308); }
  public void set(quickfix.field.UnderlyingIssuer value)
  { setField(value); }
  public quickfix.field.UnderlyingIssuer get(quickfix.field.UnderlyingIssuer  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.UnderlyingIssuer getUnderlyingIssuer() throws FieldNotFound
  { quickfix.field.UnderlyingIssuer value = new quickfix.field.UnderlyingIssuer();
    getField(value); return value; }
  public boolean isSet(quickfix.field.UnderlyingIssuer field)
  { return isSetField(field); }
  public boolean isSetUnderlyingIssuer()
  { return isSetField(306); }
  public void set(quickfix.field.EncodedUnderlyingIssuerLen value)
  { setField(value); }
  public quickfix.field.EncodedUnderlyingIssuerLen get(quickfix.field.EncodedUnderlyingIssuerLen  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.EncodedUnderlyingIssuerLen getEncodedUnderlyingIssuerLen() throws FieldNotFound
  { quickfix.field.EncodedUnderlyingIssuerLen value = new quickfix.field.EncodedUnderlyingIssuerLen();
    getField(value); return value; }
  public boolean isSet(quickfix.field.EncodedUnderlyingIssuerLen field)
  { return isSetField(field); }
  public boolean isSetEncodedUnderlyingIssuerLen()
  { return isSetField(362); }
  public void set(quickfix.field.EncodedUnderlyingIssuer value)
  { setField(value); }
  public quickfix.field.EncodedUnderlyingIssuer get(quickfix.field.EncodedUnderlyingIssuer  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.EncodedUnderlyingIssuer getEncodedUnderlyingIssuer() throws FieldNotFound
  { quickfix.field.EncodedUnderlyingIssuer value = new quickfix.field.EncodedUnderlyingIssuer();
    getField(value); return value; }
  public boolean isSet(quickfix.field.EncodedUnderlyingIssuer field)
  { return isSetField(field); }
  public boolean isSetEncodedUnderlyingIssuer()
  { return isSetField(363); }
  public void set(quickfix.field.UnderlyingSecurityDesc value)
  { setField(value); }
  public quickfix.field.UnderlyingSecurityDesc get(quickfix.field.UnderlyingSecurityDesc  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.UnderlyingSecurityDesc getUnderlyingSecurityDesc() throws FieldNotFound
  { quickfix.field.UnderlyingSecurityDesc value = new quickfix.field.UnderlyingSecurityDesc();
    getField(value); return value; }
  public boolean isSet(quickfix.field.UnderlyingSecurityDesc field)
  { return isSetField(field); }
  public boolean isSetUnderlyingSecurityDesc()
  { return isSetField(307); }
  public void set(quickfix.field.EncodedUnderlyingSecurityDescLen value)
  { setField(value); }
  public quickfix.field.EncodedUnderlyingSecurityDescLen get(quickfix.field.EncodedUnderlyingSecurityDescLen  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.EncodedUnderlyingSecurityDescLen getEncodedUnderlyingSecurityDescLen() throws FieldNotFound
  { quickfix.field.EncodedUnderlyingSecurityDescLen value = new quickfix.field.EncodedUnderlyingSecurityDescLen();
    getField(value); return value; }
  public boolean isSet(quickfix.field.EncodedUnderlyingSecurityDescLen field)
  { return isSetField(field); }
  public boolean isSetEncodedUnderlyingSecurityDescLen()
  { return isSetField(364); }
  public void set(quickfix.field.EncodedUnderlyingSecurityDesc value)
  { setField(value); }
  public quickfix.field.EncodedUnderlyingSecurityDesc get(quickfix.field.EncodedUnderlyingSecurityDesc  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.EncodedUnderlyingSecurityDesc getEncodedUnderlyingSecurityDesc() throws FieldNotFound
  { quickfix.field.EncodedUnderlyingSecurityDesc value = new quickfix.field.EncodedUnderlyingSecurityDesc();
    getField(value); return value; }
  public boolean isSet(quickfix.field.EncodedUnderlyingSecurityDesc field)
  { return isSetField(field); }
  public boolean isSetEncodedUnderlyingSecurityDesc()
  { return isSetField(365); }
  public void set(quickfix.field.UnderlyingCPProgram value)
  { setField(value); }
  public quickfix.field.UnderlyingCPProgram get(quickfix.field.UnderlyingCPProgram  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.UnderlyingCPProgram getUnderlyingCPProgram() throws FieldNotFound
  { quickfix.field.UnderlyingCPProgram value = new quickfix.field.UnderlyingCPProgram();
    getField(value); return value; }
  public boolean isSet(quickfix.field.UnderlyingCPProgram field)
  { return isSetField(field); }
  public boolean isSetUnderlyingCPProgram()
  { return isSetField(877); }
  public void set(quickfix.field.UnderlyingCPRegType value)
  { setField(value); }
  public quickfix.field.UnderlyingCPRegType get(quickfix.field.UnderlyingCPRegType  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.UnderlyingCPRegType getUnderlyingCPRegType() throws FieldNotFound
  { quickfix.field.UnderlyingCPRegType value = new quickfix.field.UnderlyingCPRegType();
    getField(value); return value; }
  public boolean isSet(quickfix.field.UnderlyingCPRegType field)
  { return isSetField(field); }
  public boolean isSetUnderlyingCPRegType()
  { return isSetField(878); }
  public void set(quickfix.field.UnderlyingCurrency value)
  { setField(value); }
  public quickfix.field.UnderlyingCurrency get(quickfix.field.UnderlyingCurrency  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.UnderlyingCurrency getUnderlyingCurrency() throws FieldNotFound
  { quickfix.field.UnderlyingCurrency value = new quickfix.field.UnderlyingCurrency();
    getField(value); return value; }
  public boolean isSet(quickfix.field.UnderlyingCurrency field)
  { return isSetField(field); }
  public boolean isSetUnderlyingCurrency()
  { return isSetField(318); }
  public void set(quickfix.field.UnderlyingQty value)
  { setField(value); }
  public quickfix.field.UnderlyingQty get(quickfix.field.UnderlyingQty  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.UnderlyingQty getUnderlyingQty() throws FieldNotFound
  { quickfix.field.UnderlyingQty value = new quickfix.field.UnderlyingQty();
    getField(value); return value; }
  public boolean isSet(quickfix.field.UnderlyingQty field)
  { return isSetField(field); }
  public boolean isSetUnderlyingQty()
  { return isSetField(879); }
  public void set(quickfix.field.UnderlyingPx value)
  { setField(value); }
  public quickfix.field.UnderlyingPx get(quickfix.field.UnderlyingPx  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.UnderlyingPx getUnderlyingPx() throws FieldNotFound
  { quickfix.field.UnderlyingPx value = new quickfix.field.UnderlyingPx();
    getField(value); return value; }
  public boolean isSet(quickfix.field.UnderlyingPx field)
  { return isSetField(field); }
  public boolean isSetUnderlyingPx()
  { return isSetField(810); }
  public void set(quickfix.field.UnderlyingDirtyPrice value)
  { setField(value); }
  public quickfix.field.UnderlyingDirtyPrice get(quickfix.field.UnderlyingDirtyPrice  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.UnderlyingDirtyPrice getUnderlyingDirtyPrice() throws FieldNotFound
  { quickfix.field.UnderlyingDirtyPrice value = new quickfix.field.UnderlyingDirtyPrice();
    getField(value); return value; }
  public boolean isSet(quickfix.field.UnderlyingDirtyPrice field)
  { return isSetField(field); }
  public boolean isSetUnderlyingDirtyPrice()
  { return isSetField(882); }
  public void set(quickfix.field.UnderlyingEndPrice value)
  { setField(value); }
  public quickfix.field.UnderlyingEndPrice get(quickfix.field.UnderlyingEndPrice  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.UnderlyingEndPrice getUnderlyingEndPrice() throws FieldNotFound
  { quickfix.field.UnderlyingEndPrice value = new quickfix.field.UnderlyingEndPrice();
    getField(value); return value; }
  public boolean isSet(quickfix.field.UnderlyingEndPrice field)
  { return isSetField(field); }
  public boolean isSetUnderlyingEndPrice()
  { return isSetField(883); }
  public void set(quickfix.field.UnderlyingStartValue value)
  { setField(value); }
  public quickfix.field.UnderlyingStartValue get(quickfix.field.UnderlyingStartValue  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.UnderlyingStartValue getUnderlyingStartValue() throws FieldNotFound
  { quickfix.field.UnderlyingStartValue value = new quickfix.field.UnderlyingStartValue();
    getField(value); return value; }
  public boolean isSet(quickfix.field.UnderlyingStartValue field)
  { return isSetField(field); }
  public boolean isSetUnderlyingStartValue()
  { return isSetField(884); }
  public void set(quickfix.field.UnderlyingCurrentValue value)
  { setField(value); }
  public quickfix.field.UnderlyingCurrentValue get(quickfix.field.UnderlyingCurrentValue  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.UnderlyingCurrentValue getUnderlyingCurrentValue() throws FieldNotFound
  { quickfix.field.UnderlyingCurrentValue value = new quickfix.field.UnderlyingCurrentValue();
    getField(value); return value; }
  public boolean isSet(quickfix.field.UnderlyingCurrentValue field)
  { return isSetField(field); }
  public boolean isSetUnderlyingCurrentValue()
  { return isSetField(885); }
  public void set(quickfix.field.UnderlyingEndValue value)
  { setField(value); }
  public quickfix.field.UnderlyingEndValue get(quickfix.field.UnderlyingEndValue  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.UnderlyingEndValue getUnderlyingEndValue() throws FieldNotFound
  { quickfix.field.UnderlyingEndValue value = new quickfix.field.UnderlyingEndValue();
    getField(value); return value; }
  public boolean isSet(quickfix.field.UnderlyingEndValue field)
  { return isSetField(field); }
  public boolean isSetUnderlyingEndValue()
  { return isSetField(886); }
  public void set(quickfix.field.UnderlyingAllocationPercent value)
  { setField(value); }
  public quickfix.field.UnderlyingAllocationPercent get(quickfix.field.UnderlyingAllocationPercent  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.UnderlyingAllocationPercent getUnderlyingAllocationPercent() throws FieldNotFound
  { quickfix.field.UnderlyingAllocationPercent value = new quickfix.field.UnderlyingAllocationPercent();
    getField(value); return value; }
  public boolean isSet(quickfix.field.UnderlyingAllocationPercent field)
  { return isSetField(field); }
  public boolean isSetUnderlyingAllocationPercent()
  { return isSetField(972); }
  public void set(quickfix.field.UnderlyingSettlementType value)
  { setField(value); }
  public quickfix.field.UnderlyingSettlementType get(quickfix.field.UnderlyingSettlementType  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.UnderlyingSettlementType getUnderlyingSettlementType() throws FieldNotFound
  { quickfix.field.UnderlyingSettlementType value = new quickfix.field.UnderlyingSettlementType();
    getField(value); return value; }
  public boolean isSet(quickfix.field.UnderlyingSettlementType field)
  { return isSetField(field); }
  public boolean isSetUnderlyingSettlementType()
  { return isSetField(975); }
  public void set(quickfix.field.UnderlyingCashAmount value)
  { setField(value); }
  public quickfix.field.UnderlyingCashAmount get(quickfix.field.UnderlyingCashAmount  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.UnderlyingCashAmount getUnderlyingCashAmount() throws FieldNotFound
  { quickfix.field.UnderlyingCashAmount value = new quickfix.field.UnderlyingCashAmount();
    getField(value); return value; }
  public boolean isSet(quickfix.field.UnderlyingCashAmount field)
  { return isSetField(field); }
  public boolean isSetUnderlyingCashAmount()
  { return isSetField(973); }
  public void set(quickfix.field.UnderlyingCashType value)
  { setField(value); }
  public quickfix.field.UnderlyingCashType get(quickfix.field.UnderlyingCashType  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.UnderlyingCashType getUnderlyingCashType() throws FieldNotFound
  { quickfix.field.UnderlyingCashType value = new quickfix.field.UnderlyingCashType();
    getField(value); return value; }
  public boolean isSet(quickfix.field.UnderlyingCashType field)
  { return isSetField(field); }
  public boolean isSetUnderlyingCashType()
  { return isSetField(974); }
  public void set(quickfix.field.UnderlyingUnitofMeasure value)
  { setField(value); }
  public quickfix.field.UnderlyingUnitofMeasure get(quickfix.field.UnderlyingUnitofMeasure  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.UnderlyingUnitofMeasure getUnderlyingUnitofMeasure() throws FieldNotFound
  { quickfix.field.UnderlyingUnitofMeasure value = new quickfix.field.UnderlyingUnitofMeasure();
    getField(value); return value; }
  public boolean isSet(quickfix.field.UnderlyingUnitofMeasure field)
  { return isSetField(field); }
  public boolean isSetUnderlyingUnitofMeasure()
  { return isSetField(998); }
  public void set(quickfix.field.UnderlyingTimeUnit value)
  { setField(value); }
  public quickfix.field.UnderlyingTimeUnit get(quickfix.field.UnderlyingTimeUnit  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.UnderlyingTimeUnit getUnderlyingTimeUnit() throws FieldNotFound
  { quickfix.field.UnderlyingTimeUnit value = new quickfix.field.UnderlyingTimeUnit();
    getField(value); return value; }
  public boolean isSet(quickfix.field.UnderlyingTimeUnit field)
  { return isSetField(field); }
  public boolean isSetUnderlyingTimeUnit()
  { return isSetField(1000); }
  public void set(quickfix.field.UnderlyingCapValue value)
  { setField(value); }
  public quickfix.field.UnderlyingCapValue get(quickfix.field.UnderlyingCapValue  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.UnderlyingCapValue getUnderlyingCapValue() throws FieldNotFound
  { quickfix.field.UnderlyingCapValue value = new quickfix.field.UnderlyingCapValue();
    getField(value); return value; }
  public boolean isSet(quickfix.field.UnderlyingCapValue field)
  { return isSetField(field); }
  public boolean isSetUnderlyingCapValue()
  { return isSetField(1038); }
  public void set(quickfix.field.UnderlyingSettlMethod value)
  { setField(value); }
  public quickfix.field.UnderlyingSettlMethod get(quickfix.field.UnderlyingSettlMethod  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.UnderlyingSettlMethod getUnderlyingSettlMethod() throws FieldNotFound
  { quickfix.field.UnderlyingSettlMethod value = new quickfix.field.UnderlyingSettlMethod();
    getField(value); return value; }
  public boolean isSet(quickfix.field.UnderlyingSettlMethod field)
  { return isSetField(field); }
  public boolean isSetUnderlyingSettlMethod()
  { return isSetField(1039); }
  public void set(quickfix.field.UnderlyingAdjustedQuantity value)
  { setField(value); }
  public quickfix.field.UnderlyingAdjustedQuantity get(quickfix.field.UnderlyingAdjustedQuantity  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.UnderlyingAdjustedQuantity getUnderlyingAdjustedQuantity() throws FieldNotFound
  { quickfix.field.UnderlyingAdjustedQuantity value = new quickfix.field.UnderlyingAdjustedQuantity();
    getField(value); return value; }
  public boolean isSet(quickfix.field.UnderlyingAdjustedQuantity field)
  { return isSetField(field); }
  public boolean isSetUnderlyingAdjustedQuantity()
  { return isSetField(1044); }
  public void set(quickfix.field.UnderlyingFXRate value)
  { setField(value); }
  public quickfix.field.UnderlyingFXRate get(quickfix.field.UnderlyingFXRate  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.UnderlyingFXRate getUnderlyingFXRate() throws FieldNotFound
  { quickfix.field.UnderlyingFXRate value = new quickfix.field.UnderlyingFXRate();
    getField(value); return value; }
  public boolean isSet(quickfix.field.UnderlyingFXRate field)
  { return isSetField(field); }
  public boolean isSetUnderlyingFXRate()
  { return isSetField(1045); }
  public void set(quickfix.field.UnderlyingFXRateCalc value)
  { setField(value); }
  public quickfix.field.UnderlyingFXRateCalc get(quickfix.field.UnderlyingFXRateCalc  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.UnderlyingFXRateCalc getUnderlyingFXRateCalc() throws FieldNotFound
  { quickfix.field.UnderlyingFXRateCalc value = new quickfix.field.UnderlyingFXRateCalc();
    getField(value); return value; }
  public boolean isSet(quickfix.field.UnderlyingFXRateCalc field)
  { return isSetField(field); }
  public boolean isSetUnderlyingFXRateCalc()
  { return isSetField(1046); }
}
  public void set(quickfix.field.NoLegs value)
  { setField(value); }
  public quickfix.field.NoLegs get(quickfix.field.NoLegs  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.NoLegs getNoLegs() throws FieldNotFound
  { quickfix.field.NoLegs value = new quickfix.field.NoLegs();
    getField(value); return value; }
  public boolean isSet(quickfix.field.NoLegs field)
  { return isSetField(field); }
  public boolean isSetNoLegs()
  { return isSetField(555); }
  public static class NoLegs extends Group {
    public NoLegs() {
      super(555,600,
      new int[] {600,601,602,603,607,608,609,764,610,611,248,249,250,251,252,253,257,599,596,597,598,254,612,942,613,614,615,616,617,618,619,620,621,622,623,624,556,740,739,955,956,999,1001,0 } ); }
  public void set(quickfix.field.LegSymbol value)
  { setField(value); }
  public quickfix.field.LegSymbol get(quickfix.field.LegSymbol  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.LegSymbol getLegSymbol() throws FieldNotFound
  { quickfix.field.LegSymbol value = new quickfix.field.LegSymbol();
    getField(value); return value; }
  public boolean isSet(quickfix.field.LegSymbol field)
  { return isSetField(field); }
  public boolean isSetLegSymbol()
  { return isSetField(600); }
  public void set(quickfix.field.LegSymbolSfx value)
  { setField(value); }
  public quickfix.field.LegSymbolSfx get(quickfix.field.LegSymbolSfx  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.LegSymbolSfx getLegSymbolSfx() throws FieldNotFound
  { quickfix.field.LegSymbolSfx value = new quickfix.field.LegSymbolSfx();
    getField(value); return value; }
  public boolean isSet(quickfix.field.LegSymbolSfx field)
  { return isSetField(field); }
  public boolean isSetLegSymbolSfx()
  { return isSetField(601); }
  public void set(quickfix.field.LegSecurityID value)
  { setField(value); }
  public quickfix.field.LegSecurityID get(quickfix.field.LegSecurityID  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.LegSecurityID getLegSecurityID() throws FieldNotFound
  { quickfix.field.LegSecurityID value = new quickfix.field.LegSecurityID();
    getField(value); return value; }
  public boolean isSet(quickfix.field.LegSecurityID field)
  { return isSetField(field); }
  public boolean isSetLegSecurityID()
  { return isSetField(602); }
  public void set(quickfix.field.LegSecurityIDSource value)
  { setField(value); }
  public quickfix.field.LegSecurityIDSource get(quickfix.field.LegSecurityIDSource  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.LegSecurityIDSource getLegSecurityIDSource() throws FieldNotFound
  { quickfix.field.LegSecurityIDSource value = new quickfix.field.LegSecurityIDSource();
    getField(value); return value; }
  public boolean isSet(quickfix.field.LegSecurityIDSource field)
  { return isSetField(field); }
  public boolean isSetLegSecurityIDSource()
  { return isSetField(603); }
  public void set(quickfix.field.LegProduct value)
  { setField(value); }
  public quickfix.field.LegProduct get(quickfix.field.LegProduct  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.LegProduct getLegProduct() throws FieldNotFound
  { quickfix.field.LegProduct value = new quickfix.field.LegProduct();
    getField(value); return value; }
  public boolean isSet(quickfix.field.LegProduct field)
  { return isSetField(field); }
  public boolean isSetLegProduct()
  { return isSetField(607); }
  public void set(quickfix.field.LegCFICode value)
  { setField(value); }
  public quickfix.field.LegCFICode get(quickfix.field.LegCFICode  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.LegCFICode getLegCFICode() throws FieldNotFound
  { quickfix.field.LegCFICode value = new quickfix.field.LegCFICode();
    getField(value); return value; }
  public boolean isSet(quickfix.field.LegCFICode field)
  { return isSetField(field); }
  public boolean isSetLegCFICode()
  { return isSetField(608); }
  public void set(quickfix.field.LegSecurityType value)
  { setField(value); }
  public quickfix.field.LegSecurityType get(quickfix.field.LegSecurityType  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.LegSecurityType getLegSecurityType() throws FieldNotFound
  { quickfix.field.LegSecurityType value = new quickfix.field.LegSecurityType();
    getField(value); return value; }
  public boolean isSet(quickfix.field.LegSecurityType field)
  { return isSetField(field); }
  public boolean isSetLegSecurityType()
  { return isSetField(609); }
  public void set(quickfix.field.LegSecuritySubType value)
  { setField(value); }
  public quickfix.field.LegSecuritySubType get(quickfix.field.LegSecuritySubType  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.LegSecuritySubType getLegSecuritySubType() throws FieldNotFound
  { quickfix.field.LegSecuritySubType value = new quickfix.field.LegSecuritySubType();
    getField(value); return value; }
  public boolean isSet(quickfix.field.LegSecuritySubType field)
  { return isSetField(field); }
  public boolean isSetLegSecuritySubType()
  { return isSetField(764); }
  public void set(quickfix.field.LegMaturityMonthYear value)
  { setField(value); }
  public quickfix.field.LegMaturityMonthYear get(quickfix.field.LegMaturityMonthYear  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.LegMaturityMonthYear getLegMaturityMonthYear() throws FieldNotFound
  { quickfix.field.LegMaturityMonthYear value = new quickfix.field.LegMaturityMonthYear();
    getField(value); return value; }
  public boolean isSet(quickfix.field.LegMaturityMonthYear field)
  { return isSetField(field); }
  public boolean isSetLegMaturityMonthYear()
  { return isSetField(610); }
  public void set(quickfix.field.LegMaturityDate value)
  { setField(value); }
  public quickfix.field.LegMaturityDate get(quickfix.field.LegMaturityDate  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.LegMaturityDate getLegMaturityDate() throws FieldNotFound
  { quickfix.field.LegMaturityDate value = new quickfix.field.LegMaturityDate();
    getField(value); return value; }
  public boolean isSet(quickfix.field.LegMaturityDate field)
  { return isSetField(field); }
  public boolean isSetLegMaturityDate()
  { return isSetField(611); }
  public void set(quickfix.field.LegCouponPaymentDate value)
  { setField(value); }
  public quickfix.field.LegCouponPaymentDate get(quickfix.field.LegCouponPaymentDate  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.LegCouponPaymentDate getLegCouponPaymentDate() throws FieldNotFound
  { quickfix.field.LegCouponPaymentDate value = new quickfix.field.LegCouponPaymentDate();
    getField(value); return value; }
  public boolean isSet(quickfix.field.LegCouponPaymentDate field)
  { return isSetField(field); }
  public boolean isSetLegCouponPaymentDate()
  { return isSetField(248); }
  public void set(quickfix.field.LegIssueDate value)
  { setField(value); }
  public quickfix.field.LegIssueDate get(quickfix.field.LegIssueDate  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.LegIssueDate getLegIssueDate() throws FieldNotFound
  { quickfix.field.LegIssueDate value = new quickfix.field.LegIssueDate();
    getField(value); return value; }
  public boolean isSet(quickfix.field.LegIssueDate field)
  { return isSetField(field); }
  public boolean isSetLegIssueDate()
  { return isSetField(249); }
  public void set(quickfix.field.LegRepoCollateralSecurityType value)
  { setField(value); }
  public quickfix.field.LegRepoCollateralSecurityType get(quickfix.field.LegRepoCollateralSecurityType  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.LegRepoCollateralSecurityType getLegRepoCollateralSecurityType() throws FieldNotFound
  { quickfix.field.LegRepoCollateralSecurityType value = new quickfix.field.LegRepoCollateralSecurityType();
    getField(value); return value; }
  public boolean isSet(quickfix.field.LegRepoCollateralSecurityType field)
  { return isSetField(field); }
  public boolean isSetLegRepoCollateralSecurityType()
  { return isSetField(250); }
  public void set(quickfix.field.LegRepurchaseTerm value)
  { setField(value); }
  public quickfix.field.LegRepurchaseTerm get(quickfix.field.LegRepurchaseTerm  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.LegRepurchaseTerm getLegRepurchaseTerm() throws FieldNotFound
  { quickfix.field.LegRepurchaseTerm value = new quickfix.field.LegRepurchaseTerm();
    getField(value); return value; }
  public boolean isSet(quickfix.field.LegRepurchaseTerm field)
  { return isSetField(field); }
  public boolean isSetLegRepurchaseTerm()
  { return isSetField(251); }
  public void set(quickfix.field.LegRepurchaseRate value)
  { setField(value); }
  public quickfix.field.LegRepurchaseRate get(quickfix.field.LegRepurchaseRate  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.LegRepurchaseRate getLegRepurchaseRate() throws FieldNotFound
  { quickfix.field.LegRepurchaseRate value = new quickfix.field.LegRepurchaseRate();
    getField(value); return value; }
  public boolean isSet(quickfix.field.LegRepurchaseRate field)
  { return isSetField(field); }
  public boolean isSetLegRepurchaseRate()
  { return isSetField(252); }
  public void set(quickfix.field.LegFactor value)
  { setField(value); }
  public quickfix.field.LegFactor get(quickfix.field.LegFactor  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.LegFactor getLegFactor() throws FieldNotFound
  { quickfix.field.LegFactor value = new quickfix.field.LegFactor();
    getField(value); return value; }
  public boolean isSet(quickfix.field.LegFactor field)
  { return isSetField(field); }
  public boolean isSetLegFactor()
  { return isSetField(253); }
  public void set(quickfix.field.LegCreditRating value)
  { setField(value); }
  public quickfix.field.LegCreditRating get(quickfix.field.LegCreditRating  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.LegCreditRating getLegCreditRating() throws FieldNotFound
  { quickfix.field.LegCreditRating value = new quickfix.field.LegCreditRating();
    getField(value); return value; }
  public boolean isSet(quickfix.field.LegCreditRating field)
  { return isSetField(field); }
  public boolean isSetLegCreditRating()
  { return isSetField(257); }
  public void set(quickfix.field.LegInstrRegistry value)
  { setField(value); }
  public quickfix.field.LegInstrRegistry get(quickfix.field.LegInstrRegistry  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.LegInstrRegistry getLegInstrRegistry() throws FieldNotFound
  { quickfix.field.LegInstrRegistry value = new quickfix.field.LegInstrRegistry();
    getField(value); return value; }
  public boolean isSet(quickfix.field.LegInstrRegistry field)
  { return isSetField(field); }
  public boolean isSetLegInstrRegistry()
  { return isSetField(599); }
  public void set(quickfix.field.LegCountryOfIssue value)
  { setField(value); }
  public quickfix.field.LegCountryOfIssue get(quickfix.field.LegCountryOfIssue  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.LegCountryOfIssue getLegCountryOfIssue() throws FieldNotFound
  { quickfix.field.LegCountryOfIssue value = new quickfix.field.LegCountryOfIssue();
    getField(value); return value; }
  public boolean isSet(quickfix.field.LegCountryOfIssue field)
  { return isSetField(field); }
  public boolean isSetLegCountryOfIssue()
  { return isSetField(596); }
  public void set(quickfix.field.LegStateOrProvinceOfIssue value)
  { setField(value); }
  public quickfix.field.LegStateOrProvinceOfIssue get(quickfix.field.LegStateOrProvinceOfIssue  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.LegStateOrProvinceOfIssue getLegStateOrProvinceOfIssue() throws FieldNotFound
  { quickfix.field.LegStateOrProvinceOfIssue value = new quickfix.field.LegStateOrProvinceOfIssue();
    getField(value); return value; }
  public boolean isSet(quickfix.field.LegStateOrProvinceOfIssue field)
  { return isSetField(field); }
  public boolean isSetLegStateOrProvinceOfIssue()
  { return isSetField(597); }
  public void set(quickfix.field.LegLocaleOfIssue value)
  { setField(value); }
  public quickfix.field.LegLocaleOfIssue get(quickfix.field.LegLocaleOfIssue  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.LegLocaleOfIssue getLegLocaleOfIssue() throws FieldNotFound
  { quickfix.field.LegLocaleOfIssue value = new quickfix.field.LegLocaleOfIssue();
    getField(value); return value; }
  public boolean isSet(quickfix.field.LegLocaleOfIssue field)
  { return isSetField(field); }
  public boolean isSetLegLocaleOfIssue()
  { return isSetField(598); }
  public void set(quickfix.field.LegRedemptionDate value)
  { setField(value); }
  public quickfix.field.LegRedemptionDate get(quickfix.field.LegRedemptionDate  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.LegRedemptionDate getLegRedemptionDate() throws FieldNotFound
  { quickfix.field.LegRedemptionDate value = new quickfix.field.LegRedemptionDate();
    getField(value); return value; }
  public boolean isSet(quickfix.field.LegRedemptionDate field)
  { return isSetField(field); }
  public boolean isSetLegRedemptionDate()
  { return isSetField(254); }
  public void set(quickfix.field.LegStrikePrice value)
  { setField(value); }
  public quickfix.field.LegStrikePrice get(quickfix.field.LegStrikePrice  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.LegStrikePrice getLegStrikePrice() throws FieldNotFound
  { quickfix.field.LegStrikePrice value = new quickfix.field.LegStrikePrice();
    getField(value); return value; }
  public boolean isSet(quickfix.field.LegStrikePrice field)
  { return isSetField(field); }
  public boolean isSetLegStrikePrice()
  { return isSetField(612); }
  public void set(quickfix.field.LegStrikeCurrency value)
  { setField(value); }
  public quickfix.field.LegStrikeCurrency get(quickfix.field.LegStrikeCurrency  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.LegStrikeCurrency getLegStrikeCurrency() throws FieldNotFound
  { quickfix.field.LegStrikeCurrency value = new quickfix.field.LegStrikeCurrency();
    getField(value); return value; }
  public boolean isSet(quickfix.field.LegStrikeCurrency field)
  { return isSetField(field); }
  public boolean isSetLegStrikeCurrency()
  { return isSetField(942); }
  public void set(quickfix.field.LegOptAttribute value)
  { setField(value); }
  public quickfix.field.LegOptAttribute get(quickfix.field.LegOptAttribute  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.LegOptAttribute getLegOptAttribute() throws FieldNotFound
  { quickfix.field.LegOptAttribute value = new quickfix.field.LegOptAttribute();
    getField(value); return value; }
  public boolean isSet(quickfix.field.LegOptAttribute field)
  { return isSetField(field); }
  public boolean isSetLegOptAttribute()
  { return isSetField(613); }
  public void set(quickfix.field.LegContractMultiplier value)
  { setField(value); }
  public quickfix.field.LegContractMultiplier get(quickfix.field.LegContractMultiplier  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.LegContractMultiplier getLegContractMultiplier() throws FieldNotFound
  { quickfix.field.LegContractMultiplier value = new quickfix.field.LegContractMultiplier();
    getField(value); return value; }
  public boolean isSet(quickfix.field.LegContractMultiplier field)
  { return isSetField(field); }
  public boolean isSetLegContractMultiplier()
  { return isSetField(614); }
  public void set(quickfix.field.LegCouponRate value)
  { setField(value); }
  public quickfix.field.LegCouponRate get(quickfix.field.LegCouponRate  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.LegCouponRate getLegCouponRate() throws FieldNotFound
  { quickfix.field.LegCouponRate value = new quickfix.field.LegCouponRate();
    getField(value); return value; }
  public boolean isSet(quickfix.field.LegCouponRate field)
  { return isSetField(field); }
  public boolean isSetLegCouponRate()
  { return isSetField(615); }
  public void set(quickfix.field.LegSecurityExchange value)
  { setField(value); }
  public quickfix.field.LegSecurityExchange get(quickfix.field.LegSecurityExchange  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.LegSecurityExchange getLegSecurityExchange() throws FieldNotFound
  { quickfix.field.LegSecurityExchange value = new quickfix.field.LegSecurityExchange();
    getField(value); return value; }
  public boolean isSet(quickfix.field.LegSecurityExchange field)
  { return isSetField(field); }
  public boolean isSetLegSecurityExchange()
  { return isSetField(616); }
  public void set(quickfix.field.LegIssuer value)
  { setField(value); }
  public quickfix.field.LegIssuer get(quickfix.field.LegIssuer  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.LegIssuer getLegIssuer() throws FieldNotFound
  { quickfix.field.LegIssuer value = new quickfix.field.LegIssuer();
    getField(value); return value; }
  public boolean isSet(quickfix.field.LegIssuer field)
  { return isSetField(field); }
  public boolean isSetLegIssuer()
  { return isSetField(617); }
  public void set(quickfix.field.EncodedLegIssuerLen value)
  { setField(value); }
  public quickfix.field.EncodedLegIssuerLen get(quickfix.field.EncodedLegIssuerLen  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.EncodedLegIssuerLen getEncodedLegIssuerLen() throws FieldNotFound
  { quickfix.field.EncodedLegIssuerLen value = new quickfix.field.EncodedLegIssuerLen();
    getField(value); return value; }
  public boolean isSet(quickfix.field.EncodedLegIssuerLen field)
  { return isSetField(field); }
  public boolean isSetEncodedLegIssuerLen()
  { return isSetField(618); }
  public void set(quickfix.field.EncodedLegIssuer value)
  { setField(value); }
  public quickfix.field.EncodedLegIssuer get(quickfix.field.EncodedLegIssuer  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.EncodedLegIssuer getEncodedLegIssuer() throws FieldNotFound
  { quickfix.field.EncodedLegIssuer value = new quickfix.field.EncodedLegIssuer();
    getField(value); return value; }
  public boolean isSet(quickfix.field.EncodedLegIssuer field)
  { return isSetField(field); }
  public boolean isSetEncodedLegIssuer()
  { return isSetField(619); }
  public void set(quickfix.field.LegSecurityDesc value)
  { setField(value); }
  public quickfix.field.LegSecurityDesc get(quickfix.field.LegSecurityDesc  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.LegSecurityDesc getLegSecurityDesc() throws FieldNotFound
  { quickfix.field.LegSecurityDesc value = new quickfix.field.LegSecurityDesc();
    getField(value); return value; }
  public boolean isSet(quickfix.field.LegSecurityDesc field)
  { return isSetField(field); }
  public boolean isSetLegSecurityDesc()
  { return isSetField(620); }
  public void set(quickfix.field.EncodedLegSecurityDescLen value)
  { setField(value); }
  public quickfix.field.EncodedLegSecurityDescLen get(quickfix.field.EncodedLegSecurityDescLen  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.EncodedLegSecurityDescLen getEncodedLegSecurityDescLen() throws FieldNotFound
  { quickfix.field.EncodedLegSecurityDescLen value = new quickfix.field.EncodedLegSecurityDescLen();
    getField(value); return value; }
  public boolean isSet(quickfix.field.EncodedLegSecurityDescLen field)
  { return isSetField(field); }
  public boolean isSetEncodedLegSecurityDescLen()
  { return isSetField(621); }
  public void set(quickfix.field.EncodedLegSecurityDesc value)
  { setField(value); }
  public quickfix.field.EncodedLegSecurityDesc get(quickfix.field.EncodedLegSecurityDesc  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.EncodedLegSecurityDesc getEncodedLegSecurityDesc() throws FieldNotFound
  { quickfix.field.EncodedLegSecurityDesc value = new quickfix.field.EncodedLegSecurityDesc();
    getField(value); return value; }
  public boolean isSet(quickfix.field.EncodedLegSecurityDesc field)
  { return isSetField(field); }
  public boolean isSetEncodedLegSecurityDesc()
  { return isSetField(622); }
  public void set(quickfix.field.LegRatioQty value)
  { setField(value); }
  public quickfix.field.LegRatioQty get(quickfix.field.LegRatioQty  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.LegRatioQty getLegRatioQty() throws FieldNotFound
  { quickfix.field.LegRatioQty value = new quickfix.field.LegRatioQty();
    getField(value); return value; }
  public boolean isSet(quickfix.field.LegRatioQty field)
  { return isSetField(field); }
  public boolean isSetLegRatioQty()
  { return isSetField(623); }
  public void set(quickfix.field.LegSide value)
  { setField(value); }
  public quickfix.field.LegSide get(quickfix.field.LegSide  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.LegSide getLegSide() throws FieldNotFound
  { quickfix.field.LegSide value = new quickfix.field.LegSide();
    getField(value); return value; }
  public boolean isSet(quickfix.field.LegSide field)
  { return isSetField(field); }
  public boolean isSetLegSide()
  { return isSetField(624); }
  public void set(quickfix.field.LegCurrency value)
  { setField(value); }
  public quickfix.field.LegCurrency get(quickfix.field.LegCurrency  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.LegCurrency getLegCurrency() throws FieldNotFound
  { quickfix.field.LegCurrency value = new quickfix.field.LegCurrency();
    getField(value); return value; }
  public boolean isSet(quickfix.field.LegCurrency field)
  { return isSetField(field); }
  public boolean isSetLegCurrency()
  { return isSetField(556); }
  public void set(quickfix.field.LegPool value)
  { setField(value); }
  public quickfix.field.LegPool get(quickfix.field.LegPool  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.LegPool getLegPool() throws FieldNotFound
  { quickfix.field.LegPool value = new quickfix.field.LegPool();
    getField(value); return value; }
  public boolean isSet(quickfix.field.LegPool field)
  { return isSetField(field); }
  public boolean isSetLegPool()
  { return isSetField(740); }
  public void set(quickfix.field.LegDatedDate value)
  { setField(value); }
  public quickfix.field.LegDatedDate get(quickfix.field.LegDatedDate  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.LegDatedDate getLegDatedDate() throws FieldNotFound
  { quickfix.field.LegDatedDate value = new quickfix.field.LegDatedDate();
    getField(value); return value; }
  public boolean isSet(quickfix.field.LegDatedDate field)
  { return isSetField(field); }
  public boolean isSetLegDatedDate()
  { return isSetField(739); }
  public void set(quickfix.field.LegContractSettlMonth value)
  { setField(value); }
  public quickfix.field.LegContractSettlMonth get(quickfix.field.LegContractSettlMonth  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.LegContractSettlMonth getLegContractSettlMonth() throws FieldNotFound
  { quickfix.field.LegContractSettlMonth value = new quickfix.field.LegContractSettlMonth();
    getField(value); return value; }
  public boolean isSet(quickfix.field.LegContractSettlMonth field)
  { return isSetField(field); }
  public boolean isSetLegContractSettlMonth()
  { return isSetField(955); }
  public void set(quickfix.field.LegInterestAccrualDate value)
  { setField(value); }
  public quickfix.field.LegInterestAccrualDate get(quickfix.field.LegInterestAccrualDate  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.LegInterestAccrualDate getLegInterestAccrualDate() throws FieldNotFound
  { quickfix.field.LegInterestAccrualDate value = new quickfix.field.LegInterestAccrualDate();
    getField(value); return value; }
  public boolean isSet(quickfix.field.LegInterestAccrualDate field)
  { return isSetField(field); }
  public boolean isSetLegInterestAccrualDate()
  { return isSetField(956); }
  public void set(quickfix.field.LegUnitofMeasure value)
  { setField(value); }
  public quickfix.field.LegUnitofMeasure get(quickfix.field.LegUnitofMeasure  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.LegUnitofMeasure getLegUnitofMeasure() throws FieldNotFound
  { quickfix.field.LegUnitofMeasure value = new quickfix.field.LegUnitofMeasure();
    getField(value); return value; }
  public boolean isSet(quickfix.field.LegUnitofMeasure field)
  { return isSetField(field); }
  public boolean isSetLegUnitofMeasure()
  { return isSetField(999); }
  public void set(quickfix.field.LegTimeUnit value)
  { setField(value); }
  public quickfix.field.LegTimeUnit get(quickfix.field.LegTimeUnit  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.LegTimeUnit getLegTimeUnit() throws FieldNotFound
  { quickfix.field.LegTimeUnit value = new quickfix.field.LegTimeUnit();
    getField(value); return value; }
  public boolean isSet(quickfix.field.LegTimeUnit field)
  { return isSetField(field); }
  public boolean isSetLegTimeUnit()
  { return isSetField(1001); }
}
  public void set(quickfix.field.Quantity value)
  { setField(value); }
  public quickfix.field.Quantity get(quickfix.field.Quantity  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.Quantity getQuantity() throws FieldNotFound
  { quickfix.field.Quantity value = new quickfix.field.Quantity();
    getField(value); return value; }
  public boolean isSet(quickfix.field.Quantity field)
  { return isSetField(field); }
  public boolean isSetQuantity()
  { return isSetField(53); }
  public void set(quickfix.field.QtyType value)
  { setField(value); }
  public quickfix.field.QtyType get(quickfix.field.QtyType  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.QtyType getQtyType() throws FieldNotFound
  { quickfix.field.QtyType value = new quickfix.field.QtyType();
    getField(value); return value; }
  public boolean isSet(quickfix.field.QtyType field)
  { return isSetField(field); }
  public boolean isSetQtyType()
  { return isSetField(854); }
  public void set(quickfix.field.LastMkt value)
  { setField(value); }
  public quickfix.field.LastMkt get(quickfix.field.LastMkt  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.LastMkt getLastMkt() throws FieldNotFound
  { quickfix.field.LastMkt value = new quickfix.field.LastMkt();
    getField(value); return value; }
  public boolean isSet(quickfix.field.LastMkt field)
  { return isSetField(field); }
  public boolean isSetLastMkt()
  { return isSetField(30); }
  public void set(quickfix.field.TradeOriginationDate value)
  { setField(value); }
  public quickfix.field.TradeOriginationDate get(quickfix.field.TradeOriginationDate  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.TradeOriginationDate getTradeOriginationDate() throws FieldNotFound
  { quickfix.field.TradeOriginationDate value = new quickfix.field.TradeOriginationDate();
    getField(value); return value; }
  public boolean isSet(quickfix.field.TradeOriginationDate field)
  { return isSetField(field); }
  public boolean isSetTradeOriginationDate()
  { return isSetField(229); }
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
  public void set(quickfix.field.PriceType value)
  { setField(value); }
  public quickfix.field.PriceType get(quickfix.field.PriceType  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.PriceType getPriceType() throws FieldNotFound
  { quickfix.field.PriceType value = new quickfix.field.PriceType();
    getField(value); return value; }
  public boolean isSet(quickfix.field.PriceType field)
  { return isSetField(field); }
  public boolean isSetPriceType()
  { return isSetField(423); }
  public void set(quickfix.field.AvgPx value)
  { setField(value); }
  public quickfix.field.AvgPx get(quickfix.field.AvgPx  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.AvgPx getAvgPx() throws FieldNotFound
  { quickfix.field.AvgPx value = new quickfix.field.AvgPx();
    getField(value); return value; }
  public boolean isSet(quickfix.field.AvgPx field)
  { return isSetField(field); }
  public boolean isSetAvgPx()
  { return isSetField(6); }
  public void set(quickfix.field.AvgParPx value)
  { setField(value); }
  public quickfix.field.AvgParPx get(quickfix.field.AvgParPx  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.AvgParPx getAvgParPx() throws FieldNotFound
  { quickfix.field.AvgParPx value = new quickfix.field.AvgParPx();
    getField(value); return value; }
  public boolean isSet(quickfix.field.AvgParPx field)
  { return isSetField(field); }
  public boolean isSetAvgParPx()
  { return isSetField(860); }
  public void set(quickfix.field.Spread value)
  { setField(value); }
  public quickfix.field.Spread get(quickfix.field.Spread  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.Spread getSpread() throws FieldNotFound
  { quickfix.field.Spread value = new quickfix.field.Spread();
    getField(value); return value; }
  public boolean isSet(quickfix.field.Spread field)
  { return isSetField(field); }
  public boolean isSetSpread()
  { return isSetField(218); }
  public void set(quickfix.field.BenchmarkCurveCurrency value)
  { setField(value); }
  public quickfix.field.BenchmarkCurveCurrency get(quickfix.field.BenchmarkCurveCurrency  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.BenchmarkCurveCurrency getBenchmarkCurveCurrency() throws FieldNotFound
  { quickfix.field.BenchmarkCurveCurrency value = new quickfix.field.BenchmarkCurveCurrency();
    getField(value); return value; }
  public boolean isSet(quickfix.field.BenchmarkCurveCurrency field)
  { return isSetField(field); }
  public boolean isSetBenchmarkCurveCurrency()
  { return isSetField(220); }
  public void set(quickfix.field.BenchmarkCurveName value)
  { setField(value); }
  public quickfix.field.BenchmarkCurveName get(quickfix.field.BenchmarkCurveName  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.BenchmarkCurveName getBenchmarkCurveName() throws FieldNotFound
  { quickfix.field.BenchmarkCurveName value = new quickfix.field.BenchmarkCurveName();
    getField(value); return value; }
  public boolean isSet(quickfix.field.BenchmarkCurveName field)
  { return isSetField(field); }
  public boolean isSetBenchmarkCurveName()
  { return isSetField(221); }
  public void set(quickfix.field.BenchmarkCurvePoint value)
  { setField(value); }
  public quickfix.field.BenchmarkCurvePoint get(quickfix.field.BenchmarkCurvePoint  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.BenchmarkCurvePoint getBenchmarkCurvePoint() throws FieldNotFound
  { quickfix.field.BenchmarkCurvePoint value = new quickfix.field.BenchmarkCurvePoint();
    getField(value); return value; }
  public boolean isSet(quickfix.field.BenchmarkCurvePoint field)
  { return isSetField(field); }
  public boolean isSetBenchmarkCurvePoint()
  { return isSetField(222); }
  public void set(quickfix.field.BenchmarkPrice value)
  { setField(value); }
  public quickfix.field.BenchmarkPrice get(quickfix.field.BenchmarkPrice  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.BenchmarkPrice getBenchmarkPrice() throws FieldNotFound
  { quickfix.field.BenchmarkPrice value = new quickfix.field.BenchmarkPrice();
    getField(value); return value; }
  public boolean isSet(quickfix.field.BenchmarkPrice field)
  { return isSetField(field); }
  public boolean isSetBenchmarkPrice()
  { return isSetField(662); }
  public void set(quickfix.field.BenchmarkPriceType value)
  { setField(value); }
  public quickfix.field.BenchmarkPriceType get(quickfix.field.BenchmarkPriceType  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.BenchmarkPriceType getBenchmarkPriceType() throws FieldNotFound
  { quickfix.field.BenchmarkPriceType value = new quickfix.field.BenchmarkPriceType();
    getField(value); return value; }
  public boolean isSet(quickfix.field.BenchmarkPriceType field)
  { return isSetField(field); }
  public boolean isSetBenchmarkPriceType()
  { return isSetField(663); }
  public void set(quickfix.field.BenchmarkSecurityID value)
  { setField(value); }
  public quickfix.field.BenchmarkSecurityID get(quickfix.field.BenchmarkSecurityID  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.BenchmarkSecurityID getBenchmarkSecurityID() throws FieldNotFound
  { quickfix.field.BenchmarkSecurityID value = new quickfix.field.BenchmarkSecurityID();
    getField(value); return value; }
  public boolean isSet(quickfix.field.BenchmarkSecurityID field)
  { return isSetField(field); }
  public boolean isSetBenchmarkSecurityID()
  { return isSetField(699); }
  public void set(quickfix.field.BenchmarkSecurityIDSource value)
  { setField(value); }
  public quickfix.field.BenchmarkSecurityIDSource get(quickfix.field.BenchmarkSecurityIDSource  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.BenchmarkSecurityIDSource getBenchmarkSecurityIDSource() throws FieldNotFound
  { quickfix.field.BenchmarkSecurityIDSource value = new quickfix.field.BenchmarkSecurityIDSource();
    getField(value); return value; }
  public boolean isSet(quickfix.field.BenchmarkSecurityIDSource field)
  { return isSetField(field); }
  public boolean isSetBenchmarkSecurityIDSource()
  { return isSetField(761); }
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
  public void set(quickfix.field.AvgPxPrecision value)
  { setField(value); }
  public quickfix.field.AvgPxPrecision get(quickfix.field.AvgPxPrecision  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.AvgPxPrecision getAvgPxPrecision() throws FieldNotFound
  { quickfix.field.AvgPxPrecision value = new quickfix.field.AvgPxPrecision();
    getField(value); return value; }
  public boolean isSet(quickfix.field.AvgPxPrecision field)
  { return isSetField(field); }
  public boolean isSetAvgPxPrecision()
  { return isSetField(74); }
  public void set(quickfix.field.NoPartyIDs value)
  { setField(value); }
  public quickfix.field.NoPartyIDs get(quickfix.field.NoPartyIDs  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.NoPartyIDs getNoPartyIDs() throws FieldNotFound
  { quickfix.field.NoPartyIDs value = new quickfix.field.NoPartyIDs();
    getField(value); return value; }
  public boolean isSet(quickfix.field.NoPartyIDs field)
  { return isSetField(field); }
  public boolean isSetNoPartyIDs()
  { return isSetField(453); }
  public static class NoPartyIDs extends Group {
    public NoPartyIDs() {
      super(453,448,
      new int[] {448,447,452,802,0 } ); }
  public void set(quickfix.field.PartyID value)
  { setField(value); }
  public quickfix.field.PartyID get(quickfix.field.PartyID  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.PartyID getPartyID() throws FieldNotFound
  { quickfix.field.PartyID value = new quickfix.field.PartyID();
    getField(value); return value; }
  public boolean isSet(quickfix.field.PartyID field)
  { return isSetField(field); }
  public boolean isSetPartyID()
  { return isSetField(448); }
  public void set(quickfix.field.PartyIDSource value)
  { setField(value); }
  public quickfix.field.PartyIDSource get(quickfix.field.PartyIDSource  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.PartyIDSource getPartyIDSource() throws FieldNotFound
  { quickfix.field.PartyIDSource value = new quickfix.field.PartyIDSource();
    getField(value); return value; }
  public boolean isSet(quickfix.field.PartyIDSource field)
  { return isSetField(field); }
  public boolean isSetPartyIDSource()
  { return isSetField(447); }
  public void set(quickfix.field.PartyRole value)
  { setField(value); }
  public quickfix.field.PartyRole get(quickfix.field.PartyRole  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.PartyRole getPartyRole() throws FieldNotFound
  { quickfix.field.PartyRole value = new quickfix.field.PartyRole();
    getField(value); return value; }
  public boolean isSet(quickfix.field.PartyRole field)
  { return isSetField(field); }
  public boolean isSetPartyRole()
  { return isSetField(452); }
  public void set(quickfix.field.NoPartySubIDs value)
  { setField(value); }
  public quickfix.field.NoPartySubIDs get(quickfix.field.NoPartySubIDs  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.NoPartySubIDs getNoPartySubIDs() throws FieldNotFound
  { quickfix.field.NoPartySubIDs value = new quickfix.field.NoPartySubIDs();
    getField(value); return value; }
  public boolean isSet(quickfix.field.NoPartySubIDs field)
  { return isSetField(field); }
  public boolean isSetNoPartySubIDs()
  { return isSetField(802); }
  public static class NoPartySubIDs extends Group {
    public NoPartySubIDs() {
      super(802,523,
      new int[] {523,803,0 } ); }
  public void set(quickfix.field.PartySubID value)
  { setField(value); }
  public quickfix.field.PartySubID get(quickfix.field.PartySubID  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.PartySubID getPartySubID() throws FieldNotFound
  { quickfix.field.PartySubID value = new quickfix.field.PartySubID();
    getField(value); return value; }
  public boolean isSet(quickfix.field.PartySubID field)
  { return isSetField(field); }
  public boolean isSetPartySubID()
  { return isSetField(523); }
  public void set(quickfix.field.PartySubIDType value)
  { setField(value); }
  public quickfix.field.PartySubIDType get(quickfix.field.PartySubIDType  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.PartySubIDType getPartySubIDType() throws FieldNotFound
  { quickfix.field.PartySubIDType value = new quickfix.field.PartySubIDType();
    getField(value); return value; }
  public boolean isSet(quickfix.field.PartySubIDType field)
  { return isSetField(field); }
  public boolean isSetPartySubIDType()
  { return isSetField(803); }
}
}
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
  public void set(quickfix.field.TransactTime value)
  { setField(value); }
  public quickfix.field.TransactTime get(quickfix.field.TransactTime  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.TransactTime getTransactTime() throws FieldNotFound
  { quickfix.field.TransactTime value = new quickfix.field.TransactTime();
    getField(value); return value; }
  public boolean isSet(quickfix.field.TransactTime field)
  { return isSetField(field); }
  public boolean isSetTransactTime()
  { return isSetField(60); }
  public void set(quickfix.field.SettlType value)
  { setField(value); }
  public quickfix.field.SettlType get(quickfix.field.SettlType  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.SettlType getSettlType() throws FieldNotFound
  { quickfix.field.SettlType value = new quickfix.field.SettlType();
    getField(value); return value; }
  public boolean isSet(quickfix.field.SettlType field)
  { return isSetField(field); }
  public boolean isSetSettlType()
  { return isSetField(63); }
  public void set(quickfix.field.SettlDate value)
  { setField(value); }
  public quickfix.field.SettlDate get(quickfix.field.SettlDate  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.SettlDate getSettlDate() throws FieldNotFound
  { quickfix.field.SettlDate value = new quickfix.field.SettlDate();
    getField(value); return value; }
  public boolean isSet(quickfix.field.SettlDate field)
  { return isSetField(field); }
  public boolean isSetSettlDate()
  { return isSetField(64); }
  public void set(quickfix.field.BookingType value)
  { setField(value); }
  public quickfix.field.BookingType get(quickfix.field.BookingType  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.BookingType getBookingType() throws FieldNotFound
  { quickfix.field.BookingType value = new quickfix.field.BookingType();
    getField(value); return value; }
  public boolean isSet(quickfix.field.BookingType field)
  { return isSetField(field); }
  public boolean isSetBookingType()
  { return isSetField(775); }
  public void set(quickfix.field.GrossTradeAmt value)
  { setField(value); }
  public quickfix.field.GrossTradeAmt get(quickfix.field.GrossTradeAmt  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.GrossTradeAmt getGrossTradeAmt() throws FieldNotFound
  { quickfix.field.GrossTradeAmt value = new quickfix.field.GrossTradeAmt();
    getField(value); return value; }
  public boolean isSet(quickfix.field.GrossTradeAmt field)
  { return isSetField(field); }
  public boolean isSetGrossTradeAmt()
  { return isSetField(381); }
  public void set(quickfix.field.Concession value)
  { setField(value); }
  public quickfix.field.Concession get(quickfix.field.Concession  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.Concession getConcession() throws FieldNotFound
  { quickfix.field.Concession value = new quickfix.field.Concession();
    getField(value); return value; }
  public boolean isSet(quickfix.field.Concession field)
  { return isSetField(field); }
  public boolean isSetConcession()
  { return isSetField(238); }
  public void set(quickfix.field.TotalTakedown value)
  { setField(value); }
  public quickfix.field.TotalTakedown get(quickfix.field.TotalTakedown  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.TotalTakedown getTotalTakedown() throws FieldNotFound
  { quickfix.field.TotalTakedown value = new quickfix.field.TotalTakedown();
    getField(value); return value; }
  public boolean isSet(quickfix.field.TotalTakedown field)
  { return isSetField(field); }
  public boolean isSetTotalTakedown()
  { return isSetField(237); }
  public void set(quickfix.field.NetMoney value)
  { setField(value); }
  public quickfix.field.NetMoney get(quickfix.field.NetMoney  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.NetMoney getNetMoney() throws FieldNotFound
  { quickfix.field.NetMoney value = new quickfix.field.NetMoney();
    getField(value); return value; }
  public boolean isSet(quickfix.field.NetMoney field)
  { return isSetField(field); }
  public boolean isSetNetMoney()
  { return isSetField(118); }
  public void set(quickfix.field.PositionEffect value)
  { setField(value); }
  public quickfix.field.PositionEffect get(quickfix.field.PositionEffect  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.PositionEffect getPositionEffect() throws FieldNotFound
  { quickfix.field.PositionEffect value = new quickfix.field.PositionEffect();
    getField(value); return value; }
  public boolean isSet(quickfix.field.PositionEffect field)
  { return isSetField(field); }
  public boolean isSetPositionEffect()
  { return isSetField(77); }
  public void set(quickfix.field.AutoAcceptIndicator value)
  { setField(value); }
  public quickfix.field.AutoAcceptIndicator get(quickfix.field.AutoAcceptIndicator  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.AutoAcceptIndicator getAutoAcceptIndicator() throws FieldNotFound
  { quickfix.field.AutoAcceptIndicator value = new quickfix.field.AutoAcceptIndicator();
    getField(value); return value; }
  public boolean isSet(quickfix.field.AutoAcceptIndicator field)
  { return isSetField(field); }
  public boolean isSetAutoAcceptIndicator()
  { return isSetField(754); }
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
  public void set(quickfix.field.NumDaysInterest value)
  { setField(value); }
  public quickfix.field.NumDaysInterest get(quickfix.field.NumDaysInterest  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.NumDaysInterest getNumDaysInterest() throws FieldNotFound
  { quickfix.field.NumDaysInterest value = new quickfix.field.NumDaysInterest();
    getField(value); return value; }
  public boolean isSet(quickfix.field.NumDaysInterest field)
  { return isSetField(field); }
  public boolean isSetNumDaysInterest()
  { return isSetField(157); }
  public void set(quickfix.field.AccruedInterestRate value)
  { setField(value); }
  public quickfix.field.AccruedInterestRate get(quickfix.field.AccruedInterestRate  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.AccruedInterestRate getAccruedInterestRate() throws FieldNotFound
  { quickfix.field.AccruedInterestRate value = new quickfix.field.AccruedInterestRate();
    getField(value); return value; }
  public boolean isSet(quickfix.field.AccruedInterestRate field)
  { return isSetField(field); }
  public boolean isSetAccruedInterestRate()
  { return isSetField(158); }
  public void set(quickfix.field.AccruedInterestAmt value)
  { setField(value); }
  public quickfix.field.AccruedInterestAmt get(quickfix.field.AccruedInterestAmt  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.AccruedInterestAmt getAccruedInterestAmt() throws FieldNotFound
  { quickfix.field.AccruedInterestAmt value = new quickfix.field.AccruedInterestAmt();
    getField(value); return value; }
  public boolean isSet(quickfix.field.AccruedInterestAmt field)
  { return isSetField(field); }
  public boolean isSetAccruedInterestAmt()
  { return isSetField(159); }
  public void set(quickfix.field.TotalAccruedInterestAmt value)
  { setField(value); }
  public quickfix.field.TotalAccruedInterestAmt get(quickfix.field.TotalAccruedInterestAmt  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.TotalAccruedInterestAmt getTotalAccruedInterestAmt() throws FieldNotFound
  { quickfix.field.TotalAccruedInterestAmt value = new quickfix.field.TotalAccruedInterestAmt();
    getField(value); return value; }
  public boolean isSet(quickfix.field.TotalAccruedInterestAmt field)
  { return isSetField(field); }
  public boolean isSetTotalAccruedInterestAmt()
  { return isSetField(540); }
  public void set(quickfix.field.InterestAtMaturity value)
  { setField(value); }
  public quickfix.field.InterestAtMaturity get(quickfix.field.InterestAtMaturity  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.InterestAtMaturity getInterestAtMaturity() throws FieldNotFound
  { quickfix.field.InterestAtMaturity value = new quickfix.field.InterestAtMaturity();
    getField(value); return value; }
  public boolean isSet(quickfix.field.InterestAtMaturity field)
  { return isSetField(field); }
  public boolean isSetInterestAtMaturity()
  { return isSetField(738); }
  public void set(quickfix.field.EndAccruedInterestAmt value)
  { setField(value); }
  public quickfix.field.EndAccruedInterestAmt get(quickfix.field.EndAccruedInterestAmt  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.EndAccruedInterestAmt getEndAccruedInterestAmt() throws FieldNotFound
  { quickfix.field.EndAccruedInterestAmt value = new quickfix.field.EndAccruedInterestAmt();
    getField(value); return value; }
  public boolean isSet(quickfix.field.EndAccruedInterestAmt field)
  { return isSetField(field); }
  public boolean isSetEndAccruedInterestAmt()
  { return isSetField(920); }
  public void set(quickfix.field.StartCash value)
  { setField(value); }
  public quickfix.field.StartCash get(quickfix.field.StartCash  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.StartCash getStartCash() throws FieldNotFound
  { quickfix.field.StartCash value = new quickfix.field.StartCash();
    getField(value); return value; }
  public boolean isSet(quickfix.field.StartCash field)
  { return isSetField(field); }
  public boolean isSetStartCash()
  { return isSetField(921); }
  public void set(quickfix.field.EndCash value)
  { setField(value); }
  public quickfix.field.EndCash get(quickfix.field.EndCash  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.EndCash getEndCash() throws FieldNotFound
  { quickfix.field.EndCash value = new quickfix.field.EndCash();
    getField(value); return value; }
  public boolean isSet(quickfix.field.EndCash field)
  { return isSetField(field); }
  public boolean isSetEndCash()
  { return isSetField(922); }
  public void set(quickfix.field.LegalConfirm value)
  { setField(value); }
  public quickfix.field.LegalConfirm get(quickfix.field.LegalConfirm  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.LegalConfirm getLegalConfirm() throws FieldNotFound
  { quickfix.field.LegalConfirm value = new quickfix.field.LegalConfirm();
    getField(value); return value; }
  public boolean isSet(quickfix.field.LegalConfirm field)
  { return isSetField(field); }
  public boolean isSetLegalConfirm()
  { return isSetField(650); }
  public void set(quickfix.field.NoStipulations value)
  { setField(value); }
  public quickfix.field.NoStipulations get(quickfix.field.NoStipulations  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.NoStipulations getNoStipulations() throws FieldNotFound
  { quickfix.field.NoStipulations value = new quickfix.field.NoStipulations();
    getField(value); return value; }
  public boolean isSet(quickfix.field.NoStipulations field)
  { return isSetField(field); }
  public boolean isSetNoStipulations()
  { return isSetField(232); }
  public static class NoStipulations extends Group {
    public NoStipulations() {
      super(232,233,
      new int[] {233,234,0 } ); }
  public void set(quickfix.field.StipulationType value)
  { setField(value); }
  public quickfix.field.StipulationType get(quickfix.field.StipulationType  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.StipulationType getStipulationType() throws FieldNotFound
  { quickfix.field.StipulationType value = new quickfix.field.StipulationType();
    getField(value); return value; }
  public boolean isSet(quickfix.field.StipulationType field)
  { return isSetField(field); }
  public boolean isSetStipulationType()
  { return isSetField(233); }
  public void set(quickfix.field.StipulationValue value)
  { setField(value); }
  public quickfix.field.StipulationValue get(quickfix.field.StipulationValue  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.StipulationValue getStipulationValue() throws FieldNotFound
  { quickfix.field.StipulationValue value = new quickfix.field.StipulationValue();
    getField(value); return value; }
  public boolean isSet(quickfix.field.StipulationValue field)
  { return isSetField(field); }
  public boolean isSetStipulationValue()
  { return isSetField(234); }
}
  public void set(quickfix.field.YieldType value)
  { setField(value); }
  public quickfix.field.YieldType get(quickfix.field.YieldType  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.YieldType getYieldType() throws FieldNotFound
  { quickfix.field.YieldType value = new quickfix.field.YieldType();
    getField(value); return value; }
  public boolean isSet(quickfix.field.YieldType field)
  { return isSetField(field); }
  public boolean isSetYieldType()
  { return isSetField(235); }
  public void set(quickfix.field.Yield value)
  { setField(value); }
  public quickfix.field.Yield get(quickfix.field.Yield  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.Yield getYield() throws FieldNotFound
  { quickfix.field.Yield value = new quickfix.field.Yield();
    getField(value); return value; }
  public boolean isSet(quickfix.field.Yield field)
  { return isSetField(field); }
  public boolean isSetYield()
  { return isSetField(236); }
  public void set(quickfix.field.YieldCalcDate value)
  { setField(value); }
  public quickfix.field.YieldCalcDate get(quickfix.field.YieldCalcDate  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.YieldCalcDate getYieldCalcDate() throws FieldNotFound
  { quickfix.field.YieldCalcDate value = new quickfix.field.YieldCalcDate();
    getField(value); return value; }
  public boolean isSet(quickfix.field.YieldCalcDate field)
  { return isSetField(field); }
  public boolean isSetYieldCalcDate()
  { return isSetField(701); }
  public void set(quickfix.field.YieldRedemptionDate value)
  { setField(value); }
  public quickfix.field.YieldRedemptionDate get(quickfix.field.YieldRedemptionDate  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.YieldRedemptionDate getYieldRedemptionDate() throws FieldNotFound
  { quickfix.field.YieldRedemptionDate value = new quickfix.field.YieldRedemptionDate();
    getField(value); return value; }
  public boolean isSet(quickfix.field.YieldRedemptionDate field)
  { return isSetField(field); }
  public boolean isSetYieldRedemptionDate()
  { return isSetField(696); }
  public void set(quickfix.field.YieldRedemptionPrice value)
  { setField(value); }
  public quickfix.field.YieldRedemptionPrice get(quickfix.field.YieldRedemptionPrice  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.YieldRedemptionPrice getYieldRedemptionPrice() throws FieldNotFound
  { quickfix.field.YieldRedemptionPrice value = new quickfix.field.YieldRedemptionPrice();
    getField(value); return value; }
  public boolean isSet(quickfix.field.YieldRedemptionPrice field)
  { return isSetField(field); }
  public boolean isSetYieldRedemptionPrice()
  { return isSetField(697); }
  public void set(quickfix.field.YieldRedemptionPriceType value)
  { setField(value); }
  public quickfix.field.YieldRedemptionPriceType get(quickfix.field.YieldRedemptionPriceType  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.YieldRedemptionPriceType getYieldRedemptionPriceType() throws FieldNotFound
  { quickfix.field.YieldRedemptionPriceType value = new quickfix.field.YieldRedemptionPriceType();
    getField(value); return value; }
  public boolean isSet(quickfix.field.YieldRedemptionPriceType field)
  { return isSetField(field); }
  public boolean isSetYieldRedemptionPriceType()
  { return isSetField(698); }
  public void set(quickfix.field.NoPosAmt value)
  { setField(value); }
  public quickfix.field.NoPosAmt get(quickfix.field.NoPosAmt  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.NoPosAmt getNoPosAmt() throws FieldNotFound
  { quickfix.field.NoPosAmt value = new quickfix.field.NoPosAmt();
    getField(value); return value; }
  public boolean isSet(quickfix.field.NoPosAmt field)
  { return isSetField(field); }
  public boolean isSetNoPosAmt()
  { return isSetField(753); }
  public static class NoPosAmt extends Group {
    public NoPosAmt() {
      super(753,707,
      new int[] {707,708,1055,0 } ); }
  public void set(quickfix.field.PosAmtType value)
  { setField(value); }
  public quickfix.field.PosAmtType get(quickfix.field.PosAmtType  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.PosAmtType getPosAmtType() throws FieldNotFound
  { quickfix.field.PosAmtType value = new quickfix.field.PosAmtType();
    getField(value); return value; }
  public boolean isSet(quickfix.field.PosAmtType field)
  { return isSetField(field); }
  public boolean isSetPosAmtType()
  { return isSetField(707); }
  public void set(quickfix.field.PosAmt value)
  { setField(value); }
  public quickfix.field.PosAmt get(quickfix.field.PosAmt  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.PosAmt getPosAmt() throws FieldNotFound
  { quickfix.field.PosAmt value = new quickfix.field.PosAmt();
    getField(value); return value; }
  public boolean isSet(quickfix.field.PosAmt field)
  { return isSetField(field); }
  public boolean isSetPosAmt()
  { return isSetField(708); }
  public void set(quickfix.field.PositionCurrency value)
  { setField(value); }
  public quickfix.field.PositionCurrency get(quickfix.field.PositionCurrency  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.PositionCurrency getPositionCurrency() throws FieldNotFound
  { quickfix.field.PositionCurrency value = new quickfix.field.PositionCurrency();
    getField(value); return value; }
  public boolean isSet(quickfix.field.PositionCurrency field)
  { return isSetField(field); }
  public boolean isSetPositionCurrency()
  { return isSetField(1055); }
}
  public void set(quickfix.field.TotNoAllocs value)
  { setField(value); }
  public quickfix.field.TotNoAllocs get(quickfix.field.TotNoAllocs  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.TotNoAllocs getTotNoAllocs() throws FieldNotFound
  { quickfix.field.TotNoAllocs value = new quickfix.field.TotNoAllocs();
    getField(value); return value; }
  public boolean isSet(quickfix.field.TotNoAllocs field)
  { return isSetField(field); }
  public boolean isSetTotNoAllocs()
  { return isSetField(892); }
  public void set(quickfix.field.LastFragment value)
  { setField(value); }
  public quickfix.field.LastFragment get(quickfix.field.LastFragment  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.LastFragment getLastFragment() throws FieldNotFound
  { quickfix.field.LastFragment value = new quickfix.field.LastFragment();
    getField(value); return value; }
  public boolean isSet(quickfix.field.LastFragment field)
  { return isSetField(field); }
  public boolean isSetLastFragment()
  { return isSetField(893); }
  public void set(quickfix.field.NoAllocs value)
  { setField(value); }
  public quickfix.field.NoAllocs get(quickfix.field.NoAllocs  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.NoAllocs getNoAllocs() throws FieldNotFound
  { quickfix.field.NoAllocs value = new quickfix.field.NoAllocs();
    getField(value); return value; }
  public boolean isSet(quickfix.field.NoAllocs field)
  { return isSetField(field); }
  public boolean isSetNoAllocs()
  { return isSetField(78); }
  public static class NoAllocs extends Group {
    public NoAllocs() {
      super(78,79,
      new int[] {79,661,573,366,80,467,81,539,208,209,161,360,361,12,13,479,497,153,154,119,737,120,736,155,156,742,741,136,576,780,172,169,170,171,989,1002,993,992,1047,635,0 } ); }
  public void set(quickfix.field.AllocAccount value)
  { setField(value); }
  public quickfix.field.AllocAccount get(quickfix.field.AllocAccount  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.AllocAccount getAllocAccount() throws FieldNotFound
  { quickfix.field.AllocAccount value = new quickfix.field.AllocAccount();
    getField(value); return value; }
  public boolean isSet(quickfix.field.AllocAccount field)
  { return isSetField(field); }
  public boolean isSetAllocAccount()
  { return isSetField(79); }
  public void set(quickfix.field.AllocAcctIDSource value)
  { setField(value); }
  public quickfix.field.AllocAcctIDSource get(quickfix.field.AllocAcctIDSource  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.AllocAcctIDSource getAllocAcctIDSource() throws FieldNotFound
  { quickfix.field.AllocAcctIDSource value = new quickfix.field.AllocAcctIDSource();
    getField(value); return value; }
  public boolean isSet(quickfix.field.AllocAcctIDSource field)
  { return isSetField(field); }
  public boolean isSetAllocAcctIDSource()
  { return isSetField(661); }
  public void set(quickfix.field.MatchStatus value)
  { setField(value); }
  public quickfix.field.MatchStatus get(quickfix.field.MatchStatus  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.MatchStatus getMatchStatus() throws FieldNotFound
  { quickfix.field.MatchStatus value = new quickfix.field.MatchStatus();
    getField(value); return value; }
  public boolean isSet(quickfix.field.MatchStatus field)
  { return isSetField(field); }
  public boolean isSetMatchStatus()
  { return isSetField(573); }
  public void set(quickfix.field.AllocPrice value)
  { setField(value); }
  public quickfix.field.AllocPrice get(quickfix.field.AllocPrice  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.AllocPrice getAllocPrice() throws FieldNotFound
  { quickfix.field.AllocPrice value = new quickfix.field.AllocPrice();
    getField(value); return value; }
  public boolean isSet(quickfix.field.AllocPrice field)
  { return isSetField(field); }
  public boolean isSetAllocPrice()
  { return isSetField(366); }
  public void set(quickfix.field.AllocQty value)
  { setField(value); }
  public quickfix.field.AllocQty get(quickfix.field.AllocQty  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.AllocQty getAllocQty() throws FieldNotFound
  { quickfix.field.AllocQty value = new quickfix.field.AllocQty();
    getField(value); return value; }
  public boolean isSet(quickfix.field.AllocQty field)
  { return isSetField(field); }
  public boolean isSetAllocQty()
  { return isSetField(80); }
  public void set(quickfix.field.IndividualAllocID value)
  { setField(value); }
  public quickfix.field.IndividualAllocID get(quickfix.field.IndividualAllocID  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.IndividualAllocID getIndividualAllocID() throws FieldNotFound
  { quickfix.field.IndividualAllocID value = new quickfix.field.IndividualAllocID();
    getField(value); return value; }
  public boolean isSet(quickfix.field.IndividualAllocID field)
  { return isSetField(field); }
  public boolean isSetIndividualAllocID()
  { return isSetField(467); }
  public void set(quickfix.field.ProcessCode value)
  { setField(value); }
  public quickfix.field.ProcessCode get(quickfix.field.ProcessCode  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.ProcessCode getProcessCode() throws FieldNotFound
  { quickfix.field.ProcessCode value = new quickfix.field.ProcessCode();
    getField(value); return value; }
  public boolean isSet(quickfix.field.ProcessCode field)
  { return isSetField(field); }
  public boolean isSetProcessCode()
  { return isSetField(81); }
  public void set(quickfix.field.NoNestedPartyIDs value)
  { setField(value); }
  public quickfix.field.NoNestedPartyIDs get(quickfix.field.NoNestedPartyIDs  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.NoNestedPartyIDs getNoNestedPartyIDs() throws FieldNotFound
  { quickfix.field.NoNestedPartyIDs value = new quickfix.field.NoNestedPartyIDs();
    getField(value); return value; }
  public boolean isSet(quickfix.field.NoNestedPartyIDs field)
  { return isSetField(field); }
  public boolean isSetNoNestedPartyIDs()
  { return isSetField(539); }
  public static class NoNestedPartyIDs extends Group {
    public NoNestedPartyIDs() {
      super(539,524,
      new int[] {524,525,538,804,0 } ); }
  public void set(quickfix.field.NestedPartyID value)
  { setField(value); }
  public quickfix.field.NestedPartyID get(quickfix.field.NestedPartyID  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.NestedPartyID getNestedPartyID() throws FieldNotFound
  { quickfix.field.NestedPartyID value = new quickfix.field.NestedPartyID();
    getField(value); return value; }
  public boolean isSet(quickfix.field.NestedPartyID field)
  { return isSetField(field); }
  public boolean isSetNestedPartyID()
  { return isSetField(524); }
  public void set(quickfix.field.NestedPartyIDSource value)
  { setField(value); }
  public quickfix.field.NestedPartyIDSource get(quickfix.field.NestedPartyIDSource  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.NestedPartyIDSource getNestedPartyIDSource() throws FieldNotFound
  { quickfix.field.NestedPartyIDSource value = new quickfix.field.NestedPartyIDSource();
    getField(value); return value; }
  public boolean isSet(quickfix.field.NestedPartyIDSource field)
  { return isSetField(field); }
  public boolean isSetNestedPartyIDSource()
  { return isSetField(525); }
  public void set(quickfix.field.NestedPartyRole value)
  { setField(value); }
  public quickfix.field.NestedPartyRole get(quickfix.field.NestedPartyRole  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.NestedPartyRole getNestedPartyRole() throws FieldNotFound
  { quickfix.field.NestedPartyRole value = new quickfix.field.NestedPartyRole();
    getField(value); return value; }
  public boolean isSet(quickfix.field.NestedPartyRole field)
  { return isSetField(field); }
  public boolean isSetNestedPartyRole()
  { return isSetField(538); }
  public void set(quickfix.field.NoNestedPartySubIDs value)
  { setField(value); }
  public quickfix.field.NoNestedPartySubIDs get(quickfix.field.NoNestedPartySubIDs  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.NoNestedPartySubIDs getNoNestedPartySubIDs() throws FieldNotFound
  { quickfix.field.NoNestedPartySubIDs value = new quickfix.field.NoNestedPartySubIDs();
    getField(value); return value; }
  public boolean isSet(quickfix.field.NoNestedPartySubIDs field)
  { return isSetField(field); }
  public boolean isSetNoNestedPartySubIDs()
  { return isSetField(804); }
  public static class NoNestedPartySubIDs extends Group {
    public NoNestedPartySubIDs() {
      super(804,545,
      new int[] {545,805,0 } ); }
  public void set(quickfix.field.NestedPartySubID value)
  { setField(value); }
  public quickfix.field.NestedPartySubID get(quickfix.field.NestedPartySubID  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.NestedPartySubID getNestedPartySubID() throws FieldNotFound
  { quickfix.field.NestedPartySubID value = new quickfix.field.NestedPartySubID();
    getField(value); return value; }
  public boolean isSet(quickfix.field.NestedPartySubID field)
  { return isSetField(field); }
  public boolean isSetNestedPartySubID()
  { return isSetField(545); }
  public void set(quickfix.field.NestedPartySubIDType value)
  { setField(value); }
  public quickfix.field.NestedPartySubIDType get(quickfix.field.NestedPartySubIDType  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.NestedPartySubIDType getNestedPartySubIDType() throws FieldNotFound
  { quickfix.field.NestedPartySubIDType value = new quickfix.field.NestedPartySubIDType();
    getField(value); return value; }
  public boolean isSet(quickfix.field.NestedPartySubIDType field)
  { return isSetField(field); }
  public boolean isSetNestedPartySubIDType()
  { return isSetField(805); }
}
}
  public void set(quickfix.field.NotifyBrokerOfCredit value)
  { setField(value); }
  public quickfix.field.NotifyBrokerOfCredit get(quickfix.field.NotifyBrokerOfCredit  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.NotifyBrokerOfCredit getNotifyBrokerOfCredit() throws FieldNotFound
  { quickfix.field.NotifyBrokerOfCredit value = new quickfix.field.NotifyBrokerOfCredit();
    getField(value); return value; }
  public boolean isSet(quickfix.field.NotifyBrokerOfCredit field)
  { return isSetField(field); }
  public boolean isSetNotifyBrokerOfCredit()
  { return isSetField(208); }
  public void set(quickfix.field.AllocHandlInst value)
  { setField(value); }
  public quickfix.field.AllocHandlInst get(quickfix.field.AllocHandlInst  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.AllocHandlInst getAllocHandlInst() throws FieldNotFound
  { quickfix.field.AllocHandlInst value = new quickfix.field.AllocHandlInst();
    getField(value); return value; }
  public boolean isSet(quickfix.field.AllocHandlInst field)
  { return isSetField(field); }
  public boolean isSetAllocHandlInst()
  { return isSetField(209); }
  public void set(quickfix.field.AllocText value)
  { setField(value); }
  public quickfix.field.AllocText get(quickfix.field.AllocText  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.AllocText getAllocText() throws FieldNotFound
  { quickfix.field.AllocText value = new quickfix.field.AllocText();
    getField(value); return value; }
  public boolean isSet(quickfix.field.AllocText field)
  { return isSetField(field); }
  public boolean isSetAllocText()
  { return isSetField(161); }
  public void set(quickfix.field.EncodedAllocTextLen value)
  { setField(value); }
  public quickfix.field.EncodedAllocTextLen get(quickfix.field.EncodedAllocTextLen  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.EncodedAllocTextLen getEncodedAllocTextLen() throws FieldNotFound
  { quickfix.field.EncodedAllocTextLen value = new quickfix.field.EncodedAllocTextLen();
    getField(value); return value; }
  public boolean isSet(quickfix.field.EncodedAllocTextLen field)
  { return isSetField(field); }
  public boolean isSetEncodedAllocTextLen()
  { return isSetField(360); }
  public void set(quickfix.field.EncodedAllocText value)
  { setField(value); }
  public quickfix.field.EncodedAllocText get(quickfix.field.EncodedAllocText  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.EncodedAllocText getEncodedAllocText() throws FieldNotFound
  { quickfix.field.EncodedAllocText value = new quickfix.field.EncodedAllocText();
    getField(value); return value; }
  public boolean isSet(quickfix.field.EncodedAllocText field)
  { return isSetField(field); }
  public boolean isSetEncodedAllocText()
  { return isSetField(361); }
  public void set(quickfix.field.Commission value)
  { setField(value); }
  public quickfix.field.Commission get(quickfix.field.Commission  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.Commission getCommission() throws FieldNotFound
  { quickfix.field.Commission value = new quickfix.field.Commission();
    getField(value); return value; }
  public boolean isSet(quickfix.field.Commission field)
  { return isSetField(field); }
  public boolean isSetCommission()
  { return isSetField(12); }
  public void set(quickfix.field.CommType value)
  { setField(value); }
  public quickfix.field.CommType get(quickfix.field.CommType  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.CommType getCommType() throws FieldNotFound
  { quickfix.field.CommType value = new quickfix.field.CommType();
    getField(value); return value; }
  public boolean isSet(quickfix.field.CommType field)
  { return isSetField(field); }
  public boolean isSetCommType()
  { return isSetField(13); }
  public void set(quickfix.field.CommCurrency value)
  { setField(value); }
  public quickfix.field.CommCurrency get(quickfix.field.CommCurrency  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.CommCurrency getCommCurrency() throws FieldNotFound
  { quickfix.field.CommCurrency value = new quickfix.field.CommCurrency();
    getField(value); return value; }
  public boolean isSet(quickfix.field.CommCurrency field)
  { return isSetField(field); }
  public boolean isSetCommCurrency()
  { return isSetField(479); }
  public void set(quickfix.field.FundRenewWaiv value)
  { setField(value); }
  public quickfix.field.FundRenewWaiv get(quickfix.field.FundRenewWaiv  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.FundRenewWaiv getFundRenewWaiv() throws FieldNotFound
  { quickfix.field.FundRenewWaiv value = new quickfix.field.FundRenewWaiv();
    getField(value); return value; }
  public boolean isSet(quickfix.field.FundRenewWaiv field)
  { return isSetField(field); }
  public boolean isSetFundRenewWaiv()
  { return isSetField(497); }
  public void set(quickfix.field.AllocAvgPx value)
  { setField(value); }
  public quickfix.field.AllocAvgPx get(quickfix.field.AllocAvgPx  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.AllocAvgPx getAllocAvgPx() throws FieldNotFound
  { quickfix.field.AllocAvgPx value = new quickfix.field.AllocAvgPx();
    getField(value); return value; }
  public boolean isSet(quickfix.field.AllocAvgPx field)
  { return isSetField(field); }
  public boolean isSetAllocAvgPx()
  { return isSetField(153); }
  public void set(quickfix.field.AllocNetMoney value)
  { setField(value); }
  public quickfix.field.AllocNetMoney get(quickfix.field.AllocNetMoney  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.AllocNetMoney getAllocNetMoney() throws FieldNotFound
  { quickfix.field.AllocNetMoney value = new quickfix.field.AllocNetMoney();
    getField(value); return value; }
  public boolean isSet(quickfix.field.AllocNetMoney field)
  { return isSetField(field); }
  public boolean isSetAllocNetMoney()
  { return isSetField(154); }
  public void set(quickfix.field.SettlCurrAmt value)
  { setField(value); }
  public quickfix.field.SettlCurrAmt get(quickfix.field.SettlCurrAmt  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.SettlCurrAmt getSettlCurrAmt() throws FieldNotFound
  { quickfix.field.SettlCurrAmt value = new quickfix.field.SettlCurrAmt();
    getField(value); return value; }
  public boolean isSet(quickfix.field.SettlCurrAmt field)
  { return isSetField(field); }
  public boolean isSetSettlCurrAmt()
  { return isSetField(119); }
  public void set(quickfix.field.AllocSettlCurrAmt value)
  { setField(value); }
  public quickfix.field.AllocSettlCurrAmt get(quickfix.field.AllocSettlCurrAmt  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.AllocSettlCurrAmt getAllocSettlCurrAmt() throws FieldNotFound
  { quickfix.field.AllocSettlCurrAmt value = new quickfix.field.AllocSettlCurrAmt();
    getField(value); return value; }
  public boolean isSet(quickfix.field.AllocSettlCurrAmt field)
  { return isSetField(field); }
  public boolean isSetAllocSettlCurrAmt()
  { return isSetField(737); }
  public void set(quickfix.field.SettlCurrency value)
  { setField(value); }
  public quickfix.field.SettlCurrency get(quickfix.field.SettlCurrency  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.SettlCurrency getSettlCurrency() throws FieldNotFound
  { quickfix.field.SettlCurrency value = new quickfix.field.SettlCurrency();
    getField(value); return value; }
  public boolean isSet(quickfix.field.SettlCurrency field)
  { return isSetField(field); }
  public boolean isSetSettlCurrency()
  { return isSetField(120); }
  public void set(quickfix.field.AllocSettlCurrency value)
  { setField(value); }
  public quickfix.field.AllocSettlCurrency get(quickfix.field.AllocSettlCurrency  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.AllocSettlCurrency getAllocSettlCurrency() throws FieldNotFound
  { quickfix.field.AllocSettlCurrency value = new quickfix.field.AllocSettlCurrency();
    getField(value); return value; }
  public boolean isSet(quickfix.field.AllocSettlCurrency field)
  { return isSetField(field); }
  public boolean isSetAllocSettlCurrency()
  { return isSetField(736); }
  public void set(quickfix.field.SettlCurrFxRate value)
  { setField(value); }
  public quickfix.field.SettlCurrFxRate get(quickfix.field.SettlCurrFxRate  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.SettlCurrFxRate getSettlCurrFxRate() throws FieldNotFound
  { quickfix.field.SettlCurrFxRate value = new quickfix.field.SettlCurrFxRate();
    getField(value); return value; }
  public boolean isSet(quickfix.field.SettlCurrFxRate field)
  { return isSetField(field); }
  public boolean isSetSettlCurrFxRate()
  { return isSetField(155); }
  public void set(quickfix.field.SettlCurrFxRateCalc value)
  { setField(value); }
  public quickfix.field.SettlCurrFxRateCalc get(quickfix.field.SettlCurrFxRateCalc  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.SettlCurrFxRateCalc getSettlCurrFxRateCalc() throws FieldNotFound
  { quickfix.field.SettlCurrFxRateCalc value = new quickfix.field.SettlCurrFxRateCalc();
    getField(value); return value; }
  public boolean isSet(quickfix.field.SettlCurrFxRateCalc field)
  { return isSetField(field); }
  public boolean isSetSettlCurrFxRateCalc()
  { return isSetField(156); }
  public void set(quickfix.field.AllocAccruedInterestAmt value)
  { setField(value); }
  public quickfix.field.AllocAccruedInterestAmt get(quickfix.field.AllocAccruedInterestAmt  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.AllocAccruedInterestAmt getAllocAccruedInterestAmt() throws FieldNotFound
  { quickfix.field.AllocAccruedInterestAmt value = new quickfix.field.AllocAccruedInterestAmt();
    getField(value); return value; }
  public boolean isSet(quickfix.field.AllocAccruedInterestAmt field)
  { return isSetField(field); }
  public boolean isSetAllocAccruedInterestAmt()
  { return isSetField(742); }
  public void set(quickfix.field.AllocInterestAtMaturity value)
  { setField(value); }
  public quickfix.field.AllocInterestAtMaturity get(quickfix.field.AllocInterestAtMaturity  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.AllocInterestAtMaturity getAllocInterestAtMaturity() throws FieldNotFound
  { quickfix.field.AllocInterestAtMaturity value = new quickfix.field.AllocInterestAtMaturity();
    getField(value); return value; }
  public boolean isSet(quickfix.field.AllocInterestAtMaturity field)
  { return isSetField(field); }
  public boolean isSetAllocInterestAtMaturity()
  { return isSetField(741); }
  public void set(quickfix.field.NoMiscFees value)
  { setField(value); }
  public quickfix.field.NoMiscFees get(quickfix.field.NoMiscFees  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.NoMiscFees getNoMiscFees() throws FieldNotFound
  { quickfix.field.NoMiscFees value = new quickfix.field.NoMiscFees();
    getField(value); return value; }
  public boolean isSet(quickfix.field.NoMiscFees field)
  { return isSetField(field); }
  public boolean isSetNoMiscFees()
  { return isSetField(136); }
  public static class NoMiscFees extends Group {
    public NoMiscFees() {
      super(136,137,
      new int[] {137,138,139,891,0 } ); }
  public void set(quickfix.field.MiscFeeAmt value)
  { setField(value); }
  public quickfix.field.MiscFeeAmt get(quickfix.field.MiscFeeAmt  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.MiscFeeAmt getMiscFeeAmt() throws FieldNotFound
  { quickfix.field.MiscFeeAmt value = new quickfix.field.MiscFeeAmt();
    getField(value); return value; }
  public boolean isSet(quickfix.field.MiscFeeAmt field)
  { return isSetField(field); }
  public boolean isSetMiscFeeAmt()
  { return isSetField(137); }
  public void set(quickfix.field.MiscFeeCurr value)
  { setField(value); }
  public quickfix.field.MiscFeeCurr get(quickfix.field.MiscFeeCurr  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.MiscFeeCurr getMiscFeeCurr() throws FieldNotFound
  { quickfix.field.MiscFeeCurr value = new quickfix.field.MiscFeeCurr();
    getField(value); return value; }
  public boolean isSet(quickfix.field.MiscFeeCurr field)
  { return isSetField(field); }
  public boolean isSetMiscFeeCurr()
  { return isSetField(138); }
  public void set(quickfix.field.MiscFeeType value)
  { setField(value); }
  public quickfix.field.MiscFeeType get(quickfix.field.MiscFeeType  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.MiscFeeType getMiscFeeType() throws FieldNotFound
  { quickfix.field.MiscFeeType value = new quickfix.field.MiscFeeType();
    getField(value); return value; }
  public boolean isSet(quickfix.field.MiscFeeType field)
  { return isSetField(field); }
  public boolean isSetMiscFeeType()
  { return isSetField(139); }
  public void set(quickfix.field.MiscFeeBasis value)
  { setField(value); }
  public quickfix.field.MiscFeeBasis get(quickfix.field.MiscFeeBasis  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.MiscFeeBasis getMiscFeeBasis() throws FieldNotFound
  { quickfix.field.MiscFeeBasis value = new quickfix.field.MiscFeeBasis();
    getField(value); return value; }
  public boolean isSet(quickfix.field.MiscFeeBasis field)
  { return isSetField(field); }
  public boolean isSetMiscFeeBasis()
  { return isSetField(891); }
}
  public void set(quickfix.field.NoClearingInstructions value)
  { setField(value); }
  public quickfix.field.NoClearingInstructions get(quickfix.field.NoClearingInstructions  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.NoClearingInstructions getNoClearingInstructions() throws FieldNotFound
  { quickfix.field.NoClearingInstructions value = new quickfix.field.NoClearingInstructions();
    getField(value); return value; }
  public boolean isSet(quickfix.field.NoClearingInstructions field)
  { return isSetField(field); }
  public boolean isSetNoClearingInstructions()
  { return isSetField(576); }
  public static class NoClearingInstructions extends Group {
    public NoClearingInstructions() {
      super(576,577,
      new int[] {577,0 } ); }
  public void set(quickfix.field.ClearingInstruction value)
  { setField(value); }
  public quickfix.field.ClearingInstruction get(quickfix.field.ClearingInstruction  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.ClearingInstruction getClearingInstruction() throws FieldNotFound
  { quickfix.field.ClearingInstruction value = new quickfix.field.ClearingInstruction();
    getField(value); return value; }
  public boolean isSet(quickfix.field.ClearingInstruction field)
  { return isSetField(field); }
  public boolean isSetClearingInstruction()
  { return isSetField(577); }
}
  public void set(quickfix.field.AllocSettlInstType value)
  { setField(value); }
  public quickfix.field.AllocSettlInstType get(quickfix.field.AllocSettlInstType  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.AllocSettlInstType getAllocSettlInstType() throws FieldNotFound
  { quickfix.field.AllocSettlInstType value = new quickfix.field.AllocSettlInstType();
    getField(value); return value; }
  public boolean isSet(quickfix.field.AllocSettlInstType field)
  { return isSetField(field); }
  public boolean isSetAllocSettlInstType()
  { return isSetField(780); }
  public void set(quickfix.field.SettlDeliveryType value)
  { setField(value); }
  public quickfix.field.SettlDeliveryType get(quickfix.field.SettlDeliveryType  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.SettlDeliveryType getSettlDeliveryType() throws FieldNotFound
  { quickfix.field.SettlDeliveryType value = new quickfix.field.SettlDeliveryType();
    getField(value); return value; }
  public boolean isSet(quickfix.field.SettlDeliveryType field)
  { return isSetField(field); }
  public boolean isSetSettlDeliveryType()
  { return isSetField(172); }
  public void set(quickfix.field.StandInstDbType value)
  { setField(value); }
  public quickfix.field.StandInstDbType get(quickfix.field.StandInstDbType  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.StandInstDbType getStandInstDbType() throws FieldNotFound
  { quickfix.field.StandInstDbType value = new quickfix.field.StandInstDbType();
    getField(value); return value; }
  public boolean isSet(quickfix.field.StandInstDbType field)
  { return isSetField(field); }
  public boolean isSetStandInstDbType()
  { return isSetField(169); }
  public void set(quickfix.field.StandInstDbName value)
  { setField(value); }
  public quickfix.field.StandInstDbName get(quickfix.field.StandInstDbName  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.StandInstDbName getStandInstDbName() throws FieldNotFound
  { quickfix.field.StandInstDbName value = new quickfix.field.StandInstDbName();
    getField(value); return value; }
  public boolean isSet(quickfix.field.StandInstDbName field)
  { return isSetField(field); }
  public boolean isSetStandInstDbName()
  { return isSetField(170); }
  public void set(quickfix.field.StandInstDbID value)
  { setField(value); }
  public quickfix.field.StandInstDbID get(quickfix.field.StandInstDbID  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.StandInstDbID getStandInstDbID() throws FieldNotFound
  { quickfix.field.StandInstDbID value = new quickfix.field.StandInstDbID();
    getField(value); return value; }
  public boolean isSet(quickfix.field.StandInstDbID field)
  { return isSetField(field); }
  public boolean isSetStandInstDbID()
  { return isSetField(171); }
  public void set(quickfix.field.SecondaryIndividualAllocID value)
  { setField(value); }
  public quickfix.field.SecondaryIndividualAllocID get(quickfix.field.SecondaryIndividualAllocID  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.SecondaryIndividualAllocID getSecondaryIndividualAllocID() throws FieldNotFound
  { quickfix.field.SecondaryIndividualAllocID value = new quickfix.field.SecondaryIndividualAllocID();
    getField(value); return value; }
  public boolean isSet(quickfix.field.SecondaryIndividualAllocID field)
  { return isSetField(field); }
  public boolean isSetSecondaryIndividualAllocID()
  { return isSetField(989); }
  public void set(quickfix.field.AllocMethod value)
  { setField(value); }
  public quickfix.field.AllocMethod get(quickfix.field.AllocMethod  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.AllocMethod getAllocMethod() throws FieldNotFound
  { quickfix.field.AllocMethod value = new quickfix.field.AllocMethod();
    getField(value); return value; }
  public boolean isSet(quickfix.field.AllocMethod field)
  { return isSetField(field); }
  public boolean isSetAllocMethod()
  { return isSetField(1002); }
  public void set(quickfix.field.AllocCustomerCapacity value)
  { setField(value); }
  public quickfix.field.AllocCustomerCapacity get(quickfix.field.AllocCustomerCapacity  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.AllocCustomerCapacity getAllocCustomerCapacity() throws FieldNotFound
  { quickfix.field.AllocCustomerCapacity value = new quickfix.field.AllocCustomerCapacity();
    getField(value); return value; }
  public boolean isSet(quickfix.field.AllocCustomerCapacity field)
  { return isSetField(field); }
  public boolean isSetAllocCustomerCapacity()
  { return isSetField(993); }
  public void set(quickfix.field.IndividualAllocType value)
  { setField(value); }
  public quickfix.field.IndividualAllocType get(quickfix.field.IndividualAllocType  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.IndividualAllocType getIndividualAllocType() throws FieldNotFound
  { quickfix.field.IndividualAllocType value = new quickfix.field.IndividualAllocType();
    getField(value); return value; }
  public boolean isSet(quickfix.field.IndividualAllocType field)
  { return isSetField(field); }
  public boolean isSetIndividualAllocType()
  { return isSetField(992); }
  public void set(quickfix.field.AllocPositionEffect value)
  { setField(value); }
  public quickfix.field.AllocPositionEffect get(quickfix.field.AllocPositionEffect  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.AllocPositionEffect getAllocPositionEffect() throws FieldNotFound
  { quickfix.field.AllocPositionEffect value = new quickfix.field.AllocPositionEffect();
    getField(value); return value; }
  public boolean isSet(quickfix.field.AllocPositionEffect field)
  { return isSetField(field); }
  public boolean isSetAllocPositionEffect()
  { return isSetField(1047); }
  public void set(quickfix.field.ClearingFeeIndicator value)
  { setField(value); }
  public quickfix.field.ClearingFeeIndicator get(quickfix.field.ClearingFeeIndicator  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.ClearingFeeIndicator getClearingFeeIndicator() throws FieldNotFound
  { quickfix.field.ClearingFeeIndicator value = new quickfix.field.ClearingFeeIndicator();
    getField(value); return value; }
  public boolean isSet(quickfix.field.ClearingFeeIndicator field)
  { return isSetField(field); }
  public boolean isSetClearingFeeIndicator()
  { return isSetField(635); }
}
  public void set(quickfix.field.AvgPxIndicator value)
  { setField(value); }
  public quickfix.field.AvgPxIndicator get(quickfix.field.AvgPxIndicator  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.AvgPxIndicator getAvgPxIndicator() throws FieldNotFound
  { quickfix.field.AvgPxIndicator value = new quickfix.field.AvgPxIndicator();
    getField(value); return value; }
  public boolean isSet(quickfix.field.AvgPxIndicator field)
  { return isSetField(field); }
  public boolean isSetAvgPxIndicator()
  { return isSetField(819); }
  public void set(quickfix.field.ClearingBusinessDate value)
  { setField(value); }
  public quickfix.field.ClearingBusinessDate get(quickfix.field.ClearingBusinessDate  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.ClearingBusinessDate getClearingBusinessDate() throws FieldNotFound
  { quickfix.field.ClearingBusinessDate value = new quickfix.field.ClearingBusinessDate();
    getField(value); return value; }
  public boolean isSet(quickfix.field.ClearingBusinessDate field)
  { return isSetField(field); }
  public boolean isSetClearingBusinessDate()
  { return isSetField(715); }
  public void set(quickfix.field.TrdType value)
  { setField(value); }
  public quickfix.field.TrdType get(quickfix.field.TrdType  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.TrdType getTrdType() throws FieldNotFound
  { quickfix.field.TrdType value = new quickfix.field.TrdType();
    getField(value); return value; }
  public boolean isSet(quickfix.field.TrdType field)
  { return isSetField(field); }
  public boolean isSetTrdType()
  { return isSetField(828); }
  public void set(quickfix.field.TrdSubType value)
  { setField(value); }
  public quickfix.field.TrdSubType get(quickfix.field.TrdSubType  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.TrdSubType getTrdSubType() throws FieldNotFound
  { quickfix.field.TrdSubType value = new quickfix.field.TrdSubType();
    getField(value); return value; }
  public boolean isSet(quickfix.field.TrdSubType field)
  { return isSetField(field); }
  public boolean isSetTrdSubType()
  { return isSetField(829); }
  public void set(quickfix.field.CustOrderCapacity value)
  { setField(value); }
  public quickfix.field.CustOrderCapacity get(quickfix.field.CustOrderCapacity  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.CustOrderCapacity getCustOrderCapacity() throws FieldNotFound
  { quickfix.field.CustOrderCapacity value = new quickfix.field.CustOrderCapacity();
    getField(value); return value; }
  public boolean isSet(quickfix.field.CustOrderCapacity field)
  { return isSetField(field); }
  public boolean isSetCustOrderCapacity()
  { return isSetField(582); }
  public void set(quickfix.field.TradeInputSource value)
  { setField(value); }
  public quickfix.field.TradeInputSource get(quickfix.field.TradeInputSource  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.TradeInputSource getTradeInputSource() throws FieldNotFound
  { quickfix.field.TradeInputSource value = new quickfix.field.TradeInputSource();
    getField(value); return value; }
  public boolean isSet(quickfix.field.TradeInputSource field)
  { return isSetField(field); }
  public boolean isSetTradeInputSource()
  { return isSetField(578); }
  public void set(quickfix.field.MultiLegReportingType value)
  { setField(value); }
  public quickfix.field.MultiLegReportingType get(quickfix.field.MultiLegReportingType  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.MultiLegReportingType getMultiLegReportingType() throws FieldNotFound
  { quickfix.field.MultiLegReportingType value = new quickfix.field.MultiLegReportingType();
    getField(value); return value; }
  public boolean isSet(quickfix.field.MultiLegReportingType field)
  { return isSetField(field); }
  public boolean isSetMultiLegReportingType()
  { return isSetField(442); }
  public void set(quickfix.field.MessageEventSource value)
  { setField(value); }
  public quickfix.field.MessageEventSource get(quickfix.field.MessageEventSource  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.MessageEventSource getMessageEventSource() throws FieldNotFound
  { quickfix.field.MessageEventSource value = new quickfix.field.MessageEventSource();
    getField(value); return value; }
  public boolean isSet(quickfix.field.MessageEventSource field)
  { return isSetField(field); }
  public boolean isSetMessageEventSource()
  { return isSetField(1011); }
  public void set(quickfix.field.RndPx value)
  { setField(value); }
  public quickfix.field.RndPx get(quickfix.field.RndPx  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.RndPx getRndPx() throws FieldNotFound
  { quickfix.field.RndPx value = new quickfix.field.RndPx();
    getField(value); return value; }
  public boolean isSet(quickfix.field.RndPx field)
  { return isSetField(field); }
  public boolean isSetRndPx()
  { return isSetField(991); }
}


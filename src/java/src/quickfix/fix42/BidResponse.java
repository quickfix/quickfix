package quickfix.fix42;
import quickfix.FieldNotFound;
import quickfix.Group;
import quickfix.field.*;

public class BidResponse extends Message
{
  public BidResponse()
  {
    getHeader().setField(new MsgType("l"));
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
      super(420,12,
      new int[] {12,13,66,421,54,44,423,406,430,63,64,336,58,354,355,0 } ); }
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
  public void set(quickfix.field.Country value)
  { setField(value); }
  public quickfix.field.Country get(quickfix.field.Country  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.Country getCountry() throws FieldNotFound
  { quickfix.field.Country value = new quickfix.field.Country();
    getField(value); return value; }
  public boolean isSet(quickfix.field.Country field)
  { return isSetField(field); }
  public boolean isSetCountry()
  { return isSetField(421); }
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
  public void set(quickfix.field.Price value)
  { setField(value); }
  public quickfix.field.Price get(quickfix.field.Price  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.Price getPrice() throws FieldNotFound
  { quickfix.field.Price value = new quickfix.field.Price();
    getField(value); return value; }
  public boolean isSet(quickfix.field.Price field)
  { return isSetField(field); }
  public boolean isSetPrice()
  { return isSetField(44); }
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
}
}


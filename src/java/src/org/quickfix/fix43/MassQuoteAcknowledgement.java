package org.quickfix.fix43; 
import org.quickfix.FieldNotFound; 
import org.quickfix.Group; 
import org.quickfix.field.*; 

public class MassQuoteAcknowledgement extends Message 
{ 

  public MassQuoteAcknowledgement() 
  { 
    getHeader().setField(new MsgType("b")); 
  } 
  public MassQuoteAcknowledgement(    
    org.quickfix.field.QuoteStatus aQuoteStatus ) 
  {  
    getHeader().setField(new MsgType("b")); 
    set(aQuoteStatus);  
  } 

  public void set(org.quickfix.field.QuoteReqID value) 
  { setField(value); } 
  public org.quickfix.field.QuoteReqID get(org.quickfix.field.QuoteReqID value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.QuoteReqID getQuoteReqID() throws FieldNotFound 
  { org.quickfix.field.QuoteReqID value = new org.quickfix.field.QuoteReqID(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.QuoteReqID field) 
  { return isSetField(field); } 
  public boolean isSetQuoteReqID() 
  { return isSetField(131); } 

  public void set(org.quickfix.field.QuoteID value) 
  { setField(value); } 
  public org.quickfix.field.QuoteID get(org.quickfix.field.QuoteID value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.QuoteID getQuoteID() throws FieldNotFound 
  { org.quickfix.field.QuoteID value = new org.quickfix.field.QuoteID(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.QuoteID field) 
  { return isSetField(field); } 
  public boolean isSetQuoteID() 
  { return isSetField(117); } 

  public void set(org.quickfix.field.QuoteStatus value) 
  { setField(value); } 
  public org.quickfix.field.QuoteStatus get(org.quickfix.field.QuoteStatus value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.QuoteStatus getQuoteStatus() throws FieldNotFound 
  { org.quickfix.field.QuoteStatus value = new org.quickfix.field.QuoteStatus(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.QuoteStatus field) 
  { return isSetField(field); } 
  public boolean isSetQuoteStatus() 
  { return isSetField(297); } 

  public void set(org.quickfix.field.QuoteRejectReason value) 
  { setField(value); } 
  public org.quickfix.field.QuoteRejectReason get(org.quickfix.field.QuoteRejectReason value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.QuoteRejectReason getQuoteRejectReason() throws FieldNotFound 
  { org.quickfix.field.QuoteRejectReason value = new org.quickfix.field.QuoteRejectReason(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.QuoteRejectReason field) 
  { return isSetField(field); } 
  public boolean isSetQuoteRejectReason() 
  { return isSetField(300); } 

  public void set(org.quickfix.field.QuoteResponseLevel value) 
  { setField(value); } 
  public org.quickfix.field.QuoteResponseLevel get(org.quickfix.field.QuoteResponseLevel value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.QuoteResponseLevel getQuoteResponseLevel() throws FieldNotFound 
  { org.quickfix.field.QuoteResponseLevel value = new org.quickfix.field.QuoteResponseLevel(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.QuoteResponseLevel field) 
  { return isSetField(field); } 
  public boolean isSetQuoteResponseLevel() 
  { return isSetField(301); } 

  public void set(org.quickfix.field.QuoteType value) 
  { setField(value); } 
  public org.quickfix.field.QuoteType get(org.quickfix.field.QuoteType value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.QuoteType getQuoteType() throws FieldNotFound 
  { org.quickfix.field.QuoteType value = new org.quickfix.field.QuoteType(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.QuoteType field) 
  { return isSetField(field); } 
  public boolean isSetQuoteType() 
  { return isSetField(537); } 
  public void set(org.quickfix.field.NoPartyIDs value) 
  { setField(value); } 
  public org.quickfix.field.NoPartyIDs get(org.quickfix.field.NoPartyIDs value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.NoPartyIDs getNoPartyIDs() throws FieldNotFound 
  { org.quickfix.field.NoPartyIDs value = new org.quickfix.field.NoPartyIDs(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.NoPartyIDs field) 
  { return isSetField(field); } 
  public boolean isSetNoPartyIDs() 
  { return isSetField(453); } 

public static class NoPartyIDs extends Group { 
  public NoPartyIDs() { 
    super(453, 447, 
    new int[] { 
               448, 
               447, 
               452, 
               523, 
               0 } 
); 
  } 
  public void set(org.quickfix.field.PartyID value) 
  { setField(value); } 
  public org.quickfix.field.PartyID get(org.quickfix.field.PartyID value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.PartyID getPartyID() throws FieldNotFound 
  { org.quickfix.field.PartyID value = new org.quickfix.field.PartyID(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.PartyID field) 
  { return isSetField(field); } 
  public boolean isSetPartyID() 
  { return isSetField(448); } 

  public void set(org.quickfix.field.PartyIDSource value) 
  { setField(value); } 
  public org.quickfix.field.PartyIDSource get(org.quickfix.field.PartyIDSource value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.PartyIDSource getPartyIDSource() throws FieldNotFound 
  { org.quickfix.field.PartyIDSource value = new org.quickfix.field.PartyIDSource(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.PartyIDSource field) 
  { return isSetField(field); } 
  public boolean isSetPartyIDSource() 
  { return isSetField(447); } 

  public void set(org.quickfix.field.PartyRole value) 
  { setField(value); } 
  public org.quickfix.field.PartyRole get(org.quickfix.field.PartyRole value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.PartyRole getPartyRole() throws FieldNotFound 
  { org.quickfix.field.PartyRole value = new org.quickfix.field.PartyRole(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.PartyRole field) 
  { return isSetField(field); } 
  public boolean isSetPartyRole() 
  { return isSetField(452); } 

  public void set(org.quickfix.field.PartySubID value) 
  { setField(value); } 
  public org.quickfix.field.PartySubID get(org.quickfix.field.PartySubID value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.PartySubID getPartySubID() throws FieldNotFound 
  { org.quickfix.field.PartySubID value = new org.quickfix.field.PartySubID(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.PartySubID field) 
  { return isSetField(field); } 
  public boolean isSetPartySubID() 
  { return isSetField(523); } 

} 

  public void set(org.quickfix.field.Account value) 
  { setField(value); } 
  public org.quickfix.field.Account get(org.quickfix.field.Account value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.Account getAccount() throws FieldNotFound 
  { org.quickfix.field.Account value = new org.quickfix.field.Account(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.Account field) 
  { return isSetField(field); } 
  public boolean isSetAccount() 
  { return isSetField(1); } 

  public void set(org.quickfix.field.AccountType value) 
  { setField(value); } 
  public org.quickfix.field.AccountType get(org.quickfix.field.AccountType value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.AccountType getAccountType() throws FieldNotFound 
  { org.quickfix.field.AccountType value = new org.quickfix.field.AccountType(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.AccountType field) 
  { return isSetField(field); } 
  public boolean isSetAccountType() 
  { return isSetField(581); } 

  public void set(org.quickfix.field.Text value) 
  { setField(value); } 
  public org.quickfix.field.Text get(org.quickfix.field.Text value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.Text getText() throws FieldNotFound 
  { org.quickfix.field.Text value = new org.quickfix.field.Text(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.Text field) 
  { return isSetField(field); } 
  public boolean isSetText() 
  { return isSetField(58); } 
  public void set(org.quickfix.field.NoQuoteSets value) 
  { setField(value); } 
  public org.quickfix.field.NoQuoteSets get(org.quickfix.field.NoQuoteSets value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.NoQuoteSets getNoQuoteSets() throws FieldNotFound 
  { org.quickfix.field.NoQuoteSets value = new org.quickfix.field.NoQuoteSets(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.NoQuoteSets field) 
  { return isSetField(field); } 
  public boolean isSetNoQuoteSets() 
  { return isSetField(296); } 

public static class NoQuoteSets extends Group { 
  public NoQuoteSets() { 
    super(296, 302, 
    new int[] { 
               302, 
             311, 
             312, 
             309, 
             305, 
             462, 
             463, 
             310, 
             313, 
             542, 
             241, 
             242, 
             243, 
             244, 
             245, 
             246, 
             256, 
             595, 
             592, 
             593, 
             594, 
             247, 
             315, 
             316, 
             317, 
             436, 
             435, 
             308, 
             306, 
             362, 
             363, 
             307, 
             364, 
             365, 
               304, 
               0 } 
); 
  } 
  public void set(org.quickfix.field.QuoteSetID value) 
  { setField(value); } 
  public org.quickfix.field.QuoteSetID get(org.quickfix.field.QuoteSetID value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.QuoteSetID getQuoteSetID() throws FieldNotFound 
  { org.quickfix.field.QuoteSetID value = new org.quickfix.field.QuoteSetID(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.QuoteSetID field) 
  { return isSetField(field); } 
  public boolean isSetQuoteSetID() 
  { return isSetField(302); } 

  public void set(org.quickfix.field.TotQuoteEntries value) 
  { setField(value); } 
  public org.quickfix.field.TotQuoteEntries get(org.quickfix.field.TotQuoteEntries value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.TotQuoteEntries getTotQuoteEntries() throws FieldNotFound 
  { org.quickfix.field.TotQuoteEntries value = new org.quickfix.field.TotQuoteEntries(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.TotQuoteEntries field) 
  { return isSetField(field); } 
  public boolean isSetTotQuoteEntries() 
  { return isSetField(304); } 

  public void set(org.quickfix.field.NoQuoteEntries value) 
  { setField(value); } 
  public org.quickfix.field.NoQuoteEntries get(org.quickfix.field.NoQuoteEntries value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.NoQuoteEntries getNoQuoteEntries() throws FieldNotFound 
  { org.quickfix.field.NoQuoteEntries value = new org.quickfix.field.NoQuoteEntries(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.NoQuoteEntries field) 
  { return isSetField(field); } 
  public boolean isSetNoQuoteEntries() 
  { return isSetField(295); } 

public static class NoQuoteEntries extends Group { 
  public NoQuoteEntries() { 
    super(295, 15, 
    new int[] { 
               299, 
             55, 
             65, 
             48, 
             22, 
             460, 
             461, 
             167, 
             200, 
             541, 
             224, 
             225, 
             239, 
             226, 
             227, 
             228, 
             255, 
             543, 
             470, 
             471, 
             472, 
             240, 
             202, 
             206, 
             231, 
             223, 
             207, 
             106, 
             348, 
             349, 
             107, 
             350, 
             351, 
               132, 
               133, 
               134, 
               135, 
               62, 
               188, 
               190, 
               189, 
               191, 
               631, 
               632, 
               633, 
               634, 
               60, 
               336, 
               625, 
               64, 
               40, 
               193, 
               192, 
               642, 
               643, 
               15, 
               368, 
               0 } 
); 
  } 
  public void set(org.quickfix.field.QuoteEntryID value) 
  { setField(value); } 
  public org.quickfix.field.QuoteEntryID get(org.quickfix.field.QuoteEntryID value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.QuoteEntryID getQuoteEntryID() throws FieldNotFound 
  { org.quickfix.field.QuoteEntryID value = new org.quickfix.field.QuoteEntryID(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.QuoteEntryID field) 
  { return isSetField(field); } 
  public boolean isSetQuoteEntryID() 
  { return isSetField(299); } 

  public void set(org.quickfix.field.BidPx value) 
  { setField(value); } 
  public org.quickfix.field.BidPx get(org.quickfix.field.BidPx value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.BidPx getBidPx() throws FieldNotFound 
  { org.quickfix.field.BidPx value = new org.quickfix.field.BidPx(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.BidPx field) 
  { return isSetField(field); } 
  public boolean isSetBidPx() 
  { return isSetField(132); } 

  public void set(org.quickfix.field.OfferPx value) 
  { setField(value); } 
  public org.quickfix.field.OfferPx get(org.quickfix.field.OfferPx value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.OfferPx getOfferPx() throws FieldNotFound 
  { org.quickfix.field.OfferPx value = new org.quickfix.field.OfferPx(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.OfferPx field) 
  { return isSetField(field); } 
  public boolean isSetOfferPx() 
  { return isSetField(133); } 

  public void set(org.quickfix.field.BidSize value) 
  { setField(value); } 
  public org.quickfix.field.BidSize get(org.quickfix.field.BidSize value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.BidSize getBidSize() throws FieldNotFound 
  { org.quickfix.field.BidSize value = new org.quickfix.field.BidSize(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.BidSize field) 
  { return isSetField(field); } 
  public boolean isSetBidSize() 
  { return isSetField(134); } 

  public void set(org.quickfix.field.OfferSize value) 
  { setField(value); } 
  public org.quickfix.field.OfferSize get(org.quickfix.field.OfferSize value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.OfferSize getOfferSize() throws FieldNotFound 
  { org.quickfix.field.OfferSize value = new org.quickfix.field.OfferSize(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.OfferSize field) 
  { return isSetField(field); } 
  public boolean isSetOfferSize() 
  { return isSetField(135); } 

  public void set(org.quickfix.field.ValidUntilTime value) 
  { setField(value); } 
  public org.quickfix.field.ValidUntilTime get(org.quickfix.field.ValidUntilTime value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.ValidUntilTime getValidUntilTime() throws FieldNotFound 
  { org.quickfix.field.ValidUntilTime value = new org.quickfix.field.ValidUntilTime(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.ValidUntilTime field) 
  { return isSetField(field); } 
  public boolean isSetValidUntilTime() 
  { return isSetField(62); } 

  public void set(org.quickfix.field.BidSpotRate value) 
  { setField(value); } 
  public org.quickfix.field.BidSpotRate get(org.quickfix.field.BidSpotRate value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.BidSpotRate getBidSpotRate() throws FieldNotFound 
  { org.quickfix.field.BidSpotRate value = new org.quickfix.field.BidSpotRate(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.BidSpotRate field) 
  { return isSetField(field); } 
  public boolean isSetBidSpotRate() 
  { return isSetField(188); } 

  public void set(org.quickfix.field.OfferSpotRate value) 
  { setField(value); } 
  public org.quickfix.field.OfferSpotRate get(org.quickfix.field.OfferSpotRate value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.OfferSpotRate getOfferSpotRate() throws FieldNotFound 
  { org.quickfix.field.OfferSpotRate value = new org.quickfix.field.OfferSpotRate(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.OfferSpotRate field) 
  { return isSetField(field); } 
  public boolean isSetOfferSpotRate() 
  { return isSetField(190); } 

  public void set(org.quickfix.field.BidForwardPoints value) 
  { setField(value); } 
  public org.quickfix.field.BidForwardPoints get(org.quickfix.field.BidForwardPoints value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.BidForwardPoints getBidForwardPoints() throws FieldNotFound 
  { org.quickfix.field.BidForwardPoints value = new org.quickfix.field.BidForwardPoints(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.BidForwardPoints field) 
  { return isSetField(field); } 
  public boolean isSetBidForwardPoints() 
  { return isSetField(189); } 

  public void set(org.quickfix.field.OfferForwardPoints value) 
  { setField(value); } 
  public org.quickfix.field.OfferForwardPoints get(org.quickfix.field.OfferForwardPoints value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.OfferForwardPoints getOfferForwardPoints() throws FieldNotFound 
  { org.quickfix.field.OfferForwardPoints value = new org.quickfix.field.OfferForwardPoints(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.OfferForwardPoints field) 
  { return isSetField(field); } 
  public boolean isSetOfferForwardPoints() 
  { return isSetField(191); } 

  public void set(org.quickfix.field.MidPx value) 
  { setField(value); } 
  public org.quickfix.field.MidPx get(org.quickfix.field.MidPx value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.MidPx getMidPx() throws FieldNotFound 
  { org.quickfix.field.MidPx value = new org.quickfix.field.MidPx(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.MidPx field) 
  { return isSetField(field); } 
  public boolean isSetMidPx() 
  { return isSetField(631); } 

  public void set(org.quickfix.field.BidYield value) 
  { setField(value); } 
  public org.quickfix.field.BidYield get(org.quickfix.field.BidYield value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.BidYield getBidYield() throws FieldNotFound 
  { org.quickfix.field.BidYield value = new org.quickfix.field.BidYield(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.BidYield field) 
  { return isSetField(field); } 
  public boolean isSetBidYield() 
  { return isSetField(632); } 

  public void set(org.quickfix.field.MidYield value) 
  { setField(value); } 
  public org.quickfix.field.MidYield get(org.quickfix.field.MidYield value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.MidYield getMidYield() throws FieldNotFound 
  { org.quickfix.field.MidYield value = new org.quickfix.field.MidYield(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.MidYield field) 
  { return isSetField(field); } 
  public boolean isSetMidYield() 
  { return isSetField(633); } 

  public void set(org.quickfix.field.OfferYield value) 
  { setField(value); } 
  public org.quickfix.field.OfferYield get(org.quickfix.field.OfferYield value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.OfferYield getOfferYield() throws FieldNotFound 
  { org.quickfix.field.OfferYield value = new org.quickfix.field.OfferYield(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.OfferYield field) 
  { return isSetField(field); } 
  public boolean isSetOfferYield() 
  { return isSetField(634); } 

  public void set(org.quickfix.field.TransactTime value) 
  { setField(value); } 
  public org.quickfix.field.TransactTime get(org.quickfix.field.TransactTime value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.TransactTime getTransactTime() throws FieldNotFound 
  { org.quickfix.field.TransactTime value = new org.quickfix.field.TransactTime(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.TransactTime field) 
  { return isSetField(field); } 
  public boolean isSetTransactTime() 
  { return isSetField(60); } 

  public void set(org.quickfix.field.TradingSessionID value) 
  { setField(value); } 
  public org.quickfix.field.TradingSessionID get(org.quickfix.field.TradingSessionID value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.TradingSessionID getTradingSessionID() throws FieldNotFound 
  { org.quickfix.field.TradingSessionID value = new org.quickfix.field.TradingSessionID(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.TradingSessionID field) 
  { return isSetField(field); } 
  public boolean isSetTradingSessionID() 
  { return isSetField(336); } 

  public void set(org.quickfix.field.TradingSessionSubID value) 
  { setField(value); } 
  public org.quickfix.field.TradingSessionSubID get(org.quickfix.field.TradingSessionSubID value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.TradingSessionSubID getTradingSessionSubID() throws FieldNotFound 
  { org.quickfix.field.TradingSessionSubID value = new org.quickfix.field.TradingSessionSubID(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.TradingSessionSubID field) 
  { return isSetField(field); } 
  public boolean isSetTradingSessionSubID() 
  { return isSetField(625); } 

  public void set(org.quickfix.field.FutSettDate value) 
  { setField(value); } 
  public org.quickfix.field.FutSettDate get(org.quickfix.field.FutSettDate value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.FutSettDate getFutSettDate() throws FieldNotFound 
  { org.quickfix.field.FutSettDate value = new org.quickfix.field.FutSettDate(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.FutSettDate field) 
  { return isSetField(field); } 
  public boolean isSetFutSettDate() 
  { return isSetField(64); } 

  public void set(org.quickfix.field.OrdType value) 
  { setField(value); } 
  public org.quickfix.field.OrdType get(org.quickfix.field.OrdType value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.OrdType getOrdType() throws FieldNotFound 
  { org.quickfix.field.OrdType value = new org.quickfix.field.OrdType(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.OrdType field) 
  { return isSetField(field); } 
  public boolean isSetOrdType() 
  { return isSetField(40); } 

  public void set(org.quickfix.field.FutSettDate2 value) 
  { setField(value); } 
  public org.quickfix.field.FutSettDate2 get(org.quickfix.field.FutSettDate2 value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.FutSettDate2 getFutSettDate2() throws FieldNotFound 
  { org.quickfix.field.FutSettDate2 value = new org.quickfix.field.FutSettDate2(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.FutSettDate2 field) 
  { return isSetField(field); } 
  public boolean isSetFutSettDate2() 
  { return isSetField(193); } 

  public void set(org.quickfix.field.OrderQty2 value) 
  { setField(value); } 
  public org.quickfix.field.OrderQty2 get(org.quickfix.field.OrderQty2 value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.OrderQty2 getOrderQty2() throws FieldNotFound 
  { org.quickfix.field.OrderQty2 value = new org.quickfix.field.OrderQty2(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.OrderQty2 field) 
  { return isSetField(field); } 
  public boolean isSetOrderQty2() 
  { return isSetField(192); } 

  public void set(org.quickfix.field.BidForwardPoints2 value) 
  { setField(value); } 
  public org.quickfix.field.BidForwardPoints2 get(org.quickfix.field.BidForwardPoints2 value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.BidForwardPoints2 getBidForwardPoints2() throws FieldNotFound 
  { org.quickfix.field.BidForwardPoints2 value = new org.quickfix.field.BidForwardPoints2(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.BidForwardPoints2 field) 
  { return isSetField(field); } 
  public boolean isSetBidForwardPoints2() 
  { return isSetField(642); } 

  public void set(org.quickfix.field.OfferForwardPoints2 value) 
  { setField(value); } 
  public org.quickfix.field.OfferForwardPoints2 get(org.quickfix.field.OfferForwardPoints2 value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.OfferForwardPoints2 getOfferForwardPoints2() throws FieldNotFound 
  { org.quickfix.field.OfferForwardPoints2 value = new org.quickfix.field.OfferForwardPoints2(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.OfferForwardPoints2 field) 
  { return isSetField(field); } 
  public boolean isSetOfferForwardPoints2() 
  { return isSetField(643); } 

  public void set(org.quickfix.field.Currency value) 
  { setField(value); } 
  public org.quickfix.field.Currency get(org.quickfix.field.Currency value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.Currency getCurrency() throws FieldNotFound 
  { org.quickfix.field.Currency value = new org.quickfix.field.Currency(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.Currency field) 
  { return isSetField(field); } 
  public boolean isSetCurrency() 
  { return isSetField(15); } 

  public void set(org.quickfix.field.QuoteEntryRejectReason value) 
  { setField(value); } 
  public org.quickfix.field.QuoteEntryRejectReason get(org.quickfix.field.QuoteEntryRejectReason value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.QuoteEntryRejectReason getQuoteEntryRejectReason() throws FieldNotFound 
  { org.quickfix.field.QuoteEntryRejectReason value = new org.quickfix.field.QuoteEntryRejectReason(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.QuoteEntryRejectReason field) 
  { return isSetField(field); } 
  public boolean isSetQuoteEntryRejectReason() 
  { return isSetField(368); } 

  public void set(org.quickfix.field.Symbol value) 
  { setField(value); } 
  public org.quickfix.field.Symbol get(org.quickfix.field.Symbol value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.Symbol getSymbol() throws FieldNotFound 
  { org.quickfix.field.Symbol value = new org.quickfix.field.Symbol(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.Symbol field) 
  { return isSetField(field); } 
  public boolean isSetSymbol() 
  { return isSetField(55); } 
  public void set(org.quickfix.field.SymbolSfx value) 
  { setField(value); } 
  public org.quickfix.field.SymbolSfx get(org.quickfix.field.SymbolSfx value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.SymbolSfx getSymbolSfx() throws FieldNotFound 
  { org.quickfix.field.SymbolSfx value = new org.quickfix.field.SymbolSfx(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.SymbolSfx field) 
  { return isSetField(field); } 
  public boolean isSetSymbolSfx() 
  { return isSetField(65); } 
  public void set(org.quickfix.field.SecurityID value) 
  { setField(value); } 
  public org.quickfix.field.SecurityID get(org.quickfix.field.SecurityID value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.SecurityID getSecurityID() throws FieldNotFound 
  { org.quickfix.field.SecurityID value = new org.quickfix.field.SecurityID(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.SecurityID field) 
  { return isSetField(field); } 
  public boolean isSetSecurityID() 
  { return isSetField(48); } 
  public void set(org.quickfix.field.SecurityIDSource value) 
  { setField(value); } 
  public org.quickfix.field.SecurityIDSource get(org.quickfix.field.SecurityIDSource value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.SecurityIDSource getSecurityIDSource() throws FieldNotFound 
  { org.quickfix.field.SecurityIDSource value = new org.quickfix.field.SecurityIDSource(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.SecurityIDSource field) 
  { return isSetField(field); } 
  public boolean isSetSecurityIDSource() 
  { return isSetField(22); } 
  public void set(org.quickfix.field.Product value) 
  { setField(value); } 
  public org.quickfix.field.Product get(org.quickfix.field.Product value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.Product getProduct() throws FieldNotFound 
  { org.quickfix.field.Product value = new org.quickfix.field.Product(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.Product field) 
  { return isSetField(field); } 
  public boolean isSetProduct() 
  { return isSetField(460); } 
  public void set(org.quickfix.field.CFICode value) 
  { setField(value); } 
  public org.quickfix.field.CFICode get(org.quickfix.field.CFICode value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.CFICode getCFICode() throws FieldNotFound 
  { org.quickfix.field.CFICode value = new org.quickfix.field.CFICode(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.CFICode field) 
  { return isSetField(field); } 
  public boolean isSetCFICode() 
  { return isSetField(461); } 
  public void set(org.quickfix.field.SecurityType value) 
  { setField(value); } 
  public org.quickfix.field.SecurityType get(org.quickfix.field.SecurityType value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.SecurityType getSecurityType() throws FieldNotFound 
  { org.quickfix.field.SecurityType value = new org.quickfix.field.SecurityType(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.SecurityType field) 
  { return isSetField(field); } 
  public boolean isSetSecurityType() 
  { return isSetField(167); } 
  public void set(org.quickfix.field.MaturityMonthYear value) 
  { setField(value); } 
  public org.quickfix.field.MaturityMonthYear get(org.quickfix.field.MaturityMonthYear value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.MaturityMonthYear getMaturityMonthYear() throws FieldNotFound 
  { org.quickfix.field.MaturityMonthYear value = new org.quickfix.field.MaturityMonthYear(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.MaturityMonthYear field) 
  { return isSetField(field); } 
  public boolean isSetMaturityMonthYear() 
  { return isSetField(200); } 
  public void set(org.quickfix.field.MaturityDate value) 
  { setField(value); } 
  public org.quickfix.field.MaturityDate get(org.quickfix.field.MaturityDate value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.MaturityDate getMaturityDate() throws FieldNotFound 
  { org.quickfix.field.MaturityDate value = new org.quickfix.field.MaturityDate(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.MaturityDate field) 
  { return isSetField(field); } 
  public boolean isSetMaturityDate() 
  { return isSetField(541); } 
  public void set(org.quickfix.field.CouponPaymentDate value) 
  { setField(value); } 
  public org.quickfix.field.CouponPaymentDate get(org.quickfix.field.CouponPaymentDate value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.CouponPaymentDate getCouponPaymentDate() throws FieldNotFound 
  { org.quickfix.field.CouponPaymentDate value = new org.quickfix.field.CouponPaymentDate(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.CouponPaymentDate field) 
  { return isSetField(field); } 
  public boolean isSetCouponPaymentDate() 
  { return isSetField(224); } 
  public void set(org.quickfix.field.IssueDate value) 
  { setField(value); } 
  public org.quickfix.field.IssueDate get(org.quickfix.field.IssueDate value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.IssueDate getIssueDate() throws FieldNotFound 
  { org.quickfix.field.IssueDate value = new org.quickfix.field.IssueDate(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.IssueDate field) 
  { return isSetField(field); } 
  public boolean isSetIssueDate() 
  { return isSetField(225); } 
  public void set(org.quickfix.field.RepoCollateralSecurityType value) 
  { setField(value); } 
  public org.quickfix.field.RepoCollateralSecurityType get(org.quickfix.field.RepoCollateralSecurityType value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.RepoCollateralSecurityType getRepoCollateralSecurityType() throws FieldNotFound 
  { org.quickfix.field.RepoCollateralSecurityType value = new org.quickfix.field.RepoCollateralSecurityType(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.RepoCollateralSecurityType field) 
  { return isSetField(field); } 
  public boolean isSetRepoCollateralSecurityType() 
  { return isSetField(239); } 
  public void set(org.quickfix.field.RepurchaseTerm value) 
  { setField(value); } 
  public org.quickfix.field.RepurchaseTerm get(org.quickfix.field.RepurchaseTerm value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.RepurchaseTerm getRepurchaseTerm() throws FieldNotFound 
  { org.quickfix.field.RepurchaseTerm value = new org.quickfix.field.RepurchaseTerm(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.RepurchaseTerm field) 
  { return isSetField(field); } 
  public boolean isSetRepurchaseTerm() 
  { return isSetField(226); } 
  public void set(org.quickfix.field.RepurchaseRate value) 
  { setField(value); } 
  public org.quickfix.field.RepurchaseRate get(org.quickfix.field.RepurchaseRate value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.RepurchaseRate getRepurchaseRate() throws FieldNotFound 
  { org.quickfix.field.RepurchaseRate value = new org.quickfix.field.RepurchaseRate(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.RepurchaseRate field) 
  { return isSetField(field); } 
  public boolean isSetRepurchaseRate() 
  { return isSetField(227); } 
  public void set(org.quickfix.field.Factor value) 
  { setField(value); } 
  public org.quickfix.field.Factor get(org.quickfix.field.Factor value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.Factor getFactor() throws FieldNotFound 
  { org.quickfix.field.Factor value = new org.quickfix.field.Factor(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.Factor field) 
  { return isSetField(field); } 
  public boolean isSetFactor() 
  { return isSetField(228); } 
  public void set(org.quickfix.field.CreditRating value) 
  { setField(value); } 
  public org.quickfix.field.CreditRating get(org.quickfix.field.CreditRating value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.CreditRating getCreditRating() throws FieldNotFound 
  { org.quickfix.field.CreditRating value = new org.quickfix.field.CreditRating(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.CreditRating field) 
  { return isSetField(field); } 
  public boolean isSetCreditRating() 
  { return isSetField(255); } 
  public void set(org.quickfix.field.InstrRegistry value) 
  { setField(value); } 
  public org.quickfix.field.InstrRegistry get(org.quickfix.field.InstrRegistry value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.InstrRegistry getInstrRegistry() throws FieldNotFound 
  { org.quickfix.field.InstrRegistry value = new org.quickfix.field.InstrRegistry(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.InstrRegistry field) 
  { return isSetField(field); } 
  public boolean isSetInstrRegistry() 
  { return isSetField(543); } 
  public void set(org.quickfix.field.CountryOfIssue value) 
  { setField(value); } 
  public org.quickfix.field.CountryOfIssue get(org.quickfix.field.CountryOfIssue value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.CountryOfIssue getCountryOfIssue() throws FieldNotFound 
  { org.quickfix.field.CountryOfIssue value = new org.quickfix.field.CountryOfIssue(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.CountryOfIssue field) 
  { return isSetField(field); } 
  public boolean isSetCountryOfIssue() 
  { return isSetField(470); } 
  public void set(org.quickfix.field.StateOrProvinceOfIssue value) 
  { setField(value); } 
  public org.quickfix.field.StateOrProvinceOfIssue get(org.quickfix.field.StateOrProvinceOfIssue value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.StateOrProvinceOfIssue getStateOrProvinceOfIssue() throws FieldNotFound 
  { org.quickfix.field.StateOrProvinceOfIssue value = new org.quickfix.field.StateOrProvinceOfIssue(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.StateOrProvinceOfIssue field) 
  { return isSetField(field); } 
  public boolean isSetStateOrProvinceOfIssue() 
  { return isSetField(471); } 
  public void set(org.quickfix.field.LocaleOfIssue value) 
  { setField(value); } 
  public org.quickfix.field.LocaleOfIssue get(org.quickfix.field.LocaleOfIssue value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.LocaleOfIssue getLocaleOfIssue() throws FieldNotFound 
  { org.quickfix.field.LocaleOfIssue value = new org.quickfix.field.LocaleOfIssue(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.LocaleOfIssue field) 
  { return isSetField(field); } 
  public boolean isSetLocaleOfIssue() 
  { return isSetField(472); } 
  public void set(org.quickfix.field.RedemptionDate value) 
  { setField(value); } 
  public org.quickfix.field.RedemptionDate get(org.quickfix.field.RedemptionDate value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.RedemptionDate getRedemptionDate() throws FieldNotFound 
  { org.quickfix.field.RedemptionDate value = new org.quickfix.field.RedemptionDate(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.RedemptionDate field) 
  { return isSetField(field); } 
  public boolean isSetRedemptionDate() 
  { return isSetField(240); } 
  public void set(org.quickfix.field.StrikePrice value) 
  { setField(value); } 
  public org.quickfix.field.StrikePrice get(org.quickfix.field.StrikePrice value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.StrikePrice getStrikePrice() throws FieldNotFound 
  { org.quickfix.field.StrikePrice value = new org.quickfix.field.StrikePrice(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.StrikePrice field) 
  { return isSetField(field); } 
  public boolean isSetStrikePrice() 
  { return isSetField(202); } 
  public void set(org.quickfix.field.OptAttribute value) 
  { setField(value); } 
  public org.quickfix.field.OptAttribute get(org.quickfix.field.OptAttribute value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.OptAttribute getOptAttribute() throws FieldNotFound 
  { org.quickfix.field.OptAttribute value = new org.quickfix.field.OptAttribute(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.OptAttribute field) 
  { return isSetField(field); } 
  public boolean isSetOptAttribute() 
  { return isSetField(206); } 
  public void set(org.quickfix.field.ContractMultiplier value) 
  { setField(value); } 
  public org.quickfix.field.ContractMultiplier get(org.quickfix.field.ContractMultiplier value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.ContractMultiplier getContractMultiplier() throws FieldNotFound 
  { org.quickfix.field.ContractMultiplier value = new org.quickfix.field.ContractMultiplier(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.ContractMultiplier field) 
  { return isSetField(field); } 
  public boolean isSetContractMultiplier() 
  { return isSetField(231); } 
  public void set(org.quickfix.field.CouponRate value) 
  { setField(value); } 
  public org.quickfix.field.CouponRate get(org.quickfix.field.CouponRate value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.CouponRate getCouponRate() throws FieldNotFound 
  { org.quickfix.field.CouponRate value = new org.quickfix.field.CouponRate(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.CouponRate field) 
  { return isSetField(field); } 
  public boolean isSetCouponRate() 
  { return isSetField(223); } 
  public void set(org.quickfix.field.SecurityExchange value) 
  { setField(value); } 
  public org.quickfix.field.SecurityExchange get(org.quickfix.field.SecurityExchange value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.SecurityExchange getSecurityExchange() throws FieldNotFound 
  { org.quickfix.field.SecurityExchange value = new org.quickfix.field.SecurityExchange(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.SecurityExchange field) 
  { return isSetField(field); } 
  public boolean isSetSecurityExchange() 
  { return isSetField(207); } 
  public void set(org.quickfix.field.Issuer value) 
  { setField(value); } 
  public org.quickfix.field.Issuer get(org.quickfix.field.Issuer value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.Issuer getIssuer() throws FieldNotFound 
  { org.quickfix.field.Issuer value = new org.quickfix.field.Issuer(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.Issuer field) 
  { return isSetField(field); } 
  public boolean isSetIssuer() 
  { return isSetField(106); } 
  public void set(org.quickfix.field.EncodedIssuerLen value) 
  { setField(value); } 
  public org.quickfix.field.EncodedIssuerLen get(org.quickfix.field.EncodedIssuerLen value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.EncodedIssuerLen getEncodedIssuerLen() throws FieldNotFound 
  { org.quickfix.field.EncodedIssuerLen value = new org.quickfix.field.EncodedIssuerLen(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.EncodedIssuerLen field) 
  { return isSetField(field); } 
  public boolean isSetEncodedIssuerLen() 
  { return isSetField(348); } 
  public void set(org.quickfix.field.EncodedIssuer value) 
  { setField(value); } 
  public org.quickfix.field.EncodedIssuer get(org.quickfix.field.EncodedIssuer value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.EncodedIssuer getEncodedIssuer() throws FieldNotFound 
  { org.quickfix.field.EncodedIssuer value = new org.quickfix.field.EncodedIssuer(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.EncodedIssuer field) 
  { return isSetField(field); } 
  public boolean isSetEncodedIssuer() 
  { return isSetField(349); } 
  public void set(org.quickfix.field.SecurityDesc value) 
  { setField(value); } 
  public org.quickfix.field.SecurityDesc get(org.quickfix.field.SecurityDesc value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.SecurityDesc getSecurityDesc() throws FieldNotFound 
  { org.quickfix.field.SecurityDesc value = new org.quickfix.field.SecurityDesc(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.SecurityDesc field) 
  { return isSetField(field); } 
  public boolean isSetSecurityDesc() 
  { return isSetField(107); } 
  public void set(org.quickfix.field.EncodedSecurityDescLen value) 
  { setField(value); } 
  public org.quickfix.field.EncodedSecurityDescLen get(org.quickfix.field.EncodedSecurityDescLen value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.EncodedSecurityDescLen getEncodedSecurityDescLen() throws FieldNotFound 
  { org.quickfix.field.EncodedSecurityDescLen value = new org.quickfix.field.EncodedSecurityDescLen(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.EncodedSecurityDescLen field) 
  { return isSetField(field); } 
  public boolean isSetEncodedSecurityDescLen() 
  { return isSetField(350); } 
  public void set(org.quickfix.field.EncodedSecurityDesc value) 
  { setField(value); } 
  public org.quickfix.field.EncodedSecurityDesc get(org.quickfix.field.EncodedSecurityDesc value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.EncodedSecurityDesc getEncodedSecurityDesc() throws FieldNotFound 
  { org.quickfix.field.EncodedSecurityDesc value = new org.quickfix.field.EncodedSecurityDesc(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.EncodedSecurityDesc field) 
  { return isSetField(field); } 
  public boolean isSetEncodedSecurityDesc() 
  { return isSetField(351); } 
  public void set(org.quickfix.field.NoSecurityAltID value) 
  { setField(value); } 
  public org.quickfix.field.NoSecurityAltID get(org.quickfix.field.NoSecurityAltID value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.NoSecurityAltID getNoSecurityAltID() throws FieldNotFound 
  { org.quickfix.field.NoSecurityAltID value = new org.quickfix.field.NoSecurityAltID(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.NoSecurityAltID field) 
  { return isSetField(field); } 
  public boolean isSetNoSecurityAltID() 
  { return isSetField(454); } 

public static class NoSecurityAltID extends Group { 
  public NoSecurityAltID() { 
    super(454, 455, 
    new int[] { 
               455, 
               456, 
               0 } 
); 
  } 
  public void set(org.quickfix.field.SecurityAltID value) 
  { setField(value); } 
  public org.quickfix.field.SecurityAltID get(org.quickfix.field.SecurityAltID value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.SecurityAltID getSecurityAltID() throws FieldNotFound 
  { org.quickfix.field.SecurityAltID value = new org.quickfix.field.SecurityAltID(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.SecurityAltID field) 
  { return isSetField(field); } 
  public boolean isSetSecurityAltID() 
  { return isSetField(455); } 

  public void set(org.quickfix.field.SecurityAltIDSource value) 
  { setField(value); } 
  public org.quickfix.field.SecurityAltIDSource get(org.quickfix.field.SecurityAltIDSource value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.SecurityAltIDSource getSecurityAltIDSource() throws FieldNotFound 
  { org.quickfix.field.SecurityAltIDSource value = new org.quickfix.field.SecurityAltIDSource(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.SecurityAltIDSource field) 
  { return isSetField(field); } 
  public boolean isSetSecurityAltIDSource() 
  { return isSetField(456); } 

} 
} 
  public void set(org.quickfix.field.UnderlyingSymbol value) 
  { setField(value); } 
  public org.quickfix.field.UnderlyingSymbol get(org.quickfix.field.UnderlyingSymbol value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.UnderlyingSymbol getUnderlyingSymbol() throws FieldNotFound 
  { org.quickfix.field.UnderlyingSymbol value = new org.quickfix.field.UnderlyingSymbol(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.UnderlyingSymbol field) 
  { return isSetField(field); } 
  public boolean isSetUnderlyingSymbol() 
  { return isSetField(311); } 
  public void set(org.quickfix.field.UnderlyingSymbolSfx value) 
  { setField(value); } 
  public org.quickfix.field.UnderlyingSymbolSfx get(org.quickfix.field.UnderlyingSymbolSfx value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.UnderlyingSymbolSfx getUnderlyingSymbolSfx() throws FieldNotFound 
  { org.quickfix.field.UnderlyingSymbolSfx value = new org.quickfix.field.UnderlyingSymbolSfx(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.UnderlyingSymbolSfx field) 
  { return isSetField(field); } 
  public boolean isSetUnderlyingSymbolSfx() 
  { return isSetField(312); } 
  public void set(org.quickfix.field.UnderlyingSecurityID value) 
  { setField(value); } 
  public org.quickfix.field.UnderlyingSecurityID get(org.quickfix.field.UnderlyingSecurityID value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.UnderlyingSecurityID getUnderlyingSecurityID() throws FieldNotFound 
  { org.quickfix.field.UnderlyingSecurityID value = new org.quickfix.field.UnderlyingSecurityID(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.UnderlyingSecurityID field) 
  { return isSetField(field); } 
  public boolean isSetUnderlyingSecurityID() 
  { return isSetField(309); } 
  public void set(org.quickfix.field.UnderlyingSecurityIDSource value) 
  { setField(value); } 
  public org.quickfix.field.UnderlyingSecurityIDSource get(org.quickfix.field.UnderlyingSecurityIDSource value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.UnderlyingSecurityIDSource getUnderlyingSecurityIDSource() throws FieldNotFound 
  { org.quickfix.field.UnderlyingSecurityIDSource value = new org.quickfix.field.UnderlyingSecurityIDSource(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.UnderlyingSecurityIDSource field) 
  { return isSetField(field); } 
  public boolean isSetUnderlyingSecurityIDSource() 
  { return isSetField(305); } 
  public void set(org.quickfix.field.UnderlyingProduct value) 
  { setField(value); } 
  public org.quickfix.field.UnderlyingProduct get(org.quickfix.field.UnderlyingProduct value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.UnderlyingProduct getUnderlyingProduct() throws FieldNotFound 
  { org.quickfix.field.UnderlyingProduct value = new org.quickfix.field.UnderlyingProduct(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.UnderlyingProduct field) 
  { return isSetField(field); } 
  public boolean isSetUnderlyingProduct() 
  { return isSetField(462); } 
  public void set(org.quickfix.field.UnderlyingCFICode value) 
  { setField(value); } 
  public org.quickfix.field.UnderlyingCFICode get(org.quickfix.field.UnderlyingCFICode value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.UnderlyingCFICode getUnderlyingCFICode() throws FieldNotFound 
  { org.quickfix.field.UnderlyingCFICode value = new org.quickfix.field.UnderlyingCFICode(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.UnderlyingCFICode field) 
  { return isSetField(field); } 
  public boolean isSetUnderlyingCFICode() 
  { return isSetField(463); } 
  public void set(org.quickfix.field.UnderlyingSecurityType value) 
  { setField(value); } 
  public org.quickfix.field.UnderlyingSecurityType get(org.quickfix.field.UnderlyingSecurityType value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.UnderlyingSecurityType getUnderlyingSecurityType() throws FieldNotFound 
  { org.quickfix.field.UnderlyingSecurityType value = new org.quickfix.field.UnderlyingSecurityType(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.UnderlyingSecurityType field) 
  { return isSetField(field); } 
  public boolean isSetUnderlyingSecurityType() 
  { return isSetField(310); } 
  public void set(org.quickfix.field.UnderlyingMaturityMonthYear value) 
  { setField(value); } 
  public org.quickfix.field.UnderlyingMaturityMonthYear get(org.quickfix.field.UnderlyingMaturityMonthYear value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.UnderlyingMaturityMonthYear getUnderlyingMaturityMonthYear() throws FieldNotFound 
  { org.quickfix.field.UnderlyingMaturityMonthYear value = new org.quickfix.field.UnderlyingMaturityMonthYear(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.UnderlyingMaturityMonthYear field) 
  { return isSetField(field); } 
  public boolean isSetUnderlyingMaturityMonthYear() 
  { return isSetField(313); } 
  public void set(org.quickfix.field.UnderlyingMaturityDate value) 
  { setField(value); } 
  public org.quickfix.field.UnderlyingMaturityDate get(org.quickfix.field.UnderlyingMaturityDate value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.UnderlyingMaturityDate getUnderlyingMaturityDate() throws FieldNotFound 
  { org.quickfix.field.UnderlyingMaturityDate value = new org.quickfix.field.UnderlyingMaturityDate(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.UnderlyingMaturityDate field) 
  { return isSetField(field); } 
  public boolean isSetUnderlyingMaturityDate() 
  { return isSetField(542); } 
  public void set(org.quickfix.field.UnderlyingCouponPaymentDate value) 
  { setField(value); } 
  public org.quickfix.field.UnderlyingCouponPaymentDate get(org.quickfix.field.UnderlyingCouponPaymentDate value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.UnderlyingCouponPaymentDate getUnderlyingCouponPaymentDate() throws FieldNotFound 
  { org.quickfix.field.UnderlyingCouponPaymentDate value = new org.quickfix.field.UnderlyingCouponPaymentDate(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.UnderlyingCouponPaymentDate field) 
  { return isSetField(field); } 
  public boolean isSetUnderlyingCouponPaymentDate() 
  { return isSetField(241); } 
  public void set(org.quickfix.field.UnderlyingIssueDate value) 
  { setField(value); } 
  public org.quickfix.field.UnderlyingIssueDate get(org.quickfix.field.UnderlyingIssueDate value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.UnderlyingIssueDate getUnderlyingIssueDate() throws FieldNotFound 
  { org.quickfix.field.UnderlyingIssueDate value = new org.quickfix.field.UnderlyingIssueDate(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.UnderlyingIssueDate field) 
  { return isSetField(field); } 
  public boolean isSetUnderlyingIssueDate() 
  { return isSetField(242); } 
  public void set(org.quickfix.field.UnderlyingRepoCollateralSecurityType value) 
  { setField(value); } 
  public org.quickfix.field.UnderlyingRepoCollateralSecurityType get(org.quickfix.field.UnderlyingRepoCollateralSecurityType value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.UnderlyingRepoCollateralSecurityType getUnderlyingRepoCollateralSecurityType() throws FieldNotFound 
  { org.quickfix.field.UnderlyingRepoCollateralSecurityType value = new org.quickfix.field.UnderlyingRepoCollateralSecurityType(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.UnderlyingRepoCollateralSecurityType field) 
  { return isSetField(field); } 
  public boolean isSetUnderlyingRepoCollateralSecurityType() 
  { return isSetField(243); } 
  public void set(org.quickfix.field.UnderlyingRepurchaseTerm value) 
  { setField(value); } 
  public org.quickfix.field.UnderlyingRepurchaseTerm get(org.quickfix.field.UnderlyingRepurchaseTerm value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.UnderlyingRepurchaseTerm getUnderlyingRepurchaseTerm() throws FieldNotFound 
  { org.quickfix.field.UnderlyingRepurchaseTerm value = new org.quickfix.field.UnderlyingRepurchaseTerm(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.UnderlyingRepurchaseTerm field) 
  { return isSetField(field); } 
  public boolean isSetUnderlyingRepurchaseTerm() 
  { return isSetField(244); } 
  public void set(org.quickfix.field.UnderlyingRepurchaseRate value) 
  { setField(value); } 
  public org.quickfix.field.UnderlyingRepurchaseRate get(org.quickfix.field.UnderlyingRepurchaseRate value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.UnderlyingRepurchaseRate getUnderlyingRepurchaseRate() throws FieldNotFound 
  { org.quickfix.field.UnderlyingRepurchaseRate value = new org.quickfix.field.UnderlyingRepurchaseRate(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.UnderlyingRepurchaseRate field) 
  { return isSetField(field); } 
  public boolean isSetUnderlyingRepurchaseRate() 
  { return isSetField(245); } 
  public void set(org.quickfix.field.UnderlyingFactor value) 
  { setField(value); } 
  public org.quickfix.field.UnderlyingFactor get(org.quickfix.field.UnderlyingFactor value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.UnderlyingFactor getUnderlyingFactor() throws FieldNotFound 
  { org.quickfix.field.UnderlyingFactor value = new org.quickfix.field.UnderlyingFactor(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.UnderlyingFactor field) 
  { return isSetField(field); } 
  public boolean isSetUnderlyingFactor() 
  { return isSetField(246); } 
  public void set(org.quickfix.field.UnderlyingCreditRating value) 
  { setField(value); } 
  public org.quickfix.field.UnderlyingCreditRating get(org.quickfix.field.UnderlyingCreditRating value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.UnderlyingCreditRating getUnderlyingCreditRating() throws FieldNotFound 
  { org.quickfix.field.UnderlyingCreditRating value = new org.quickfix.field.UnderlyingCreditRating(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.UnderlyingCreditRating field) 
  { return isSetField(field); } 
  public boolean isSetUnderlyingCreditRating() 
  { return isSetField(256); } 
  public void set(org.quickfix.field.UnderlyingInstrRegistry value) 
  { setField(value); } 
  public org.quickfix.field.UnderlyingInstrRegistry get(org.quickfix.field.UnderlyingInstrRegistry value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.UnderlyingInstrRegistry getUnderlyingInstrRegistry() throws FieldNotFound 
  { org.quickfix.field.UnderlyingInstrRegistry value = new org.quickfix.field.UnderlyingInstrRegistry(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.UnderlyingInstrRegistry field) 
  { return isSetField(field); } 
  public boolean isSetUnderlyingInstrRegistry() 
  { return isSetField(595); } 
  public void set(org.quickfix.field.UnderlyingCountryOfIssue value) 
  { setField(value); } 
  public org.quickfix.field.UnderlyingCountryOfIssue get(org.quickfix.field.UnderlyingCountryOfIssue value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.UnderlyingCountryOfIssue getUnderlyingCountryOfIssue() throws FieldNotFound 
  { org.quickfix.field.UnderlyingCountryOfIssue value = new org.quickfix.field.UnderlyingCountryOfIssue(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.UnderlyingCountryOfIssue field) 
  { return isSetField(field); } 
  public boolean isSetUnderlyingCountryOfIssue() 
  { return isSetField(592); } 
  public void set(org.quickfix.field.UnderlyingStateOrProvinceOfIssue value) 
  { setField(value); } 
  public org.quickfix.field.UnderlyingStateOrProvinceOfIssue get(org.quickfix.field.UnderlyingStateOrProvinceOfIssue value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.UnderlyingStateOrProvinceOfIssue getUnderlyingStateOrProvinceOfIssue() throws FieldNotFound 
  { org.quickfix.field.UnderlyingStateOrProvinceOfIssue value = new org.quickfix.field.UnderlyingStateOrProvinceOfIssue(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.UnderlyingStateOrProvinceOfIssue field) 
  { return isSetField(field); } 
  public boolean isSetUnderlyingStateOrProvinceOfIssue() 
  { return isSetField(593); } 
  public void set(org.quickfix.field.UnderlyingLocaleOfIssue value) 
  { setField(value); } 
  public org.quickfix.field.UnderlyingLocaleOfIssue get(org.quickfix.field.UnderlyingLocaleOfIssue value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.UnderlyingLocaleOfIssue getUnderlyingLocaleOfIssue() throws FieldNotFound 
  { org.quickfix.field.UnderlyingLocaleOfIssue value = new org.quickfix.field.UnderlyingLocaleOfIssue(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.UnderlyingLocaleOfIssue field) 
  { return isSetField(field); } 
  public boolean isSetUnderlyingLocaleOfIssue() 
  { return isSetField(594); } 
  public void set(org.quickfix.field.UnderlyingRedemptionDate value) 
  { setField(value); } 
  public org.quickfix.field.UnderlyingRedemptionDate get(org.quickfix.field.UnderlyingRedemptionDate value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.UnderlyingRedemptionDate getUnderlyingRedemptionDate() throws FieldNotFound 
  { org.quickfix.field.UnderlyingRedemptionDate value = new org.quickfix.field.UnderlyingRedemptionDate(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.UnderlyingRedemptionDate field) 
  { return isSetField(field); } 
  public boolean isSetUnderlyingRedemptionDate() 
  { return isSetField(247); } 
  public void set(org.quickfix.field.UnderlyingPutOrCall value) 
  { setField(value); } 
  public org.quickfix.field.UnderlyingPutOrCall get(org.quickfix.field.UnderlyingPutOrCall value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.UnderlyingPutOrCall getUnderlyingPutOrCall() throws FieldNotFound 
  { org.quickfix.field.UnderlyingPutOrCall value = new org.quickfix.field.UnderlyingPutOrCall(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.UnderlyingPutOrCall field) 
  { return isSetField(field); } 
  public boolean isSetUnderlyingPutOrCall() 
  { return isSetField(315); } 
  public void set(org.quickfix.field.UnderlyingStrikePrice value) 
  { setField(value); } 
  public org.quickfix.field.UnderlyingStrikePrice get(org.quickfix.field.UnderlyingStrikePrice value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.UnderlyingStrikePrice getUnderlyingStrikePrice() throws FieldNotFound 
  { org.quickfix.field.UnderlyingStrikePrice value = new org.quickfix.field.UnderlyingStrikePrice(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.UnderlyingStrikePrice field) 
  { return isSetField(field); } 
  public boolean isSetUnderlyingStrikePrice() 
  { return isSetField(316); } 
  public void set(org.quickfix.field.UnderlyingOptAttribute value) 
  { setField(value); } 
  public org.quickfix.field.UnderlyingOptAttribute get(org.quickfix.field.UnderlyingOptAttribute value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.UnderlyingOptAttribute getUnderlyingOptAttribute() throws FieldNotFound 
  { org.quickfix.field.UnderlyingOptAttribute value = new org.quickfix.field.UnderlyingOptAttribute(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.UnderlyingOptAttribute field) 
  { return isSetField(field); } 
  public boolean isSetUnderlyingOptAttribute() 
  { return isSetField(317); } 
  public void set(org.quickfix.field.UnderlyingContractMultiplier value) 
  { setField(value); } 
  public org.quickfix.field.UnderlyingContractMultiplier get(org.quickfix.field.UnderlyingContractMultiplier value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.UnderlyingContractMultiplier getUnderlyingContractMultiplier() throws FieldNotFound 
  { org.quickfix.field.UnderlyingContractMultiplier value = new org.quickfix.field.UnderlyingContractMultiplier(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.UnderlyingContractMultiplier field) 
  { return isSetField(field); } 
  public boolean isSetUnderlyingContractMultiplier() 
  { return isSetField(436); } 
  public void set(org.quickfix.field.UnderlyingCouponRate value) 
  { setField(value); } 
  public org.quickfix.field.UnderlyingCouponRate get(org.quickfix.field.UnderlyingCouponRate value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.UnderlyingCouponRate getUnderlyingCouponRate() throws FieldNotFound 
  { org.quickfix.field.UnderlyingCouponRate value = new org.quickfix.field.UnderlyingCouponRate(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.UnderlyingCouponRate field) 
  { return isSetField(field); } 
  public boolean isSetUnderlyingCouponRate() 
  { return isSetField(435); } 
  public void set(org.quickfix.field.UnderlyingSecurityExchange value) 
  { setField(value); } 
  public org.quickfix.field.UnderlyingSecurityExchange get(org.quickfix.field.UnderlyingSecurityExchange value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.UnderlyingSecurityExchange getUnderlyingSecurityExchange() throws FieldNotFound 
  { org.quickfix.field.UnderlyingSecurityExchange value = new org.quickfix.field.UnderlyingSecurityExchange(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.UnderlyingSecurityExchange field) 
  { return isSetField(field); } 
  public boolean isSetUnderlyingSecurityExchange() 
  { return isSetField(308); } 
  public void set(org.quickfix.field.UnderlyingIssuer value) 
  { setField(value); } 
  public org.quickfix.field.UnderlyingIssuer get(org.quickfix.field.UnderlyingIssuer value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.UnderlyingIssuer getUnderlyingIssuer() throws FieldNotFound 
  { org.quickfix.field.UnderlyingIssuer value = new org.quickfix.field.UnderlyingIssuer(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.UnderlyingIssuer field) 
  { return isSetField(field); } 
  public boolean isSetUnderlyingIssuer() 
  { return isSetField(306); } 
  public void set(org.quickfix.field.EncodedUnderlyingIssuerLen value) 
  { setField(value); } 
  public org.quickfix.field.EncodedUnderlyingIssuerLen get(org.quickfix.field.EncodedUnderlyingIssuerLen value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.EncodedUnderlyingIssuerLen getEncodedUnderlyingIssuerLen() throws FieldNotFound 
  { org.quickfix.field.EncodedUnderlyingIssuerLen value = new org.quickfix.field.EncodedUnderlyingIssuerLen(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.EncodedUnderlyingIssuerLen field) 
  { return isSetField(field); } 
  public boolean isSetEncodedUnderlyingIssuerLen() 
  { return isSetField(362); } 
  public void set(org.quickfix.field.EncodedUnderlyingIssuer value) 
  { setField(value); } 
  public org.quickfix.field.EncodedUnderlyingIssuer get(org.quickfix.field.EncodedUnderlyingIssuer value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.EncodedUnderlyingIssuer getEncodedUnderlyingIssuer() throws FieldNotFound 
  { org.quickfix.field.EncodedUnderlyingIssuer value = new org.quickfix.field.EncodedUnderlyingIssuer(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.EncodedUnderlyingIssuer field) 
  { return isSetField(field); } 
  public boolean isSetEncodedUnderlyingIssuer() 
  { return isSetField(363); } 
  public void set(org.quickfix.field.UnderlyingSecurityDesc value) 
  { setField(value); } 
  public org.quickfix.field.UnderlyingSecurityDesc get(org.quickfix.field.UnderlyingSecurityDesc value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.UnderlyingSecurityDesc getUnderlyingSecurityDesc() throws FieldNotFound 
  { org.quickfix.field.UnderlyingSecurityDesc value = new org.quickfix.field.UnderlyingSecurityDesc(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.UnderlyingSecurityDesc field) 
  { return isSetField(field); } 
  public boolean isSetUnderlyingSecurityDesc() 
  { return isSetField(307); } 
  public void set(org.quickfix.field.EncodedUnderlyingSecurityDescLen value) 
  { setField(value); } 
  public org.quickfix.field.EncodedUnderlyingSecurityDescLen get(org.quickfix.field.EncodedUnderlyingSecurityDescLen value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.EncodedUnderlyingSecurityDescLen getEncodedUnderlyingSecurityDescLen() throws FieldNotFound 
  { org.quickfix.field.EncodedUnderlyingSecurityDescLen value = new org.quickfix.field.EncodedUnderlyingSecurityDescLen(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.EncodedUnderlyingSecurityDescLen field) 
  { return isSetField(field); } 
  public boolean isSetEncodedUnderlyingSecurityDescLen() 
  { return isSetField(364); } 
  public void set(org.quickfix.field.EncodedUnderlyingSecurityDesc value) 
  { setField(value); } 
  public org.quickfix.field.EncodedUnderlyingSecurityDesc get(org.quickfix.field.EncodedUnderlyingSecurityDesc value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.EncodedUnderlyingSecurityDesc getEncodedUnderlyingSecurityDesc() throws FieldNotFound 
  { org.quickfix.field.EncodedUnderlyingSecurityDesc value = new org.quickfix.field.EncodedUnderlyingSecurityDesc(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.EncodedUnderlyingSecurityDesc field) 
  { return isSetField(field); } 
  public boolean isSetEncodedUnderlyingSecurityDesc() 
  { return isSetField(365); } 
  public void set(org.quickfix.field.NoUnderlyingSecurityAltID value) 
  { setField(value); } 
  public org.quickfix.field.NoUnderlyingSecurityAltID get(org.quickfix.field.NoUnderlyingSecurityAltID value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.NoUnderlyingSecurityAltID getNoUnderlyingSecurityAltID() throws FieldNotFound 
  { org.quickfix.field.NoUnderlyingSecurityAltID value = new org.quickfix.field.NoUnderlyingSecurityAltID(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.NoUnderlyingSecurityAltID field) 
  { return isSetField(field); } 
  public boolean isSetNoUnderlyingSecurityAltID() 
  { return isSetField(457); } 

public static class NoUnderlyingSecurityAltID extends Group { 
  public NoUnderlyingSecurityAltID() { 
    super(457, 458, 
    new int[] { 
               458, 
               459, 
               0 } 
); 
  } 
  public void set(org.quickfix.field.UnderlyingSecurityAltID value) 
  { setField(value); } 
  public org.quickfix.field.UnderlyingSecurityAltID get(org.quickfix.field.UnderlyingSecurityAltID value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.UnderlyingSecurityAltID getUnderlyingSecurityAltID() throws FieldNotFound 
  { org.quickfix.field.UnderlyingSecurityAltID value = new org.quickfix.field.UnderlyingSecurityAltID(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.UnderlyingSecurityAltID field) 
  { return isSetField(field); } 
  public boolean isSetUnderlyingSecurityAltID() 
  { return isSetField(458); } 

  public void set(org.quickfix.field.UnderlyingSecurityAltIDSource value) 
  { setField(value); } 
  public org.quickfix.field.UnderlyingSecurityAltIDSource get(org.quickfix.field.UnderlyingSecurityAltIDSource value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.UnderlyingSecurityAltIDSource getUnderlyingSecurityAltIDSource() throws FieldNotFound 
  { org.quickfix.field.UnderlyingSecurityAltIDSource value = new org.quickfix.field.UnderlyingSecurityAltIDSource(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.UnderlyingSecurityAltIDSource field) 
  { return isSetField(field); } 
  public boolean isSetUnderlyingSecurityAltIDSource() 
  { return isSetField(459); } 

} 
} 
} 

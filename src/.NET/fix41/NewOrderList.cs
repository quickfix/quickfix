namespace QuickFix41
{

  public class NewOrderList : Message
  {
    public NewOrderList() : base(MsgType()) {}
    static QuickFix.MsgType MsgType() { return new QuickFix.MsgType("E"); }

    public NewOrderList(
      QuickFix.ListID aListID,
      QuickFix.ListSeqNo aListSeqNo,
      QuickFix.ListNoOrds aListNoOrds,
      QuickFix.ClOrdID aClOrdID,
      QuickFix.HandlInst aHandlInst,
      QuickFix.Symbol aSymbol,
      QuickFix.Side aSide,
      QuickFix.OrderQty aOrderQty,
      QuickFix.OrdType aOrdType )
    : base(MsgType()) {
      set(aListID);
      set(aListSeqNo);
      set(aListNoOrds);
      set(aClOrdID);
      set(aHandlInst);
      set(aSymbol);
      set(aSide);
      set(aOrderQty);
      set(aOrdType);
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

    public void set(QuickFix.ListSeqNo value)
    { setField(value); }
    public QuickFix.ListSeqNo get(QuickFix.ListSeqNo  value)
    { getField(value); return value; }
    public QuickFix.ListSeqNo getListSeqNo()
    { QuickFix.ListSeqNo value = new QuickFix.ListSeqNo();
      getField(value); return value; }
    public bool isSet(QuickFix.ListSeqNo field)
    { return isSetField(field); }
    public bool isSetListSeqNo()
    { return isSetField(67); }

    public void set(QuickFix.ListNoOrds value)
    { setField(value); }
    public QuickFix.ListNoOrds get(QuickFix.ListNoOrds  value)
    { getField(value); return value; }
    public QuickFix.ListNoOrds getListNoOrds()
    { QuickFix.ListNoOrds value = new QuickFix.ListNoOrds();
      getField(value); return value; }
    public bool isSet(QuickFix.ListNoOrds field)
    { return isSetField(field); }
    public bool isSetListNoOrds()
    { return isSetField(68); }

    public void set(QuickFix.ListExecInst value)
    { setField(value); }
    public QuickFix.ListExecInst get(QuickFix.ListExecInst  value)
    { getField(value); return value; }
    public QuickFix.ListExecInst getListExecInst()
    { QuickFix.ListExecInst value = new QuickFix.ListExecInst();
      getField(value); return value; }
    public bool isSet(QuickFix.ListExecInst field)
    { return isSetField(field); }
    public bool isSetListExecInst()
    { return isSetField(69); }

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

    public void set(QuickFix.ClientID value)
    { setField(value); }
    public QuickFix.ClientID get(QuickFix.ClientID  value)
    { getField(value); return value; }
    public QuickFix.ClientID getClientID()
    { QuickFix.ClientID value = new QuickFix.ClientID();
      getField(value); return value; }
    public bool isSet(QuickFix.ClientID field)
    { return isSetField(field); }
    public bool isSetClientID()
    { return isSetField(109); }

    public void set(QuickFix.ExecBroker value)
    { setField(value); }
    public QuickFix.ExecBroker get(QuickFix.ExecBroker  value)
    { getField(value); return value; }
    public QuickFix.ExecBroker getExecBroker()
    { QuickFix.ExecBroker value = new QuickFix.ExecBroker();
      getField(value); return value; }
    public bool isSet(QuickFix.ExecBroker field)
    { return isSetField(field); }
    public bool isSetExecBroker()
    { return isSetField(76); }

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

    public void set(QuickFix.SettlmntTyp value)
    { setField(value); }
    public QuickFix.SettlmntTyp get(QuickFix.SettlmntTyp  value)
    { getField(value); return value; }
    public QuickFix.SettlmntTyp getSettlmntTyp()
    { QuickFix.SettlmntTyp value = new QuickFix.SettlmntTyp();
      getField(value); return value; }
    public bool isSet(QuickFix.SettlmntTyp field)
    { return isSetField(field); }
    public bool isSetSettlmntTyp()
    { return isSetField(63); }

    public void set(QuickFix.FutSettDate value)
    { setField(value); }
    public QuickFix.FutSettDate get(QuickFix.FutSettDate  value)
    { getField(value); return value; }
    public QuickFix.FutSettDate getFutSettDate()
    { QuickFix.FutSettDate value = new QuickFix.FutSettDate();
      getField(value); return value; }
    public bool isSet(QuickFix.FutSettDate field)
    { return isSetField(field); }
    public bool isSetFutSettDate()
    { return isSetField(64); }

    public void set(QuickFix.HandlInst value)
    { setField(value); }
    public QuickFix.HandlInst get(QuickFix.HandlInst  value)
    { getField(value); return value; }
    public QuickFix.HandlInst getHandlInst()
    { QuickFix.HandlInst value = new QuickFix.HandlInst();
      getField(value); return value; }
    public bool isSet(QuickFix.HandlInst field)
    { return isSetField(field); }
    public bool isSetHandlInst()
    { return isSetField(21); }

    public void set(QuickFix.ExecInst value)
    { setField(value); }
    public QuickFix.ExecInst get(QuickFix.ExecInst  value)
    { getField(value); return value; }
    public QuickFix.ExecInst getExecInst()
    { QuickFix.ExecInst value = new QuickFix.ExecInst();
      getField(value); return value; }
    public bool isSet(QuickFix.ExecInst field)
    { return isSetField(field); }
    public bool isSetExecInst()
    { return isSetField(18); }

    public void set(QuickFix.MinQty value)
    { setField(value); }
    public QuickFix.MinQty get(QuickFix.MinQty  value)
    { getField(value); return value; }
    public QuickFix.MinQty getMinQty()
    { QuickFix.MinQty value = new QuickFix.MinQty();
      getField(value); return value; }
    public bool isSet(QuickFix.MinQty field)
    { return isSetField(field); }
    public bool isSetMinQty()
    { return isSetField(110); }

    public void set(QuickFix.MaxFloor value)
    { setField(value); }
    public QuickFix.MaxFloor get(QuickFix.MaxFloor  value)
    { getField(value); return value; }
    public QuickFix.MaxFloor getMaxFloor()
    { QuickFix.MaxFloor value = new QuickFix.MaxFloor();
      getField(value); return value; }
    public bool isSet(QuickFix.MaxFloor field)
    { return isSetField(field); }
    public bool isSetMaxFloor()
    { return isSetField(111); }

    public void set(QuickFix.ExDestination value)
    { setField(value); }
    public QuickFix.ExDestination get(QuickFix.ExDestination  value)
    { getField(value); return value; }
    public QuickFix.ExDestination getExDestination()
    { QuickFix.ExDestination value = new QuickFix.ExDestination();
      getField(value); return value; }
    public bool isSet(QuickFix.ExDestination field)
    { return isSetField(field); }
    public bool isSetExDestination()
    { return isSetField(100); }

    public void set(QuickFix.ProcessCode value)
    { setField(value); }
    public QuickFix.ProcessCode get(QuickFix.ProcessCode  value)
    { getField(value); return value; }
    public QuickFix.ProcessCode getProcessCode()
    { QuickFix.ProcessCode value = new QuickFix.ProcessCode();
      getField(value); return value; }
    public bool isSet(QuickFix.ProcessCode field)
    { return isSetField(field); }
    public bool isSetProcessCode()
    { return isSetField(81); }

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

    public void set(QuickFix.SymbolSfx value)
    { setField(value); }
    public QuickFix.SymbolSfx get(QuickFix.SymbolSfx  value)
    { getField(value); return value; }
    public QuickFix.SymbolSfx getSymbolSfx()
    { QuickFix.SymbolSfx value = new QuickFix.SymbolSfx();
      getField(value); return value; }
    public bool isSet(QuickFix.SymbolSfx field)
    { return isSetField(field); }
    public bool isSetSymbolSfx()
    { return isSetField(65); }

    public void set(QuickFix.SecurityID value)
    { setField(value); }
    public QuickFix.SecurityID get(QuickFix.SecurityID  value)
    { getField(value); return value; }
    public QuickFix.SecurityID getSecurityID()
    { QuickFix.SecurityID value = new QuickFix.SecurityID();
      getField(value); return value; }
    public bool isSet(QuickFix.SecurityID field)
    { return isSetField(field); }
    public bool isSetSecurityID()
    { return isSetField(48); }

    public void set(QuickFix.IDSource value)
    { setField(value); }
    public QuickFix.IDSource get(QuickFix.IDSource  value)
    { getField(value); return value; }
    public QuickFix.IDSource getIDSource()
    { QuickFix.IDSource value = new QuickFix.IDSource();
      getField(value); return value; }
    public bool isSet(QuickFix.IDSource field)
    { return isSetField(field); }
    public bool isSetIDSource()
    { return isSetField(22); }

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

    public void set(QuickFix.MaturityMonthYear value)
    { setField(value); }
    public QuickFix.MaturityMonthYear get(QuickFix.MaturityMonthYear  value)
    { getField(value); return value; }
    public QuickFix.MaturityMonthYear getMaturityMonthYear()
    { QuickFix.MaturityMonthYear value = new QuickFix.MaturityMonthYear();
      getField(value); return value; }
    public bool isSet(QuickFix.MaturityMonthYear field)
    { return isSetField(field); }
    public bool isSetMaturityMonthYear()
    { return isSetField(200); }

    public void set(QuickFix.MaturityDay value)
    { setField(value); }
    public QuickFix.MaturityDay get(QuickFix.MaturityDay  value)
    { getField(value); return value; }
    public QuickFix.MaturityDay getMaturityDay()
    { QuickFix.MaturityDay value = new QuickFix.MaturityDay();
      getField(value); return value; }
    public bool isSet(QuickFix.MaturityDay field)
    { return isSetField(field); }
    public bool isSetMaturityDay()
    { return isSetField(205); }

    public void set(QuickFix.PutOrCall value)
    { setField(value); }
    public QuickFix.PutOrCall get(QuickFix.PutOrCall  value)
    { getField(value); return value; }
    public QuickFix.PutOrCall getPutOrCall()
    { QuickFix.PutOrCall value = new QuickFix.PutOrCall();
      getField(value); return value; }
    public bool isSet(QuickFix.PutOrCall field)
    { return isSetField(field); }
    public bool isSetPutOrCall()
    { return isSetField(201); }

    public void set(QuickFix.StrikePrice value)
    { setField(value); }
    public QuickFix.StrikePrice get(QuickFix.StrikePrice  value)
    { getField(value); return value; }
    public QuickFix.StrikePrice getStrikePrice()
    { QuickFix.StrikePrice value = new QuickFix.StrikePrice();
      getField(value); return value; }
    public bool isSet(QuickFix.StrikePrice field)
    { return isSetField(field); }
    public bool isSetStrikePrice()
    { return isSetField(202); }

    public void set(QuickFix.OptAttribute value)
    { setField(value); }
    public QuickFix.OptAttribute get(QuickFix.OptAttribute  value)
    { getField(value); return value; }
    public QuickFix.OptAttribute getOptAttribute()
    { QuickFix.OptAttribute value = new QuickFix.OptAttribute();
      getField(value); return value; }
    public bool isSet(QuickFix.OptAttribute field)
    { return isSetField(field); }
    public bool isSetOptAttribute()
    { return isSetField(206); }

    public void set(QuickFix.SecurityExchange value)
    { setField(value); }
    public QuickFix.SecurityExchange get(QuickFix.SecurityExchange  value)
    { getField(value); return value; }
    public QuickFix.SecurityExchange getSecurityExchange()
    { QuickFix.SecurityExchange value = new QuickFix.SecurityExchange();
      getField(value); return value; }
    public bool isSet(QuickFix.SecurityExchange field)
    { return isSetField(field); }
    public bool isSetSecurityExchange()
    { return isSetField(207); }

    public void set(QuickFix.Issuer value)
    { setField(value); }
    public QuickFix.Issuer get(QuickFix.Issuer  value)
    { getField(value); return value; }
    public QuickFix.Issuer getIssuer()
    { QuickFix.Issuer value = new QuickFix.Issuer();
      getField(value); return value; }
    public bool isSet(QuickFix.Issuer field)
    { return isSetField(field); }
    public bool isSetIssuer()
    { return isSetField(106); }

    public void set(QuickFix.SecurityDesc value)
    { setField(value); }
    public QuickFix.SecurityDesc get(QuickFix.SecurityDesc  value)
    { getField(value); return value; }
    public QuickFix.SecurityDesc getSecurityDesc()
    { QuickFix.SecurityDesc value = new QuickFix.SecurityDesc();
      getField(value); return value; }
    public bool isSet(QuickFix.SecurityDesc field)
    { return isSetField(field); }
    public bool isSetSecurityDesc()
    { return isSetField(107); }

    public void set(QuickFix.PrevClosePx value)
    { setField(value); }
    public QuickFix.PrevClosePx get(QuickFix.PrevClosePx  value)
    { getField(value); return value; }
    public QuickFix.PrevClosePx getPrevClosePx()
    { QuickFix.PrevClosePx value = new QuickFix.PrevClosePx();
      getField(value); return value; }
    public bool isSet(QuickFix.PrevClosePx field)
    { return isSetField(field); }
    public bool isSetPrevClosePx()
    { return isSetField(140); }

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

    public void set(QuickFix.LocateReqd value)
    { setField(value); }
    public QuickFix.LocateReqd get(QuickFix.LocateReqd  value)
    { getField(value); return value; }
    public QuickFix.LocateReqd getLocateReqd()
    { QuickFix.LocateReqd value = new QuickFix.LocateReqd();
      getField(value); return value; }
    public bool isSet(QuickFix.LocateReqd field)
    { return isSetField(field); }
    public bool isSetLocateReqd()
    { return isSetField(114); }

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

    public void set(QuickFix.OrdType value)
    { setField(value); }
    public QuickFix.OrdType get(QuickFix.OrdType  value)
    { getField(value); return value; }
    public QuickFix.OrdType getOrdType()
    { QuickFix.OrdType value = new QuickFix.OrdType();
      getField(value); return value; }
    public bool isSet(QuickFix.OrdType field)
    { return isSetField(field); }
    public bool isSetOrdType()
    { return isSetField(40); }

    public void set(QuickFix.Price value)
    { setField(value); }
    public QuickFix.Price get(QuickFix.Price  value)
    { getField(value); return value; }
    public QuickFix.Price getPrice()
    { QuickFix.Price value = new QuickFix.Price();
      getField(value); return value; }
    public bool isSet(QuickFix.Price field)
    { return isSetField(field); }
    public bool isSetPrice()
    { return isSetField(44); }

    public void set(QuickFix.StopPx value)
    { setField(value); }
    public QuickFix.StopPx get(QuickFix.StopPx  value)
    { getField(value); return value; }
    public QuickFix.StopPx getStopPx()
    { QuickFix.StopPx value = new QuickFix.StopPx();
      getField(value); return value; }
    public bool isSet(QuickFix.StopPx field)
    { return isSetField(field); }
    public bool isSetStopPx()
    { return isSetField(99); }

    public void set(QuickFix.PegDifference value)
    { setField(value); }
    public QuickFix.PegDifference get(QuickFix.PegDifference  value)
    { getField(value); return value; }
    public QuickFix.PegDifference getPegDifference()
    { QuickFix.PegDifference value = new QuickFix.PegDifference();
      getField(value); return value; }
    public bool isSet(QuickFix.PegDifference field)
    { return isSetField(field); }
    public bool isSetPegDifference()
    { return isSetField(211); }

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

    public void set(QuickFix.TimeInForce value)
    { setField(value); }
    public QuickFix.TimeInForce get(QuickFix.TimeInForce  value)
    { getField(value); return value; }
    public QuickFix.TimeInForce getTimeInForce()
    { QuickFix.TimeInForce value = new QuickFix.TimeInForce();
      getField(value); return value; }
    public bool isSet(QuickFix.TimeInForce field)
    { return isSetField(field); }
    public bool isSetTimeInForce()
    { return isSetField(59); }

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

    public void set(QuickFix.Commission value)
    { setField(value); }
    public QuickFix.Commission get(QuickFix.Commission  value)
    { getField(value); return value; }
    public QuickFix.Commission getCommission()
    { QuickFix.Commission value = new QuickFix.Commission();
      getField(value); return value; }
    public bool isSet(QuickFix.Commission field)
    { return isSetField(field); }
    public bool isSetCommission()
    { return isSetField(12); }

    public void set(QuickFix.CommType value)
    { setField(value); }
    public QuickFix.CommType get(QuickFix.CommType  value)
    { getField(value); return value; }
    public QuickFix.CommType getCommType()
    { QuickFix.CommType value = new QuickFix.CommType();
      getField(value); return value; }
    public bool isSet(QuickFix.CommType field)
    { return isSetField(field); }
    public bool isSetCommType()
    { return isSetField(13); }

    public void set(QuickFix.Rule80A value)
    { setField(value); }
    public QuickFix.Rule80A get(QuickFix.Rule80A  value)
    { getField(value); return value; }
    public QuickFix.Rule80A getRule80A()
    { QuickFix.Rule80A value = new QuickFix.Rule80A();
      getField(value); return value; }
    public bool isSet(QuickFix.Rule80A field)
    { return isSetField(field); }
    public bool isSetRule80A()
    { return isSetField(47); }

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

    public void set(QuickFix.SettlCurrency value)
    { setField(value); }
    public QuickFix.SettlCurrency get(QuickFix.SettlCurrency  value)
    { getField(value); return value; }
    public QuickFix.SettlCurrency getSettlCurrency()
    { QuickFix.SettlCurrency value = new QuickFix.SettlCurrency();
      getField(value); return value; }
    public bool isSet(QuickFix.SettlCurrency field)
    { return isSetField(field); }
    public bool isSetSettlCurrency()
    { return isSetField(120); }

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

    public void set(QuickFix.FutSettDate2 value)
    { setField(value); }
    public QuickFix.FutSettDate2 get(QuickFix.FutSettDate2  value)
    { getField(value); return value; }
    public QuickFix.FutSettDate2 getFutSettDate2()
    { QuickFix.FutSettDate2 value = new QuickFix.FutSettDate2();
      getField(value); return value; }
    public bool isSet(QuickFix.FutSettDate2 field)
    { return isSetField(field); }
    public bool isSetFutSettDate2()
    { return isSetField(193); }

    public void set(QuickFix.OrderQty2 value)
    { setField(value); }
    public QuickFix.OrderQty2 get(QuickFix.OrderQty2  value)
    { getField(value); return value; }
    public QuickFix.OrderQty2 getOrderQty2()
    { QuickFix.OrderQty2 value = new QuickFix.OrderQty2();
      getField(value); return value; }
    public bool isSet(QuickFix.OrderQty2 field)
    { return isSetField(field); }
    public bool isSetOrderQty2()
    { return isSetField(192); }

    public void set(QuickFix.OpenClose value)
    { setField(value); }
    public QuickFix.OpenClose get(QuickFix.OpenClose  value)
    { getField(value); return value; }
    public QuickFix.OpenClose getOpenClose()
    { QuickFix.OpenClose value = new QuickFix.OpenClose();
      getField(value); return value; }
    public bool isSet(QuickFix.OpenClose field)
    { return isSetField(field); }
    public bool isSetOpenClose()
    { return isSetField(77); }

    public void set(QuickFix.CoveredOrUncovered value)
    { setField(value); }
    public QuickFix.CoveredOrUncovered get(QuickFix.CoveredOrUncovered  value)
    { getField(value); return value; }
    public QuickFix.CoveredOrUncovered getCoveredOrUncovered()
    { QuickFix.CoveredOrUncovered value = new QuickFix.CoveredOrUncovered();
      getField(value); return value; }
    public bool isSet(QuickFix.CoveredOrUncovered field)
    { return isSetField(field); }
    public bool isSetCoveredOrUncovered()
    { return isSetField(203); }

    public void set(QuickFix.CustomerOrFirm value)
    { setField(value); }
    public QuickFix.CustomerOrFirm get(QuickFix.CustomerOrFirm  value)
    { getField(value); return value; }
    public QuickFix.CustomerOrFirm getCustomerOrFirm()
    { QuickFix.CustomerOrFirm value = new QuickFix.CustomerOrFirm();
      getField(value); return value; }
    public bool isSet(QuickFix.CustomerOrFirm field)
    { return isSetField(field); }
    public bool isSetCustomerOrFirm()
    { return isSetField(204); }

    public void set(QuickFix.MaxShow value)
    { setField(value); }
    public QuickFix.MaxShow get(QuickFix.MaxShow  value)
    { getField(value); return value; }
    public QuickFix.MaxShow getMaxShow()
    { QuickFix.MaxShow value = new QuickFix.MaxShow();
      getField(value); return value; }
    public bool isSet(QuickFix.MaxShow field)
    { return isSetField(field); }
    public bool isSetMaxShow()
    { return isSetField(210); }

  };

}


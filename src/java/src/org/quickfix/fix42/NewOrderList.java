package org.quickfix.fix42;
import org.quickfix.FieldNotFound;
import org.quickfix.Group;
import org.quickfix.field.*;

public class NewOrderList extends Message {

    public NewOrderList() {
        getHeader().setField(new MsgType("E"));
    }
    public NewOrderList(
        org.quickfix.field.ListID aListID,
        org.quickfix.field.BidType aBidType,
        org.quickfix.field.TotNoOrders aTotNoOrders,
        org.quickfix.field.NoOrders aNoOrders ) {
        getHeader().setField(new MsgType("E"));
        set(aListID);
        set(aBidType);
        set(aTotNoOrders);
        set(aNoOrders);
    }

    public void set(org.quickfix.field.ListID value) {
        setField(value);
    }
    public org.quickfix.field.ListID get(org.quickfix.field.ListID value) throws FieldNotFound {
        getField(value);
        return value;
    }
    public org.quickfix.field.ListID getListID() throws FieldNotFound {
        org.quickfix.field.ListID value = new org.quickfix.field.ListID();
        getField(value);
        return value;
    }

    public void set(org.quickfix.field.BidID value) {
        setField(value);
    }
    public org.quickfix.field.BidID get(org.quickfix.field.BidID value) throws FieldNotFound {
        getField(value);
        return value;
    }
    public org.quickfix.field.BidID getBidID() throws FieldNotFound {
        org.quickfix.field.BidID value = new org.quickfix.field.BidID();
        getField(value);
        return value;
    }

    public void set(org.quickfix.field.ClientBidID value) {
        setField(value);
    }
    public org.quickfix.field.ClientBidID get(org.quickfix.field.ClientBidID value) throws FieldNotFound {
        getField(value);
        return value;
    }
    public org.quickfix.field.ClientBidID getClientBidID() throws FieldNotFound {
        org.quickfix.field.ClientBidID value = new org.quickfix.field.ClientBidID();
        getField(value);
        return value;
    }

    public void set(org.quickfix.field.ProgRptReqs value) {
        setField(value);
    }
    public org.quickfix.field.ProgRptReqs get(org.quickfix.field.ProgRptReqs value) throws FieldNotFound {
        getField(value);
        return value;
    }
    public org.quickfix.field.ProgRptReqs getProgRptReqs() throws FieldNotFound {
        org.quickfix.field.ProgRptReqs value = new org.quickfix.field.ProgRptReqs();
        getField(value);
        return value;
    }

    public void set(org.quickfix.field.BidType value) {
        setField(value);
    }
    public org.quickfix.field.BidType get(org.quickfix.field.BidType value) throws FieldNotFound {
        getField(value);
        return value;
    }
    public org.quickfix.field.BidType getBidType() throws FieldNotFound {
        org.quickfix.field.BidType value = new org.quickfix.field.BidType();
        getField(value);
        return value;
    }

    public void set(org.quickfix.field.ProgPeriodInterval value) {
        setField(value);
    }
    public org.quickfix.field.ProgPeriodInterval get(org.quickfix.field.ProgPeriodInterval value) throws FieldNotFound {
        getField(value);
        return value;
    }
    public org.quickfix.field.ProgPeriodInterval getProgPeriodInterval() throws FieldNotFound {
        org.quickfix.field.ProgPeriodInterval value = new org.quickfix.field.ProgPeriodInterval();
        getField(value);
        return value;
    }

    public void set(org.quickfix.field.ListExecInstType value) {
        setField(value);
    }
    public org.quickfix.field.ListExecInstType get(org.quickfix.field.ListExecInstType value) throws FieldNotFound {
        getField(value);
        return value;
    }
    public org.quickfix.field.ListExecInstType getListExecInstType() throws FieldNotFound {
        org.quickfix.field.ListExecInstType value = new org.quickfix.field.ListExecInstType();
        getField(value);
        return value;
    }

    public void set(org.quickfix.field.ListExecInst value) {
        setField(value);
    }
    public org.quickfix.field.ListExecInst get(org.quickfix.field.ListExecInst value) throws FieldNotFound {
        getField(value);
        return value;
    }
    public org.quickfix.field.ListExecInst getListExecInst() throws FieldNotFound {
        org.quickfix.field.ListExecInst value = new org.quickfix.field.ListExecInst();
        getField(value);
        return value;
    }

    public void set(org.quickfix.field.EncodedListExecInstLen value) {
        setField(value);
    }
    public org.quickfix.field.EncodedListExecInstLen get(org.quickfix.field.EncodedListExecInstLen value) throws FieldNotFound {
        getField(value);
        return value;
    }
    public org.quickfix.field.EncodedListExecInstLen getEncodedListExecInstLen() throws FieldNotFound {
        org.quickfix.field.EncodedListExecInstLen value = new org.quickfix.field.EncodedListExecInstLen();
        getField(value);
        return value;
    }

    public void set(org.quickfix.field.EncodedListExecInst value) {
        setField(value);
    }
    public org.quickfix.field.EncodedListExecInst get(org.quickfix.field.EncodedListExecInst value) throws FieldNotFound {
        getField(value);
        return value;
    }
    public org.quickfix.field.EncodedListExecInst getEncodedListExecInst() throws FieldNotFound {
        org.quickfix.field.EncodedListExecInst value = new org.quickfix.field.EncodedListExecInst();
        getField(value);
        return value;
    }

    public void set(org.quickfix.field.TotNoOrders value) {
        setField(value);
    }
    public org.quickfix.field.TotNoOrders get(org.quickfix.field.TotNoOrders value) throws FieldNotFound {
        getField(value);
        return value;
    }
    public org.quickfix.field.TotNoOrders getTotNoOrders() throws FieldNotFound {
        org.quickfix.field.TotNoOrders value = new org.quickfix.field.TotNoOrders();
        getField(value);
        return value;
    }

    public void set(org.quickfix.field.NoOrders value) {
        setField(value);
    }
    public org.quickfix.field.NoOrders get(org.quickfix.field.NoOrders value) throws FieldNotFound {
        getField(value);
        return value;
    }
    public org.quickfix.field.NoOrders getNoOrders() throws FieldNotFound {
        org.quickfix.field.NoOrders value = new org.quickfix.field.NoOrders();
        getField(value);
        return value;
    }

    public class NoOrders extends Group {
        public NoOrders() {
            super(73,11);
        }
        void set(org.quickfix.field.ClOrdID value) {
            setField(value);
        }
        org.quickfix.field.ClOrdID get(org.quickfix.field.ClOrdID value) throws FieldNotFound {
            getField(value);
            return value;
        }
        org.quickfix.field.ClOrdID getClOrdID() throws FieldNotFound {
            org.quickfix.field.ClOrdID value = new org.quickfix.field.ClOrdID();
            getField(value);
            return value;
        }

        void set(org.quickfix.field.ListSeqNo value) {
            setField(value);
        }
        org.quickfix.field.ListSeqNo get(org.quickfix.field.ListSeqNo value) throws FieldNotFound {
            getField(value);
            return value;
        }
        org.quickfix.field.ListSeqNo getListSeqNo() throws FieldNotFound {
            org.quickfix.field.ListSeqNo value = new org.quickfix.field.ListSeqNo();
            getField(value);
            return value;
        }

        void set(org.quickfix.field.SettlInstMode value) {
            setField(value);
        }
        org.quickfix.field.SettlInstMode get(org.quickfix.field.SettlInstMode value) throws FieldNotFound {
            getField(value);
            return value;
        }
        org.quickfix.field.SettlInstMode getSettlInstMode() throws FieldNotFound {
            org.quickfix.field.SettlInstMode value = new org.quickfix.field.SettlInstMode();
            getField(value);
            return value;
        }

        void set(org.quickfix.field.ClientID value) {
            setField(value);
        }
        org.quickfix.field.ClientID get(org.quickfix.field.ClientID value) throws FieldNotFound {
            getField(value);
            return value;
        }
        org.quickfix.field.ClientID getClientID() throws FieldNotFound {
            org.quickfix.field.ClientID value = new org.quickfix.field.ClientID();
            getField(value);
            return value;
        }

        void set(org.quickfix.field.ExecBroker value) {
            setField(value);
        }
        org.quickfix.field.ExecBroker get(org.quickfix.field.ExecBroker value) throws FieldNotFound {
            getField(value);
            return value;
        }
        org.quickfix.field.ExecBroker getExecBroker() throws FieldNotFound {
            org.quickfix.field.ExecBroker value = new org.quickfix.field.ExecBroker();
            getField(value);
            return value;
        }

        void set(org.quickfix.field.Account value) {
            setField(value);
        }
        org.quickfix.field.Account get(org.quickfix.field.Account value) throws FieldNotFound {
            getField(value);
            return value;
        }
        org.quickfix.field.Account getAccount() throws FieldNotFound {
            org.quickfix.field.Account value = new org.quickfix.field.Account();
            getField(value);
            return value;
        }

        void set(org.quickfix.field.NoAllocs value) {
            setField(value);
        }
        org.quickfix.field.NoAllocs get(org.quickfix.field.NoAllocs value) throws FieldNotFound {
            getField(value);
            return value;
        }
        org.quickfix.field.NoAllocs getNoAllocs() throws FieldNotFound {
            org.quickfix.field.NoAllocs value = new org.quickfix.field.NoAllocs();
            getField(value);
            return value;
        }

        void set(org.quickfix.field.SettlmntTyp value) {
            setField(value);
        }
        org.quickfix.field.SettlmntTyp get(org.quickfix.field.SettlmntTyp value) throws FieldNotFound {
            getField(value);
            return value;
        }
        org.quickfix.field.SettlmntTyp getSettlmntTyp() throws FieldNotFound {
            org.quickfix.field.SettlmntTyp value = new org.quickfix.field.SettlmntTyp();
            getField(value);
            return value;
        }

        void set(org.quickfix.field.FutSettDate value) {
            setField(value);
        }
        org.quickfix.field.FutSettDate get(org.quickfix.field.FutSettDate value) throws FieldNotFound {
            getField(value);
            return value;
        }
        org.quickfix.field.FutSettDate getFutSettDate() throws FieldNotFound {
            org.quickfix.field.FutSettDate value = new org.quickfix.field.FutSettDate();
            getField(value);
            return value;
        }

        void set(org.quickfix.field.HandlInst value) {
            setField(value);
        }
        org.quickfix.field.HandlInst get(org.quickfix.field.HandlInst value) throws FieldNotFound {
            getField(value);
            return value;
        }
        org.quickfix.field.HandlInst getHandlInst() throws FieldNotFound {
            org.quickfix.field.HandlInst value = new org.quickfix.field.HandlInst();
            getField(value);
            return value;
        }

        void set(org.quickfix.field.ExecInst value) {
            setField(value);
        }
        org.quickfix.field.ExecInst get(org.quickfix.field.ExecInst value) throws FieldNotFound {
            getField(value);
            return value;
        }
        org.quickfix.field.ExecInst getExecInst() throws FieldNotFound {
            org.quickfix.field.ExecInst value = new org.quickfix.field.ExecInst();
            getField(value);
            return value;
        }

        void set(org.quickfix.field.MinQty value) {
            setField(value);
        }
        org.quickfix.field.MinQty get(org.quickfix.field.MinQty value) throws FieldNotFound {
            getField(value);
            return value;
        }
        org.quickfix.field.MinQty getMinQty() throws FieldNotFound {
            org.quickfix.field.MinQty value = new org.quickfix.field.MinQty();
            getField(value);
            return value;
        }

        void set(org.quickfix.field.MaxFloor value) {
            setField(value);
        }
        org.quickfix.field.MaxFloor get(org.quickfix.field.MaxFloor value) throws FieldNotFound {
            getField(value);
            return value;
        }
        org.quickfix.field.MaxFloor getMaxFloor() throws FieldNotFound {
            org.quickfix.field.MaxFloor value = new org.quickfix.field.MaxFloor();
            getField(value);
            return value;
        }

        void set(org.quickfix.field.ExDestination value) {
            setField(value);
        }
        org.quickfix.field.ExDestination get(org.quickfix.field.ExDestination value) throws FieldNotFound {
            getField(value);
            return value;
        }
        org.quickfix.field.ExDestination getExDestination() throws FieldNotFound {
            org.quickfix.field.ExDestination value = new org.quickfix.field.ExDestination();
            getField(value);
            return value;
        }

        void set(org.quickfix.field.NoTradingSessions value) {
            setField(value);
        }
        org.quickfix.field.NoTradingSessions get(org.quickfix.field.NoTradingSessions value) throws FieldNotFound {
            getField(value);
            return value;
        }
        org.quickfix.field.NoTradingSessions getNoTradingSessions() throws FieldNotFound {
            org.quickfix.field.NoTradingSessions value = new org.quickfix.field.NoTradingSessions();
            getField(value);
            return value;
        }

        void set(org.quickfix.field.ProcessCode value) {
            setField(value);
        }
        org.quickfix.field.ProcessCode get(org.quickfix.field.ProcessCode value) throws FieldNotFound {
            getField(value);
            return value;
        }
        org.quickfix.field.ProcessCode getProcessCode() throws FieldNotFound {
            org.quickfix.field.ProcessCode value = new org.quickfix.field.ProcessCode();
            getField(value);
            return value;
        }

        void set(org.quickfix.field.Symbol value) {
            setField(value);
        }
        org.quickfix.field.Symbol get(org.quickfix.field.Symbol value) throws FieldNotFound {
            getField(value);
            return value;
        }
        org.quickfix.field.Symbol getSymbol() throws FieldNotFound {
            org.quickfix.field.Symbol value = new org.quickfix.field.Symbol();
            getField(value);
            return value;
        }

        void set(org.quickfix.field.SymbolSfx value) {
            setField(value);
        }
        org.quickfix.field.SymbolSfx get(org.quickfix.field.SymbolSfx value) throws FieldNotFound {
            getField(value);
            return value;
        }
        org.quickfix.field.SymbolSfx getSymbolSfx() throws FieldNotFound {
            org.quickfix.field.SymbolSfx value = new org.quickfix.field.SymbolSfx();
            getField(value);
            return value;
        }

        void set(org.quickfix.field.SecurityID value) {
            setField(value);
        }
        org.quickfix.field.SecurityID get(org.quickfix.field.SecurityID value) throws FieldNotFound {
            getField(value);
            return value;
        }
        org.quickfix.field.SecurityID getSecurityID() throws FieldNotFound {
            org.quickfix.field.SecurityID value = new org.quickfix.field.SecurityID();
            getField(value);
            return value;
        }

        void set(org.quickfix.field.IDSource value) {
            setField(value);
        }
        org.quickfix.field.IDSource get(org.quickfix.field.IDSource value) throws FieldNotFound {
            getField(value);
            return value;
        }
        org.quickfix.field.IDSource getIDSource() throws FieldNotFound {
            org.quickfix.field.IDSource value = new org.quickfix.field.IDSource();
            getField(value);
            return value;
        }

        void set(org.quickfix.field.SecurityType value) {
            setField(value);
        }
        org.quickfix.field.SecurityType get(org.quickfix.field.SecurityType value) throws FieldNotFound {
            getField(value);
            return value;
        }
        org.quickfix.field.SecurityType getSecurityType() throws FieldNotFound {
            org.quickfix.field.SecurityType value = new org.quickfix.field.SecurityType();
            getField(value);
            return value;
        }

        void set(org.quickfix.field.MaturityMonthYear value) {
            setField(value);
        }
        org.quickfix.field.MaturityMonthYear get(org.quickfix.field.MaturityMonthYear value) throws FieldNotFound {
            getField(value);
            return value;
        }
        org.quickfix.field.MaturityMonthYear getMaturityMonthYear() throws FieldNotFound {
            org.quickfix.field.MaturityMonthYear value = new org.quickfix.field.MaturityMonthYear();
            getField(value);
            return value;
        }

        void set(org.quickfix.field.MaturityDay value) {
            setField(value);
        }
        org.quickfix.field.MaturityDay get(org.quickfix.field.MaturityDay value) throws FieldNotFound {
            getField(value);
            return value;
        }
        org.quickfix.field.MaturityDay getMaturityDay() throws FieldNotFound {
            org.quickfix.field.MaturityDay value = new org.quickfix.field.MaturityDay();
            getField(value);
            return value;
        }

        void set(org.quickfix.field.PutOrCall value) {
            setField(value);
        }
        org.quickfix.field.PutOrCall get(org.quickfix.field.PutOrCall value) throws FieldNotFound {
            getField(value);
            return value;
        }
        org.quickfix.field.PutOrCall getPutOrCall() throws FieldNotFound {
            org.quickfix.field.PutOrCall value = new org.quickfix.field.PutOrCall();
            getField(value);
            return value;
        }

        void set(org.quickfix.field.StrikePrice value) {
            setField(value);
        }
        org.quickfix.field.StrikePrice get(org.quickfix.field.StrikePrice value) throws FieldNotFound {
            getField(value);
            return value;
        }
        org.quickfix.field.StrikePrice getStrikePrice() throws FieldNotFound {
            org.quickfix.field.StrikePrice value = new org.quickfix.field.StrikePrice();
            getField(value);
            return value;
        }

        void set(org.quickfix.field.OptAttribute value) {
            setField(value);
        }
        org.quickfix.field.OptAttribute get(org.quickfix.field.OptAttribute value) throws FieldNotFound {
            getField(value);
            return value;
        }
        org.quickfix.field.OptAttribute getOptAttribute() throws FieldNotFound {
            org.quickfix.field.OptAttribute value = new org.quickfix.field.OptAttribute();
            getField(value);
            return value;
        }

        void set(org.quickfix.field.ContractMultiplier value) {
            setField(value);
        }
        org.quickfix.field.ContractMultiplier get(org.quickfix.field.ContractMultiplier value) throws FieldNotFound {
            getField(value);
            return value;
        }
        org.quickfix.field.ContractMultiplier getContractMultiplier() throws FieldNotFound {
            org.quickfix.field.ContractMultiplier value = new org.quickfix.field.ContractMultiplier();
            getField(value);
            return value;
        }

        void set(org.quickfix.field.CouponRate value) {
            setField(value);
        }
        org.quickfix.field.CouponRate get(org.quickfix.field.CouponRate value) throws FieldNotFound {
            getField(value);
            return value;
        }
        org.quickfix.field.CouponRate getCouponRate() throws FieldNotFound {
            org.quickfix.field.CouponRate value = new org.quickfix.field.CouponRate();
            getField(value);
            return value;
        }

        void set(org.quickfix.field.SecurityExchange value) {
            setField(value);
        }
        org.quickfix.field.SecurityExchange get(org.quickfix.field.SecurityExchange value) throws FieldNotFound {
            getField(value);
            return value;
        }
        org.quickfix.field.SecurityExchange getSecurityExchange() throws FieldNotFound {
            org.quickfix.field.SecurityExchange value = new org.quickfix.field.SecurityExchange();
            getField(value);
            return value;
        }

        void set(org.quickfix.field.Issuer value) {
            setField(value);
        }
        org.quickfix.field.Issuer get(org.quickfix.field.Issuer value) throws FieldNotFound {
            getField(value);
            return value;
        }
        org.quickfix.field.Issuer getIssuer() throws FieldNotFound {
            org.quickfix.field.Issuer value = new org.quickfix.field.Issuer();
            getField(value);
            return value;
        }

        void set(org.quickfix.field.EncodedIssuerLen value) {
            setField(value);
        }
        org.quickfix.field.EncodedIssuerLen get(org.quickfix.field.EncodedIssuerLen value) throws FieldNotFound {
            getField(value);
            return value;
        }
        org.quickfix.field.EncodedIssuerLen getEncodedIssuerLen() throws FieldNotFound {
            org.quickfix.field.EncodedIssuerLen value = new org.quickfix.field.EncodedIssuerLen();
            getField(value);
            return value;
        }

        void set(org.quickfix.field.EncodedIssuer value) {
            setField(value);
        }
        org.quickfix.field.EncodedIssuer get(org.quickfix.field.EncodedIssuer value) throws FieldNotFound {
            getField(value);
            return value;
        }
        org.quickfix.field.EncodedIssuer getEncodedIssuer() throws FieldNotFound {
            org.quickfix.field.EncodedIssuer value = new org.quickfix.field.EncodedIssuer();
            getField(value);
            return value;
        }

        void set(org.quickfix.field.SecurityDesc value) {
            setField(value);
        }
        org.quickfix.field.SecurityDesc get(org.quickfix.field.SecurityDesc value) throws FieldNotFound {
            getField(value);
            return value;
        }
        org.quickfix.field.SecurityDesc getSecurityDesc() throws FieldNotFound {
            org.quickfix.field.SecurityDesc value = new org.quickfix.field.SecurityDesc();
            getField(value);
            return value;
        }

        void set(org.quickfix.field.EncodedSecurityDescLen value) {
            setField(value);
        }
        org.quickfix.field.EncodedSecurityDescLen get(org.quickfix.field.EncodedSecurityDescLen value) throws FieldNotFound {
            getField(value);
            return value;
        }
        org.quickfix.field.EncodedSecurityDescLen getEncodedSecurityDescLen() throws FieldNotFound {
            org.quickfix.field.EncodedSecurityDescLen value = new org.quickfix.field.EncodedSecurityDescLen();
            getField(value);
            return value;
        }

        void set(org.quickfix.field.EncodedSecurityDesc value) {
            setField(value);
        }
        org.quickfix.field.EncodedSecurityDesc get(org.quickfix.field.EncodedSecurityDesc value) throws FieldNotFound {
            getField(value);
            return value;
        }
        org.quickfix.field.EncodedSecurityDesc getEncodedSecurityDesc() throws FieldNotFound {
            org.quickfix.field.EncodedSecurityDesc value = new org.quickfix.field.EncodedSecurityDesc();
            getField(value);
            return value;
        }

        void set(org.quickfix.field.PrevClosePx value) {
            setField(value);
        }
        org.quickfix.field.PrevClosePx get(org.quickfix.field.PrevClosePx value) throws FieldNotFound {
            getField(value);
            return value;
        }
        org.quickfix.field.PrevClosePx getPrevClosePx() throws FieldNotFound {
            org.quickfix.field.PrevClosePx value = new org.quickfix.field.PrevClosePx();
            getField(value);
            return value;
        }

        void set(org.quickfix.field.Side value) {
            setField(value);
        }
        org.quickfix.field.Side get(org.quickfix.field.Side value) throws FieldNotFound {
            getField(value);
            return value;
        }
        org.quickfix.field.Side getSide() throws FieldNotFound {
            org.quickfix.field.Side value = new org.quickfix.field.Side();
            getField(value);
            return value;
        }

        void set(org.quickfix.field.SideValueInd value) {
            setField(value);
        }
        org.quickfix.field.SideValueInd get(org.quickfix.field.SideValueInd value) throws FieldNotFound {
            getField(value);
            return value;
        }
        org.quickfix.field.SideValueInd getSideValueInd() throws FieldNotFound {
            org.quickfix.field.SideValueInd value = new org.quickfix.field.SideValueInd();
            getField(value);
            return value;
        }

        void set(org.quickfix.field.LocateReqd value) {
            setField(value);
        }
        org.quickfix.field.LocateReqd get(org.quickfix.field.LocateReqd value) throws FieldNotFound {
            getField(value);
            return value;
        }
        org.quickfix.field.LocateReqd getLocateReqd() throws FieldNotFound {
            org.quickfix.field.LocateReqd value = new org.quickfix.field.LocateReqd();
            getField(value);
            return value;
        }

        void set(org.quickfix.field.TransactTime value) {
            setField(value);
        }
        org.quickfix.field.TransactTime get(org.quickfix.field.TransactTime value) throws FieldNotFound {
            getField(value);
            return value;
        }
        org.quickfix.field.TransactTime getTransactTime() throws FieldNotFound {
            org.quickfix.field.TransactTime value = new org.quickfix.field.TransactTime();
            getField(value);
            return value;
        }

        void set(org.quickfix.field.OrderQty value) {
            setField(value);
        }
        org.quickfix.field.OrderQty get(org.quickfix.field.OrderQty value) throws FieldNotFound {
            getField(value);
            return value;
        }
        org.quickfix.field.OrderQty getOrderQty() throws FieldNotFound {
            org.quickfix.field.OrderQty value = new org.quickfix.field.OrderQty();
            getField(value);
            return value;
        }

        void set(org.quickfix.field.CashOrderQty value) {
            setField(value);
        }
        org.quickfix.field.CashOrderQty get(org.quickfix.field.CashOrderQty value) throws FieldNotFound {
            getField(value);
            return value;
        }
        org.quickfix.field.CashOrderQty getCashOrderQty() throws FieldNotFound {
            org.quickfix.field.CashOrderQty value = new org.quickfix.field.CashOrderQty();
            getField(value);
            return value;
        }

        void set(org.quickfix.field.OrdType value) {
            setField(value);
        }
        org.quickfix.field.OrdType get(org.quickfix.field.OrdType value) throws FieldNotFound {
            getField(value);
            return value;
        }
        org.quickfix.field.OrdType getOrdType() throws FieldNotFound {
            org.quickfix.field.OrdType value = new org.quickfix.field.OrdType();
            getField(value);
            return value;
        }

        void set(org.quickfix.field.Price value) {
            setField(value);
        }
        org.quickfix.field.Price get(org.quickfix.field.Price value) throws FieldNotFound {
            getField(value);
            return value;
        }
        org.quickfix.field.Price getPrice() throws FieldNotFound {
            org.quickfix.field.Price value = new org.quickfix.field.Price();
            getField(value);
            return value;
        }

        void set(org.quickfix.field.StopPx value) {
            setField(value);
        }
        org.quickfix.field.StopPx get(org.quickfix.field.StopPx value) throws FieldNotFound {
            getField(value);
            return value;
        }
        org.quickfix.field.StopPx getStopPx() throws FieldNotFound {
            org.quickfix.field.StopPx value = new org.quickfix.field.StopPx();
            getField(value);
            return value;
        }

        void set(org.quickfix.field.Currency value) {
            setField(value);
        }
        org.quickfix.field.Currency get(org.quickfix.field.Currency value) throws FieldNotFound {
            getField(value);
            return value;
        }
        org.quickfix.field.Currency getCurrency() throws FieldNotFound {
            org.quickfix.field.Currency value = new org.quickfix.field.Currency();
            getField(value);
            return value;
        }

        void set(org.quickfix.field.ComplianceID value) {
            setField(value);
        }
        org.quickfix.field.ComplianceID get(org.quickfix.field.ComplianceID value) throws FieldNotFound {
            getField(value);
            return value;
        }
        org.quickfix.field.ComplianceID getComplianceID() throws FieldNotFound {
            org.quickfix.field.ComplianceID value = new org.quickfix.field.ComplianceID();
            getField(value);
            return value;
        }

        void set(org.quickfix.field.SolicitedFlag value) {
            setField(value);
        }
        org.quickfix.field.SolicitedFlag get(org.quickfix.field.SolicitedFlag value) throws FieldNotFound {
            getField(value);
            return value;
        }
        org.quickfix.field.SolicitedFlag getSolicitedFlag() throws FieldNotFound {
            org.quickfix.field.SolicitedFlag value = new org.quickfix.field.SolicitedFlag();
            getField(value);
            return value;
        }

        void set(org.quickfix.field.IOIid value) {
            setField(value);
        }
        org.quickfix.field.IOIid get(org.quickfix.field.IOIid value) throws FieldNotFound {
            getField(value);
            return value;
        }
        org.quickfix.field.IOIid getIOIid() throws FieldNotFound {
            org.quickfix.field.IOIid value = new org.quickfix.field.IOIid();
            getField(value);
            return value;
        }

        void set(org.quickfix.field.QuoteID value) {
            setField(value);
        }
        org.quickfix.field.QuoteID get(org.quickfix.field.QuoteID value) throws FieldNotFound {
            getField(value);
            return value;
        }
        org.quickfix.field.QuoteID getQuoteID() throws FieldNotFound {
            org.quickfix.field.QuoteID value = new org.quickfix.field.QuoteID();
            getField(value);
            return value;
        }

        void set(org.quickfix.field.TimeInForce value) {
            setField(value);
        }
        org.quickfix.field.TimeInForce get(org.quickfix.field.TimeInForce value) throws FieldNotFound {
            getField(value);
            return value;
        }
        org.quickfix.field.TimeInForce getTimeInForce() throws FieldNotFound {
            org.quickfix.field.TimeInForce value = new org.quickfix.field.TimeInForce();
            getField(value);
            return value;
        }

        void set(org.quickfix.field.EffectiveTime value) {
            setField(value);
        }
        org.quickfix.field.EffectiveTime get(org.quickfix.field.EffectiveTime value) throws FieldNotFound {
            getField(value);
            return value;
        }
        org.quickfix.field.EffectiveTime getEffectiveTime() throws FieldNotFound {
            org.quickfix.field.EffectiveTime value = new org.quickfix.field.EffectiveTime();
            getField(value);
            return value;
        }

        void set(org.quickfix.field.ExpireDate value) {
            setField(value);
        }
        org.quickfix.field.ExpireDate get(org.quickfix.field.ExpireDate value) throws FieldNotFound {
            getField(value);
            return value;
        }
        org.quickfix.field.ExpireDate getExpireDate() throws FieldNotFound {
            org.quickfix.field.ExpireDate value = new org.quickfix.field.ExpireDate();
            getField(value);
            return value;
        }

        void set(org.quickfix.field.ExpireTime value) {
            setField(value);
        }
        org.quickfix.field.ExpireTime get(org.quickfix.field.ExpireTime value) throws FieldNotFound {
            getField(value);
            return value;
        }
        org.quickfix.field.ExpireTime getExpireTime() throws FieldNotFound {
            org.quickfix.field.ExpireTime value = new org.quickfix.field.ExpireTime();
            getField(value);
            return value;
        }

        void set(org.quickfix.field.GTBookingInst value) {
            setField(value);
        }
        org.quickfix.field.GTBookingInst get(org.quickfix.field.GTBookingInst value) throws FieldNotFound {
            getField(value);
            return value;
        }
        org.quickfix.field.GTBookingInst getGTBookingInst() throws FieldNotFound {
            org.quickfix.field.GTBookingInst value = new org.quickfix.field.GTBookingInst();
            getField(value);
            return value;
        }

        void set(org.quickfix.field.Commission value) {
            setField(value);
        }
        org.quickfix.field.Commission get(org.quickfix.field.Commission value) throws FieldNotFound {
            getField(value);
            return value;
        }
        org.quickfix.field.Commission getCommission() throws FieldNotFound {
            org.quickfix.field.Commission value = new org.quickfix.field.Commission();
            getField(value);
            return value;
        }

        void set(org.quickfix.field.CommType value) {
            setField(value);
        }
        org.quickfix.field.CommType get(org.quickfix.field.CommType value) throws FieldNotFound {
            getField(value);
            return value;
        }
        org.quickfix.field.CommType getCommType() throws FieldNotFound {
            org.quickfix.field.CommType value = new org.quickfix.field.CommType();
            getField(value);
            return value;
        }

        void set(org.quickfix.field.Rule80A value) {
            setField(value);
        }
        org.quickfix.field.Rule80A get(org.quickfix.field.Rule80A value) throws FieldNotFound {
            getField(value);
            return value;
        }
        org.quickfix.field.Rule80A getRule80A() throws FieldNotFound {
            org.quickfix.field.Rule80A value = new org.quickfix.field.Rule80A();
            getField(value);
            return value;
        }

        void set(org.quickfix.field.ForexReq value) {
            setField(value);
        }
        org.quickfix.field.ForexReq get(org.quickfix.field.ForexReq value) throws FieldNotFound {
            getField(value);
            return value;
        }
        org.quickfix.field.ForexReq getForexReq() throws FieldNotFound {
            org.quickfix.field.ForexReq value = new org.quickfix.field.ForexReq();
            getField(value);
            return value;
        }

        void set(org.quickfix.field.SettlCurrency value) {
            setField(value);
        }
        org.quickfix.field.SettlCurrency get(org.quickfix.field.SettlCurrency value) throws FieldNotFound {
            getField(value);
            return value;
        }
        org.quickfix.field.SettlCurrency getSettlCurrency() throws FieldNotFound {
            org.quickfix.field.SettlCurrency value = new org.quickfix.field.SettlCurrency();
            getField(value);
            return value;
        }

        void set(org.quickfix.field.Text value) {
            setField(value);
        }
        org.quickfix.field.Text get(org.quickfix.field.Text value) throws FieldNotFound {
            getField(value);
            return value;
        }
        org.quickfix.field.Text getText() throws FieldNotFound {
            org.quickfix.field.Text value = new org.quickfix.field.Text();
            getField(value);
            return value;
        }

        void set(org.quickfix.field.EncodedTextLen value) {
            setField(value);
        }
        org.quickfix.field.EncodedTextLen get(org.quickfix.field.EncodedTextLen value) throws FieldNotFound {
            getField(value);
            return value;
        }
        org.quickfix.field.EncodedTextLen getEncodedTextLen() throws FieldNotFound {
            org.quickfix.field.EncodedTextLen value = new org.quickfix.field.EncodedTextLen();
            getField(value);
            return value;
        }

        void set(org.quickfix.field.EncodedText value) {
            setField(value);
        }
        org.quickfix.field.EncodedText get(org.quickfix.field.EncodedText value) throws FieldNotFound {
            getField(value);
            return value;
        }
        org.quickfix.field.EncodedText getEncodedText() throws FieldNotFound {
            org.quickfix.field.EncodedText value = new org.quickfix.field.EncodedText();
            getField(value);
            return value;
        }

        void set(org.quickfix.field.FutSettDate2 value) {
            setField(value);
        }
        org.quickfix.field.FutSettDate2 get(org.quickfix.field.FutSettDate2 value) throws FieldNotFound {
            getField(value);
            return value;
        }
        org.quickfix.field.FutSettDate2 getFutSettDate2() throws FieldNotFound {
            org.quickfix.field.FutSettDate2 value = new org.quickfix.field.FutSettDate2();
            getField(value);
            return value;
        }

        void set(org.quickfix.field.OrderQty2 value) {
            setField(value);
        }
        org.quickfix.field.OrderQty2 get(org.quickfix.field.OrderQty2 value) throws FieldNotFound {
            getField(value);
            return value;
        }
        org.quickfix.field.OrderQty2 getOrderQty2() throws FieldNotFound {
            org.quickfix.field.OrderQty2 value = new org.quickfix.field.OrderQty2();
            getField(value);
            return value;
        }

        void set(org.quickfix.field.OpenClose value) {
            setField(value);
        }
        org.quickfix.field.OpenClose get(org.quickfix.field.OpenClose value) throws FieldNotFound {
            getField(value);
            return value;
        }
        org.quickfix.field.OpenClose getOpenClose() throws FieldNotFound {
            org.quickfix.field.OpenClose value = new org.quickfix.field.OpenClose();
            getField(value);
            return value;
        }

        void set(org.quickfix.field.CoveredOrUncovered value) {
            setField(value);
        }
        org.quickfix.field.CoveredOrUncovered get(org.quickfix.field.CoveredOrUncovered value) throws FieldNotFound {
            getField(value);
            return value;
        }
        org.quickfix.field.CoveredOrUncovered getCoveredOrUncovered() throws FieldNotFound {
            org.quickfix.field.CoveredOrUncovered value = new org.quickfix.field.CoveredOrUncovered();
            getField(value);
            return value;
        }

        void set(org.quickfix.field.CustomerOrFirm value) {
            setField(value);
        }
        org.quickfix.field.CustomerOrFirm get(org.quickfix.field.CustomerOrFirm value) throws FieldNotFound {
            getField(value);
            return value;
        }
        org.quickfix.field.CustomerOrFirm getCustomerOrFirm() throws FieldNotFound {
            org.quickfix.field.CustomerOrFirm value = new org.quickfix.field.CustomerOrFirm();
            getField(value);
            return value;
        }

        void set(org.quickfix.field.MaxShow value) {
            setField(value);
        }
        org.quickfix.field.MaxShow get(org.quickfix.field.MaxShow value) throws FieldNotFound {
            getField(value);
            return value;
        }
        org.quickfix.field.MaxShow getMaxShow() throws FieldNotFound {
            org.quickfix.field.MaxShow value = new org.quickfix.field.MaxShow();
            getField(value);
            return value;
        }

        void set(org.quickfix.field.PegDifference value) {
            setField(value);
        }
        org.quickfix.field.PegDifference get(org.quickfix.field.PegDifference value) throws FieldNotFound {
            getField(value);
            return value;
        }
        org.quickfix.field.PegDifference getPegDifference() throws FieldNotFound {
            org.quickfix.field.PegDifference value = new org.quickfix.field.PegDifference();
            getField(value);
            return value;
        }

        void set(org.quickfix.field.DiscretionInst value) {
            setField(value);
        }
        org.quickfix.field.DiscretionInst get(org.quickfix.field.DiscretionInst value) throws FieldNotFound {
            getField(value);
            return value;
        }
        org.quickfix.field.DiscretionInst getDiscretionInst() throws FieldNotFound {
            org.quickfix.field.DiscretionInst value = new org.quickfix.field.DiscretionInst();
            getField(value);
            return value;
        }

        void set(org.quickfix.field.DiscretionOffset value) {
            setField(value);
        }
        org.quickfix.field.DiscretionOffset get(org.quickfix.field.DiscretionOffset value) throws FieldNotFound {
            getField(value);
            return value;
        }
        org.quickfix.field.DiscretionOffset getDiscretionOffset() throws FieldNotFound {
            org.quickfix.field.DiscretionOffset value = new org.quickfix.field.DiscretionOffset();
            getField(value);
            return value;
        }

        void set(org.quickfix.field.ClearingFirm value) {
            setField(value);
        }
        org.quickfix.field.ClearingFirm get(org.quickfix.field.ClearingFirm value) throws FieldNotFound {
            getField(value);
            return value;
        }
        org.quickfix.field.ClearingFirm getClearingFirm() throws FieldNotFound {
            org.quickfix.field.ClearingFirm value = new org.quickfix.field.ClearingFirm();
            getField(value);
            return value;
        }

        void set(org.quickfix.field.ClearingAccount value) {
            setField(value);
        }
        org.quickfix.field.ClearingAccount get(org.quickfix.field.ClearingAccount value) throws FieldNotFound {
            getField(value);
            return value;
        }
        org.quickfix.field.ClearingAccount getClearingAccount() throws FieldNotFound {
            org.quickfix.field.ClearingAccount value = new org.quickfix.field.ClearingAccount();
            getField(value);
            return value;
        }


        public class NoAllocs extends Group {
            public NoAllocs() {
                super(78,79);
            }
            void set(org.quickfix.field.AllocAccount value) {
                setField(value);
            }
            org.quickfix.field.AllocAccount get(org.quickfix.field.AllocAccount value) throws FieldNotFound {
                getField(value);
                return value;
            }
            org.quickfix.field.AllocAccount getAllocAccount() throws FieldNotFound {
                org.quickfix.field.AllocAccount value = new org.quickfix.field.AllocAccount();
                getField(value);
                return value;
            }

            void set(org.quickfix.field.AllocShares value) {
                setField(value);
            }
            org.quickfix.field.AllocShares get(org.quickfix.field.AllocShares value) throws FieldNotFound {
                getField(value);
                return value;
            }
            org.quickfix.field.AllocShares getAllocShares() throws FieldNotFound {
                org.quickfix.field.AllocShares value = new org.quickfix.field.AllocShares();
                getField(value);
                return value;
            }

        }

        public class NoTradingSessions extends Group {
            public NoTradingSessions() {
                super(386,336);
            }
            void set(org.quickfix.field.TradingSessionID value) {
                setField(value);
            }
            org.quickfix.field.TradingSessionID get(org.quickfix.field.TradingSessionID value) throws FieldNotFound {
                getField(value);
                return value;
            }
            org.quickfix.field.TradingSessionID getTradingSessionID() throws FieldNotFound {
                org.quickfix.field.TradingSessionID value = new org.quickfix.field.TradingSessionID();
                getField(value);
                return value;
            }

        }
    }
}

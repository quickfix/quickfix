/* -*- C++ -*- */
/* ====================================================================
* The QuickFIX Software License, Version 1.0
*
* Copyright (c) 2001 ThoughtWorks, Inc.  All rights
* reserved.
*
* Redistribution and use in source and binary forms, with or without
* modification, are permitted provided that the following conditions
* are met:
*
* 1. Redistributions of source code must retain the above copyright
*    notice, this list of conditions and the following disclaimer.
*
* 2. Redistributions in binary form must reproduce the above copyright
*    notice, this list of conditions and the following disclaimer in
*    the documentation and/or other materials provided with the
*    distribution.
*
* 3. The end-user documentation included with the redistribution,
*    if any, must include the following acknowledgment:
*       "This product includes software developed by
*        ThoughtWorks, Inc. (http://www.thoughtworks.com/)."
*    Alternately, this acknowledgment may appear in the software itself,
*    if and wherever such third-party acknowledgments normally appear.
*
* 4. The names "QuickFIX" and "ThoughtWorks, Inc." must
*    not be used to endorse or promote products derived from this
*    software without prior written permission. For written
*    permission, please contact quickfix-users@lists.sourceforge.net.
*
* 5. Products derived from this software may not be called "QuickFIX",
*    nor may "QuickFIX" appear in their name, without prior written
*    permission of ThoughtWorks, Inc.
*
* THIS SOFTWARE IS PROVIDED ``AS IS'' AND ANY EXPRESSED OR IMPLIED
* WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES
* OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
* DISCLAIMED.  IN NO EVENT SHALL THOUGHTWORKS INC OR
* ITS CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
* SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
* LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF
* USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
* ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
* OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT
* OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF
* SUCH DAMAGE.
* ====================================================================
*/

#ifndef FIX_FIELDS_H
#define FIX_FIELDS_H

#include "Field.h"

namespace FIX
{

DEFINE_STRING( Account );
DEFINE_STRING( AdvId );
DEFINE_STRING( AdvRefID );
DEFINE_CHAR( AdvSide );
DEFINE_STRING( AdvTransType );
DEFINE_PRICE( AvgPx );
DEFINE_INT( BeginSeqNo );
DEFINE_STRING( BeginString );
DEFINE_INT( BodyLength );
DEFINE_CHECKSUM( CheckSum );
DEFINE_STRING( ClOrdID );
DEFINE_AMT( Commission );
DEFINE_CHAR( CommType );
DEFINE_QTY( CumQty );
DEFINE_CURRENCY( Currency );
DEFINE_INT( EndSeqNo );
DEFINE_STRING( ExecID );
DEFINE_MULTIPLEVALUESTRING( ExecInst );
DEFINE_STRING( ExecRefID );
DEFINE_CHAR( ExecTransType );
DEFINE_CHAR( HandlInst );
DEFINE_STRING( IDSource );
DEFINE_STRING( IOIid );
DEFINE_CHAR( IOIOthSvc );
DEFINE_CHAR( IOIQltyInd );
DEFINE_STRING( IOIRefID );
DEFINE_STRING( IOIShares );
DEFINE_CHAR( IOITransType );
DEFINE_CHAR( LastCapacity );
DEFINE_EXCHANGE( LastMkt );
DEFINE_PRICE( LastPx );
DEFINE_QTY( LastShares );
DEFINE_INT( LinesOfText );
DEFINE_INT( MsgSeqNum );
DEFINE_STRING( MsgType );
DEFINE_INT( NewSeqNo );
DEFINE_STRING( OrderID );
DEFINE_QTY( OrderQty );
DEFINE_CHAR( OrdStatus );
DEFINE_CHAR( OrdType );
DEFINE_STRING( OrigClOrdID );
DEFINE_UTCTIMESTAMP( OrigTime );
DEFINE_BOOLEAN( PossDupFlag );
DEFINE_PRICE( Price );
DEFINE_INT( RefSeqNum );
DEFINE_STRING( RelatdSym );
DEFINE_CHAR( Rule80A );
DEFINE_STRING( SecurityID );
DEFINE_STRING( SenderCompID );
DEFINE_STRING( SenderSubID );
DEFINE_UTCTIMESTAMP( SendingTime );
DEFINE_QTY( Shares );
DEFINE_CHAR( Side );
DEFINE_STRING( Symbol );
DEFINE_STRING( TargetCompID );
DEFINE_STRING( TargetSubID );
DEFINE_STRING( Text );
DEFINE_CHAR( TimeInForce );
DEFINE_UTCTIMESTAMP( TransactTime );
DEFINE_CHAR( Urgency );
DEFINE_UTCTIMESTAMP( ValidUntilTime );
DEFINE_CHAR( SettlmntTyp );
DEFINE_LOCALMKTDATE( FutSettDate );
DEFINE_STRING( SymbolSfx );
DEFINE_STRING( ListID );
DEFINE_INT( ListSeqNo );
DEFINE_INT( TotNoOrders );
DEFINE_INT( ListNoOrds );
DEFINE_STRING( ListExecInst );
DEFINE_STRING( AllocID );
DEFINE_CHAR( AllocTransType );
DEFINE_STRING( RefAllocID );
DEFINE_INT( NoOrders );
DEFINE_INT( AvgPrxPrecision );
DEFINE_LOCALMKTDATE( TradeDate );
DEFINE_STRING( ExecBroker );
DEFINE_CHAR( OpenClose );
DEFINE_INT( NoAllocs );
DEFINE_STRING( AllocAccount );
DEFINE_QTY( AllocShares );
DEFINE_CHAR( ProcessCode );
DEFINE_INT( NoRpts );
DEFINE_INT( RptSeq );
DEFINE_QTY( CxlQty );
DEFINE_INT( NoDlvyInst );
DEFINE_STRING( DlvyInst );
DEFINE_INT( AllocStatus );
DEFINE_INT( AllocRejCode );
DEFINE_DATA( Signature );
DEFINE_INT( SecureDataLen );
DEFINE_DATA( SecureData );
DEFINE_STRING( BrokerOfCredit );
DEFINE_INT( SignatureLength );
DEFINE_CHAR( EmailType );
DEFINE_INT( RawDataLength );
DEFINE_DATA( RawData );
DEFINE_BOOLEAN( PossResend );
DEFINE_INT( EncryptMethod );
DEFINE_PRICE( StopPx );
DEFINE_EXCHANGE( ExDestination );
DEFINE_INT( CxlRejReason );
DEFINE_INT( OrdRejReason );
DEFINE_CHAR( IOIQualifier );
DEFINE_STRING( WaveNo );
DEFINE_STRING( Issuer );
DEFINE_STRING( SecurityDesc );
DEFINE_INT( HeartBtInt );
DEFINE_STRING( ClientID );
DEFINE_QTY( MinQty );
DEFINE_QTY( MaxFloor );
DEFINE_STRING( TestReqID );
DEFINE_BOOLEAN( ReportToExch );
DEFINE_BOOLEAN( LocateReqd );
DEFINE_STRING( OnBehalfOfCompID );
DEFINE_STRING( OnBehalfOfSubID );
DEFINE_STRING( QuoteID );
DEFINE_AMT( NetMoney );
DEFINE_AMT( SettlCurrAmt );
DEFINE_CURRENCY( SettlCurrency );
DEFINE_BOOLEAN( ForexReq );
DEFINE_UTCTIMESTAMP( OrigSendingTime );
DEFINE_BOOLEAN( GapFillFlag );
DEFINE_INT( NoExecs );
DEFINE_CHAR( CxlType );
DEFINE_UTCTIMESTAMP( ExpireTime );
DEFINE_CHAR( DKReason );
DEFINE_STRING( DeliverToCompID );
DEFINE_STRING( DeliverToSubID );
DEFINE_BOOLEAN( IOINaturalFlag );
DEFINE_STRING( QuoteReqID );
DEFINE_PRICE( BidPx );
DEFINE_PRICE( OfferPx );
DEFINE_QTY( BidSize );
DEFINE_QTY( OfferSize );
DEFINE_INT( NoMiscFees );
DEFINE_AMT( MiscFeeAmt );
DEFINE_CURRENCY( MiscFeeCurr );
DEFINE_CHAR( MiscFeeType );
DEFINE_PRICE( PrevClosePx );
DEFINE_BOOLEAN( ResetSeqNumFlag );
DEFINE_STRING( SenderLocationID );
DEFINE_STRING( TargetLocationID );
DEFINE_STRING( OnBehalfOfLocationID );
DEFINE_STRING( DeliverToLocationID );
DEFINE_INT( NoRelatedSym );
DEFINE_STRING( Subject );
DEFINE_STRING( Headline );
DEFINE_STRING( URLLink );
DEFINE_CHAR( ExecType );
DEFINE_QTY( LeavesQty );
DEFINE_QTY( CashOrderQty );
DEFINE_PRICE( AllocAvgPx );
DEFINE_AMT( AllocNetMoney );
DEFINE_FLOAT( SettlCurrFxRate );
DEFINE_CHAR( SettlCurrFxRateCalc );
DEFINE_INT( NumDaysInterest );
DEFINE_FLOAT( AccruedInterestRate );
DEFINE_AMT( AccruedInterestAmt );
DEFINE_CHAR( SettlInstMode );
DEFINE_STRING( AllocText );
DEFINE_STRING( SettlInstID );
DEFINE_CHAR( SettlInstTransType );
DEFINE_STRING( EmailThreadID );
DEFINE_CHAR( SettlInstSource );
DEFINE_STRING( SettlLocation );
DEFINE_STRING( SecurityType );
DEFINE_UTCTIMESTAMP( EffectiveTime );
DEFINE_INT( StandInstDbType );
DEFINE_STRING( StandInstDbName );
DEFINE_STRING( StandInstDbID );
DEFINE_INT( SettlDeliveryType );
DEFINE_STRING( SettlDepositoryCode );
DEFINE_STRING( SettlBrkrCode );
DEFINE_STRING( SettlInstCode );
DEFINE_STRING( SecuritySettlAgentName );
DEFINE_STRING( SecuritySettlAgentCode );
DEFINE_STRING( SecuritySettlAgentAcctNum );
DEFINE_STRING( SecuritySettlAgentAcctName );
DEFINE_STRING( SecuritySettlAgentContactName );
DEFINE_STRING( SecuritySettlAgentContactPhone );
DEFINE_STRING( CashSettlAgentName );
DEFINE_STRING( CashSettlAgentCode );
DEFINE_STRING( CashSettlAgentAcctNum );
DEFINE_STRING( CashSettlAgentAcctName );
DEFINE_STRING( CashSettlAgentContactName );
DEFINE_STRING( CashSettlAgentContactPhone );
DEFINE_PRICE( BidSpotRate );
DEFINE_PRICEOFFSET( BidForwardPoints );
DEFINE_PRICE( OfferSpotRate );
DEFINE_PRICEOFFSET( OfferForwardPoints );
DEFINE_QTY( OrderQty2 );
DEFINE_LOCALMKTDATE( FutSettDate2 );
DEFINE_PRICE( LastSpotRate );
DEFINE_PRICEOFFSET( LastForwardPoints );
DEFINE_STRING( AllocLinkID );
DEFINE_INT( AllocLinkType );
DEFINE_STRING( SecondaryOrderID );
DEFINE_INT( NoIOIQualifiers );
DEFINE_MONTHYEAR( MaturityMonthYear );
DEFINE_INT( PutOrCall );
DEFINE_PRICE( StrikePrice );
DEFINE_INT( CoveredOrUncovered );
DEFINE_INT( CustomerOrFirm );
DEFINE_DAYOFMONTH( MaturityDay );
DEFINE_CHAR( OptAttribute );
DEFINE_EXCHANGE( SecurityExchange );
DEFINE_BOOLEAN( NotifyBrokerOfCredit );
DEFINE_INT( AllocHandlInst );
DEFINE_QTY( MaxShow );
DEFINE_PRICEOFFSET( PegDifference );
DEFINE_INT( XmlDataLen );
DEFINE_DATA( XmlData );
DEFINE_STRING( SettlInstRefID );
DEFINE_INT( NoRoutingIDs );
DEFINE_INT( RoutingType );
DEFINE_STRING( RoutingID );
DEFINE_PRICEOFFSET( SpreadToBenchmark );
DEFINE_CHAR( Benchmark );
DEFINE_FLOAT( CouponRate );
DEFINE_FLOAT( ContractMultiplier );
DEFINE_STRING( MDReqID );
DEFINE_CHAR( SubscriptionRequestType );
DEFINE_INT( MarketDepth );
DEFINE_INT( MDUpdateType );
DEFINE_BOOLEAN( AggregatedBook );
DEFINE_INT( NoMDEntryTypes );
DEFINE_INT( NoMDEntries );
DEFINE_CHAR( MDEntryType );
DEFINE_PRICE( MDEntryPx );
DEFINE_QTY( MDEntrySize );
DEFINE_UTCDATE( MDEntryDate );
DEFINE_UTCTIMEONLY( MDEntryTime );
DEFINE_CHAR( TickDirection );
DEFINE_EXCHANGE( MDMkt );
DEFINE_MULTIPLEVALUESTRING( QuoteCondition );
DEFINE_MULTIPLEVALUESTRING( TradeCondition );
DEFINE_STRING( MDEntryID );
DEFINE_CHAR( MDUpdateAction );
DEFINE_STRING( MDEntryRefID );
DEFINE_CHAR( MDReqRejReason );
DEFINE_STRING( MDEntryOriginator );
DEFINE_STRING( LocationID );
DEFINE_STRING( DeskID );
DEFINE_CHAR( DeleteReason );
DEFINE_CHAR( OpenCloseSettleFlag );
DEFINE_INT( SellerDays );
DEFINE_STRING( MDEntryBuyer );
DEFINE_STRING( MDEntrySeller );
DEFINE_INT( MDEntryPositionNo );
DEFINE_CHAR( FinancialStatus );
DEFINE_CHAR( CorporateAction );
DEFINE_QTY( DefBidSize );
DEFINE_QTY( DefOfferSize );
DEFINE_INT( NoQuoteEntries );
DEFINE_INT( NoQuoteSets );
DEFINE_INT( QuoteAckStatus );
DEFINE_INT( QuoteCancelType );
DEFINE_STRING( QuoteEntryID );
DEFINE_INT( QuoteRejectReason );
DEFINE_INT( QuoteResponseLevel );
DEFINE_STRING( QuoteSetID );
DEFINE_INT( QuoteRequestType );
DEFINE_INT( TotQuoteEntries );
DEFINE_STRING( UnderlyingIDSource );
DEFINE_STRING( UnderlyingIssuer );
DEFINE_STRING( UnderlyingSecurityDesc );
DEFINE_EXCHANGE( UnderlyingSecurityExchange );
DEFINE_STRING( UnderlyingSecurityID );
DEFINE_STRING( UnderlyingSecurityType );
DEFINE_STRING( UnderlyingSymbol );
DEFINE_STRING( UnderlyingSymbolSfx );
DEFINE_MONTHYEAR( UnderlyingMaturityMonthYear );
DEFINE_DAYOFMONTH( UnderlyingMaturityDay );
DEFINE_INT( UnderlyingPutOrCall );
DEFINE_PRICE( UnderlyingStrikePrice );
DEFINE_CHAR( UnderlyingOptAttribute );
DEFINE_CURRENCY( UnderlyingCurrency );
DEFINE_QTY( RatioQty );
DEFINE_STRING( SecurityReqID );
DEFINE_INT( SecurityRequestType );
DEFINE_STRING( SecurityResponseID );
DEFINE_INT( SecurityResponseType );
DEFINE_STRING( SecurityStatusReqID );
DEFINE_BOOLEAN( UnsolicitedIndicator );
DEFINE_INT( SecurityTradingStatus );
DEFINE_CHAR( HaltReason );
DEFINE_BOOLEAN( InViewOfCommon );
DEFINE_BOOLEAN( DueToRelated );
DEFINE_QTY( BuyVolume );
DEFINE_QTY( SellVolume );
DEFINE_PRICE( HighPx );
DEFINE_PRICE( LowPx );
DEFINE_INT( Adjustment );
DEFINE_STRING( TradSesReqID );
DEFINE_STRING( TradingSessionID );
DEFINE_STRING( ContraTrader );
DEFINE_INT( TradSesMethod );
DEFINE_INT( TradSesMode );
DEFINE_INT( TradSesStatus );
DEFINE_UTCTIMESTAMP( TradSesStartTime );
DEFINE_UTCTIMESTAMP( TradSesOpenTime );
DEFINE_UTCTIMESTAMP( TradSesPreCloseTime );
DEFINE_UTCTIMESTAMP( TradSesCloseTime );
DEFINE_UTCTIMESTAMP( TradSesEndTime );
DEFINE_INT( NumberOfOrders );
DEFINE_STRING( MessageEncoding );
DEFINE_INT( EncodedIssuerLen );
DEFINE_DATA( EncodedIssuer );
DEFINE_INT( EncodedSecurityDescLen );
DEFINE_DATA( EncodedSecurityDesc );
DEFINE_INT( EncodedListExecInstLen );
DEFINE_DATA( EncodedListExecInst );
DEFINE_INT( EncodedTextLen );
DEFINE_DATA( EncodedText );
DEFINE_INT( EncodedSubjectLen );
DEFINE_DATA( EncodedSubject );
DEFINE_INT( EncodedHeadlineLen );
DEFINE_DATA( EncodedHeadline );
DEFINE_INT( EncodedAllocTextLen );
DEFINE_DATA( EncodedAllocText );
DEFINE_INT( EncodedUnderlyingIssuerLen );
DEFINE_DATA( EncodedUnderlyingIssuer );
DEFINE_INT( EncodedUnderlyingSecurityDescLen );
DEFINE_DATA( EncodedUnderlyingSecurityDesc );
DEFINE_PRICE( AllocPrice );
DEFINE_UTCTIMESTAMP( QuoteSetValidUntilTime );
DEFINE_INT( QuoteEntryRejectReason );
DEFINE_INT( LastMsgSeqNumProcessed );
DEFINE_UTCTIMESTAMP( OnBehalfOfSendingTime );
DEFINE_INT( RefTagID );
DEFINE_STRING( RefMsgType );
DEFINE_INT( SessionRejectReason );
DEFINE_CHAR( BidRequestTransType );
DEFINE_STRING( ContraBroker );
DEFINE_STRING( ComplianceID );
DEFINE_BOOLEAN( SolicitedFlag );
DEFINE_INT( ExecRestatementReason );
DEFINE_STRING( BusinessRejectRefID );
DEFINE_INT( BusinessRejectReason );
DEFINE_AMT( GrossTradeAmt );
DEFINE_INT( NoContraBrokers );
DEFINE_INT( MaxMessageSize );
DEFINE_INT( NoMsgTypes );
DEFINE_CHAR( MsgDirection );
DEFINE_INT( NoTradingSessions );
DEFINE_QTY( TotalVolumeTraded );
DEFINE_CHAR( DiscretionInst );
DEFINE_PRICEOFFSET( DiscretionOffset );
DEFINE_STRING( BidID );
DEFINE_STRING( ClientBidID );
DEFINE_STRING( ListName );
DEFINE_INT( TotalNumSecurities );
DEFINE_INT( BidType );
DEFINE_INT( NumTickets );
DEFINE_AMT( SideValue1 );
DEFINE_AMT( SideValue2 );
DEFINE_INT( NoBidDescriptors );
DEFINE_INT( BidDescriptorType );
DEFINE_STRING( BidDescriptor );
DEFINE_INT( SideValueInd );
DEFINE_FLOAT( LiquidityPctLow );
DEFINE_FLOAT( LiquidityPctHigh );
DEFINE_AMT( LiquidityValue );
DEFINE_FLOAT( EFPTrackingError );
DEFINE_AMT( FairValue );
DEFINE_FLOAT( OutsideIndexPct );
DEFINE_AMT( ValueOfFutures );
DEFINE_INT( LiquidityIndType );
DEFINE_FLOAT( WtAverageLiquidity );
DEFINE_BOOLEAN( ExchangeForPhysical );
DEFINE_AMT( OutMainCntryUIndex );
DEFINE_FLOAT( CrossPercent );
DEFINE_INT( ProgRptReqs );
DEFINE_INT( ProgPeriodInterval );
DEFINE_INT( IncTaxInd );
DEFINE_INT( NumBidders );
DEFINE_CHAR( TradeType );
DEFINE_CHAR( BasisPxType );
DEFINE_INT( NoBidComponents );
DEFINE_STRING( Country );
DEFINE_INT( TotNoStrikes );
DEFINE_INT( PriceType );
DEFINE_QTY( DayOrderQty );
DEFINE_QTY( DayCumQty );
DEFINE_PRICE( DayAvgPx );
DEFINE_INT( GTBookingInst );
DEFINE_INT( NoStrikes );
DEFINE_INT( ListStatusType );
DEFINE_INT( NetGrossInd );
DEFINE_INT( ListOrderStatus );
DEFINE_LOCALMKTDATE( ExpireDate );
DEFINE_CHAR( ListExecInstType );
DEFINE_CHAR( CxlRejResponseTo );
DEFINE_FLOAT( UnderlyingCouponRate );
DEFINE_FLOAT( UnderlyingContractMultiplier );
DEFINE_QTY( ContraTradeQty );
DEFINE_UTCTIMESTAMP( ContraTradeTime );
DEFINE_STRING( ClearingFirm );
DEFINE_STRING( ClearingAccount );
DEFINE_INT( LiquidityNumSecurities );
DEFINE_CHAR( MultiLegReportingType );
DEFINE_UTCTIMESTAMP( StrikeTime );
DEFINE_STRING( ListStatusText );
DEFINE_INT( EncodedListStatusTextLen );
DEFINE_DATA( EncodedListStatusText );
}
#endif //FIX_FIELDS_H


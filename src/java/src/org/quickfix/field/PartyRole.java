package org.quickfix.field; 
import org.quickfix.IntField; 
import java.util.Date; 

public class PartyRole extends IntField 
{ 
  public static final int FIELD = 452; 
public static final int EXECUTING_FIRM = 1; 
public static final int BROKEROF_CREDIT = 2; 
public static final int CLIENT_ID = 3; 
public static final int CLEARING_FIRM = 4; 
public static final int INVESTOR_ID = 5; 
public static final int INTRODUCING_FIRM = 6; 
public static final int ENTERING_FIRM = 7; 
public static final int LOCATE_LENDING_FIRM = 8; 
public static final int FUND_MANAGER = 9; 
public static final int SETTLEMENT_LOCATION = 10; 
public static final int INITIATING_TRADER = 11; 
public static final int EXECUTING_TRADER = 12; 
public static final int ORDER_ORIGINATOR = 13; 
public static final int GIVEUP_CLEARING_FIRM = 14; 
public static final int CORRESPONDANT_CLEARING_FIRM = 15; 
public static final int EXECUTING_SYSTEM = 16; 
public static final int CONTRA_FIRM = 17; 
public static final int CONTRA_CLEARING_FIRM = 18; 
public static final int SPONSORING_FIRM = 19; 
public static final int UNDR_CONTRA_FIRM = 20; 
public static final int CLEARING_ORGANIZATION = 21; 
public static final int EXCHANGE = 22; 
public static final int CUSTOMER_ACCOUNT = 24; 
public static final int CORRESPONDENT_CLEARING_ORGANIZATION = 25; 
public static final int CORRESPONDENT_BROKER = 26; 
public static final int BUYER_SELLER_RECEIVER_DELIVERER = 27; 
public static final int CUSTODIAN = 28; 
public static final int INTERMEDIARY = 29; 
public static final int AGENT = 30; 
public static final int SUB_CUSTODIAN = 31; 
public static final int BENEFICIARY = 32; 
public static final int INTERESTED_PARTY = 33; 
public static final int REGULATORY_BODY = 34; 
public static final int LIQUIDITY_PROVIDER = 35; 
public static final int ENTERING_TRADER = 36; 
public static final int CONTRA_TRADER = 37; 
public static final int POSITION_ACCOUNT = 38; 
public static final int ALLOC_ENTITY = 39; 

  public PartyRole() 
  { 
    super(452);
  } 
  public PartyRole(int data) 
  { 
    super(452, data);
  } 
} 

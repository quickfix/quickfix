package org.quickfix.field; 
import org.quickfix.IntField; 
import java.util.Date; 

public class PartyRole extends IntField 
{ 
  public static final int FIELD = 452; 
public static final int EXECUTING_FIRM = 1; 
public static final int BROKER_OF_CREDIT = 2; 
public static final int CLIENT_ID = 3; 
public static final int CLEARING_FIRM = 4; 
public static final int INVESTOR_ID = 5; 
public static final int INTRODUCING_FIRM = 6; 
public static final int ENTERING_FIRM = 7; 
public static final int LOCATE = 8; 
public static final int FUND_MANAGER_CLIENT_ID = 9; 
public static final int SETTLEMENT_LOCATION = 10; 
public static final int ORDER_ORIGINATION_TRADER = 11; 
public static final int EXECUTING_TRADER = 12; 
public static final int ORDER_ORIGINATION_FIRM = 13; 
public static final int GIVEUP_CLEARING_FIRM = 14; 
public static final int CORRESPONDANT_CLEARING_FIRM = 15; 
public static final int EXECUTING_SYSTEM = 16; 
public static final int CONTRA_FIRM = 17; 
public static final int CONTRA_CLEARING_FIRM = 18; 
public static final int SPONSORING_FIRM = 19; 
public static final int UNDERLYING_CONTRA_FIRM = 20; 

  public PartyRole() 
  { 
    super(452);
  } 
  public PartyRole(int data) 
  { 
    super(452, data);
  } 
} 

package quickfix.field; 
import quickfix.IntField; 
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
public static final int LOCATE_LENDING_FIRM = 8; 
public static final int FUND_MANAGER_CLIENT_ID = 9; 

  public PartyRole() 
  { 
    super(452);
  } 
  public PartyRole(int data) 
  { 
    super(452, data);
  } 
} 

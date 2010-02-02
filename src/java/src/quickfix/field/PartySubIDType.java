package quickfix.field; 
import quickfix.IntField; 
import java.util.Date; 

public class PartySubIDType extends IntField 
{ 
  public static final int FIELD = 803; 
public static final int FIRM = 1; 
public static final int PERSON = 2; 
public static final int SYSTEM = 3; 
public static final int APPLICATION = 4; 
public static final int FULL_LEGAL_NAME_OF_FIRM = 5; 
public static final int POSTAL_ADDRESS = 6; 
public static final int PHONE_NUMBER = 7; 
public static final int EMAIL_ADDRESS = 8; 
public static final int CONTACT_NAME = 9; 
public static final int SECURITIES_ACCOUNT_NUMBER = 10; 
public static final int REGISTRATION_NUMBER = 11; 
public static final int REGISTERED_ADDRESS = 12; 
public static final int REGULATORY_STATUS = 13; 
public static final int REGISTRATION_NAME = 14; 
public static final int CASH_ACCOUNT_NUMBER = 15; 
public static final int BIC = 16; 
public static final int CSD_PARTICIPANT_MEMBER_CODE = 17; 
public static final int REGISTERED_ADDRESS2 = 18; 
public static final int FUND_ACCOUNT_NAME = 19; 
public static final int TELEX_NUMBER = 20; 
public static final int FAX_NUMBER = 21; 
public static final int SECURITIES_ACCOUNT_NAME = 22; 
public static final int CASH_ACCOUNT_NAME = 23; 
public static final int DEPARTMENT = 24; 
public static final int LOCATION_DESK = 25; 
public static final int POSITION_ACCOUNT_TYPE = 26; 
public static final int SECURITY_LOCATE_ID = 27; 
public static final int MARKET_MAKER = 28; 
public static final int ELIGIBLE_COUNTERPARTY = 29; 
public static final int PROFESSIONAL_CLIENT = 30; 
public static final int LOCATION = 31; 
public static final int EXECUTION_VENUE = 32; 

  public PartySubIDType() 
  { 
    super(803);
  } 
  public PartySubIDType(int data) 
  { 
    super(803, data);
  } 
} 

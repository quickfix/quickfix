package org.quickfix.field; 
import org.quickfix.IntField; 
import java.util.Date; 

public class RegistRejReasonCode extends IntField 
{ 
  public static final int FIELD = 507; 
public static final int INVALID_ACCOUNT_TYPE = 1; 
public static final int INVALID_TAX_EXEMPT_TYPE = 2; 
public static final int INVALID_OWNERSHIP_TYPE = 3; 
public static final int INVALID_NO_REG_DETLS = 4; 
public static final int INVALID_REG_SEQ_NO = 5; 
public static final int INVALID_REG_DTLS = 6; 
public static final int INVALID_MAILING_DTLS = 7; 
public static final int INVALID_MAILING_INST = 8; 
public static final int INVALID_INVESTOR_ID = 9; 
public static final int INVALID_INVESTOR_IDSOURCE = 10; 
public static final int INVALID_DATE_OF_BIRTH = 11; 
public static final int INVALID_INVESTOR_COUNTRY_OF_RESIDENCE = 12; 
public static final int INVALID_NO_DISTRIB_INSTNS = 13; 
public static final int INVALID_DISTRIB_PERCENTAGE = 14; 
public static final int INVALID_DISTRIB_PAYMENT_METHOD = 15; 
public static final int INVALID_CASH_DISTRIB_AGENT_ACCT_NAME = 16; 
public static final int INVALID_CASH_DISTRIB_AGENT_CODE = 17; 
public static final int INVALID_CASH_DISTRIB_AGENT_ACCT_NUM = 18; 
public static final int OTHER = 99; 

  public RegistRejReasonCode() 
  { 
    super(507);
  } 
  public RegistRejReasonCode(int data) 
  { 
    super(507, data);
  } 
} 

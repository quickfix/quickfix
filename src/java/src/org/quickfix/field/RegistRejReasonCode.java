package org.quickfix.field; 
import org.quickfix.IntField; 
import java.util.Date; 

public class RegistRejReasonCode extends IntField 
{ 
  public static final int FIELD = 507; 
public static final int INVALID_UNACCEPTABLE_ACCOUNT_TYPE = 1; 
public static final int INVALID_UNACCEPTABLE_TAX_EXEMPT_TYPE = 2; 
public static final int INVALID_UNACCEPTABLE_OWNERSHIP_TYPE = 3; 
public static final int INVALID_UNACCEPTABLE_OWNERSHIP_TYPE = 4; 
public static final int INVALID_UNACCEPTABLE_REG_SEQ_NO = 5; 
public static final int INVALID_UNACCEPTABLE_REG_DTLS = 6; 
public static final int INVALID_UNACCEPTABLE_MAILING_DTLS = 7; 
public static final int INVALID_UNACCEPTABLE_MAILING_INST = 8; 
public static final int INVALID_UNACCEPTABLE_INVESTOR_ID = 9; 

  public RegistRejReasonCode() 
  { 
    super(507);
  } 
  public RegistRejReasonCode(int data) 
  { 
    super(507, data);
  } 
} 

package org.quickfix.field; 
import org.quickfix.IntField; 
import java.util.Date; 

public class OwnerType extends IntField 
{ 
  public static final int FIELD = 522; 
public static final int INDIVIDUAL_INVESTOR = 1; 
public static final int PUBLIC_COMPANY = 2; 
public static final int PRIVATE_COMPANY = 3; 
public static final int INDIVIDUAL_TRUSTEE = 4; 
public static final int COMPANY_TRUSTEE = 5; 
public static final int PENSION_PLAN = 6; 
public static final int CUSTODIAN_UNDER_GIFTS_TO_MINORS_ACT = 7; 
public static final int TRUSTS = 8; 
public static final int FIDUCIARIES = 9; 
public static final int NETWORKING_SUB_ACCOUNT = 10; 
public static final int NON_PROFIT_ORGANIZATION = 11; 
public static final int CORPORATE_BODY = 12; 
public static final int NOMINEE = 13; 

  public OwnerType() 
  { 
    super(522);
  } 
  public OwnerType(int data) 
  { 
    super(522, data);
  } 
} 

package org.quickfix.field; 
import org.quickfix.IntField; 
import java.util.Date; 

public class AccountType extends IntField 
{ 
  public static final int FIELD = 581; 
public static final int ACCOUNT_CUSTOMER = 1; 
public static final int ACCOUNT_NON_CUSTOMER = 2; 
public static final int HOUSE_TRADER = 3; 
public static final int FLOOR_TRADER = 4; 
public static final int ACCOUNT_NON_CUSTOMER_CROSS = 6; 
public static final int HOUSE_TRADER_CROSS = 7; 
public static final int JOINT_BOACCT = 8; 

  public AccountType() 
  { 
    super(581);
  } 
  public AccountType(int data) 
  { 
    super(581, data);
  } 
} 

package org.quickfix.field; 
import org.quickfix.IntField; 
import java.util.Date; 

public class AccountType extends IntField 
{ 
  public static final int FIELD = 581; 
public static final int ACCOUNT_IS_CARRIED_ON_CUSTOMER_SIDE_OF_BOOKS = 1; 
public static final int ACCOUNT_IS_CARRIED_ON_NON_CUSTOMER_SIDE_OF_BOOKS = 2; 
public static final int HOUSE_TRADER = 3; 
public static final int FLOOR_TRADER = 4; 
public static final int ACCOUNT_IS_CARRIED_ON_NON_CUSTOMER_SIDE_OF_BOOKS_AND_IS_CROSS_MARGINED = 6; 
public static final int ACCOUNT_IS_HOUSE_TRADER_AND_IS_CROSS_MARGINED = 7; 
public static final int JOINT_BACKOFFICE_ACCOUNT = 8; 

  public AccountType() 
  { 
    super(581);
  } 
  public AccountType(int data) 
  { 
    super(581, data);
  } 
} 

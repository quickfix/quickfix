package org.quickfix.field; 
import org.quickfix.IntField; 
import java.util.Date; 

public class AllocRejCode extends IntField 
{ 
public static final int UNKNOWN_ACCOUNT = 0; 
public static final int INCORRECT_QUANTITY = 1; 
public static final int INCORRECT_AVERAGE_PRICE = 2; 
public static final int UNKNOWN_EXECUTING_BROKER_MNEMONIC = 3; 
public static final int COMMISSION_DIFFERENCE = 4; 
public static final int UNKNOWN_ORDERID = 5; 
public static final int UNKNOWN_LISTID = 6; 
public static final int OTHER = 7; 

  public AllocRejCode() 
  { 
    super(88);
  } 
  public AllocRejCode(int data) 
  { 
    super(88, data);
  } 
} 

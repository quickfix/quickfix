package org.quickfix.field; 
import org.quickfix.IntField; 
import java.util.Date; 

public class GTBookingInst extends IntField 
{ 
  public static final int FIELD = 427; 
public static final int BOOK_OUT_ALL_TRADES_ON_DAY_OF_EXECUTION = 0; 
public static final int ACCUMULATE_EXECUTIONS_UNTIL_ORDER_IS_FILLED_OR_EXPIRES = 1; 
public static final int ACCUMULATE_UNTIL_VERBALLY_NOTIFIED_OTHERWISE = 2; 

  public GTBookingInst() 
  { 
    super(427);
  } 
  public GTBookingInst(int data) 
  { 
    super(427, data);
  } 
} 

package org.quickfix.field; 
import org.quickfix.IntField; 
import java.util.Date; 

public class GTBookingInst extends IntField 
{ 
  public static final int FIELD = 427; 
public static final int BOOK_ALL = 0; 
public static final int ACCUM_UNTIL_FILL = 1; 
public static final int ACCUM_UNTIL_NOTIFY = 2; 

  public GTBookingInst() 
  { 
    super(427);
  } 
  public GTBookingInst(int data) 
  { 
    super(427, data);
  } 
} 

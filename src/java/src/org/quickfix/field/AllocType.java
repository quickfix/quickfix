package org.quickfix.field; 
import org.quickfix.IntField; 
import java.util.Date; 

public class AllocType extends IntField 
{ 
  public static final int FIELD = 626; 
public static final int BUYSIDE_CALCULATED = 1; 
public static final int BUYSIDE_PRELIMINARY = 2; 
public static final int SELLSIDE_CALCULATED_USING_PRELIMINARY = 3; 
public static final int SELLSIDE_CALCULATED_WITHOUT_PRELIMINARY = 4; 
public static final int BUYSIDE_READY_TO_BOOK_SINGLE_ORDER = 5; 
public static final int BUYSIDE_READY_TO_BOOK_COMBINED_SET_OF_ORDERS = 6; 

  public AllocType() 
  { 
    super(626);
  } 
  public AllocType(int data) 
  { 
    super(626, data);
  } 
} 

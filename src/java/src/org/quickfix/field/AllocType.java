package org.quickfix.field; 
import org.quickfix.IntField; 
import java.util.Date; 

public class AllocType extends IntField 
{ 
  public static final int FIELD = 626; 
public static final int BUYSIDE_CALC = 1; 
public static final int BUYSIDE_PRELIM = 2; 
public static final int SELLSIDE_CALC = 3; 
public static final int SELLSIDE_CALC_WITHOUT_PRELIM = 4; 
public static final int BUYSIDE_READY_TO_BOOK_SINGLE = 5; 
public static final int BUYSIDE_READY_TO_BOOK_COMBINED = 6; 
public static final int WAREHOUSE_INSTRUCTION = 7; 
public static final int REQUEST_TO_INTERMEDIARY = 8; 

  public AllocType() 
  { 
    super(626);
  } 
  public AllocType(int data) 
  { 
    super(626, data);
  } 
} 

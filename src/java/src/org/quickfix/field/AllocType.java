package org.quickfix.field; 
import org.quickfix.IntField; 
import java.util.Date; 

public class AllocType extends IntField 
{ 
  public static final int FIELD = 626; 
public static final int CALCULATED = 1; 
public static final int PRELIMINARY = 2; 
public static final int READY_TO_BOOK___SINGLE_ORDER = 5; 
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

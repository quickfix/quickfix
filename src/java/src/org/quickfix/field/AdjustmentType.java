package org.quickfix.field; 
import org.quickfix.IntField; 
import java.util.Date; 

public class AdjustmentType extends IntField 
{ 
  public static final int FIELD = 718; 
public static final int PROCESS_REQUEST_AS_MARGIN_DISPOSITION = 0; 
public static final int DELTA_PLUS = 1; 
public static final int DELTA_MINUS = 2; 
public static final int FINAL = 3; 

  public AdjustmentType() 
  { 
    super(718);
  } 
  public AdjustmentType(int data) 
  { 
    super(718, data);
  } 
} 

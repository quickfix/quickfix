package org.quickfix.field; 
import org.quickfix.IntField; 
import java.util.Date; 

public class Adjustment extends IntField 
{ 
  public static final int FIELD = 334; 
public static final int CANCEL = 1; 
public static final int ERROR = 2; 
public static final int CORRECTION = 3; 

  public Adjustment() 
  { 
    super(334);
  } 
  public Adjustment(int data) 
  { 
    super(334, data);
  } 
} 

package org.quickfix.field; 
import org.quickfix.IntField; 
import java.util.Date; 

public class PriorityIndicator extends IntField 
{ 
public static final int PRIORITY_UNCHANGED = 0; 
public static final int LOST_PRIORITY_AS_RESULT_OF_ORDER_CHANGE = 1; 

  public PriorityIndicator() 
  { 
    super(638);
  } 
  public PriorityIndicator(int data) 
  { 
    super(638, data);
  } 
} 

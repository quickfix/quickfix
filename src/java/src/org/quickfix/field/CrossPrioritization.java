package org.quickfix.field; 
import org.quickfix.IntField; 
import java.util.Date; 

public class CrossPrioritization extends IntField 
{ 
  public static final int FIELD = 550; 

  public CrossPrioritization() 
  { 
    super(550);
  } 
  public CrossPrioritization(int data) 
  { 
    super(550, data);
  } 
} 

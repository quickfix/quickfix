package org.quickfix.field; 
import org.quickfix.IntField; 
import java.util.Date; 

public class TargetStrategy extends IntField 
{ 
  public static final int FIELD = 847; 

  public TargetStrategy() 
  { 
    super(847);
  } 
  public TargetStrategy(int data) 
  { 
    super(847, data);
  } 
} 

package org.quickfix.field; 
import org.quickfix.IntField; 
import java.util.Date; 

public class NumDaysInterest extends IntField 
{ 
  public static final int FIELD = 157; 

  public NumDaysInterest() 
  { 
    super(157);
  } 
  public NumDaysInterest(int data) 
  { 
    super(157, data);
  } 
} 

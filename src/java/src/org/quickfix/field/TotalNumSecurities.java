package org.quickfix.field; 
import org.quickfix.IntField; 
import java.util.Date; 

public class TotalNumSecurities extends IntField 
{ 
  public static final int FIELD = 393; 

  public TotalNumSecurities() 
  { 
    super(393);
  } 
  public TotalNumSecurities(int data) 
  { 
    super(393, data);
  } 
} 

package org.quickfix.field; 
import org.quickfix.IntField; 
import java.util.Date; 

public class HopRefID extends IntField 
{ 

  public HopRefID() 
  { 
    super(630);
  } 
  public HopRefID(int data) 
  { 
    super(630, data);
  } 
} 

package org.quickfix.field; 
import org.quickfix.IntField; 
import java.util.Date; 

public class CustOrderCapacity extends IntField 
{ 
  public static final int FIELD = 582; 

  public CustOrderCapacity() 
  { 
    super(582);
  } 
  public CustOrderCapacity(int data) 
  { 
    super(582, data);
  } 
} 

package org.quickfix.field; 
import org.quickfix.IntField; 
import java.util.Date; 

public class TotNoOrders extends IntField 
{ 

  public TotNoOrders() 
  { 
    super(68);
  } 
  public TotNoOrders(int data) 
  { 
    super(68, data);
  } 
} 

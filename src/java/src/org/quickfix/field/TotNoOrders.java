package org.quickfix.field; 
import org.quickfix.IntField; 
import java.util.Date; 

public class TotNoOrders extends IntField 
{ 
  public static final int FIELD = 63; 

  public TotNoOrders() 
  { 
    super(63);
  } 
  public TotNoOrders(int data) 
  { 
    super(63, data);
  } 
} 

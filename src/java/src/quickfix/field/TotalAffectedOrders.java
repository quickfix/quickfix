package org.quickfix.field; 
import org.quickfix.IntField; 
import java.util.Date; 

public class TotalAffectedOrders extends IntField 
{ 
  public static final int FIELD = 533; 

  public TotalAffectedOrders() 
  { 
    super(533);
  } 
  public TotalAffectedOrders(int data) 
  { 
    super(533, data);
  } 
} 

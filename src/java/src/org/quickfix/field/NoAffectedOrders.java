package org.quickfix.field; 
import org.quickfix.IntField; 
import java.util.Date; 

public class NoAffectedOrders extends IntField 
{ 

  public NoAffectedOrders() 
  { 
    super(534);
  } 
  public NoAffectedOrders(int data) 
  { 
    super(534, data);
  } 
} 

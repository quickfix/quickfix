package org.quickfix.field; 
import org.quickfix.IntField; 
import java.util.Date; 

public class NumTickets extends IntField 
{ 
  public static final int FIELD = 395; 

  public NumTickets() 
  { 
    super(395);
  } 
  public NumTickets(int data) 
  { 
    super(395, data);
  } 
} 

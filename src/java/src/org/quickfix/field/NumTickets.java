package org.quickfix.field; 
import org.quickfix.IntField; 
import java.util.Date; 

public class NumTickets extends IntField 
{ 

  public NumTickets() 
  { 
    super(395);
  } 
  public NumTickets(int data) 
  { 
    super(395, data);
  } 
} 

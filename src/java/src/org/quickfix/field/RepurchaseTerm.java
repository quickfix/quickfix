package org.quickfix.field; 
import org.quickfix.IntField; 
import java.util.Date; 

public class RepurchaseTerm extends IntField 
{ 

  public RepurchaseTerm() 
  { 
    super(226);
  } 
  public RepurchaseTerm(int data) 
  { 
    super(226, data);
  } 
} 

package org.quickfix.field; 
import org.quickfix.IntField; 
import java.util.Date; 

public class NoLegs extends IntField 
{ 

  public NoLegs() 
  { 
    super(555);
  } 
  public NoLegs(int data) 
  { 
    super(555, data);
  } 
} 

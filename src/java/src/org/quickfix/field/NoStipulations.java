package org.quickfix.field; 
import org.quickfix.IntField; 
import java.util.Date; 

public class NoStipulations extends IntField 
{ 

  public NoStipulations() 
  { 
    super(232);
  } 
  public NoStipulations(int data) 
  { 
    super(232, data);
  } 
} 

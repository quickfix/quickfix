package org.quickfix.field; 
import org.quickfix.IntField; 
import java.util.Date; 

public class NoDistribInsts extends IntField 
{ 

  public NoDistribInsts() 
  { 
    super(510);
  } 
  public NoDistribInsts(int data) 
  { 
    super(510, data);
  } 
} 

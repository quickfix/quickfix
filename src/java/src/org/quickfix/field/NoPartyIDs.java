package org.quickfix.field; 
import org.quickfix.IntField; 
import java.util.Date; 

public class NoPartyIDs extends IntField 
{ 

  public NoPartyIDs() 
  { 
    super(453);
  } 
  public NoPartyIDs(int data) 
  { 
    super(453, data);
  } 
} 

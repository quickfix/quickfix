package org.quickfix.field; 
import org.quickfix.IntField; 
import java.util.Date; 

public class NoSettlPartyIDs extends IntField 
{ 
  public static final int FIELD = 781; 

  public NoSettlPartyIDs() 
  { 
    super(781);
  } 
  public NoSettlPartyIDs(int data) 
  { 
    super(781, data);
  } 
} 

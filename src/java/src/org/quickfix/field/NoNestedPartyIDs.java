package org.quickfix.field; 
import org.quickfix.IntField; 
import java.util.Date; 

public class NoNestedPartyIDs extends IntField 
{ 
  public static final int FIELD = 539; 

  public NoNestedPartyIDs() 
  { 
    super(539);
  } 
  public NoNestedPartyIDs(int data) 
  { 
    super(539, data);
  } 
} 

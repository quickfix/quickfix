package org.quickfix.field; 
import org.quickfix.IntField; 
import java.util.Date; 

public class NoNested2PartyIDs extends IntField 
{ 
  public static final int FIELD = 756; 

  public NoNested2PartyIDs() 
  { 
    super(756);
  } 
  public NoNested2PartyIDs(int data) 
  { 
    super(756, data);
  } 
} 

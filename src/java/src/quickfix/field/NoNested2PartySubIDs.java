package org.quickfix.field; 
import org.quickfix.IntField; 
import java.util.Date; 

public class NoNested2PartySubIDs extends IntField 
{ 
  public static final int FIELD = 806; 

  public NoNested2PartySubIDs() 
  { 
    super(806);
  } 
  public NoNested2PartySubIDs(int data) 
  { 
    super(806, data);
  } 
} 

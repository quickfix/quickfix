package org.quickfix.field; 
import org.quickfix.IntField; 
import java.util.Date; 

public class NoPartySubIDs extends IntField 
{ 
  public static final int FIELD = 802; 

  public NoPartySubIDs() 
  { 
    super(802);
  } 
  public NoPartySubIDs(int data) 
  { 
    super(802, data);
  } 
} 

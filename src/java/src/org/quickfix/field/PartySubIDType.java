package org.quickfix.field; 
import org.quickfix.IntField; 
import java.util.Date; 

public class PartySubIDType extends IntField 
{ 
  public static final int FIELD = 803; 

  public PartySubIDType() 
  { 
    super(803);
  } 
  public PartySubIDType(int data) 
  { 
    super(803, data);
  } 
} 

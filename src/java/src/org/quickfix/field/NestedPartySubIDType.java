package org.quickfix.field; 
import org.quickfix.IntField; 
import java.util.Date; 

public class NestedPartySubIDType extends IntField 
{ 
  public static final int FIELD = 805; 

  public NestedPartySubIDType() 
  { 
    super(805);
  } 
  public NestedPartySubIDType(int data) 
  { 
    super(805, data);
  } 
} 

package org.quickfix.field; 
import org.quickfix.IntField; 
import java.util.Date; 

public class NestedPartyRole extends IntField 
{ 
  public static final int FIELD = 538; 

  public NestedPartyRole() 
  { 
    super(538);
  } 
  public NestedPartyRole(int data) 
  { 
    super(538, data);
  } 
} 

package org.quickfix.field; 
import org.quickfix.IntField; 
import java.util.Date; 

public class SideValueInd extends IntField 
{ 

  public SideValueInd() 
  { 
    super(401);
  } 
  public SideValueInd(int data) 
  { 
    super(401, data);
  } 
} 

package org.quickfix.field; 
import org.quickfix.IntField; 
import java.util.Date; 

public class SideValueInd extends IntField 
{ 
public static final int SIDEVALUE1 = 1; 
public static final int SIDEVALUE_2 = 2; 

  public SideValueInd() 
  { 
    super(401);
  } 
  public SideValueInd(int data) 
  { 
    super(401, data);
  } 
} 

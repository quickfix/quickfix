package org.quickfix.field; 
import org.quickfix.IntField; 
import java.util.Date; 

public class SideValueInd extends IntField 
{ 
  public static final int FIELD = 401; 
public static final int SIDE_VALUE1 = 1; 
public static final int SIDE_VALUE2 = 2; 

  public SideValueInd() 
  { 
    super(401);
  } 
  public SideValueInd(int data) 
  { 
    super(401, data);
  } 
} 

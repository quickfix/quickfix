package org.quickfix.field; 
import org.quickfix.IntField; 
import java.util.Date; 

public class RoutingType extends IntField 
{ 
public static final int TARGET_FIRM = 1; 
public static final int TARGET_LIST = 2; 
public static final int BLOCK_FIRM = 3; 
public static final int BLOCK_LIST = 4; 

  public RoutingType() 
  { 
    super(216);
  } 
  public RoutingType(int data) 
  { 
    super(216, data);
  } 
} 

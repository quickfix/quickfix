package org.quickfix.field; 
import org.quickfix.IntField; 
import java.util.Date; 

public class AllocHandlInst extends IntField 
{ 
public static final int MATCH = 1; 
public static final int FORWARD = 2; 
public static final int FORWARD_AND_MATCH = 3; 

  public AllocHandlInst() 
  { 
    super(209);
  } 
  public AllocHandlInst(int data) 
  { 
    super(209, data);
  } 
} 

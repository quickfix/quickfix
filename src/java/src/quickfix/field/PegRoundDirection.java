package org.quickfix.field; 
import org.quickfix.IntField; 
import java.util.Date; 

public class PegRoundDirection extends IntField 
{ 
  public static final int FIELD = 838; 
public static final int MORE_AGGRESSIVE = 1; 
public static final int MORE_PASSIVE = 2; 

  public PegRoundDirection() 
  { 
    super(838);
  } 
  public PegRoundDirection(int data) 
  { 
    super(838, data);
  } 
} 

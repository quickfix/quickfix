package org.quickfix.field; 
import org.quickfix.IntField; 
import java.util.Date; 

public class PosReqType extends IntField 
{ 
  public static final int FIELD = 724; 
public static final int POSITIONS = 0; 
public static final int TRADES = 1; 
public static final int EXERCISES = 2; 
public static final int ASSIGNMENTS = 3; 

  public PosReqType() 
  { 
    super(724);
  } 
  public PosReqType(int data) 
  { 
    super(724, data);
  } 
} 

package org.quickfix.field; 
import org.quickfix.IntField; 
import java.util.Date; 

public class DiscretionMoveType extends IntField 
{ 
  public static final int FIELD = 841; 
public static final int FLOATING = 0; 
public static final int FIXED = 1; 

  public DiscretionMoveType() 
  { 
    super(841);
  } 
  public DiscretionMoveType(int data) 
  { 
    super(841, data);
  } 
} 

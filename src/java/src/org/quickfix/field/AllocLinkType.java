package org.quickfix.field; 
import org.quickfix.IntField; 
import java.util.Date; 

public class AllocLinkType extends IntField 
{ 
  public static final int FIELD = 197; 
public static final int FXNETTING = 0; 
public static final int FXSWAP = 1; 

  public AllocLinkType() 
  { 
    super(197);
  } 
  public AllocLinkType(int data) 
  { 
    super(197, data);
  } 
} 

package org.quickfix.field; 
import org.quickfix.IntField; 
import java.util.Date; 

public class EncodedAllocTextLen extends IntField 
{ 
  public static final int FIELD = 360; 

  public EncodedAllocTextLen() 
  { 
    super(360);
  } 
  public EncodedAllocTextLen(int data) 
  { 
    super(360, data);
  } 
} 

package org.quickfix.field; 
import org.quickfix.IntField; 
import java.util.Date; 

public class EncodedHeadlineLen extends IntField 
{ 
  public static final int FIELD = 358; 

  public EncodedHeadlineLen() 
  { 
    super(358);
  } 
  public EncodedHeadlineLen(int data) 
  { 
    super(358, data);
  } 
} 

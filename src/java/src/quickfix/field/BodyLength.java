package org.quickfix.field; 
import org.quickfix.IntField; 
import java.util.Date; 

public class BodyLength extends IntField 
{ 
  public static final int FIELD = 9; 

  public BodyLength() 
  { 
    super(9);
  } 
  public BodyLength(int data) 
  { 
    super(9, data);
  } 
} 

package org.quickfix.field; 
import org.quickfix.IntField; 
import java.util.Date; 

public class UnderlyingPutOrCall extends IntField 
{ 
  public static final int FIELD = 315; 

  public UnderlyingPutOrCall() 
  { 
    super(315);
  } 
  public UnderlyingPutOrCall(int data) 
  { 
    super(315, data);
  } 
} 

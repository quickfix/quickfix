package org.quickfix.field; 
import org.quickfix.IntField; 
import java.util.Date; 

public class NoUnderlyingStips extends IntField 
{ 
  public static final int FIELD = 887; 

  public NoUnderlyingStips() 
  { 
    super(887);
  } 
  public NoUnderlyingStips(int data) 
  { 
    super(887, data);
  } 
} 

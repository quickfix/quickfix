package org.quickfix.field; 
import org.quickfix.IntField; 
import java.util.Date; 

public class NoMiscFees extends IntField 
{ 
  public static final int FIELD = 136; 

  public NoMiscFees() 
  { 
    super(136);
  } 
  public NoMiscFees(int data) 
  { 
    super(136, data);
  } 
} 

package org.quickfix.field; 
import org.quickfix.IntField; 
import java.util.Date; 

public class NoDates extends IntField 
{ 
  public static final int FIELD = 580; 

  public NoDates() 
  { 
    super(580);
  } 
  public NoDates(int data) 
  { 
    super(580, data);
  } 
} 

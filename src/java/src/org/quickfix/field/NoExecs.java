package org.quickfix.field; 
import org.quickfix.IntField; 
import java.util.Date; 

public class NoExecs extends IntField 
{ 
  public static final int FIELD = 124; 

  public NoExecs() 
  { 
    super(124);
  } 
  public NoExecs(int data) 
  { 
    super(124, data);
  } 
} 

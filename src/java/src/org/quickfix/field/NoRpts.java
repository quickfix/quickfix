package org.quickfix.field; 
import org.quickfix.IntField; 
import java.util.Date; 

public class NoRpts extends IntField 
{ 
  public static final int FIELD = 82; 

  public NoRpts() 
  { 
    super(82);
  } 
  public NoRpts(int data) 
  { 
    super(82, data);
  } 
} 

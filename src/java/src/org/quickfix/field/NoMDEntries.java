package org.quickfix.field; 
import org.quickfix.IntField; 
import java.util.Date; 

public class NoMDEntries extends IntField 
{ 
  public static final int FIELD = 268; 

  public NoMDEntries() 
  { 
    super(268);
  } 
  public NoMDEntries(int data) 
  { 
    super(268, data);
  } 
} 

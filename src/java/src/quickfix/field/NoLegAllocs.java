package org.quickfix.field; 
import org.quickfix.IntField; 
import java.util.Date; 

public class NoLegAllocs extends IntField 
{ 
  public static final int FIELD = 670; 

  public NoLegAllocs() 
  { 
    super(670);
  } 
  public NoLegAllocs(int data) 
  { 
    super(670, data);
  } 
} 

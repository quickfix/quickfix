package org.quickfix.field; 
import org.quickfix.IntField; 
import java.util.Date; 

public class NoBidDescriptors extends IntField 
{ 
  public static final int FIELD = 398; 

  public NoBidDescriptors() 
  { 
    super(398);
  } 
  public NoBidDescriptors(int data) 
  { 
    super(398, data);
  } 
} 

package org.quickfix.field; 
import org.quickfix.IntField; 
import java.util.Date; 

public class NoTrdRegTimestamps extends IntField 
{ 
  public static final int FIELD = 768; 

  public NoTrdRegTimestamps() 
  { 
    super(768);
  } 
  public NoTrdRegTimestamps(int data) 
  { 
    super(768, data);
  } 
} 

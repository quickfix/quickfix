package org.quickfix.field; 
import org.quickfix.IntField; 
import java.util.Date; 

public class NoAllocs extends IntField 
{ 

  public NoAllocs() 
  { 
    super(78);
  } 
  public NoAllocs(int data) 
  { 
    super(78, data);
  } 
} 

package org.quickfix.field; 
import org.quickfix.IntField; 
import java.util.Date; 

public class EndSeqNo extends IntField 
{ 

  public EndSeqNo() 
  { 
    super(16);
  } 
  public EndSeqNo(int data) 
  { 
    super(16, data);
  } 
} 

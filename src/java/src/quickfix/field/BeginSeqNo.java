package org.quickfix.field; 
import org.quickfix.IntField; 
import java.util.Date; 

public class BeginSeqNo extends IntField 
{ 
  public static final int FIELD = 7; 

  public BeginSeqNo() 
  { 
    super(7);
  } 
  public BeginSeqNo(int data) 
  { 
    super(7, data);
  } 
} 

package org.quickfix.field; 
import org.quickfix.IntField; 
import java.util.Date; 

public class RefSeqNum extends IntField 
{ 
  public static final int FIELD = 45; 

  public RefSeqNum() 
  { 
    super(45);
  } 
  public RefSeqNum(int data) 
  { 
    super(45, data);
  } 
} 

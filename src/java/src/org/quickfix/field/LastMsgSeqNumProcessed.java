package org.quickfix.field; 
import org.quickfix.IntField; 
import java.util.Date; 

public class LastMsgSeqNumProcessed extends IntField 
{ 

  public LastMsgSeqNumProcessed() 
  { 
    super(369);
  } 
  public LastMsgSeqNumProcessed(int data) 
  { 
    super(369, data);
  } 
} 

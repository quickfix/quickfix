package org.quickfix.field; 
import org.quickfix.IntField; 
import java.util.Date; 

public class LastMsgSeqNumProcessed extends IntField 
{ 
  public static final int FIELD = 369; 

  public LastMsgSeqNumProcessed() 
  { 
    super(369);
  } 
  public LastMsgSeqNumProcessed(int data) 
  { 
    super(369, data);
  } 
} 

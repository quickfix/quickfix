package org.quickfix.field; 
import org.quickfix.IntField; 
import java.util.Date; 

public class NextExpectedMsgSeqNum extends IntField 
{ 
  public static final int FIELD = 789; 

  public NextExpectedMsgSeqNum() 
  { 
    super(789);
  } 
  public NextExpectedMsgSeqNum(int data) 
  { 
    super(789, data);
  } 
} 

package org.quickfix.field; 
import org.quickfix.IntField; 
import java.util.Date; 

public class ApplQueueMax extends IntField 
{ 
  public static final int FIELD = 812; 

  public ApplQueueMax() 
  { 
    super(812);
  } 
  public ApplQueueMax(int data) 
  { 
    super(812, data);
  } 
} 

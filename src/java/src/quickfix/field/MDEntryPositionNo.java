package org.quickfix.field; 
import org.quickfix.IntField; 
import java.util.Date; 

public class MDEntryPositionNo extends IntField 
{ 
  public static final int FIELD = 290; 

  public MDEntryPositionNo() 
  { 
    super(290);
  } 
  public MDEntryPositionNo(int data) 
  { 
    super(290, data);
  } 
} 

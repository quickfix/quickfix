package org.quickfix.field; 
import org.quickfix.IntField; 
import java.util.Date; 

public class TrdSubType extends IntField 
{ 
  public static final int FIELD = 829; 

  public TrdSubType() 
  { 
    super(829);
  } 
  public TrdSubType(int data) 
  { 
    super(829, data);
  } 
} 

package org.quickfix.field; 
import org.quickfix.IntField; 
import java.util.Date; 

public class NoPositions extends IntField 
{ 
  public static final int FIELD = 702; 

  public NoPositions() 
  { 
    super(702);
  } 
  public NoPositions(int data) 
  { 
    super(702, data);
  } 
} 

package org.quickfix.field; 
import org.quickfix.IntField; 
import java.util.Date; 

public class NoClearingInstructions extends IntField 
{ 

  public NoClearingInstructions() 
  { 
    super(576);
  } 
  public NoClearingInstructions(int data) 
  { 
    super(576, data);
  } 
} 

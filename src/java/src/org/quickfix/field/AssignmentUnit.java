package org.quickfix.field; 
import org.quickfix.DoubleField; 
import java.util.Date; 

public class AssignmentUnit extends DoubleField 
{ 
  public static final int FIELD = 745; 

  public AssignmentUnit() 
  { 
    super(745);
  } 
  public AssignmentUnit(double data) 
  { 
    super(745, data);
  } 
} 

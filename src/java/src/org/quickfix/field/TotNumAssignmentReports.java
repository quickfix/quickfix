package org.quickfix.field; 
import org.quickfix.IntField; 
import java.util.Date; 

public class TotNumAssignmentReports extends IntField 
{ 
  public static final int FIELD = 832; 

  public TotNumAssignmentReports() 
  { 
    super(832);
  } 
  public TotNumAssignmentReports(int data) 
  { 
    super(832, data);
  } 
} 

package org.quickfix.field; 
import org.quickfix.UtcDateField; 
import java.util.Date; 

public class LegIssueDate extends UtcDateField 
{ 
  public static final int FIELD = 249; 

  public LegIssueDate() 
  { 
    super(249);
  } 
  public LegIssueDate(Date data) 
  { 
    super(249, data);
  } 
} 

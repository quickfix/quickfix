package org.quickfix.field; 
import org.quickfix.UtcDateField; 
import java.util.Date; 

public class UnderlyingIssueDate extends UtcDateField 
{ 
  public static final int FIELD = 242; 

  public UnderlyingIssueDate() 
  { 
    super(242);
  } 
  public UnderlyingIssueDate(Date data) 
  { 
    super(242, data);
  } 
} 

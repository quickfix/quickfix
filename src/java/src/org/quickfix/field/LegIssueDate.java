package org.quickfix.field; 
import org.quickfix.StringField; 
import java.util.Date; 

public class LegIssueDate extends StringField 
{ 
  public static final int FIELD = 249; 

  public LegIssueDate() 
  { 
    super(249);
  } 
  public LegIssueDate(String data) 
  { 
    super(249, data);
  } 
} 

package org.quickfix.field; 
import org.quickfix.BooleanField; 
import java.util.Date; 

public class ReportToExch extends BooleanField 
{ 
  public static final int FIELD = 113; 
public static final boolean YES = true; 
public static final boolean NO = false; 

  public ReportToExch() 
  { 
    super(113);
  } 
  public ReportToExch(boolean data) 
  { 
    super(113, data);
  } 
} 

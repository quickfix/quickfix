package org.quickfix.field; 
import org.quickfix.UtcDateField; 
import java.util.Date; 

public class ExDate extends UtcDateField 
{ 
  public static final int FIELD = 230; 

  public ExDate() 
  { 
    super(230);
  } 
  public ExDate(Date data) 
  { 
    super(230, data);
  } 
} 

package org.quickfix.field; 
import org.quickfix.UtcDateField; 
import java.util.Date; 

public class MDEntryDate extends UtcDateField 
{ 
  public static final int FIELD = 272; 

  public MDEntryDate() 
  { 
    super(272);
  } 
  public MDEntryDate(Date data) 
  { 
    super(272, data);
  } 
} 

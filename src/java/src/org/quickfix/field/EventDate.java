package org.quickfix.field; 
import org.quickfix.StringField; 
import java.util.Date; 

public class EventDate extends StringField 
{ 
  public static final int FIELD = 866; 

  public EventDate() 
  { 
    super(866);
  } 
  public EventDate(String data) 
  { 
    super(866, data);
  } 
} 

package org.quickfix.field; 
import org.quickfix.StringField; 
import java.util.Date; 

public class CollAsgnID extends StringField 
{ 
  public static final int FIELD = 902; 

  public CollAsgnID() 
  { 
    super(902);
  } 
  public CollAsgnID(String data) 
  { 
    super(902, data);
  } 
} 

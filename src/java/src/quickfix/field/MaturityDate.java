package org.quickfix.field; 
import org.quickfix.StringField; 
import java.util.Date; 

public class MaturityDate extends StringField 
{ 
  public static final int FIELD = 541; 

  public MaturityDate() 
  { 
    super(541);
  } 
  public MaturityDate(String data) 
  { 
    super(541, data);
  } 
} 

package org.quickfix.field; 
import org.quickfix.StringField; 
import java.util.Date; 

public class Country extends StringField 
{ 
  public static final int FIELD = 421; 

  public Country() 
  { 
    super(421);
  } 
  public Country(String data) 
  { 
    super(421, data);
  } 
} 

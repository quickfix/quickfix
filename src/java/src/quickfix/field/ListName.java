package org.quickfix.field; 
import org.quickfix.StringField; 
import java.util.Date; 

public class ListName extends StringField 
{ 
  public static final int FIELD = 392; 

  public ListName() 
  { 
    super(392);
  } 
  public ListName(String data) 
  { 
    super(392, data);
  } 
} 

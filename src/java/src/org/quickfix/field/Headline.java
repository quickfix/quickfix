package org.quickfix.field; 
import org.quickfix.StringField; 
import java.util.Date; 

public class Headline extends StringField 
{ 

  public Headline() 
  { 
    super(148);
  } 
  public Headline(String data) 
  { 
    super(148, data);
  } 
} 

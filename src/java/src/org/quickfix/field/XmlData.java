package org.quickfix.field; 
import org.quickfix.StringField; 
import java.util.Date; 

public class XmlData extends StringField 
{ 

  public XmlData() 
  { 
    super(213);
  } 
  public XmlData(String data) 
  { 
    super(213, data);
  } 
} 

package org.quickfix.field; 
import org.quickfix.StringField; 
import java.util.Date; 

public class WaveNo extends StringField 
{ 

  public WaveNo() 
  { 
    super(105);
  } 
  public WaveNo(String data) 
  { 
    super(105, data);
  } 
} 

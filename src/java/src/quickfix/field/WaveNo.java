package org.quickfix.field; 
import org.quickfix.StringField; 
import java.util.Date; 

public class WaveNo extends StringField 
{ 
  public static final int FIELD = 105; 

  public WaveNo() 
  { 
    super(105);
  } 
  public WaveNo(String data) 
  { 
    super(105, data);
  } 
} 

package org.quickfix.field; 
import org.quickfix.StringField; 
import java.util.Date; 

public class UnderlyingSymbolSfx extends StringField 
{ 
  public static final int FIELD = 312; 

  public UnderlyingSymbolSfx() 
  { 
    super(312);
  } 
  public UnderlyingSymbolSfx(String data) 
  { 
    super(312, data);
  } 
} 

package org.quickfix.field; 
import org.quickfix.StringField; 
import java.util.Date; 

public class LegSymbolSfx extends StringField 
{ 
  public static final int FIELD = 601; 

  public LegSymbolSfx() 
  { 
    super(601);
  } 
  public LegSymbolSfx(String data) 
  { 
    super(601, data);
  } 
} 

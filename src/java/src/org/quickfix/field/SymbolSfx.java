package org.quickfix.field; 
import org.quickfix.StringField; 
import java.util.Date; 

public class SymbolSfx extends StringField 
{ 
  public static final int FIELD = 65; 

  public SymbolSfx() 
  { 
    super(65);
  } 
  public SymbolSfx(String data) 
  { 
    super(65, data);
  } 
} 

package org.quickfix.field; 
import org.quickfix.StringField; 
import java.util.Date; 

public class UnderlyingSymbolSfx extends StringField 
{ 
  public static final int FIELD = 312; 
public static final String WHEN_ISSUED = "WI"; 
public static final String EUCPLUMPSUM_INTEREST = "CD"; 

  public UnderlyingSymbolSfx() 
  { 
    super(312);
  } 
  public UnderlyingSymbolSfx(String data) 
  { 
    super(312, data);
  } 
} 

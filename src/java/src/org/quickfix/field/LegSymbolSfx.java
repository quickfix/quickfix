package org.quickfix.field; 
import org.quickfix.StringField; 
import java.util.Date; 

public class LegSymbolSfx extends StringField 
{ 
  public static final int FIELD = 601; 
public static final String WHEN_ISSUED = "WI"; 
public static final String EUCPLUMPSUM_INTEREST = "CD"; 

  public LegSymbolSfx() 
  { 
    super(601);
  } 
  public LegSymbolSfx(String data) 
  { 
    super(601, data);
  } 
} 

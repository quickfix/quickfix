package org.quickfix.field; 
import org.quickfix.StringField; 
import java.util.Date; 

public class LegInstrRegistry extends StringField 
{ 
  public static final int FIELD = 599; 
public static final String CUSTODIAN = "BIC"; 
public static final String COUNTRY = "ISO"; 
public static final String PHYSICAL = "ZZ"; 

  public LegInstrRegistry() 
  { 
    super(599);
  } 
  public LegInstrRegistry(String data) 
  { 
    super(599, data);
  } 
} 

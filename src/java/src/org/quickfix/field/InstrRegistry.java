package org.quickfix.field; 
import org.quickfix.StringField; 
import java.util.Date; 

public class InstrRegistry extends StringField 
{ 
  public static final int FIELD = 543; 
public static final String CUSTODIAN = "BIC"; 
public static final String COUNTRY = "ISO"; 
public static final String PHYSICAL = "ZZ"; 

  public InstrRegistry() 
  { 
    super(543);
  } 
  public InstrRegistry(String data) 
  { 
    super(543, data);
  } 
} 

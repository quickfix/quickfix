package org.quickfix.field; 
import org.quickfix.StringField; 
import java.util.Date; 

public class InstrRegistry extends StringField 
{ 
public static final String COUNTRY_IN_WHICH_REGISTRY_IS_KEPT = "Code"; 
public static final String PHYSICAL_OR_BEARER = "ZZ"; 

  public InstrRegistry() 
  { 
    super(543);
  } 
  public InstrRegistry(String data) 
  { 
    super(543, data);
  } 
} 

package org.quickfix.field; 
import org.quickfix.BooleanField; 
import java.util.Date; 

public class SolicitedFlag extends BooleanField 
{ 
  public static final int FIELD = 377; 
public static final boolean WAS_SOLCITIED = true; 
public static final boolean WAS_NOT_SOLICITED = false; 

  public SolicitedFlag() 
  { 
    super(377);
  } 
  public SolicitedFlag(boolean data) 
  { 
    super(377, data);
  } 
} 

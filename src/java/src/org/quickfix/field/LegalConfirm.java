package org.quickfix.field; 
import org.quickfix.BooleanField; 
import java.util.Date; 

public class LegalConfirm extends BooleanField 
{ 
  public static final int FIELD = 650; 
public static final boolean LEGAL_CONFIRM = true; 
public static final boolean DOES_NOT_CONSTITUTE_A_LEGAL_CONFIRM = false; 

  public LegalConfirm() 
  { 
    super(650);
  } 
  public LegalConfirm(boolean data) 
  { 
    super(650, data);
  } 
} 

package org.quickfix.field; 
import org.quickfix.StringField; 
import java.util.Date; 

public class AgreementCurrency extends StringField 
{ 
  public static final int FIELD = 918; 

  public AgreementCurrency() 
  { 
    super(918);
  } 
  public AgreementCurrency(String data) 
  { 
    super(918, data);
  } 
} 

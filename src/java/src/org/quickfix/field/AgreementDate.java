package org.quickfix.field; 
import org.quickfix.StringField; 
import java.util.Date; 

public class AgreementDate extends StringField 
{ 
  public static final int FIELD = 915; 

  public AgreementDate() 
  { 
    super(915);
  } 
  public AgreementDate(String data) 
  { 
    super(915, data);
  } 
} 

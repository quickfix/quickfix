package org.quickfix.field; 
import org.quickfix.StringField; 
import java.util.Date; 

public class InvestorCountryOfResidence extends StringField 
{ 
  public static final int FIELD = 475; 

  public InvestorCountryOfResidence() 
  { 
    super(475);
  } 
  public InvestorCountryOfResidence(String data) 
  { 
    super(475, data);
  } 
} 

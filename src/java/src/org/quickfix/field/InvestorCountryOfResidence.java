package org.quickfix.field; 
import org.quickfix.StringField; 
import java.util.Date; 

public class InvestorCountryOfResidence extends StringField 
{ 

  public InvestorCountryOfResidence() 
  { 
    super(475);
  } 
  public InvestorCountryOfResidence(String data) 
  { 
    super(475, data);
  } 
} 

package org.quickfix.field; 
import org.quickfix.CharField; 
import java.util.Date; 

public class FundRenewWaiv extends CharField 
{ 
  public static final int FIELD = 497; 
public static final char YES = 'Y'; 
public static final char NO = 'N'; 

  public FundRenewWaiv() 
  { 
    super(497);
  } 
  public FundRenewWaiv(char data) 
  { 
    super(497, data);
  } 
} 

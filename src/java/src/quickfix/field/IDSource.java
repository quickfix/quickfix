package org.quickfix.field; 
import org.quickfix.StringField; 
import java.util.Date; 

public class IDSource extends StringField 
{ 
  public static final int FIELD = 22; 
public static final String CUSIP = "1"; 
public static final String SEDOL = "2"; 
public static final String QUIK = "3"; 
public static final String ISIN_NUMBER = "4"; 
public static final String RIC_CODE = "5"; 
public static final String ISO_CURRENCY_CODE = "6"; 
public static final String ISO_COUNTRY_CODE = "7"; 
public static final String EXCHANGE_SYMBOL = "8"; 
public static final String CONSOLIDATED_TAPE_ASSOCIATION = "9"; 

  public IDSource() 
  { 
    super(22);
  } 
  public IDSource(String data) 
  { 
    super(22, data);
  } 
} 

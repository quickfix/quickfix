package org.quickfix.field; 
import org.quickfix.StringField; 
import java.util.Date; 

public class SecurityIDSource extends StringField 
{ 
  public static final int FIELD = 22; 
public static final String CUSIP = "1"; 
public static final String SEDOL = "2"; 
public static final String QUIK = "3"; 
public static final String ISIN = "4"; 
public static final String RIC = "5"; 
public static final String ISOCURR = "6"; 
public static final String ISOCOUNTRY = "7"; 
public static final String EXCH_SYMB = "8"; 
public static final String CTA = "9"; 
public static final String BLMBRG = "A"; 
public static final String WERTPAPIER = "B"; 
public static final String DUTCH = "C"; 
public static final String VALOREN = "D"; 
public static final String SICOVAM = "E"; 
public static final String BELGIAN = "F"; 
public static final String COMMON = "G"; 
public static final String CLEARING_HOUSE = "H"; 
public static final String FP_ML = "I"; 
public static final String OPTION_PRICE_REPORTING_AUTHORITY = "J"; 

  public SecurityIDSource() 
  { 
    super(22);
  } 
  public SecurityIDSource(String data) 
  { 
    super(22, data);
  } 
} 

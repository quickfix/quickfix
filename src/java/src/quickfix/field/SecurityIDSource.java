package quickfix.field; 
import quickfix.CharField; 
import java.util.Date; 

public class SecurityIDSource extends CharField 
{ 
  public static final int FIELD = 22; 
public static final char CUSIP = '1'; 
public static final char SEDOL = '2'; 
public static final char QUIK = '3'; 
public static final char ISIN_NUMBER = '4'; 
public static final char RIC_CODE = '5'; 
public static final char ISO_CURRENCY_CODE = '6'; 
public static final char ISO_COUNTRY_CODE = '7'; 
public static final char EXCHANGE_SYMBOL = '8'; 
public static final char CONSOLIDATED_TAPE_ASSOCIATION = '9'; 
public static final char BLOOMBERG_SYMBOL = 'A'; 
public static final char WERTPAPIER = 'B'; 
public static final char DUTCH = 'C'; 
public static final char VALOREN = 'D'; 
public static final char SICOVAM = 'E'; 
public static final char BELGIAN = 'F'; 
public static final char COMMON = 'G'; 
public static final char CLEARING_HOUSE_CLEARING_ORGANIZATION = 'H'; 
public static final char ISDA_FPML_PRODUCT_SPECIFICATION = 'I'; 
public static final char OPTIONS_PRICE_REPORTING_AUTHORITY = 'J'; 

  public SecurityIDSource() 
  { 
    super(22);
  } 
  public SecurityIDSource(char data) 
  { 
    super(22, data);
  } 
} 

package org.quickfix.field; 
import org.quickfix.CharField; 
import java.util.Date; 

public class Nested3PartyIDSource extends CharField 
{ 
  public static final int FIELD = 950; 
public static final char BIC = 'B'; 
public static final char ACCPT_MARKET_PART = 'C'; 
public static final char PROP_CODE = 'D'; 
public static final char ISOCODE = 'E'; 
public static final char SETTL_ENT_LOC = 'F'; 
public static final char MIC = 'G'; 
public static final char CSDPART_CODE = 'H'; 
public static final char KOREAN_INVESTOR_ID = '1'; 
public static final char TAIWANESE_QUALIFIED = '2'; 
public static final char TAIWANESE_TRADING_ACCT = '3'; 
public static final char MCDNUMBER = '4'; 
public static final char CHINESE_BSHARE = '5'; 
public static final char UKNATIONAL_INS_PEN_NUMBER = '6'; 
public static final char USSOCIAL_SECURITY = '7'; 
public static final char USEMPLOYER_IDNUMBER = '8'; 
public static final char AUSTRALIAN_BUSINESS_NUMBER = '9'; 
public static final char AUSTRALIAN_TAX_FILE_NUMBER = 'A'; 
public static final char DIRECTED_DEFINED_ISITC = 'I'; 

  public Nested3PartyIDSource() 
  { 
    super(950);
  } 
  public Nested3PartyIDSource(char data) 
  { 
    super(950, data);
  } 
} 

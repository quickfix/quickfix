package org.quickfix.field; 
import org.quickfix.StringField; 
import java.util.Date; 

public class MatchType extends StringField 
{ 
  public static final int FIELD = 574; 
public static final String EXACT_MATCH_ON_TRADE_DATE_STOCK_SYMBOL_QUANTITY_PRICE_TRADE_TYPE_AND_SPECIAL_TRADE_INDICATOR_PLUS_FOUR_BADGES_AND_EXECUTION_TIME = "A1"; 
public static final String EXACT_MATCH_ON_TRADE_DATE_STOCK_SYMBOL_QUANTITY_PRICE_TRADE_TYPE_AND_SPECIAL_TRADE_INDICATOR_PLUS_FOUR_BADGES = "A2"; 
public static final String EXACT_MATCH_ON_TRADE_DATE_STOCK_SYMBOL_QUANTITY_PRICE_TRADE_TYPE_AND_SPECIAL_TRADE_INDICATOR_PLUS_TWO_BADGES_AND_EXECUTION_TIME = "A3"; 
public static final String EXACT_MATCH_ON_TRADE_DATE_STOCK_SYMBOL_QUANTITY_PRICE_TRADE_TYPE_AND_SPECIAL_TRADE_INDICATOR_PLUS_TWO_BADGES = "A4"; 
public static final String EXACT_MATCH_ON_TRADE_DATE_STOCK_SYMBOL_QUANTITY_PRICE_TRADE_TYPE_AND_SPECIAL_TRADE_INDICATOR_PLUS_EXECUTION_TIME = "A5"; 
public static final String COMPARED_RECORDS_RESULTING_FROM_STAMPED_ADVISORIES_OR_SPECIALIST_ACCEPTS_PAIR_OFFS = "AQ"; 
public static final String SUMMARIZED_MATCH_USING_A1 = "S1"; 
public static final String SUMMARIZED_MATCH_USING_A2 = "S2"; 
public static final String SUMMARIZED_MATCH_USING_A3 = "S3"; 
public static final String SUMMARIZED_MATCH_USING_A4 = "S4"; 
public static final String SUMMARIZED_MATCH_USING_A5 = "S5"; 
public static final String EXACT_MATCH_ON_TRADE_DATE_STOCK_SYMBOL_QUANTITY_PRICE_TRADE_TYPE_AND_SPECIAL_TRADE_INDICATOR_MINUS_BADGES_AND_TIMES = "M1"; 
public static final String SUMMARIZED_MATCH_MINUS_BADGES_AND_TIMES = "M2"; 
public static final String OCSLOCKED_IN = "MT"; 
public static final String NASDAQACTM1MATCH = "ACTM1"; 
public static final String NASDAQACTM2MATCH = "ACTM2"; 
public static final String NASDAQACTACCEPTED_TRADE = "ACTM3"; 
public static final String NASDAQACTDEFAULT_TRADE = "ACTM4"; 
public static final String NASDAQACTDEFAULT_AFTER_M2 = "ACTM5"; 
public static final String NASDAQACTM6MATCH = "ACTM6"; 
public static final String NASDAQNON_ACT = "ACTMT"; 

  public MatchType() 
  { 
    super(574);
  } 
  public MatchType(String data) 
  { 
    super(574, data);
  } 
} 

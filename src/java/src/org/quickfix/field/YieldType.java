package org.quickfix.field; 
import org.quickfix.StringField; 
import java.util.Date; 

public class YieldType extends StringField 
{ 
  public static final int FIELD = 235; 
public static final String AFTER_TAX_YIELD = "AFTERTAX"; 
public static final String ANNUAL_YIELD = "ANNUAL"; 
public static final String YIELD_AT_ISSUE = "ATISSUE"; 
public static final String YIELD_TO_AVERAGE_LIFE = "AVGLIFE"; 
public static final String YIELD_TO_AVERAGE_MATURITY = "AVGMATURITY"; 
public static final String BOOK_YIELD = "BOOK"; 
public static final String YIELD_TO_NEXT_CALL = "CALL"; 
public static final String YIELD_CHANGE_SINCE_CLOSE = "CHANGE"; 
public static final String CLOSING_YIELD = "CLOSE"; 
public static final String COMPOUND_YIELD = "COMPOUND"; 
public static final String CURRENT_YIELD = "CURRENT"; 
public static final String TRUE_GROSS_YIELD = "GROSS"; 
public static final String GOVERNMENT_EQUIVALENT_YIELD = "GOVTEQUIV"; 
public static final String YIELD_WITH_INFLATION_ASSUMPTION = "INFLATION"; 
public static final String INVERSE_FLOATER_BOND_YIELD = "INVERSEFLOATER"; 
public static final String MOST_RECENT_CLOSING_YIELD = "LASTCLOSE"; 
public static final String CLOSING_YIELD_MOST_RECENT_MONTH = "LASTMONTH"; 
public static final String CLOSING_YIELD_MOST_RECENT_QUARTER = "LASTQUARTER"; 
public static final String CLOSING_YIELD_MOST_RECENT_YEAR = "LASTYEAR"; 
public static final String YIELD_TO_LONGEST_AVERAGE_LIFE = "LONGAVGLIFE"; 
public static final String YIELD_TO_LONGEST_AVERAGE = "LONGEST"; 
public static final String MARK_TO_MARKET_YIELD = "MARK"; 
public static final String YIELD_TO_MATURITY = "MATURITY"; 
public static final String YIELD_TO_NEXT_REFUND = "NEXTREFUND"; 
public static final String OPEN_AVERAGE_YIELD = "OPENAVG"; 
public static final String YIELD_TO_NEXT_PUT = "PUT"; 
public static final String PREVIOUS_CLOSE_YIELD = "PREVCLOSE"; 
public static final String PROCEEDS_YIELD = "PROCEEDS"; 
public static final String SEMI_ANNUAL_YIELD = "SEMIANNUAL"; 
public static final String YIELD_TO_SHORTEST_AVERAGE_LIFE = "SHORTAVGLIFE"; 
public static final String YIELD_TO_SHORTEST_AVERAGE = "SHORTEST"; 
public static final String SIMPLE_YIELD = "SIMPLE"; 
public static final String TAX_EQUIVALENT_YIELD = "TAXEQUIV"; 
public static final String YIELD_TO_TENDER_DATE = "TENDER"; 
public static final String TRUE_YIELD = "TRUE"; 
public static final String YIELD_TO_WORST_CONVENTION = "WORST"; 

  public YieldType() 
  { 
    super(235);
  } 
  public YieldType(String data) 
  { 
    super(235, data);
  } 
} 

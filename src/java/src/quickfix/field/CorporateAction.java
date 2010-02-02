package quickfix.field; 
import quickfix.StringField; 
import java.util.Date; 

public class CorporateAction extends StringField 
{ 
  public static final int FIELD = 292; 
public static final char EX_DIVIDEND = 'A'; 
public static final char EX_DISTRIBUTION = 'B'; 
public static final char EX_RIGHTS = 'C'; 
public static final char NEW = 'D'; 
public static final char EX_INTEREST = 'E'; 
public static final char CASH_DIVIDEND = 'F'; 
public static final char STOCK_DIVIDEND = 'G'; 
public static final char NON_INTEGER_STOCK_SPLIT = 'H'; 
public static final char REVERSE_STOCK_SPLIT = 'I'; 
public static final char STANDARD_INTEGER_STOCK_SPLIT = 'J'; 
public static final char POSITION_CONSOLIDATION = 'K'; 
public static final char LIQUIDATION_REORGANIZATION = 'L'; 
public static final char MERGER_REORGANIZATION = 'M'; 
public static final char RIGHTS_OFFERING = 'N'; 
public static final char SHAREHOLDER_MEETING = 'O'; 
public static final char SPINOFF = 'P'; 
public static final char TENDER_OFFER = 'Q'; 
public static final char WARRANT = 'R'; 
public static final char SPECIAL_ACTION = 'S'; 
public static final char SYMBOL_CONVERSION = 'T'; 
public static final char CUSIP = 'U'; 
public static final char LEAP_ROLLOVER = 'V'; 

  public CorporateAction() 
  { 
    super(292);
  } 
  public CorporateAction(String data) 
  { 
    super(292, data);
  } 
} 

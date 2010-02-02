package quickfix.field; 
import quickfix.CharField; 
import java.util.Date; 

public class TradeHandlingInstr extends CharField 
{ 
  public static final int FIELD = 1123; 
public static final char TRADE_CONFIRMATION = '0'; 
public static final char TWO_PARTY_REPORT = '1'; 
public static final char ONE_PARTY_REPORT_FOR_MATCHING = '2'; 
public static final char ONE_PARTY_REPORT_FOR_PASS_THROUGH = '3'; 
public static final char AUTOMATED_FLOOR_ORDER_ROUTING = '4'; 

  public TradeHandlingInstr() 
  { 
    super(1123);
  } 
  public TradeHandlingInstr(char data) 
  { 
    super(1123, data);
  } 
} 

package quickfix.field; 
import quickfix.CharField; 
import java.util.Date; 

public class BookingUnit extends CharField 
{ 
  public static final int FIELD = 590; 
public static final char EACH_PARTIAL_EXECUTION_IS_A_BOOKABLE_UNIT = '0'; 
public static final char AGGREGATE_PARTIAL_EXECUTIONS_ON_THIS_ORDER_AND_BOOK_ONE_TRADE_PER_ORDER = '1'; 
public static final char AGGREGATE_EXECUTIONS_FOR_THIS_SYMBOL_SIDE_AND_SETTLEMENT_DATE = '2'; 

  public BookingUnit() 
  { 
    super(590);
  } 
  public BookingUnit(char data) 
  { 
    super(590, data);
  } 
} 

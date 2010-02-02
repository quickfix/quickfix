package quickfix.field; 
import quickfix.IntField; 
import java.util.Date; 

public class AllocType extends IntField 
{ 
  public static final int FIELD = 626; 
public static final int CALCULATED = 1; 
public static final int PRELIMINARY = 2; 
public static final int SELLSIDE_CALCULATED_USING_PRELIMINARY = 3; 
public static final int SELLSIDE_CALCULATED_WITHOUT_PRELIMINARY = 4; 
public static final int READY_TO_BOOK_SINGLE_ORDER = 5; 
public static final int BUYSIDE_READY_TO_BOOK = 6; 
public static final int WAREHOUSE_INSTRUCTION = 7; 
public static final int REQUEST_TO_INTERMEDIARY = 8; 
public static final int ACCEPT = 9; 
public static final int REJECT = 10; 
public static final int ACCEPT_PENDING = 11; 
public static final int INCOMPLETE_GROUP = 12; 
public static final int COMPLETE_GROUP = 13; 
public static final int REVERSAL_PENDING = 14; 

  public AllocType() 
  { 
    super(626);
  } 
  public AllocType(int data) 
  { 
    super(626, data);
  } 
} 

package quickfix.field; 
import quickfix.IntField; 
import java.util.Date; 

public class AllocReportType extends IntField 
{ 
  public static final int FIELD = 794; 
public static final int SELLSIDE_CALCULATED_USING_PRELIMINARY = 3; 
public static final int SELLSIDE_CALCULATED_WITHOUT_PRELIMINARY = 4; 
public static final int WAREHOUSE_RECAP = 5; 
public static final int REQUEST_TO_INTERMEDIARY = 8; 
public static final int PRELIMINARY_REQUEST_TO_INTERMEDIARY = 2; 
public static final int ACCEPT = 9; 
public static final int REJECT = 10; 
public static final int ACCEPT_PENDING = 11; 
public static final int COMPLETE = 12; 
public static final int REVERSE_PENDING = 14; 

  public AllocReportType() 
  { 
    super(794);
  } 
  public AllocReportType(int data) 
  { 
    super(794, data);
  } 
} 

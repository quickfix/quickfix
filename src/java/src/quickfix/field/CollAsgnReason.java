package quickfix.field; 
import quickfix.IntField; 
import java.util.Date; 

public class CollAsgnReason extends IntField 
{ 
  public static final int FIELD = 895; 
public static final int INITIAL = 0; 
public static final int SCHEDULED = 1; 
public static final int TIME_WARNING = 2; 
public static final int MARGIN_DEFICIENCY = 3; 
public static final int MARGIN_EXCESS = 4; 
public static final int FORWARD_COLLATERAL_DEMAND = 5; 
public static final int EVENT_OF_DEFAULT = 6; 
public static final int ADVERSE_TAX_EVENT = 7; 

  public CollAsgnReason() 
  { 
    super(895);
  } 
  public CollAsgnReason(int data) 
  { 
    super(895, data);
  } 
} 

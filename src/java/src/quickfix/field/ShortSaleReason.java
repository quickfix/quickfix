package quickfix.field; 
import quickfix.IntField; 
import java.util.Date; 

public class ShortSaleReason extends IntField 
{ 
  public static final int FIELD = 853; 
public static final int DEALER_SOLD_SHORT = 0; 
public static final int DEALER_SOLD_SHORT_EXEMPT = 1; 
public static final int SELLING_CUSTOMER_SOLD_SHORT = 2; 
public static final int SELLING_CUSTOMER_SOLD_SHORT_EXEMPT = 3; 
public static final int QUALIFED_SERVICE_REPRESENTATIVE_OR_AUTOMATIC_GIVEUP_CONTRA_SIDE_SOLD_SHORT = 4; 
public static final int QSR_OR_AGU_CONTRA_SIDE_SOLD_SHORT_EXEMPT = 5; 

  public ShortSaleReason() 
  { 
    super(853);
  } 
  public ShortSaleReason(int data) 
  { 
    super(853, data);
  } 
} 

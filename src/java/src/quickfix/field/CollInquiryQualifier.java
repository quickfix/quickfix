package quickfix.field; 
import quickfix.IntField; 
import java.util.Date; 

public class CollInquiryQualifier extends IntField 
{ 
  public static final int FIELD = 896; 
public static final int TRADEDATE = 0; 
public static final int GC_INSTRUMENT = 1; 
public static final int COLLATERALINSTRUMENT = 2; 
public static final int SUBSTITUTION_ELIGIBLE = 3; 
public static final int NOT_ASSIGNED = 4; 
public static final int PARTIALLY_ASSIGNED = 5; 
public static final int FULLY_ASSIGNED = 6; 
public static final int OUTSTANDING_TRADES = 7; 

  public CollInquiryQualifier() 
  { 
    super(896);
  } 
  public CollInquiryQualifier(int data) 
  { 
    super(896, data);
  } 
} 

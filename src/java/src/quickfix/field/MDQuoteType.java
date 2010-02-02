package quickfix.field; 
import quickfix.IntField; 
import java.util.Date; 

public class MDQuoteType extends IntField 
{ 
  public static final int FIELD = 1070; 
public static final int INDICATIVE = 0; 
public static final int TRADEABLE = 1; 
public static final int RESTRICTED_TRADEABLE = 2; 
public static final int COUNTER = 3; 
public static final int INDICATIVE_AND_TRADEABLE = 4; 

  public MDQuoteType() 
  { 
    super(1070);
  } 
  public MDQuoteType(int data) 
  { 
    super(1070, data);
  } 
} 

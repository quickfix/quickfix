package org.quickfix.field; 
import org.quickfix.IntField; 
import java.util.Date; 

public class QuoteType extends IntField 
{ 
  public static final int FIELD = 537; 
public static final int INDICATIVE = 0; 
public static final int TRADEABLE = 1; 
public static final int RESTRICTED_TRADEABLE = 2; 
public static final int COUNTER = 3; 

  public QuoteType() 
  { 
    super(537);
  } 
  public QuoteType(int data) 
  { 
    super(537, data);
  } 
} 

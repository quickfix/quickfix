package org.quickfix.field; 
import org.quickfix.StringField; 
import java.util.Date; 

public class QuoteCondition extends StringField 
{ 
public static final char OPEN = 'A'; 
public static final char CLOSED = 'B'; 
public static final char EXCHANGE_BEST = 'C'; 
public static final char CONSOLIDATED_BEST = 'D'; 
public static final char LOCKED = 'E'; 
public static final char CROSSED = 'F'; 
public static final char DEPTH = 'G'; 
public static final char FAST_TRADING = 'H'; 
public static final char NON_FIRM = 'I'; 

  public QuoteCondition() 
  { 
    super(276);
  } 
  public QuoteCondition(String data) 
  { 
    super(276, data);
  } 
} 

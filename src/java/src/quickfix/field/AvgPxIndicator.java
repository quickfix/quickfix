package org.quickfix.field; 
import org.quickfix.IntField; 
import java.util.Date; 

public class AvgPxIndicator extends IntField 
{ 
  public static final int FIELD = 819; 
public static final int NO_AVERAGE_PRICING = 0; 
public static final int TRADE_IS_PART_OF_AN_AVERAGE_PRICE_GROUP_IDENTIFIED_BY_THE_TRADELINKID = 1; 
public static final int LAST_TRADE_IN_THE_AVERAGE_PRICE_GROUP_IDENTIFIED_BY_THE_TRADELINKID = 2; 

  public AvgPxIndicator() 
  { 
    super(819);
  } 
  public AvgPxIndicator(int data) 
  { 
    super(819, data);
  } 
} 

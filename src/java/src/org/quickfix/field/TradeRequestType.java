package org.quickfix.field; 
import org.quickfix.IntField; 
import java.util.Date; 

public class TradeRequestType extends IntField 
{ 
  public static final int FIELD = 569; 
public static final int ALL_TRADES = 0; 
public static final int MATCHED_TRADES = 1; 
public static final int UNMATCHED_TRADES = 2; 
public static final int UNREPORTED_TRADES = 3; 
public static final int ADVISORIES_MATCH = 4; 

  public TradeRequestType() 
  { 
    super(569);
  } 
  public TradeRequestType(int data) 
  { 
    super(569, data);
  } 
} 

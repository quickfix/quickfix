package org.quickfix.field; 
import org.quickfix.CharField; 
import java.util.Date; 

public class TradeReportTransType extends CharField 
{ 
public static final char NEW = 'N'; 
public static final char CANCEL = 'C'; 
public static final char REPLACE = 'R'; 

  public TradeReportTransType() 
  { 
    super(487);
  } 
  public TradeReportTransType(char data) 
  { 
    super(487, data);
  } 
} 

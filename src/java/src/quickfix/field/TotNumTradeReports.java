package org.quickfix.field; 
import org.quickfix.IntField; 
import java.util.Date; 

public class TotNumTradeReports extends IntField 
{ 
  public static final int FIELD = 748; 

  public TotNumTradeReports() 
  { 
    super(748);
  } 
  public TotNumTradeReports(int data) 
  { 
    super(748, data);
  } 
} 

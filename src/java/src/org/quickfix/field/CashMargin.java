package org.quickfix.field; 
import org.quickfix.CharField; 
import java.util.Date; 

public class CashMargin extends CharField 
{ 
  public static final int FIELD = 544; 
public static final char CASH = '1'; 
public static final char MARGIN_OPEN = '2'; 
public static final char MARGIN_CLOSE = '3'; 

  public CashMargin() 
  { 
    super(544);
  } 
  public CashMargin(char data) 
  { 
    super(544, data);
  } 
} 

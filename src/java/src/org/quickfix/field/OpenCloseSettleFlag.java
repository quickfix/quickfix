package org.quickfix.field; 
import org.quickfix.CharField; 
import java.util.Date; 

public class OpenCloseSettleFlag extends CharField 
{ 
public static final char DAILY_OPEN_CLOSE__SETTLEMENT_PRICE = '0'; 
public static final char SESSION_OPEN_CLOSE__SETTLEMENT_PRICE = '1'; 
public static final char DELIVERY_SETTLEMENT_PRICE = '2'; 

  public OpenCloseSettleFlag() 
  { 
    super(286);
  } 
  public OpenCloseSettleFlag(char data) 
  { 
    super(286, data);
  } 
} 

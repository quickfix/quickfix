package org.quickfix.field; 
import org.quickfix.CharField; 
import java.util.Date; 

public class ListExecInstType extends CharField 
{ 
public static final char IMMEDIATE = '1'; 
public static final char WAIT_FOR_EXECUTE_INSTRUCTION = '2'; 
public static final char EXCHANGE_SWITCH_CIV_ORDER_SELL_DRIVEN = '3'; 
public static final char EXCHANGE_SWITCH_CIV_ORDER_BUY_DRIVEN_CASH_TOP_UP = '4'; 
public static final char EXCHANGE_SWITCH_CIV_ORDER_BUY_DRIVEN_CASH_WITHDRAW = '5'; 

  public ListExecInstType() 
  { 
    super(433);
  } 
  public ListExecInstType(char data) 
  { 
    super(433, data);
  } 
} 

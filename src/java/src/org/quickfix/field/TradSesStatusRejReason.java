package org.quickfix.field; 
import org.quickfix.IntField; 
import java.util.Date; 

public class TradSesStatusRejReason extends IntField 
{ 
  public static final int FIELD = 567; 
public static final int UNKNOWN_TRADING_SESSION_ID = 1; 
public static final int OTHER = 99; 

  public TradSesStatusRejReason() 
  { 
    super(567);
  } 
  public TradSesStatusRejReason(int data) 
  { 
    super(567, data);
  } 
} 

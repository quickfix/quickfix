package org.quickfix.field; 
import org.quickfix.CharField; 
import java.util.Date; 

public class HaltReason extends CharField 
{ 
public static final char ORDER_IMBALANCE = 'I'; 
public static final char EQUIPMENT_CHANGEOVER = 'X'; 
public static final char NEWS_PENDING = 'P'; 
public static final char NEWS_DISSEMINATION = 'D'; 
public static final char ORDER_INFLUX = 'E'; 
public static final char ADDITIONAL_INFORMATION = 'M'; 

  public HaltReason() 
  { 
    super(327);
  } 
  public HaltReason(char data) 
  { 
    super(327, data);
  } 
} 

package org.quickfix.field; 
import org.quickfix.CharField; 
import java.util.Date; 

public class HaltReason extends CharField 
{ 
  public static final int FIELD = 327; 
public static final char ORD_IMB = 'I'; 
public static final char EQUIP_CHANGE = 'X'; 
public static final char NEWS_PEND = 'P'; 
public static final char NEWS_DISS = 'D'; 
public static final char ORD_INFL = 'E'; 
public static final char ADD_INFO = 'M'; 

  public HaltReason() 
  { 
    super(327);
  } 
  public HaltReason(char data) 
  { 
    super(327, data);
  } 
} 

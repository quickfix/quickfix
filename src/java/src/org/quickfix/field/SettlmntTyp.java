package org.quickfix.field; 
import org.quickfix.CharField; 
import java.util.Date; 

public class SettlmntTyp extends CharField 
{ 
public static final char REGULAR = '0'; 
public static final char CASH = '1'; 
public static final char NEXT_DAY = '2'; 
public static final char TPLUS2 = '3'; 
public static final char TPLUS3 = '4'; 
public static final char TPLUS4 = '5'; 
public static final char FUTURE = '6'; 
public static final char WHEN_ISSUED = '7'; 
public static final char SELLERS_OPTION = '8'; 
public static final char TPLUS5 = '9'; 

  public SettlmntTyp() 
  { 
    super(63);
  } 
  public SettlmntTyp(char data) 
  { 
    super(63, data);
  } 
} 

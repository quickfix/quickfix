package org.quickfix.field; 
import org.quickfix.CharField; 
import java.util.Date; 

public class MoneyLaunderingStatus extends CharField 
{ 
  public static final int FIELD = 481; 
public static final char PASSED = 'Y'; 
public static final char NOT_CHECKED = 'N'; 
public static final char EX_BELOW_LIM = '1'; 
public static final char EX_CLIENT_MONEY_TYPE = '2'; 
public static final char EX_AUTH_CREDIT = '3'; 

  public MoneyLaunderingStatus() 
  { 
    super(481);
  } 
  public MoneyLaunderingStatus(char data) 
  { 
    super(481, data);
  } 
} 

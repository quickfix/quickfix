package org.quickfix.field; 
import org.quickfix.CharField; 
import java.util.Date; 

public class SettlInstMode extends CharField 
{ 
  public static final int FIELD = 160; 
public static final char DEFAULT = '0'; 
public static final char SIPROVIDED = '1'; 
public static final char ACCOUNT_OVERRIDING = '2'; 
public static final char ACCOUNT_STANDING = '3'; 
public static final char CIVORDER_SINGLE_ACCT = '4'; 
public static final char REJECT = '5'; 

  public SettlInstMode() 
  { 
    super(160);
  } 
  public SettlInstMode(char data) 
  { 
    super(160, data);
  } 
} 

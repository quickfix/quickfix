package org.quickfix.field; 
import org.quickfix.IntField; 
import java.util.Date; 

public class MiscFeeType extends IntField 
{ 
  public static final int FIELD = 139; 
public static final int REG = 1; 
public static final int TAX = 2; 
public static final int LOCAL_COMM = 3; 
public static final int EXCH_FEE = 4; 
public static final int STAMP = 5; 
public static final int LEVY = 6; 
public static final int OTHER = 7; 
public static final int MARKUP = 8; 
public static final int CONSUMPTION = 9; 
public static final int TRANSACTION = 10; 
public static final int CONVERSION = 11; 
public static final int AGENT = 12; 
public static final int SEC_LENDING = 13; 

  public MiscFeeType() 
  { 
    super(139);
  } 
  public MiscFeeType(int data) 
  { 
    super(139, data);
  } 
} 

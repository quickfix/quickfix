package org.quickfix.field; 
import org.quickfix.IntField; 
import java.util.Date; 

public class QuantityType extends IntField 
{ 
public static final int SHARES = 1; 
public static final int BONDS = 2; 
public static final int CURRENTFACE = 3; 
public static final int ORIGINALFACE = 4; 
public static final int CURRENCY = 5; 
public static final int CONTRACTS = 6; 
public static final int OTHER = 7; 
public static final int PAR = 8; 

  public QuantityType() 
  { 
    super(465);
  } 
  public QuantityType(int data) 
  { 
    super(465, data);
  } 
} 

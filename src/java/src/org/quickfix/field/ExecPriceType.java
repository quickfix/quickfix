package org.quickfix.field; 
import org.quickfix.CharField; 
import java.util.Date; 

public class ExecPriceType extends CharField 
{ 
  public static final int FIELD = 484; 
public static final char BID_PRICE = 'B'; 
public static final char CREATION_PRICE = 'C'; 
public static final char CREATION_PRICE_PLUS_ADJUSTMENT_PERCENT = 'D'; 
public static final char CREATION_PRICE_PLUS_ADJUSTMENT_AMOUNT = 'E'; 
public static final char OFFER_PRICE = 'O'; 
public static final char OFFER_PRICE_MINUS_ADJUSTMENT_PERCENT = 'P'; 
public static final char OFFER_PRICE_MINUS_ADJUSTMENT_AMOUNT = 'Q'; 
public static final char SINGLE_PRICE = 'S'; 

  public ExecPriceType() 
  { 
    super(484);
  } 
  public ExecPriceType(char data) 
  { 
    super(484, data);
  } 
} 

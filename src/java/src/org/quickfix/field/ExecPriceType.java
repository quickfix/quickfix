package org.quickfix.field; 
import org.quickfix.CharField; 
import java.util.Date; 

public class ExecPriceType extends CharField 
{ 
  public static final int FIELD = 484; 
public static final char BID_PRICE = 'B'; 
public static final char CREATION_PRICE = 'C'; 
public static final char CREATION_PRICE_ADJ_PCT = 'D'; 
public static final char CREATION_PRICE_ADJ_AMT = 'E'; 
public static final char OFFER_PRICE = 'O'; 
public static final char OFFER_PRICE_MINUS_ADJ_PCT = 'P'; 
public static final char OFFER_PRICE_MINUS_ADJ_AMT = 'Q'; 
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

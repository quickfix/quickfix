package org.quickfix.field; 
import org.quickfix.StringField; 
import java.util.Date; 

public class PosAmtType extends StringField 
{ 
  public static final int FIELD = 707; 
public static final String FINAL_MARKTO_MARKET_AMOUNT = "FMTM"; 
public static final String INCREMENTAL_MARKTO_MARKET_AMOUNT = "IMTM"; 
public static final String TRADE_VARIATION_AMOUNT = "TVAR"; 
public static final String STARTOF_DAY_MARKTO_MARKET_AMOUNT = "SMTM"; 
public static final String PREMIUM_AMOUNT = "PREM"; 
public static final String CASH_RESIDUAL_AMOUNT = "CRES"; 
public static final String CASH_AMOUNT_CORPORATE_EVENT = "CASH"; 
public static final String VALUE_ADJUSTED_AMOUNT = "VADJ"; 

  public PosAmtType() 
  { 
    super(707);
  } 
  public PosAmtType(String data) 
  { 
    super(707, data);
  } 
} 

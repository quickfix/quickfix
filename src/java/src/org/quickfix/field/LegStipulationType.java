package org.quickfix.field; 
import org.quickfix.StringField; 
import java.util.Date; 

public class LegStipulationType extends StringField 
{ 
  public static final int FIELD = 688; 
public static final String AMT = "AMT"; 
public static final String AUTO_REINVESTMENT_AT_RATE_OR_BETTER = "AUTOREINV"; 
public static final String BANK_QUALIFIED = "BANKQUAL"; 
public static final String BARGAIN_CONDITIONS = "BGNCON"; 
public static final String COUPON_RANGE = "COUPON"; 
public static final String ISOCURRENCY_CODE = "CURRENCY"; 
public static final String CUSTOM_STARTEND_DATE = "CUSTOMDATE"; 
public static final String GEOGRAPHICS_AND_RANGE = "GEOG"; 
public static final String VALUATION_DISCOUNT = "HAIRCUT"; 
public static final String INSURED = "INSURED"; 
public static final String YEAR_OR_YEAR_MONTH_OF_ISSUE = "ISSUE"; 
public static final String ISSUERS_TICKER = "ISSUER"; 
public static final String ISSUE_SIZE_RANGE = "ISSUESIZE"; 
public static final String LOOKBACK_DAYS = "LOOKBACK"; 
public static final String EXPLICIT_LOT_IDENTIFIER = "LOT"; 
public static final String LOT_VARIANCE_VALUE_IN_PERCENT_MAXIMUM_OVER_OR_UNDERALLOCATION_ALLOWED = "LOTVAR"; 
public static final String MATURITY_YEAR_AND_MONTH = "MAT"; 
public static final String MATURITY_RANGE = "MATURITY"; 
public static final String MAXIMUM_SUBSTITUTIONS_REPO = "MAXSUBS"; 
public static final String MINIMUM_QUANTITY = "MINQTY"; 
public static final String MINIMUM_INCREMENT = "MININCR"; 
public static final String MINIMUM_DENOMINATION = "MINDNOM"; 
public static final String MAXIMUM_DENOMINATION = "MAXDNOM"; 
public static final String PAYMENT_FREQUENCY_CALENDAR = "PAYFREQ"; 
public static final String NUMBER_OF_PIECES = "PIECES"; 
public static final String POOLS_MINIMUM = "PMIN"; 
public static final String POOLS_MAXIMUM = "PMAX"; 
public static final String POOLS_PER_MILLION = "PPM"; 
public static final String POOLS_PER_LOT = "PPL"; 
public static final String POOLS_PER_TRADE = "PPT"; 
public static final String PRICE_RANGE = "PRICE"; 
public static final String PRICING_FREQUENCY = "PRICEFREQ"; 
public static final String PRODUCTION_YEAR = "PROD"; 
public static final String CALL_PROTECTION = "PROTECT"; 
public static final String PURPOSE = "PURPOSE"; 
public static final String BENCHMARK_PRICE_SOURCE = "PXSOURCE"; 
public static final String RATING_SOURCE_AND_RANGE = "RATING"; 
public static final String TYPE_OF_REDEMPTION = "REDEMPTION"; 
public static final String RESTRICTED = "RESTRICTED"; 
public static final String MARKET_SECTOR = "SECTOR"; 
public static final String SECURITY_TYPE_INCLUDED_OR_EXCLUDED = "SECTYPE"; 
public static final String STRUCTURE = "STRUCT"; 
public static final String SUBSTITUTIONS_FREQUENCY_REPO = "SUBSFREQ"; 
public static final String SUBSTITUTIONS_LEFT_REPO = "SUBSLEFT"; 
public static final String FREEFORM_TEXT = "TEXT"; 
public static final String TRADE_VARIANCE_VALUE_IN_PERCENT_MAXIMUM_OVER_OR_UNDERALLOCATION_ALLOWED = "TRDVAR"; 
public static final String WEIGHTED_AVERAGE_COUPON = "WAC"; 
public static final String WEIGHTED_AVERAGE_LIFE_COUPON = "WAL"; 
public static final String WEIGHTED_AVERAGE_LOAN_AGE = "WALA"; 
public static final String WEIGHTED_AVERAGE_MATURITY = "WAM"; 
public static final String WHOLE_POOL = "WHOLE"; 
public static final String YIELD_RANGE = "YIELD"; 
public static final String SINGLE_MONTHLY_MORTALITY = "SMM"; 
public static final String CONSTANT_PREPAYMENT_RATE = "CPR"; 
public static final String CONSTANT_PREPAYMENT_YIELD = "CPY"; 
public static final String CONSTANT_PREPAYMENT_PENALTY = "CPP"; 
public static final String ABSOLUTE_PREPAYMENT_SPEED = "ABS"; 
public static final String MONTHLY_PREPAYMENT_RATE = "MPR"; 
public static final String PERCENT_OF_BMAPREPAYMENT_CURVE = "PSA"; 
public static final String PERCENT_OF_PROSPECTUS_PREPAYMENT_CURVE = "PPC"; 
public static final String PERCENT_OF_MANUFACTURED_HOUSING_PREPAYMENT_CURVE = "MHP"; 
public static final String FINAL_CPROF_HOME_EQUITY_PREPAYMENT_CURVE = "HEP"; 

  public LegStipulationType() 
  { 
    super(688);
  } 
  public LegStipulationType(String data) 
  { 
    super(688, data);
  } 
} 

package quickfix.field; 
import quickfix.StringField; 
import java.util.Date; 

public class PosType extends StringField 
{ 
  public static final int FIELD = 703; 
public static final String TRANSACTION_QUANTITY = "TQ"; 
public static final String INTRA_SPREAD_QTY = "IAS"; 
public static final String INTER_SPREAD_QTY = "IES"; 
public static final String END_OF_DAY_QTY = "FIN"; 
public static final String START_OF_DAY_QTY = "SOD"; 
public static final String OPTION_EXERCISE_QTY = "EX"; 
public static final String OPTION_ASSIGNMENT = "AS"; 
public static final String TRANSACTION_FROM_EXERCISE = "TX"; 
public static final String TRANSACTION_FROM_ASSIGNMENT = "TA"; 
public static final String PIT_TRADE_QTY = "PIT"; 
public static final String TRANSFER_TRADE_QTY = "TRF"; 
public static final String ELECTRONIC_TRADE_QTY = "ETR"; 
public static final String ALLOCATION_TRADE_QTY = "ALC"; 
public static final String ADJUSTMENT_QTY = "PA"; 
public static final String AS_OF_TRADE_QTY = "ASF"; 
public static final String DELIVERY_QTY = "DLV"; 
public static final String TOTAL_TRANSACTION_QTY = "TOT"; 
public static final String CROSS_MARGIN_QTY = "XM"; 
public static final String INTEGRAL_SPLIT = "SPL"; 

  public PosType() 
  { 
    super(703);
  } 
  public PosType(String data) 
  { 
    super(703, data);
  } 
} 

package org.quickfix.field; 
import org.quickfix.StringField; 
import java.util.Date; 

public class LegContractSettlMonth extends StringField 
{ 
  public static final int FIELD = 955; 

  public LegContractSettlMonth() 
  { 
    super(955);
  } 
  public LegContractSettlMonth(String data) 
  { 
    super(955, data);
  } 
} 

package quickfix.field; 
import quickfix.StringField; 
import java.util.Date; 

public class YieldCalcDate extends StringField 
{ 
  public static final int FIELD = 701; 

  public YieldCalcDate() 
  { 
    super(701);
  } 
  public YieldCalcDate(String data) 
  { 
    super(701, data);
  } 
} 

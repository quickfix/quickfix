package quickfix.field; 
import quickfix.StringField; 
import java.util.Date; 

public class LegInterestAccrualDate extends StringField 
{ 
  public static final int FIELD = 956; 

  public LegInterestAccrualDate() 
  { 
    super(956);
  } 
  public LegInterestAccrualDate(String data) 
  { 
    super(956, data);
  } 
} 

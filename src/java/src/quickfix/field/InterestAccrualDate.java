package quickfix.field; 
import quickfix.StringField; 
import java.util.Date; 

public class InterestAccrualDate extends StringField 
{ 
  public static final int FIELD = 874; 

  public InterestAccrualDate() 
  { 
    super(874);
  } 
  public InterestAccrualDate(String data) 
  { 
    super(874, data);
  } 
} 

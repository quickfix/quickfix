package quickfix.field; 
import quickfix.IntField; 
import java.util.Date; 

public class ProgPeriodInterval extends IntField 
{ 
  public static final int FIELD = 415; 

  public ProgPeriodInterval() 
  { 
    super(415);
  } 
  public ProgPeriodInterval(int data) 
  { 
    super(415, data);
  } 
} 

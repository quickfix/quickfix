package quickfix.field; 
import quickfix.StringField; 
import java.util.Date; 

public class LegRedemptionDate extends StringField 
{ 
  public static final int FIELD = 254; 

  public LegRedemptionDate() 
  { 
    super(254);
  } 
  public LegRedemptionDate(String data) 
  { 
    super(254, data);
  } 
} 

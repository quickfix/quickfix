package quickfix.field; 
import quickfix.StringField; 
import java.util.Date; 

public class RedemptionDate extends StringField 
{ 
  public static final int FIELD = 240; 

  public RedemptionDate() 
  { 
    super(240);
  } 
  public RedemptionDate(String data) 
  { 
    super(240, data);
  } 
} 

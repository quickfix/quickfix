package quickfix.field; 
import quickfix.StringField; 
import java.util.Date; 

public class SettlDate extends StringField 
{ 
  public static final int FIELD = 64; 

  public SettlDate() 
  { 
    super(64);
  } 
  public SettlDate(String data) 
  { 
    super(64, data);
  } 
} 

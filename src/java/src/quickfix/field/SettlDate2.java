package quickfix.field; 
import quickfix.StringField; 
import java.util.Date; 

public class SettlDate2 extends StringField 
{ 
  public static final int FIELD = 193; 

  public SettlDate2() 
  { 
    super(193);
  } 
  public SettlDate2(String data) 
  { 
    super(193, data);
  } 
} 

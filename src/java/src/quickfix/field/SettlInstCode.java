package quickfix.field; 
import quickfix.StringField; 
import java.util.Date; 

public class SettlInstCode extends StringField 
{ 
  public static final int FIELD = 175; 

  public SettlInstCode() 
  { 
    super(175);
  } 
  public SettlInstCode(String data) 
  { 
    super(175, data);
  } 
} 

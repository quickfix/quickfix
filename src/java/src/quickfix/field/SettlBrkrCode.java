package quickfix.field; 
import quickfix.StringField; 
import java.util.Date; 

public class SettlBrkrCode extends StringField 
{ 
  public static final int FIELD = 174; 

  public SettlBrkrCode() 
  { 
    super(174);
  } 
  public SettlBrkrCode(String data) 
  { 
    super(174, data);
  } 
} 

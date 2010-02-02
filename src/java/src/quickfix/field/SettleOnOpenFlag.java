package quickfix.field; 
import quickfix.StringField; 
import java.util.Date; 

public class SettleOnOpenFlag extends StringField 
{ 
  public static final int FIELD = 966; 

  public SettleOnOpenFlag() 
  { 
    super(966);
  } 
  public SettleOnOpenFlag(String data) 
  { 
    super(966, data);
  } 
} 

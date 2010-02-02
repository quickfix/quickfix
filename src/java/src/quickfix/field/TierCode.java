package quickfix.field; 
import quickfix.StringField; 
import java.util.Date; 

public class TierCode extends StringField 
{ 
  public static final int FIELD = 994; 

  public TierCode() 
  { 
    super(994);
  } 
  public TierCode(String data) 
  { 
    super(994, data);
  } 
} 

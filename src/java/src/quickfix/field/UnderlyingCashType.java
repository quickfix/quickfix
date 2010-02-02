package quickfix.field; 
import quickfix.StringField; 
import java.util.Date; 

public class UnderlyingCashType extends StringField 
{ 
  public static final int FIELD = 974; 
public static final String FIXED = "FIXED"; 
public static final String DIFF = "DIFF"; 

  public UnderlyingCashType() 
  { 
    super(974);
  } 
  public UnderlyingCashType(String data) 
  { 
    super(974, data);
  } 
} 

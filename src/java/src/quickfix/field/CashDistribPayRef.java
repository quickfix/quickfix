package quickfix.field; 
import quickfix.StringField; 
import java.util.Date; 

public class CashDistribPayRef extends StringField 
{ 
  public static final int FIELD = 501; 

  public CashDistribPayRef() 
  { 
    super(501);
  } 
  public CashDistribPayRef(String data) 
  { 
    super(501, data);
  } 
} 

package quickfix.field; 
import quickfix.StringField; 
import java.util.Date; 

public class LegIOIQty extends StringField 
{ 
  public static final int FIELD = 682; 

  public LegIOIQty() 
  { 
    super(682);
  } 
  public LegIOIQty(String data) 
  { 
    super(682, data);
  } 
} 

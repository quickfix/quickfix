package quickfix.field; 
import quickfix.StringField; 
import java.util.Date; 

public class ClearingFirm extends StringField 
{ 
  public static final int FIELD = 439; 

  public ClearingFirm() 
  { 
    super(439);
  } 
  public ClearingFirm(String data) 
  { 
    super(439, data);
  } 
} 

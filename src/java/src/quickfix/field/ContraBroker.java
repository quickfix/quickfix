package quickfix.field; 
import quickfix.StringField; 
import java.util.Date; 

public class ContraBroker extends StringField 
{ 
  public static final int FIELD = 375; 

  public ContraBroker() 
  { 
    super(375);
  } 
  public ContraBroker(String data) 
  { 
    super(375, data);
  } 
} 

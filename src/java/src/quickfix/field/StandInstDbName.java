package quickfix.field; 
import quickfix.StringField; 
import java.util.Date; 

public class StandInstDbName extends StringField 
{ 
  public static final int FIELD = 170; 

  public StandInstDbName() 
  { 
    super(170);
  } 
  public StandInstDbName(String data) 
  { 
    super(170, data);
  } 
} 

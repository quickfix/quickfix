package quickfix.field; 
import quickfix.StringField; 
import java.util.Date; 

public class RawData extends StringField 
{ 
  public static final int FIELD = 96; 

  public RawData() 
  { 
    super(96);
  } 
  public RawData(String data) 
  { 
    super(96, data);
  } 
} 

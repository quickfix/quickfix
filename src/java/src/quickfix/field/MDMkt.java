package quickfix.field; 
import quickfix.StringField; 
import java.util.Date; 

public class MDMkt extends StringField 
{ 
  public static final int FIELD = 275; 

  public MDMkt() 
  { 
    super(275);
  } 
  public MDMkt(String data) 
  { 
    super(275, data);
  } 
} 

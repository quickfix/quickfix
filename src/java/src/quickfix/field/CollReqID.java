package quickfix.field; 
import quickfix.StringField; 
import java.util.Date; 

public class CollReqID extends StringField 
{ 
  public static final int FIELD = 894; 

  public CollReqID() 
  { 
    super(894);
  } 
  public CollReqID(String data) 
  { 
    super(894, data);
  } 
} 

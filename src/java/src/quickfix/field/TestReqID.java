package quickfix.field; 
import quickfix.StringField; 
import java.util.Date; 

public class TestReqID extends StringField 
{ 
  public static final int FIELD = 112; 

  public TestReqID() 
  { 
    super(112);
  } 
  public TestReqID(String data) 
  { 
    super(112, data);
  } 
} 

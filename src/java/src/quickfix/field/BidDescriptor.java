package quickfix.field; 
import quickfix.StringField; 
import java.util.Date; 

public class BidDescriptor extends StringField 
{ 
  public static final int FIELD = 400; 

  public BidDescriptor() 
  { 
    super(400);
  } 
  public BidDescriptor(String data) 
  { 
    super(400, data);
  } 
} 

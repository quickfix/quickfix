package quickfix.field; 
import quickfix.StringField; 
import java.util.Date; 

public class CollInquiryID extends StringField 
{ 
  public static final int FIELD = 909; 

  public CollInquiryID() 
  { 
    super(909);
  } 
  public CollInquiryID(String data) 
  { 
    super(909, data);
  } 
} 

package quickfix.field; 
import quickfix.IntField; 
import java.util.Date; 

public class NoCollInquiryQualifier extends IntField 
{ 
  public static final int FIELD = 938; 

  public NoCollInquiryQualifier() 
  { 
    super(938);
  } 
  public NoCollInquiryQualifier(int data) 
  { 
    super(938, data);
  } 
} 

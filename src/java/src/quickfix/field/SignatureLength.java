package quickfix.field; 
import quickfix.IntField; 
import java.util.Date; 

public class SignatureLength extends IntField 
{ 
  public static final int FIELD = 93; 

  public SignatureLength() 
  { 
    super(93);
  } 
  public SignatureLength(int data) 
  { 
    super(93, data);
  } 
} 

package quickfix.field; 
import quickfix.IntField; 
import java.util.Date; 

public class EncodedUnderlyingIssuerLen extends IntField 
{ 
  public static final int FIELD = 362; 

  public EncodedUnderlyingIssuerLen() 
  { 
    super(362);
  } 
  public EncodedUnderlyingIssuerLen(int data) 
  { 
    super(362, data);
  } 
} 

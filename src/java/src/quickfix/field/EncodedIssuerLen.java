package quickfix.field; 
import quickfix.IntField; 
import java.util.Date; 

public class EncodedIssuerLen extends IntField 
{ 
  public static final int FIELD = 348; 

  public EncodedIssuerLen() 
  { 
    super(348);
  } 
  public EncodedIssuerLen(int data) 
  { 
    super(348, data);
  } 
} 

package quickfix.field; 
import quickfix.IntField; 
import java.util.Date; 

public class EncodedTextLen extends IntField 
{ 
  public static final int FIELD = 354; 

  public EncodedTextLen() 
  { 
    super(354);
  } 
  public EncodedTextLen(int data) 
  { 
    super(354, data);
  } 
} 

package quickfix.field; 
import quickfix.IntField; 
import java.util.Date; 

public class EncodedListStatusTextLen extends IntField 
{ 
  public static final int FIELD = 445; 

  public EncodedListStatusTextLen() 
  { 
    super(445);
  } 
  public EncodedListStatusTextLen(int data) 
  { 
    super(445, data);
  } 
} 

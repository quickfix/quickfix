package quickfix.field; 
import quickfix.IntField; 
import java.util.Date; 

public class NewSeqNo extends IntField 
{ 
  public static final int FIELD = 36; 

  public NewSeqNo() 
  { 
    super(36);
  } 
  public NewSeqNo(int data) 
  { 
    super(36, data);
  } 
} 

package quickfix.field; 
import quickfix.IntField; 
import java.util.Date; 

public class EndSeqNo extends IntField 
{ 
  public static final int FIELD = 16; 

  public EndSeqNo() 
  { 
    super(16);
  } 
  public EndSeqNo(int data) 
  { 
    super(16, data);
  } 
} 

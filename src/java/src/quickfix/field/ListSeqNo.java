package quickfix.field; 
import quickfix.IntField; 
import java.util.Date; 

public class ListSeqNo extends IntField 
{ 
  public static final int FIELD = 67; 

  public ListSeqNo() 
  { 
    super(67);
  } 
  public ListSeqNo(int data) 
  { 
    super(67, data);
  } 
} 

package quickfix.field; 
import quickfix.IntField; 
import java.util.Date; 

public class RptSeq extends IntField 
{ 
  public static final int FIELD = 83; 

  public RptSeq() 
  { 
    super(83);
  } 
  public RptSeq(int data) 
  { 
    super(83, data);
  } 
} 

package quickfix.field; 
import quickfix.IntField; 
import java.util.Date; 

public class NumBidders extends IntField 
{ 
  public static final int FIELD = 417; 

  public NumBidders() 
  { 
    super(417);
  } 
  public NumBidders(int data) 
  { 
    super(417, data);
  } 
} 

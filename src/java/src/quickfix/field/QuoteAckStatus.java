package quickfix.field; 
import quickfix.IntField; 
import java.util.Date; 

public class QuoteAckStatus extends IntField 
{ 
  public static final int FIELD = 297; 

  public QuoteAckStatus() 
  { 
    super(297);
  } 
  public QuoteAckStatus(int data) 
  { 
    super(297, data);
  } 
} 

package quickfix.field; 
import quickfix.IntField; 
import java.util.Date; 

public class UnderlyingRepurchaseTerm extends IntField 
{ 
  public static final int FIELD = 244; 

  public UnderlyingRepurchaseTerm() 
  { 
    super(244);
  } 
  public UnderlyingRepurchaseTerm(int data) 
  { 
    super(244, data);
  } 
} 

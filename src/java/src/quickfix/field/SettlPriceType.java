package quickfix.field; 
import quickfix.IntField; 
import java.util.Date; 

public class SettlPriceType extends IntField 
{ 
  public static final int FIELD = 731; 
public static final int FINAL = 1; 
public static final int THEORETICAL = 2; 

  public SettlPriceType() 
  { 
    super(731);
  } 
  public SettlPriceType(int data) 
  { 
    super(731, data);
  } 
} 

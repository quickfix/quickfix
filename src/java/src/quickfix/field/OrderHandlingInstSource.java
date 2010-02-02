package quickfix.field; 
import quickfix.IntField; 
import java.util.Date; 

public class OrderHandlingInstSource extends IntField 
{ 
  public static final int FIELD = 1032; 
public static final int NASD_OATS = 1; 

  public OrderHandlingInstSource() 
  { 
    super(1032);
  } 
  public OrderHandlingInstSource(int data) 
  { 
    super(1032, data);
  } 
} 

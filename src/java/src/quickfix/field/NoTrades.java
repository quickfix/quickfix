package quickfix.field; 
import quickfix.IntField; 
import java.util.Date; 

public class NoTrades extends IntField 
{ 
  public static final int FIELD = 897; 

  public NoTrades() 
  { 
    super(897);
  } 
  public NoTrades(int data) 
  { 
    super(897, data);
  } 
} 

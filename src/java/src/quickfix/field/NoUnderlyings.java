package quickfix.field; 
import quickfix.IntField; 
import java.util.Date; 

public class NoUnderlyings extends IntField 
{ 
  public static final int FIELD = 711; 

  public NoUnderlyings() 
  { 
    super(711);
  } 
  public NoUnderlyings(int data) 
  { 
    super(711, data);
  } 
} 

package quickfix.field; 
import quickfix.DoubleField; 
import java.util.Date; 

public class SellVolume extends DoubleField 
{ 
  public static final int FIELD = 331; 

  public SellVolume() 
  { 
    super(331);
  } 
  public SellVolume(double data) 
  { 
    super(331, data);
  } 
} 

package quickfix.field; 
import quickfix.DoubleField; 
import java.util.Date; 

public class MinTradeVol extends DoubleField 
{ 
  public static final int FIELD = 562; 

  public MinTradeVol() 
  { 
    super(562);
  } 
  public MinTradeVol(double data) 
  { 
    super(562, data);
  } 
} 

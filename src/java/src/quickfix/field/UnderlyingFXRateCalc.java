package quickfix.field; 
import quickfix.CharField; 
import java.util.Date; 

public class UnderlyingFXRateCalc extends CharField 
{ 
  public static final int FIELD = 1046; 
public static final char MULTIPLY = 'M'; 
public static final char DIVIDE = 'D'; 

  public UnderlyingFXRateCalc() 
  { 
    super(1046);
  } 
  public UnderlyingFXRateCalc(char data) 
  { 
    super(1046, data);
  } 
} 

package quickfix.field; 
import quickfix.DoubleField; 
import java.util.Date; 

public class RndPx extends DoubleField 
{ 
  public static final int FIELD = 991; 

  public RndPx() 
  { 
    super(991);
  } 
  public RndPx(double data) 
  { 
    super(991, data);
  } 
} 

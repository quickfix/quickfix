package quickfix.field; 
import quickfix.CharField; 
import java.util.Date; 

public class LegOptAttribute extends CharField 
{ 
  public static final int FIELD = 613; 

  public LegOptAttribute() 
  { 
    super(613);
  } 
  public LegOptAttribute(char data) 
  { 
    super(613, data);
  } 
} 

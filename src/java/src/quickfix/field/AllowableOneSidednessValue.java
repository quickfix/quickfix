package quickfix.field; 
import quickfix.DoubleField; 
import java.util.Date; 

public class AllowableOneSidednessValue extends DoubleField 
{ 
  public static final int FIELD = 766; 

  public AllowableOneSidednessValue() 
  { 
    super(766);
  } 
  public AllowableOneSidednessValue(double data) 
  { 
    super(766, data);
  } 
} 

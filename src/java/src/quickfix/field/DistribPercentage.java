package quickfix.field; 
import quickfix.DoubleField; 
import java.util.Date; 

public class DistribPercentage extends DoubleField 
{ 
  public static final int FIELD = 512; 

  public DistribPercentage() 
  { 
    super(512);
  } 
  public DistribPercentage(double data) 
  { 
    super(512, data);
  } 
} 

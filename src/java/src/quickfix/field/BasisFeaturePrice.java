package quickfix.field; 
import quickfix.DoubleField; 
import java.util.Date; 

public class BasisFeaturePrice extends DoubleField 
{ 
  public static final int FIELD = 260; 

  public BasisFeaturePrice() 
  { 
    super(260);
  } 
  public BasisFeaturePrice(double data) 
  { 
    super(260, data);
  } 
} 

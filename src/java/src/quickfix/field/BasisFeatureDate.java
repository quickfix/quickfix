package quickfix.field; 
import quickfix.StringField; 
import java.util.Date; 

public class BasisFeatureDate extends StringField 
{ 
  public static final int FIELD = 259; 

  public BasisFeatureDate() 
  { 
    super(259);
  } 
  public BasisFeatureDate(String data) 
  { 
    super(259, data);
  } 
} 

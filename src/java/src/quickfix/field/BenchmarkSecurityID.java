package quickfix.field; 
import quickfix.StringField; 
import java.util.Date; 

public class BenchmarkSecurityID extends StringField 
{ 
  public static final int FIELD = 699; 

  public BenchmarkSecurityID() 
  { 
    super(699);
  } 
  public BenchmarkSecurityID(String data) 
  { 
    super(699, data);
  } 
} 

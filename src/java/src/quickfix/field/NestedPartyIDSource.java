package quickfix.field; 
import quickfix.CharField; 
import java.util.Date; 

public class NestedPartyIDSource extends CharField 
{ 
  public static final int FIELD = 525; 

  public NestedPartyIDSource() 
  { 
    super(525);
  } 
  public NestedPartyIDSource(char data) 
  { 
    super(525, data);
  } 
} 

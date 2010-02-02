package quickfix.field; 
import quickfix.CharField; 
import java.util.Date; 

public class RootPartyIDSource extends CharField 
{ 
  public static final int FIELD = 1118; 

  public RootPartyIDSource() 
  { 
    super(1118);
  } 
  public RootPartyIDSource(char data) 
  { 
    super(1118, data);
  } 
} 

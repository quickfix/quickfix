package quickfix.field; 
import quickfix.BooleanField; 
import java.util.Date; 

public class TestMessageIndicator extends BooleanField 
{ 
  public static final int FIELD = 464; 

  public TestMessageIndicator() 
  { 
    super(464);
  } 
  public TestMessageIndicator(boolean data) 
  { 
    super(464, data);
  } 
} 

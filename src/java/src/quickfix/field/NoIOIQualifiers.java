package quickfix.field; 
import quickfix.IntField; 
import java.util.Date; 

public class NoIOIQualifiers extends IntField 
{ 
  public static final int FIELD = 199; 

  public NoIOIQualifiers() 
  { 
    super(199);
  } 
  public NoIOIQualifiers(int data) 
  { 
    super(199, data);
  } 
} 

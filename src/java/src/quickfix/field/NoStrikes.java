package quickfix.field; 
import quickfix.IntField; 
import java.util.Date; 

public class NoStrikes extends IntField 
{ 
  public static final int FIELD = 428; 

  public NoStrikes() 
  { 
    super(428);
  } 
  public NoStrikes(int data) 
  { 
    super(428, data);
  } 
} 

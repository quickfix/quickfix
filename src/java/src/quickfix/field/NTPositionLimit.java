package quickfix.field; 
import quickfix.IntField; 
import java.util.Date; 

public class NTPositionLimit extends IntField 
{ 
  public static final int FIELD = 971; 

  public NTPositionLimit() 
  { 
    super(971);
  } 
  public NTPositionLimit(int data) 
  { 
    super(971, data);
  } 
} 

package quickfix.field; 
import quickfix.IntField; 
import java.util.Date; 

public class NoInstrAttrib extends IntField 
{ 
  public static final int FIELD = 870; 

  public NoInstrAttrib() 
  { 
    super(870);
  } 
  public NoInstrAttrib(int data) 
  { 
    super(870, data);
  } 
} 

package quickfix.field; 
import quickfix.IntField; 
import java.util.Date; 

public class NoStipulations extends IntField 
{ 
  public static final int FIELD = 232; 

  public NoStipulations() 
  { 
    super(232);
  } 
  public NoStipulations(int data) 
  { 
    super(232, data);
  } 
} 

package quickfix.field; 
import quickfix.IntField; 
import java.util.Date; 

public class NoContraBrokers extends IntField 
{ 
  public static final int FIELD = 382; 

  public NoContraBrokers() 
  { 
    super(382);
  } 
  public NoContraBrokers(int data) 
  { 
    super(382, data);
  } 
} 

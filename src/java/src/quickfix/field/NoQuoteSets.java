package quickfix.field; 
import quickfix.IntField; 
import java.util.Date; 

public class NoQuoteSets extends IntField 
{ 
  public static final int FIELD = 296; 

  public NoQuoteSets() 
  { 
    super(296);
  } 
  public NoQuoteSets(int data) 
  { 
    super(296, data);
  } 
} 

package quickfix.field; 
import quickfix.IntField; 
import java.util.Date; 

public class NoQuoteEntries extends IntField 
{ 
  public static final int FIELD = 295; 

  public NoQuoteEntries() 
  { 
    super(295);
  } 
  public NoQuoteEntries(int data) 
  { 
    super(295, data);
  } 
} 

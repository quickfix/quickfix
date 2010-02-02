package quickfix.field; 
import quickfix.IntField; 
import java.util.Date; 

public class NoLinesOfText extends IntField 
{ 
  public static final int FIELD = 33; 

  public NoLinesOfText() 
  { 
    super(33);
  } 
  public NoLinesOfText(int data) 
  { 
    super(33, data);
  } 
} 

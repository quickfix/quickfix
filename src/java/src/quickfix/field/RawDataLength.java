package quickfix.field; 
import quickfix.IntField; 
import java.util.Date; 

public class RawDataLength extends IntField 
{ 
  public static final int FIELD = 95; 

  public RawDataLength() 
  { 
    super(95);
  } 
  public RawDataLength(int data) 
  { 
    super(95, data);
  } 
} 

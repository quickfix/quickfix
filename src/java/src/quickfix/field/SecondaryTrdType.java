package quickfix.field; 
import quickfix.IntField; 
import java.util.Date; 

public class SecondaryTrdType extends IntField 
{ 
  public static final int FIELD = 855; 

  public SecondaryTrdType() 
  { 
    super(855);
  } 
  public SecondaryTrdType(int data) 
  { 
    super(855, data);
  } 
} 

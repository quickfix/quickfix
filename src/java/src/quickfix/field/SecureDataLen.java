package quickfix.field; 
import quickfix.IntField; 
import java.util.Date; 

public class SecureDataLen extends IntField 
{ 
  public static final int FIELD = 90; 

  public SecureDataLen() 
  { 
    super(90);
  } 
  public SecureDataLen(int data) 
  { 
    super(90, data);
  } 
} 

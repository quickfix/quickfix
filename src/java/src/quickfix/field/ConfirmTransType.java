package quickfix.field; 
import quickfix.IntField; 
import java.util.Date; 

public class ConfirmTransType extends IntField 
{ 
  public static final int FIELD = 666; 
public static final int NEW = 0; 
public static final int REPLACE = 1; 
public static final int CANCEL = 2; 

  public ConfirmTransType() 
  { 
    super(666);
  } 
  public ConfirmTransType(int data) 
  { 
    super(666, data);
  } 
} 

package quickfix.field; 
import quickfix.IntField; 
import java.util.Date; 

public class CollAsgnTransType extends IntField 
{ 
  public static final int FIELD = 903; 
public static final int NEW = 0; 
public static final int REPLACE = 1; 
public static final int CANCEL = 2; 
public static final int RELEASE = 3; 
public static final int REVERSE = 4; 

  public CollAsgnTransType() 
  { 
    super(903);
  } 
  public CollAsgnTransType(int data) 
  { 
    super(903, data);
  } 
} 

package quickfix.field; 
import quickfix.IntField; 
import java.util.Date; 

public class CollAction extends IntField 
{ 
  public static final int FIELD = 944; 
public static final int RETAIN = 0; 
public static final int ADD = 1; 
public static final int REMOVE = 2; 

  public CollAction() 
  { 
    super(944);
  } 
  public CollAction(int data) 
  { 
    super(944, data);
  } 
} 

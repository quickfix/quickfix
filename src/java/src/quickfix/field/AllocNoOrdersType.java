package quickfix.field; 
import quickfix.IntField; 
import java.util.Date; 

public class AllocNoOrdersType extends IntField 
{ 
  public static final int FIELD = 857; 
public static final int NOT_SPECIFIED = 0; 
public static final int EXPLICIT_LIST_PROVIDED = 1; 

  public AllocNoOrdersType() 
  { 
    super(857);
  } 
  public AllocNoOrdersType(int data) 
  { 
    super(857, data);
  } 
} 

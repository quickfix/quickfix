package quickfix.field; 
import quickfix.IntField; 
import java.util.Date; 

public class MDOriginType extends IntField 
{ 
  public static final int FIELD = 1024; 
public static final int BOOK = 0; 
public static final int OFF_BOOK = 1; 
public static final int CROSS = 2; 

  public MDOriginType() 
  { 
    super(1024);
  } 
  public MDOriginType(int data) 
  { 
    super(1024, data);
  } 
} 

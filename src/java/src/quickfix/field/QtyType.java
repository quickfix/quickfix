package quickfix.field; 
import quickfix.IntField; 
import java.util.Date; 

public class QtyType extends IntField 
{ 
  public static final int FIELD = 854; 
public static final int UNITS = 0; 
public static final int CONTRACTS = 1; 

  public QtyType() 
  { 
    super(854);
  } 
  public QtyType(int data) 
  { 
    super(854, data);
  } 
} 

package quickfix.field; 
import quickfix.IntField; 
import java.util.Date; 

public class LegProduct extends IntField 
{ 
  public static final int FIELD = 607; 

  public LegProduct() 
  { 
    super(607);
  } 
  public LegProduct(int data) 
  { 
    super(607, data);
  } 
} 

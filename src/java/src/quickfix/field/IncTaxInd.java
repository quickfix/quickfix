package quickfix.field; 
import quickfix.IntField; 
import java.util.Date; 

public class IncTaxInd extends IntField 
{ 
  public static final int FIELD = 416; 
public static final int NET = 1; 
public static final int GROSS = 2; 

  public IncTaxInd() 
  { 
    super(416);
  } 
  public IncTaxInd(int data) 
  { 
    super(416, data);
  } 
} 

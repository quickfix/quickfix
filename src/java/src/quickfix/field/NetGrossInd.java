package quickfix.field; 
import quickfix.IntField; 
import java.util.Date; 

public class NetGrossInd extends IntField 
{ 
  public static final int FIELD = 430; 
public static final int NET = 1; 
public static final int GROSS = 2; 

  public NetGrossInd() 
  { 
    super(430);
  } 
  public NetGrossInd(int data) 
  { 
    super(430, data);
  } 
} 

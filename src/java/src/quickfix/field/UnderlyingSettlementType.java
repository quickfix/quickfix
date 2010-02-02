package quickfix.field; 
import quickfix.IntField; 
import java.util.Date; 

public class UnderlyingSettlementType extends IntField 
{ 
  public static final int FIELD = 975; 
public static final int Tp1 = 2; 
public static final int Tp3 = 4; 
public static final int Tp4 = 5; 

  public UnderlyingSettlementType() 
  { 
    super(975);
  } 
  public UnderlyingSettlementType(int data) 
  { 
    super(975, data);
  } 
} 

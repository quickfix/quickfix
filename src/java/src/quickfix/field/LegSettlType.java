package quickfix.field; 
import quickfix.CharField; 
import java.util.Date; 

public class LegSettlType extends CharField 
{ 
  public static final int FIELD = 587; 

  public LegSettlType() 
  { 
    super(587);
  } 
  public LegSettlType(char data) 
  { 
    super(587, data);
  } 
} 

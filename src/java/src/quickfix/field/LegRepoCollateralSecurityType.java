package quickfix.field; 
import quickfix.IntField; 
import java.util.Date; 

public class LegRepoCollateralSecurityType extends IntField 
{ 
  public static final int FIELD = 250; 

  public LegRepoCollateralSecurityType() 
  { 
    super(250);
  } 
  public LegRepoCollateralSecurityType(int data) 
  { 
    super(250, data);
  } 
} 

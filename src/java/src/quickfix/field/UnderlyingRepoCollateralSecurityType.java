package quickfix.field; 
import quickfix.IntField; 
import java.util.Date; 

public class UnderlyingRepoCollateralSecurityType extends IntField 
{ 
  public static final int FIELD = 243; 

  public UnderlyingRepoCollateralSecurityType() 
  { 
    super(243);
  } 
  public UnderlyingRepoCollateralSecurityType(int data) 
  { 
    super(243, data);
  } 
} 

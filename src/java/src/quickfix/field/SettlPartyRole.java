package quickfix.field; 
import quickfix.IntField; 
import java.util.Date; 

public class SettlPartyRole extends IntField 
{ 
  public static final int FIELD = 784; 

  public SettlPartyRole() 
  { 
    super(784);
  } 
  public SettlPartyRole(int data) 
  { 
    super(784, data);
  } 
} 

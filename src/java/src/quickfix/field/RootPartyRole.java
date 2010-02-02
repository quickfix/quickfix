package quickfix.field; 
import quickfix.IntField; 
import java.util.Date; 

public class RootPartyRole extends IntField 
{ 
  public static final int FIELD = 1119; 

  public RootPartyRole() 
  { 
    super(1119);
  } 
  public RootPartyRole(int data) 
  { 
    super(1119, data);
  } 
} 

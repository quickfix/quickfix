package quickfix.field; 
import quickfix.IntField; 
import java.util.Date; 

public class Nested3PartyRole extends IntField 
{ 
  public static final int FIELD = 951; 

  public Nested3PartyRole() 
  { 
    super(951);
  } 
  public Nested3PartyRole(int data) 
  { 
    super(951, data);
  } 
} 

package quickfix.field; 
import quickfix.IntField; 
import java.util.Date; 

public class NoPartyIDs extends IntField 
{ 
  public static final int FIELD = 453; 

  public NoPartyIDs() 
  { 
    super(453);
  } 
  public NoPartyIDs(int data) 
  { 
    super(453, data);
  } 
} 

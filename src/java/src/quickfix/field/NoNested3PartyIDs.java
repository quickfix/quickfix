package quickfix.field; 
import quickfix.IntField; 
import java.util.Date; 

public class NoNested3PartyIDs extends IntField 
{ 
  public static final int FIELD = 948; 

  public NoNested3PartyIDs() 
  { 
    super(948);
  } 
  public NoNested3PartyIDs(int data) 
  { 
    super(948, data);
  } 
} 

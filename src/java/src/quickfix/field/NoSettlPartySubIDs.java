package quickfix.field; 
import quickfix.IntField; 
import java.util.Date; 

public class NoSettlPartySubIDs extends IntField 
{ 
  public static final int FIELD = 801; 

  public NoSettlPartySubIDs() 
  { 
    super(801);
  } 
  public NoSettlPartySubIDs(int data) 
  { 
    super(801, data);
  } 
} 

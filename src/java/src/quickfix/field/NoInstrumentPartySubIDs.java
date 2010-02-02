package quickfix.field; 
import quickfix.IntField; 
import java.util.Date; 

public class NoInstrumentPartySubIDs extends IntField 
{ 
  public static final int FIELD = 1052; 

  public NoInstrumentPartySubIDs() 
  { 
    super(1052);
  } 
  public NoInstrumentPartySubIDs(int data) 
  { 
    super(1052, data);
  } 
} 

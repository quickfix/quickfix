package quickfix.field; 
import quickfix.IntField; 
import java.util.Date; 

public class NoUndlyInstrumentPartySubIDs extends IntField 
{ 
  public static final int FIELD = 1062; 

  public NoUndlyInstrumentPartySubIDs() 
  { 
    super(1062);
  } 
  public NoUndlyInstrumentPartySubIDs(int data) 
  { 
    super(1062, data);
  } 
} 

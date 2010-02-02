package quickfix.field; 
import quickfix.IntField; 
import java.util.Date; 

public class UndlyInstrumentPartyRole extends IntField 
{ 
  public static final int FIELD = 1061; 

  public UndlyInstrumentPartyRole() 
  { 
    super(1061);
  } 
  public UndlyInstrumentPartyRole(int data) 
  { 
    super(1061, data);
  } 
} 

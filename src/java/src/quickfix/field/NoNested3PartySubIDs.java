package quickfix.field; 
import quickfix.IntField; 
import java.util.Date; 

public class NoNested3PartySubIDs extends IntField 
{ 
  public static final int FIELD = 952; 

  public NoNested3PartySubIDs() 
  { 
    super(952);
  } 
  public NoNested3PartySubIDs(int data) 
  { 
    super(952, data);
  } 
} 

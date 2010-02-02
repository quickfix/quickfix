package quickfix.field; 
import quickfix.IntField; 
import java.util.Date; 

public class NoRootPartySubIDs extends IntField 
{ 
  public static final int FIELD = 1120; 

  public NoRootPartySubIDs() 
  { 
    super(1120);
  } 
  public NoRootPartySubIDs(int data) 
  { 
    super(1120, data);
  } 
} 

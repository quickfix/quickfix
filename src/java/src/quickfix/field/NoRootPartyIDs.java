package quickfix.field; 
import quickfix.IntField; 
import java.util.Date; 

public class NoRootPartyIDs extends IntField 
{ 
  public static final int FIELD = 1116; 

  public NoRootPartyIDs() 
  { 
    super(1116);
  } 
  public NoRootPartyIDs(int data) 
  { 
    super(1116, data);
  } 
} 

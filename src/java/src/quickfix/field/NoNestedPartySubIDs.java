package quickfix.field; 
import quickfix.IntField; 
import java.util.Date; 

public class NoNestedPartySubIDs extends IntField 
{ 
  public static final int FIELD = 804; 

  public NoNestedPartySubIDs() 
  { 
    super(804);
  } 
  public NoNestedPartySubIDs(int data) 
  { 
    super(804, data);
  } 
} 

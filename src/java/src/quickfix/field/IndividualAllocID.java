package quickfix.field; 
import quickfix.StringField; 
import java.util.Date; 

public class IndividualAllocID extends StringField 
{ 
  public static final int FIELD = 467; 

  public IndividualAllocID() 
  { 
    super(467);
  } 
  public IndividualAllocID(String data) 
  { 
    super(467, data);
  } 
} 

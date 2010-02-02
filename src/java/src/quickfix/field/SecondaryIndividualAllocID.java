package quickfix.field; 
import quickfix.StringField; 
import java.util.Date; 

public class SecondaryIndividualAllocID extends StringField 
{ 
  public static final int FIELD = 989; 

  public SecondaryIndividualAllocID() 
  { 
    super(989);
  } 
  public SecondaryIndividualAllocID(String data) 
  { 
    super(989, data);
  } 
} 

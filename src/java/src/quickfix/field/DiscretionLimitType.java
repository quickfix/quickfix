package quickfix.field; 
import quickfix.IntField; 
import java.util.Date; 

public class DiscretionLimitType extends IntField 
{ 
  public static final int FIELD = 843; 
public static final int OR_BETTER = 0; 
public static final int STRICT = 1; 
public static final int OR_WORSE = 2; 

  public DiscretionLimitType() 
  { 
    super(843);
  } 
  public DiscretionLimitType(int data) 
  { 
    super(843, data);
  } 
} 

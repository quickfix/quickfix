package quickfix.field; 
import quickfix.IntField; 
import java.util.Date; 

public class MiscFeeBasis extends IntField 
{ 
  public static final int FIELD = 891; 
public static final int ABSOLUTE = 0; 
public static final int PER_UNIT = 1; 
public static final int PERCENTAGE = 2; 

  public MiscFeeBasis() 
  { 
    super(891);
  } 
  public MiscFeeBasis(int data) 
  { 
    super(891, data);
  } 
} 

package quickfix.field; 
import quickfix.IntField; 
import java.util.Date; 

public class IndividualAllocRejCode extends IntField 
{ 
  public static final int FIELD = 776; 

  public IndividualAllocRejCode() 
  { 
    super(776);
  } 
  public IndividualAllocRejCode(int data) 
  { 
    super(776, data);
  } 
} 

package quickfix.field; 
import quickfix.IntField; 
import java.util.Date; 

public class IndividualAllocType extends IntField 
{ 
  public static final int FIELD = 992; 
public static final int SUB_ALLOCATE = 1; 
public static final int THIRD_PARTY_ALLOCATION = 2; 

  public IndividualAllocType() 
  { 
    super(992);
  } 
  public IndividualAllocType(int data) 
  { 
    super(992, data);
  } 
} 

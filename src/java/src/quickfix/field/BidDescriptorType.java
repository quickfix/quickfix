package quickfix.field; 
import quickfix.IntField; 
import java.util.Date; 

public class BidDescriptorType extends IntField 
{ 
  public static final int FIELD = 399; 
public static final int SECTOR = 1; 
public static final int COUNTRY = 2; 
public static final int INDEX = 3; 

  public BidDescriptorType() 
  { 
    super(399);
  } 
  public BidDescriptorType(int data) 
  { 
    super(399, data);
  } 
} 

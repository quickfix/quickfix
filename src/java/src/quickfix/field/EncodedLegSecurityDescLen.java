package quickfix.field; 
import quickfix.IntField; 
import java.util.Date; 

public class EncodedLegSecurityDescLen extends IntField 
{ 
  public static final int FIELD = 621; 

  public EncodedLegSecurityDescLen() 
  { 
    super(621);
  } 
  public EncodedLegSecurityDescLen(int data) 
  { 
    super(621, data);
  } 
} 

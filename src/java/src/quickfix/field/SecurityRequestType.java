package quickfix.field; 
import quickfix.IntField; 
import java.util.Date; 

public class SecurityRequestType extends IntField 
{ 
  public static final int FIELD = 321; 
public static final int REQUEST_SECURITY_IDENTITY_AND_SPECIFICATIONS = 0; 
public static final int REQUEST_SECURITY_IDENTITY_FOR_THE_SPECIFICATIONS_PROVIDED = 1; 
public static final int REQUEST_LIST_SECURITY_TYPES = 2; 
public static final int REQUEST_LIST_SECURITIES = 3; 

  public SecurityRequestType() 
  { 
    super(321);
  } 
  public SecurityRequestType(int data) 
  { 
    super(321, data);
  } 
} 

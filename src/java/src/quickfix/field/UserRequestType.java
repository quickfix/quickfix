package quickfix.field; 
import quickfix.IntField; 
import java.util.Date; 

public class UserRequestType extends IntField 
{ 
  public static final int FIELD = 924; 
public static final int LOGONUSER = 1; 
public static final int LOGOFFUSER = 2; 
public static final int CHANGEPASSWORDFORUSER = 3; 
public static final int REQUEST_INDIVIDUAL_USER_STATUS = 4; 

  public UserRequestType() 
  { 
    super(924);
  } 
  public UserRequestType(int data) 
  { 
    super(924, data);
  } 
} 

package quickfix.field; 
import quickfix.IntField; 
import java.util.Date; 

public class SecDefStatus extends IntField 
{ 
  public static final int FIELD = 653; 
public static final int PENDING_APPROVAL = 0; 
public static final int APPROVED = 1; 
public static final int REJECTED = 2; 
public static final int UNAUTHORIZED_REQUEST = 3; 
public static final int INVALID_DEFINITION_REQUEST = 4; 

  public SecDefStatus() 
  { 
    super(653);
  } 
  public SecDefStatus(int data) 
  { 
    super(653, data);
  } 
} 

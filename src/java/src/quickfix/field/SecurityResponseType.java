package quickfix.field; 
import quickfix.IntField; 
import java.util.Date; 

public class SecurityResponseType extends IntField 
{ 
  public static final int FIELD = 323; 
public static final int ACCEPT_SECURITY_PROPOSAL_AS_IS = 1; 
public static final int ACCEPT_SECURITY_PROPOSAL_WITH_REVISIONS_AS_INDICATED_IN_THE_MESSAGE = 2; 
public static final int LIST_OF_SECURITY_TYPES_RETURNED_PER_REQUEST = 3; 
public static final int LIST_OF_SECURITIES_RETURNED_PER_REQUEST = 4; 
public static final int REJECT_SECURITY_PROPOSAL = 5; 
public static final int CAN_NOT_MATCH_SELECTION_CRITERIA = 6; 

  public SecurityResponseType() 
  { 
    super(323);
  } 
  public SecurityResponseType(int data) 
  { 
    super(323, data);
  } 
} 

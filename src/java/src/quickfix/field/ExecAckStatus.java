package quickfix.field; 
import quickfix.CharField; 
import java.util.Date; 

public class ExecAckStatus extends CharField 
{ 
  public static final int FIELD = 1036; 
public static final char RECEIVED_NOT_YET_PROCESSED = '0'; 
public static final char ACCEPTED = '1'; 
public static final char DONT_KNOW = '2'; 

  public ExecAckStatus() 
  { 
    super(1036);
  } 
  public ExecAckStatus(char data) 
  { 
    super(1036, data);
  } 
} 

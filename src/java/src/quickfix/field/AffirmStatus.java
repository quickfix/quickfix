package quickfix.field; 
import quickfix.IntField; 
import java.util.Date; 

public class AffirmStatus extends IntField 
{ 
  public static final int FIELD = 940; 
public static final int RECEIVED = 1; 
public static final int CONFIRM_REJECTED = 2; 
public static final int AFFIRMED = 3; 

  public AffirmStatus() 
  { 
    super(940);
  } 
  public AffirmStatus(int data) 
  { 
    super(940, data);
  } 
} 

package quickfix.field; 
import quickfix.IntField; 
import java.util.Date; 

public class QuoteRespType extends IntField 
{ 
  public static final int FIELD = 694; 
public static final int HIT_LIFT = 1; 
public static final int COUNTER = 2; 
public static final int EXPIRED = 3; 
public static final int COVER = 4; 
public static final int DONE_AWAY = 5; 
public static final int PASS = 6; 

  public QuoteRespType() 
  { 
    super(694);
  } 
  public QuoteRespType(int data) 
  { 
    super(694, data);
  } 
} 

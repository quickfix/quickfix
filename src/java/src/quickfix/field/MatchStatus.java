package quickfix.field; 
import quickfix.CharField; 
import java.util.Date; 

public class MatchStatus extends CharField 
{ 
  public static final int FIELD = 573; 
public static final char COMPARED_MATCHED_OR_AFFIRMED = '0'; 
public static final char UNCOMPARED_UNMATCHED_OR_UNAFFIRMED = '1'; 
public static final char ADVISORY_OR_ALERT = '2'; 

  public MatchStatus() 
  { 
    super(573);
  } 
  public MatchStatus(char data) 
  { 
    super(573, data);
  } 
} 

package quickfix.field; 
import quickfix.StringField; 
import java.util.Date; 

public class AllowableOneSidednessCurr extends StringField 
{ 
  public static final int FIELD = 767; 

  public AllowableOneSidednessCurr() 
  { 
    super(767);
  } 
  public AllowableOneSidednessCurr(String data) 
  { 
    super(767, data);
  } 
} 

package quickfix.field; 
import quickfix.StringField; 
import java.util.Date; 

public class MiscFeeCurr extends StringField 
{ 
  public static final int FIELD = 138; 

  public MiscFeeCurr() 
  { 
    super(138);
  } 
  public MiscFeeCurr(String data) 
  { 
    super(138, data);
  } 
} 

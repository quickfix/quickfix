package quickfix.field; 
import quickfix.StringField; 
import java.util.Date; 

public class SideReasonCd extends StringField 
{ 
  public static final int FIELD = 1007; 

  public SideReasonCd() 
  { 
    super(1007);
  } 
  public SideReasonCd(String data) 
  { 
    super(1007, data);
  } 
} 

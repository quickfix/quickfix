package quickfix.field; 
import quickfix.StringField; 
import java.util.Date; 

public class CstmApplVerID extends StringField 
{ 
  public static final int FIELD = 1129; 

  public CstmApplVerID() 
  { 
    super(1129);
  } 
  public CstmApplVerID(String data) 
  { 
    super(1129, data);
  } 
} 

package quickfix.field; 
import quickfix.StringField; 
import java.util.Date; 

public class BidID extends StringField 
{ 
  public static final int FIELD = 390; 

  public BidID() 
  { 
    super(390);
  } 
  public BidID(String data) 
  { 
    super(390, data);
  } 
} 

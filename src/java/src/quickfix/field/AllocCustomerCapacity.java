package quickfix.field; 
import quickfix.StringField; 
import java.util.Date; 

public class AllocCustomerCapacity extends StringField 
{ 
  public static final int FIELD = 993; 

  public AllocCustomerCapacity() 
  { 
    super(993);
  } 
  public AllocCustomerCapacity(String data) 
  { 
    super(993, data);
  } 
} 

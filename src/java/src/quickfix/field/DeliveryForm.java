package quickfix.field; 
import quickfix.IntField; 
import java.util.Date; 

public class DeliveryForm extends IntField 
{ 
  public static final int FIELD = 668; 
public static final int BOOKENTRY = 1; 
public static final int BEARER = 2; 

  public DeliveryForm() 
  { 
    super(668);
  } 
  public DeliveryForm(int data) 
  { 
    super(668, data);
  } 
} 

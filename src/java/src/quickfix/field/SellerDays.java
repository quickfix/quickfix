package quickfix.field; 
import quickfix.IntField; 
import java.util.Date; 

public class SellerDays extends IntField 
{ 
  public static final int FIELD = 287; 

  public SellerDays() 
  { 
    super(287);
  } 
  public SellerDays(int data) 
  { 
    super(287, data);
  } 
} 

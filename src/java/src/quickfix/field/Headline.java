package quickfix.field; 
import quickfix.StringField; 
import java.util.Date; 

public class Headline extends StringField 
{ 
  public static final int FIELD = 148; 

  public Headline() 
  { 
    super(148);
  } 
  public Headline(String data) 
  { 
    super(148, data);
  } 
} 

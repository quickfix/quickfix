package quickfix.field; 
import quickfix.StringField; 
import java.util.Date; 

public class Subject extends StringField 
{ 
  public static final int FIELD = 147; 

  public Subject() 
  { 
    super(147);
  } 
  public Subject(String data) 
  { 
    super(147, data);
  } 
} 

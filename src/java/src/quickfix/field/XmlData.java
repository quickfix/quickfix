package quickfix.field; 
import quickfix.StringField; 
import java.util.Date; 

public class XmlData extends StringField 
{ 
  public static final int FIELD = 213; 

  public XmlData() 
  { 
    super(213);
  } 
  public XmlData(String data) 
  { 
    super(213, data);
  } 
} 

package quickfix.field; 
import quickfix.StringField; 
import java.util.Date; 

public class MessageEncoding extends StringField 
{ 
  public static final int FIELD = 347; 
public static final String ISO_2022_JP = "ISO-2022-JP"; 
public static final String EUC_JP = "EUC-JP"; 
public static final String SHIFT_JIS = "SHIFT_JIS"; 
public static final String UTF_8 = "UTF-8"; 

  public MessageEncoding() 
  { 
    super(347);
  } 
  public MessageEncoding(String data) 
  { 
    super(347, data);
  } 
} 

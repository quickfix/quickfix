package quickfix.field; 
import quickfix.StringField; 
import java.util.Date; 

public class SideFillStationCd extends StringField 
{ 
  public static final int FIELD = 1006; 

  public SideFillStationCd() 
  { 
    super(1006);
  } 
  public SideFillStationCd(String data) 
  { 
    super(1006, data);
  } 
} 

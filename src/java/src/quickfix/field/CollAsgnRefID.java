package org.quickfix.field; 
import org.quickfix.StringField; 
import java.util.Date; 

public class CollAsgnRefID extends StringField 
{ 
  public static final int FIELD = 907; 

  public CollAsgnRefID() 
  { 
    super(907);
  } 
  public CollAsgnRefID(String data) 
  { 
    super(907, data);
  } 
} 

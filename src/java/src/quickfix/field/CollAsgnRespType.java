package org.quickfix.field; 
import org.quickfix.IntField; 
import java.util.Date; 

public class CollAsgnRespType extends IntField 
{ 
  public static final int FIELD = 905; 
public static final int RECEIVED = 0; 
public static final int ACCEPTED = 1; 
public static final int DECLINED = 2; 
public static final int REJECTED = 3; 

  public CollAsgnRespType() 
  { 
    super(905);
  } 
  public CollAsgnRespType(int data) 
  { 
    super(905, data);
  } 
} 

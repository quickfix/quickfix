package org.quickfix.field; 
import org.quickfix.StringField; 
import java.util.Date; 

public class BenchmarkSecurityIDSource extends StringField 
{ 
  public static final int FIELD = 761; 

  public BenchmarkSecurityIDSource() 
  { 
    super(761);
  } 
  public BenchmarkSecurityIDSource(String data) 
  { 
    super(761, data);
  } 
} 

package org.quickfix.field; 
import org.quickfix.CharField; 
import java.util.Date; 

public class EmailType extends CharField 
{ 
  public static final int FIELD = 94; 
public static final char NEW = '0'; 
public static final char REPLY = '1'; 
public static final char ADMIN_REPLY = '2'; 

  public EmailType() 
  { 
    super(94);
  } 
  public EmailType(char data) 
  { 
    super(94, data);
  } 
} 

package org.quickfix.field; 
import org.quickfix.StringField; 
import java.util.Date; 

public class MailingInst extends StringField 
{ 
  public static final int FIELD = 482; 

  public MailingInst() 
  { 
    super(482);
  } 
  public MailingInst(String data) 
  { 
    super(482, data);
  } 
} 

package org.quickfix.field; 
import org.quickfix.StringField; 
import java.util.Date; 

public class MailingDtls extends StringField 
{ 

  public MailingDtls() 
  { 
    super(474);
  } 
  public MailingDtls(String data) 
  { 
    super(474, data);
  } 
} 

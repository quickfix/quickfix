package quickfix.field; 
import quickfix.IntField; 
import java.util.Date; 

public class XmlDataLen extends IntField 
{ 
  public static final int FIELD = 212; 

  public XmlDataLen() 
  { 
    super(212);
  } 
  public XmlDataLen(int data) 
  { 
    super(212, data);
  } 
} 

package org.quickfix.field; 
import org.quickfix.IntField; 
import java.util.Date; 

public class XmlDataLen extends IntField 
{ 

  public XmlDataLen() 
  { 
    super(212);
  } 
  public XmlDataLen(int data) 
  { 
    super(212, data);
  } 
} 

package org.quickfix.field; 
import org.quickfix.IntField; 
import java.util.Date; 

public class CollInquiryStatus extends IntField 
{ 
  public static final int FIELD = 945; 
public static final int ACCEPTED = 0; 
public static final int ACCEPTED_WITH_WARNINGS = 1; 
public static final int COMPLETED = 2; 
public static final int COMPLETED_WITH_WARNINGS = 3; 
public static final int REJECTED = 4; 

  public CollInquiryStatus() 
  { 
    super(945);
  } 
  public CollInquiryStatus(int data) 
  { 
    super(945, data);
  } 
} 

package quickfix.field; 
import quickfix.IntField; 
import java.util.Date; 

public class EncryptMethod extends IntField 
{ 
  public static final int FIELD = 98; 
public static final int NONE_OTHER = 0; 
public static final int PKCS = 1; 
public static final int DES = 2; 
public static final int PKCS_DES = 3; 
public static final int PGP_DES = 4; 
public static final int PGP_DES_MD5 = 5; 
public static final int PEM_DES_MD5 = 6; 

  public EncryptMethod() 
  { 
    super(98);
  } 
  public EncryptMethod(int data) 
  { 
    super(98, data);
  } 
} 

package quickfix.field; 
import quickfix.StringField; 
import java.util.Date; 

public class MsgType extends StringField 
{ 
  public static final int FIELD = 35; 
public static final String HEARTBEAT = "0"; 
public static final String TEST_REQUEST = "1"; 
public static final String RESEND_REQUEST = "2"; 
public static final String REJECT = "3"; 
public static final String SEQUENCE_RESET = "4"; 
public static final String LOGOUT = "5"; 
public static final String INDICATION_OF_INTEREST = "6"; 
public static final String ADVERTISEMENT = "7"; 
public static final String EXECUTION_REPORT = "8"; 
public static final String ORDER_CANCEL_REJECT = "9"; 
public static final String LOGON = "A"; 
public static final String NEWS = "B"; 
public static final String EMAIL = "C"; 
public static final String ORDER_SINGLE = "D"; 
public static final String ORDER_LIST = "E"; 
public static final String ORDER_CANCEL_REQUEST = "F"; 
public static final String ORDER_CANCEL_REPLACE_REQUEST = "G"; 
public static final String ORDER_STATUS_REQUEST = "H"; 
public static final String ALLOCATION_INSTRUCTION = "J"; 
public static final String LIST_CANCEL_REQUEST = "K"; 
public static final String LIST_EXECUTE = "L"; 
public static final String LIST_STATUS_REQUEST = "M"; 
public static final String LIST_STATUS = "N"; 
public static final String ALLOCATION_INSTRUCTION_ACK = "P"; 
public static final String DONT_KNOW_TRADE_ = "Q"; 
public static final String QUOTE_REQUEST = "R"; 
public static final String QUOTE = "S"; 
public static final String SETTLEMENT_INSTRUCTIONS = "T"; 
public static final String MARKET_DATA_REQUEST = "V"; 
public static final String MARKET_DATA_SNAPSHOT_FULL_REFRESH = "W"; 
public static final String MARKET_DATA_INCREMENTAL_REFRESH = "X"; 
public static final String MARKET_DATA_REQUEST_REJECT = "Y"; 
public static final String QUOTE_CANCEL = "Z"; 
public static final String QUOTE_STATUS_REQUEST = "a"; 
public static final String MASS_QUOTE_ACKNOWLEDGEMENT = "b"; 
public static final String SECURITY_DEFINITION_REQUEST = "c"; 
public static final String SECURITY_DEFINITION = "d"; 
public static final String SECURITY_STATUS_REQUEST = "e"; 
public static final String SECURITY_STATUS = "f"; 
public static final String TRADING_SESSION_STATUS_REQUEST = "g"; 
public static final String TRADING_SESSION_STATUS = "h"; 
public static final String MASS_QUOTE = "i"; 
public static final String BUSINESS_MESSAGE_REJECT = "j"; 
public static final String BID_REQUEST = "k"; 
public static final String BID_RESPONSE = "l"; 
public static final String LIST_STRIKE_PRICE = "m"; 
public static final String XML_MESSAGE = "n"; 
public static final String REGISTRATION_INSTRUCTIONS = "o"; 
public static final String REGISTRATION_INSTRUCTIONS_RESPONSE = "p"; 
public static final String ORDER_MASS_CANCEL_REQUEST = "q"; 
public static final String ORDER_MASS_CANCEL_REPORT = "r"; 
public static final String NEW_ORDER_CROSS = "s"; 
public static final String CROSS_ORDER_CANCEL_REPLACE_REQUEST = "t"; 
public static final String CROSS_ORDER_CANCEL_REQUEST = "u"; 
public static final String SECURITY_TYPE_REQUEST = "v"; 
public static final String SECURITY_TYPES = "w"; 
public static final String SECURITY_LIST_REQUEST = "x"; 
public static final String SECURITY_LIST = "y"; 
public static final String DERIVATIVE_SECURITY_LIST_REQUEST = "z"; 
public static final String DERIVATIVE_SECURITY_LIST = "AA"; 
public static final String NEW_ORDER_MULTILEG = "AB"; 
public static final String MULTILEG_ORDER_CANCEL_REPLACE = "AC"; 
public static final String TRADE_CAPTURE_REPORT_REQUEST = "AD"; 
public static final String TRADE_CAPTURE_REPORT = "AE"; 
public static final String ORDER_MASS_STATUS_REQUEST = "AF"; 
public static final String QUOTE_REQUEST_REJECT = "AG"; 
public static final String RFQ_REQUEST = "AH"; 
public static final String QUOTE_STATUS_REPORT = "AI"; 
public static final String QUOTE_RESPONSE = "AJ"; 
public static final String CONFIRMATION = "AK"; 
public static final String POSITION_MAINTENANCE_REQUEST = "AL"; 
public static final String POSITION_MAINTENANCE_REPORT = "AM"; 
public static final String REQUEST_FOR_POSITIONS = "AN"; 
public static final String REQUEST_FOR_POSITIONS_ACK = "AO"; 
public static final String POSITION_REPORT = "AP"; 
public static final String TRADE_CAPTURE_REPORT_REQUEST_ACK = "AQ"; 
public static final String TRADE_CAPTURE_REPORT_ACK = "AR"; 
public static final String ALLOCATION_REPORT = "AS"; 
public static final String ALLOCATION_REPORT_ACK = "AT"; 
public static final String CONFIRMATION_ACK = "AU"; 
public static final String SETTLEMENT_INSTRUCTION_REQUEST = "AV"; 
public static final String ASSIGNMENT_REPORT = "AW"; 
public static final String COLLATERAL_REQUEST = "AX"; 
public static final String COLLATERAL_ASSIGNMENT = "AY"; 
public static final String COLLATERAL_RESPONSE = "AZ"; 
public static final String COLLATERAL_REPORT = "BA"; 
public static final String COLLATERAL_INQUIRY = "BB"; 
public static final String NETWORK_STATUS_REQUEST = "BC"; 
public static final String NETWORK_STATUS_RESPONSE = "BD"; 
public static final String USER_REQUEST = "BE"; 
public static final String USER_RESPONSE = "BF"; 
public static final String COLLATERAL_INQUIRY_ACK = "BG"; 
public static final String CONFIRMATION_REQUEST = "BH"; 

  public MsgType() 
  { 
    super(35);
  } 
  public MsgType(String data) 
  { 
    super(35, data);
  } 
} 

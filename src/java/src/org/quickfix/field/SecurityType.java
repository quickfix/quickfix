package org.quickfix.field; 
import org.quickfix.StringField; 
import java.util.Date; 

public class SecurityType extends StringField 
{ 
public static final String CORPORATE_BOND = "CORP"; 
public static final String CORPORATE_PRIVATE_PLACEMENT = "CPP"; 
public static final String CONVERTABLE_BOND = "CB"; 
public static final String DUAL_CURRENCY = "DUAL"; 
public static final String INDEX_LINKED = "XLINKD"; 
public static final String STRUCTURED_NOTES = "STRUCT"; 
public static final String YANKEE_CORPORATE_BOND = "YANK"; 
public static final String FOREIGN_EXCHANGE_CONTRACT = "FOR"; 
public static final String COMMON_STOCK = "CS"; 
public static final String PREFERED_STOCK = "PS"; 
public static final String BRADY_BOND = "BRADY"; 
public static final String US_TREASURY_BOND = "TBOND"; 
public static final String INTEREST_STRIP_FROM_ANY_BOND_OR_NOTE = "TINT"; 
public static final String TREASURY_INFLATION_PROTECTED_SECURITIES = "TIPS"; 
public static final String PRINCIPAL_STRIP_OF_A_CALLABLE_BOND_OR_NOTE = "TCAL"; 
public static final String PRINCIPAL_STRIP_FROM_A_NON_CALLABLE_BOND_OR_NOTE = "TPRN"; 
public static final String US_TREASURY_NOTE_BOND = "UST"; 
public static final String US_TREASURY_BILL = "USTB"; 
public static final String TERM_LOAN = "TERM"; 
public static final String REVOLVER_LOAN = "RVLV"; 
public static final String REVOLVER_TERM_LOAN = "RVLVTRM"; 
public static final String BRIDGE_LOAN = "BRIDGE"; 
public static final String LETTER_OF_CREDIT = "LOFC"; 
public static final String SWING_LINE_FACILITY = "SWING"; 
public static final String DEBTOR_IN_POSSESSION = "DINP"; 
public static final String DEFAULTED = "DEFLTED"; 
public static final String WITHDRAWN = "WITHDRN"; 
public static final String REPLACED = "REPLACD"; 
public static final String MATURED = "MATURED"; 
public static final String AMENDED_AND_RESTATED = "AMENDED"; 
public static final String RETIRED = "RETIRED"; 
public static final String BANKERS_ACCEPTANCE = "BA"; 
public static final String BANK_NOTES = "BN"; 
public static final String BILL_OF_EXCHANGES = "BOX"; 
public static final String CERTIFICATE_OF_DEPOSIT = "CD"; 
public static final String CALL_LOANS = "CL"; 
public static final String COMMERCIAL_PAPER = "CP"; 
public static final String DEPOSIT_NOTES = "DP"; 
public static final String LIQUIDITY_NOTES = "LQN"; 
public static final String MEDIUM_TERM_NOTES = "MTN"; 
public static final String OVERNITE = "ONITE"; 
public static final String PROMISSORY_NOTES = "PN"; 
public static final String PLAZOS_FIJOS = "PZFJ"; 
public static final String REPURCHASE_AGREEMENT = "RP"; 
public static final String REVERSE_REPURCHASE_AGREEMENT = "RVRP"; 
public static final String SHORT_TERM_LOAN_NOTE = "STN"; 
public static final String TIME_DEPOSIT = "TD"; 
public static final String EXTENDED_COMM_NOTE = "XCN"; 
public static final String AGENCY_POOLS = "POOL"; 
public static final String ASSET_BACKED_SECURITIES = "ABS"; 
public static final String CORP_MORTGAGE_BACKED_SECURITIES = "CMBS"; 
public static final String COLLATERALIZED_MORTGAGE_OBLIGATION = "CMO"; 
public static final String IOETTE_MORTGAGE = "IET"; 
public static final String MORTGAGE_BACKED_SECURITIES = "MBS"; 
public static final String MORTGAGE_INTEREST_ONLY = "MIO"; 
public static final String MORTGAGE_PRINCIPAL_ONLY = "MPO"; 
public static final String MORTGAGE_PRIVATE_PLACEMENT = "MPP"; 
public static final String MISCELLANEOUS_PASS_THROUGH = "MPT"; 
public static final String OTHER_ANTICIPATION_NOTES = "AN"; 
public static final String CERTIFICATE_OF_OBLIGATION = "COFO"; 
public static final String CERTIFICATE_OF_PARTICIPATION = "COFP"; 
public static final String GENERAL_OBLIGATION_BONDS = "GO"; 
public static final String MANDATORY_TENDER = "MT"; 
public static final String REVENUE_ANTICIPATION_NOTE = "RAN"; 
public static final String REVENUE_BONDS = "REV"; 
public static final String SPECIAL_ASSESSMENT = "SPCLA"; 
public static final String SPECIAL_OBLIGATION = "SPCLO"; 
public static final String SPECIAL_TAX = "SPCLT"; 
public static final String TAX_ANTICIPATION_NOTE = "TAN"; 
public static final String TAX_ALLOCATION = "TAXA"; 
public static final String TAX_EXEMPT_COMMERCIAL_PAPER = "TECP"; 
public static final String TAX_AND_REVENUE_ANTICIPATION_NOTE = "TRAN"; 
public static final String VARIABLE_RATE_DEMAND_NOTE = "VRDN"; 
public static final String WARRANT = "WAR"; 
public static final String MUTUAL_FUND = "MF"; 
public static final String MULTI_LEG_INSTRUMENT = "MLEG"; 
public static final String NO_SECURITY_TYPE = "NONE"; 
public static final String WILDCARD = "?"; 

  public SecurityType() 
  { 
    super(167);
  } 
  public SecurityType(String data) 
  { 
    super(167, data);
  } 
} 

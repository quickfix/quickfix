%option noyywrap

%{
int ignorePass;
int isFieldStart = 0;
int tabs;
int level = 0;
int lastLevel = 0;
char lastName[128];
char lastNum[5];
char ver[12];
int hasValues = 0;
int repeating = 0;

enum closeTag { fields, message, header, trailer } clTag;
enum messageCat { admin, app } msgCat;

char* condense( char* str, char *removeset )
{
  char *wptr, *rptr;
 
  for(wptr = rptr = str; *rptr != 0; ++rptr, ++wptr)
    if(strchr(removeset,*rptr))
      --wptr;
    else 
      *wptr = *rptr;

  *wptr = 0;
  return str;
}

char* removeDup( char* str, char dup )
{
  char* wptr, *rptr;

  if(strlen(str) <= 1) return str;
  for(wptr = str, rptr = str+1; *rptr != 0; ++rptr, ++wptr)
  {
    if(*rptr == *wptr && *wptr == dup)
      rptr++;
    *wptr = *(rptr - 1);
  }
  *wptr = *(rptr - 1);
  *(wptr+1) = 0;
  return str;
}

char* stripName( char* str, const char* trailer )
{
  char* ptr;
  for(; *str != '>'; ++str) 0;
  ptr = str + 1; 
  while(*ptr != trailer[0] || strncmp(trailer, ptr, strlen(trailer)))
  {
    *(ptr-1)=*ptr;
    ++ptr;
  }
  *(ptr-1) = 0;

  for(str; *str == ' '; ++str) {}
  return condense(str, "\222/ -");
}

char* up( char* str )
{
  char* ptr;
  for(ptr = str; *ptr != 0; ++ptr)
    *ptr = toupper(*ptr);
  return str;
}

char* replace( char* str, char x, char y )
{
  char* ptr;
  for(ptr = str; *ptr != 0; ++ptr)
    if(*ptr == x) *ptr = y;
  return str;
}

char* type( char* str )
{
  static char dayofmonth[11] = "DAYOFMONTH";
  static char monthyear[10] = "MONTHYEAR";
  static char qty[4] = "QTY";

  if(!strcmp("DAY-OF-MONTH", str))
    return dayofmonth;
  else if(!strcmp("MONTH-YEAR", str))
    return monthyear;
  else if(!strcmp("QUANTITY", str))
    return qty;
  else
    return str;
}

char* msg( char* str )
{
  static char ordercancelreplacerequest[26] = "OrderCancelReplaceRequest";
  if(!strcmp("CancelReplaceRequest", str))
    return ordercancelreplacerequest;
  else
    return str;
}

char* value( char* str )
{
  static char unknown[8] = "UNKNOWN";
  static char forexlimit[12] = "FOREX_LIMIT";
  static char forexswap[11] = "FOREX_SWAP";
  static char forexpreviouslyquoted[24] = "FOREX_PREVIOUSLY_QUOTED";
  static char tplus2[7] = "TPLUS2";
  static char tplus3[7] = "TPLUS3";
  static char tplus4[7] = "TPLUS4";
  static char tplus5[7] = "TPLUS5";
  static char fixedpeg[10] = "FIXED_PEG";
  static char shortexemptaffiliated[24] = "SHORT_EXEMPT_AFFILIATED";
  static char shortexemptnotaffiliated[28] = "SHORT_EXEMPT_NOT_AFFILIATED";
  static char shortexemptnonmember[23] = "SHORT_EXEMPT_NONMEMBER";
  static char alreadypending[16] = "ALREADY_PENDING";
  static char duplicateverbal[16] = "DUPLICATE_VERBAL";
  static char yes[4] = "YES";
  static char no[3] = "NO";
  static char snapshotplusupdates[22] = "SNAPSHOT_PLUS_UPDATES";
  static char treasuriesplusagencydebenture[33] = "TREASURIES_PLUS_AGENCY_DEBENTURE";
  static char disableprevious[17] = "DISABLE_PREVIOUS";
  static char noneother[11] = "NONE_OTHER";
  static char fiveyear[7] = "FIVEYR";
  static char tenyear[6] = "TENYR";
  static char thirtyyear[9] = "THIRTYYR";
  static char threemolibor[13] = "THREEMOLIBOR";
  static char sixmolibor[11] = "SIXMOLIBOR";

  if(!strcmp("FOREX__LIMIT", str))
    return forexlimit;
  if(!strcmp("FOREX__SWAP", str))
    return forexswap;
  if(!strcmp("FOREX__PREVIOUSLY_QUOTED", str))
    return forexpreviouslyquoted;
  if(!strcmp("T+2", str))
    return tplus2;
  if(!strcmp("T+3", str))
    return tplus3;
  if(!strcmp("T+4", str))
    return tplus4;
  if(!strcmp("T+_5", str))
    return tplus5;
  if(!strcmp("FIXED_PEG_TO_LOCAL_BEST_BID_OR_OFFER_AT_TIME_OF_ORDER", str))
    return fixedpeg;
  if(!strcmp("SHORT_EXEMPT_TRANSACTION_FOR_MEMBER_COMPETING_MARKETMAKER_AFFILIATED_WITH_THE_FIRM_CLEARING_THE_TRADE", str))
    return shortexemptaffiliated;
  if(!strcmp("SHORT_EXEMPT_TRANSACTION_FOR_MEMBER_COMPETING_MARKETMAKER_NOT_AFFILIATED_WITH_THE_FIRM_CLEARING_THE_TRADE", str))
    return shortexemptnotaffiliated;
  if(!strcmp("SHORT_EXEMPT_TRANSACTION_FOR_NONMEMBER_COMPETING_MARKETMAKER", str))
    return shortexemptnonmember;
  if(!strcmp("ORDER_ALREADY_IN_PENDING_CANCEL_OR_PENDING_REPLACE_STATUS", str))
    return alreadypending;
  if(!strcmp("DUPLICATE_OF_A_VERBALLY_COMMUNICATED_ORDER", str))
    return duplicateverbal;
  if(!strcmp("INDICATES_THAT_PARTY_RECEIVING_MESSAGE_MUST_REPORT_TRADE", str))
    return yes;
  if(!strcmp("INDICATES_THAT_PARTY_SENDING_MESSAGE_WILL_REPORT_TRADE", str))
    return no;
  if(!strcmp("INDICATES_THE_BROKER_IS_RESPONSIBLE_FOR_LOCATING_THE_STOCK", str))
    return yes;
  if(!strcmp("INDICATES_THE_BROKER_IS_NOT_REQUIRED_TO_LOCATE", str))
    return no;
  if(!strcmp("EXECUTE_FOREX_AFTER_SECURITY_TRADE", str))
    return yes;
  if(!strcmp("DO_NOT_EXECUTE_FOREX_AFTER_SECURITY_TRADE", str))
    return no;
  if(!strcmp("SNAPSHOT_+_UPDATES", str))
    return snapshotplusupdates;
  if(!strcmp("TREASURIES_+_AGENCY_DEBENTURE", str))
    return treasuriesplusagencydebenture;
  if(!strcmp("DISABLE_PREVIOUS_SNAPSHOT_+_UPDATE_REQUEST", str))
    return disableprevious;
  if(!strcmp("NONE__OTHER", str))
    return noneother;
  if(!strcmp("5YR", str))  
    return fiveyear;
  if(!strcmp("10YR", str))
    return tenyear;
  if(!strcmp("30YR", str))
    return thirtyyear;
  if(!strcmp("3MOLIBOR", str))
    return threemolibor;
  if(!strcmp("6MOLIBOR", str))
    return sixmolibor;
  if(!strcmp("", str))
    return unknown;
  else
    return str;
}

char* version()
{
  char* ptr = ver;
  ptr += 8;
  return ptr;
}

int alpha( char* str )
{
  char* ptr;
  for(ptr = str; *ptr != 0; ++ptr)
    if(!isalpha(*ptr)) return 0;
  return 1;
}

void printTabs()
{
  int i;
  for( i = 0; i < tabs; ++i )
    printf("  ");
}

int skip( char* str )
{
  if(strcmp("24", str) == 0)
  { 
    printTabs();
    if((clTag != message) && (clTag != header) && (clTag != trailer))
      printf("<field number=\"24\" name=\"IOIOthSvc\" type=\"CHAR\"/>\n");
    else
      printf("<field name=\"IOIOthSvc\" type=\"CHAR\"/>\n");
  }

  return !strcmp("101", str) 
     || !strcmp("24", str)
     || !strcmp("51", str);
}

void fieldsStart()
{
  isFieldStart = 1;
  clTag = fields;
  tabs--; printTabs();
  printf("</messages>\n");
  printTabs(); tabs++;
  printf("<fields>\n");
}

void fieldsEnd()
{
  switch(clTag)
  {
  case fields:
    --tabs; printTabs();
    printf("</fields>\n");
    break;
  case header:
    for(; lastLevel > 0; --lastLevel)
    {
      --tabs; printTabs();
      printf("</group>\n");
    } level = 0; lastLevel = 0;

    --tabs; printTabs(); --tabs;
    printf("</header>\n");
    break;
  case trailer:
    --tabs; printTabs(); --tabs;
    printf("</trailer>\n");
    ++tabs; printTabs(); tabs++;
    printf("<messages>\n");
    break;
  case message:
    for(; lastLevel > 0; --lastLevel)
    {
      --tabs; printTabs();
      printf("</group>\n");
    } level = 0; lastLevel = 0;

    --tabs; printTabs();
    printf("</message>\n"); 
    break;
  };
}

%}

%s HTML
%s html_fs
%s html_fnum
%s html_fname
%s html_fend
%s html_values
%s html_msgcat
%s html_msgtype

VERSION "Version "[0-9].[0-9]
MSGTYPE "MsgType = "[0-9a-zA-z]

HTML [<][ \t]*[Hh][Tt][Mm][Ll]
HTML_FIELDS_START ">Field Definitions<"
HTML_FIELDS_END "</TABLE>"
HTML_FIELDNUM [>][0-9]+"</FONT>"
HTML_FIELDNUM2 [>][0-9]+"</B></I></FONT>"
HTML_FIELDNUM3 [>][0-9]+"</P>"
HTML_FIELDNUM4 [>][0-9]+"</I></FONT>"
HTML_FIELDNAME [>][ ()A-Za-z0-9]+"</FONT>"
HTML_FIELDNAME2 [>][ ()A-Za-z0-9]+"</P>"
HTML_FIELDNAME3 [>][ ()A-Za-z0-9]+"</B></I></FONT>"
HTML_FIELDNAME4 [>][ ()A-Za-z0-9]+"</DIR>"
HTML_FIELDNAME5 [>][ ()A-Za-z0-9]+"</I></FONT>"
HTML_BADNAME [>][()A-Za-z0-9]+"<BR>"
HTML_BADNAME2 ">(Not Defined)<"
HTML_FIELDTYPE [>][ /\-A-Za-z]+[*]?"</FONT>"
HTML_FIELDTYPE2 [>][ /\-A-Za-z]+[*]?"</DIR>"
HTML_FIELDTYPE3 [>][ /\-A-Za-z]+[*]?"</B></I></FONT>"
HTML_FIELDTYPE4 [>][ /\-A-Za-z]+[*]?"</P>"
HTML_FIELDTYPE5 [>][ /\-A-Za-z]+[*]?"</I></FONT>"
HTML_FIELDTYPE6 [>][ /\-A-Za-z]+[*]?"</B></FONT>"
HTML_FIELDTYPE7 [>][ /\-A-Za-z]+[*]?"</B></I></FONT>"
HTML_FIELDEND "</TR>"
HTML_HEADER [>]"Standard Message Header"[<]
HTML_HEADER2 [>]"Message Header"[<]
HTML_TRAILER [>]"Standard Message Trailer"[<]
HTML_TRAILER2 [>]"Message Trailer"[<]
HTML_MSGCATEGORY ">"[A-Z]+" MESSAGES<"
HTML_MSGSTART "</FONT><B><P ALIGN=\"CENTER\">"[\222.A-Za-z\- /]+"</P>"
HTML_MSGSTART2 "=\"CENTER\">"[\222.A-Za-z\- /]+"</P>"
HTML_MSGSTARTPAR "=\"CENTER\">"[\222A-Za-z\- /]+"("[.A-Za-z)\- /]+"</P>"
HTML_LEVEL "<FONT FACE=\"Wingdings\">"[&][#]"224"
HTML_VALIDVALUES [Vv]"alid "[Vv]"alues:"
HTML_VALUE ">"[a-zA-Z0-9 ]*=[ ,/\-\+'0-9A-Za-z]*
HTML_VALUE2 ">"[a-zA-Z0-9]*"&#9;=&#9;"[ ,/\-\+'0-9A-Za-z]*
HTML_VALUE3 ">"[a-zA-Z0-9 ]*"=&#9;"[ ,/\-\+'0-9A-Za-z]*

%%

<html_fs>{HTML_LEVEL} level++;
<html_fs>{HTML_FIELDNUM}|{HTML_FIELDNUM2}|{HTML_FIELDNUM3}|{HTML_FIELDNUM4} {
  stripName(yytext, "<");
  if(!skip(yytext))
  {
    repeating = 0;
    if(level > lastLevel) 
    {
      condense(lastName, " ");
      if(*lastName == 'N' && *(lastName+1) == 'o'
         || !strcmp(lastName, "LinesOfText"))
      {
        printTabs(); tabs++;
        printf("<group name=\"%s\">\n", lastName);
      }
      else
      {
        repeating = 1;
        --level;
      }
    }
    else if(level < lastLevel)
    {
      --tabs; printTabs();
      printf("</group>\n");
    }

    printTabs();
    strcpy(lastNum, yytext);
    printf("<field ");
    if((clTag != message) && (clTag != header) && (clTag != trailer))
      printf("number=\"%s\" ", yytext);
    ignorePass = 0;
    BEGIN(html_fnum);
  }
  else ignorePass = 1;
}

<html_fnum>({HTML_BADNAME}|{HTML_BADNAME2}) BEGIN(html_fname);
<html_fnum>{HTML_FIELDNAME}|{HTML_FIELDNAME2}|{HTML_FIELDNAME3}|{HTML_FIELDNAME4}|{HTML_FIELDNAME5} {
  if(!ignorePass)
  {
    condense(stripName(yytext, "<"), " ");
    strcpy(lastName, yytext);
    printf("name=\"%s\" ", condense(yytext, " "));
  }
  BEGIN(html_fname); 
}

<html_fname>{HTML_FIELDTYPE}|{HTML_FIELDTYPE2}|{HTML_FIELDTYPE4}|{HTML_FIELDTYPE5}|{HTML_FIELDTYPE6}|{HTML_FIELDTYPE7} {
  static char t[5] = "type";
  static char r[9] = "required";

  if(!ignorePass)
    printf("%s=\"%s\"",
      (clTag == message) || (clTag == header) || (clTag == trailer) ? r : t, 
      type(up(condense(stripName(yytext, "<")," *"))));
  
  if(repeating) printf(" repeating=\"Y\"");

  repeating = 0;
  lastLevel = level;
  level = 0;
  BEGIN(html_fend); 
}

<html_fend>{HTML_VALIDVALUES} {
  if(isFieldStart) BEGIN(html_values);
}
<html_fend>{HTML_FIELDEND} printf("/>\n"); BEGIN(html_fs);

<html_values>{HTML_VALUE}|{HTML_VALUE2}|{HTML_VALUE3} {
  if(strcmp(lastNum,"35"))
  {
    char* val = 0;
    char* str = 0;
    int desc_pos = 0;

    if(++hasValues == 1) printf(">\n");
    tabs++; printTabs();
    while(*(yytext+yyleng-1) == ' ')
      *(yytext+ --yyleng) = 0;
    while(*(yytext) == ' ' || *yytext == '>')
      yytext++;

    val = value(condense(replace(up(yytext),' ', '_'),",/'-"));
    removeDup(val, '_');
    str = (char*)strstr(val, "=&#9;");
    if(str)
      desc_pos = str - val + 5;
    else
      desc_pos = strcspn(val, "=") + 1;
    while(*(val+desc_pos) == '_') ++desc_pos;
 
    if(val && strlen(val+desc_pos) > 0)
    {
      char* i = 0;
      printf("<value enum=\"");
      for(i = val; *i != '=' && *i != ' ' 
	    && *i != '&' && *i != '_'; ++i)
      {
        printf("%c", *i);
      }
      printf("\" description=\"%s", value(val + desc_pos));

      if(!strcmp("SHORT_EXEMPT_TRANSACTION", val + desc_pos) ||
         !strcmp("COMPETING_DEALER_TRADES", val + desc_pos)) 
      { printf("_%c", *(--i)); }
      printf("\"/>\n");
    }
    else
      --hasValues;
      
    tabs--;
  }
}
<html_values>{HTML_FIELDEND} {
  if(hasValues)
  {
    printTabs();
    printf("</field>\n");
  }
  else printf("/>\n");

  hasValues = 0;
  BEGIN(html_fs);
}

<html_msgcat>{HTML_MSGCATEGORY} {
  msgCat = app;
}

<html_msgcat>{HTML_MSGSTARTPAR} {
  printTabs(); tabs++;
  printf("<message name=\"%s\" ", msg(stripName(yytext, " (")));
  BEGIN(html_msgtype);
}

<html_msgcat>{HTML_MSGSTART} {
  yytext = stripName(yytext+27, "<");
  if(strcmp("ResponsebyMessageType",yytext) == 0)
    BEGIN(HTML);
  else
  {
    printTabs(); tabs++;
    printf("<message name=\"%s\" ", msg(yytext));
    BEGIN(html_msgtype);
  }
}

<html_msgcat>{HTML_MSGSTART2} {
  yytext = stripName(yytext, "<");
  if(strcmp("ResponsebyMessageType",yytext) == 0)
    BEGIN(HTML);
  else
  {
    printTabs(); tabs++;
    printf("<message name=\"%s\" ", msg(yytext));
    BEGIN(html_msgtype);
  }
}

<html_msgtype>{MSGTYPE} {
  printf("msgtype=\"%c\" msgcat=\"%s\">\n", yytext[10], msgCat == admin ? "admin" : "app");
  BEGIN(html_fs);
}

<HTML>{VERSION} {
  char* verStr;
  strcpy(ver, yytext);
  verStr = (char*)strdup(version());
  verStr[1] = 0;
  printf("<fix major=\"%s\" minor=\"%s\">\n", verStr, verStr+2);
  free(verStr);
}

<HTML>{HTML_HEADER}|{HTML_HEADER2} {
  clTag = header;
  tabs++; printTabs(); tabs++;
  printf("<header>\n");
  BEGIN(html_fs);
}

<HTML>{HTML_TRAILER}|{HTML_TRAILER2} {
  clTag = trailer;
  tabs++; printTabs(); tabs++;
  printf("<trailer>\n");
  BEGIN(html_fs);
}

<HTML>{HTML_MSGCATEGORY} {
  msgCat = admin;
  clTag = message; 
  BEGIN(html_msgcat);
}

{HTML_FIELDS_START} {
  fieldsStart();
  BEGIN(html_fs);
}

<html_fs>{HTML_FIELDS_END} {
  switch(clTag)
  {
  case fields: case header: case trailer:
    fieldsEnd();
    BEGIN(HTML);
    break;
  case message:
    fieldsEnd();
    BEGIN(html_msgcat);
  }
}

<INITIAL>{HTML} BEGIN(HTML);
<INITIAL><<EOF>> return 1;
<<EOF>> printf("</fix>\n"); return 0;

%%

int main( int argc, char** argv )
{
  FILE* file;
  int ret;

  isFieldStart = 0;

  clTag = fields;
  file = fopen("/dev/null", "w");
  yyout = file;
  ret = yylex();
  close(file);
  return ret;
}

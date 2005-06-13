%option noyywrap

CH  [A-Za-z0-9]
ID  [A-Za-z][A-Za-z0-9]*
NUMBER [0-9]+
%s ft m mt comment

%%

<ft>^{NUMBER}"<>".*"(".*")".*"\r"?"\n" /* skip */

<ft>^{NUMBER}"<>" {
  yytext[yyleng-2] = 0;
  printf("    <field number='%s'", yytext);
}

<ft>{ID}"<>" {
  yytext[yyleng-2] = 0;
  printf(" name='%s'", yytext);
}

<ft>{ID}[ \t]*"\r"?"\n" {
  int i;
  for (i=0; i < yyleng && isalpha(yytext[i]); ++i)
  { yytext[i] = toupper(yytext[i]); }
  yytext[i] = 0;
  printf(" type='%s'/>\n", yytext);
}

<ft>"<F>" BEGIN(comment);

<comment>"<Fe>" BEGIN(ft);

<ft>"<Fte>" {
  BEGIN(INITIAL); 
  printf("  </fields>\n");
}

<m>"MsgType = "{CH}")"[ \t]*"\r"?"\n" {
  yytext += 10;
  yytext[1] = 0; 
  printf(" type='%s'", yytext);
}

<m>"<T>\r\n" puts(">"); BEGIN(mt);

<mt>{NUMBER}"<>"{ID}"<>"{CH}.*"\r"?"\n" {
  char* pos;
  char* end = yytext + yyleng;
  for (pos = yytext; pos < end && *pos != '<'; ++pos) 0;
  *pos = 0;
  printf("    <field number='%s'", yytext);
  pos += 2;
  for (yytext = pos; pos < end && *pos != '<'; ++pos) 0;
  *pos = 0;
  printf(" name='%s'", yytext);
  yytext = pos + 2;
  yytext[1] = 0;
  printf(" required='%s'/>\n", yytext);
}

<mt>"<Me>" {
  BEGIN(INITIAL);
  printf("  </message>\n");
}

<INITIAL>"<M>"{ID}" (" {
  BEGIN(m);
  yytext[yyleng-2] = 0;
  yytext += 3;
  printf("  <message name='%s'", yytext);
}

<INITIAL>"<FT>" {
  BEGIN(ft);
  printf("  <fields>\n");
}

. /* foo */
%%

int main()
{
  yyout = fopen("/dev/null", "w");
  
  puts("<fix>");
  yylex();
  puts("</fix>");

  fclose(yyout);
  return 0;
}


%{

#include <iostream>
#include "ConfigLexer.h"

%}

%option yyclass="ConfigLexer"
%option noyywrap

ID [A-Za-z0-9]*
VALUE [A-Za-z0-9\/.\\:_\- ]*

%s nv

%%

[\r\n[:space:]]*    /* eat the ws */

"#".*$  /* eat comments */

"["{ID}"]" {
		// looking for section like "[SECTION]" 
                if(*yytext == '#') break;
	 	yytext[yyleng-1] = 0; 
		yytext++; 
		return lcState = LC_STATE_SECTION;
	   }

{ID}"="    {
		// looking for ket like "key=" 
		BEGIN(nv); 
		yytext[yyleng-1] = 0; 
		return lcState = LC_STATE_NAME;
	   }
"#"{ID}"="{VALUE}

<nv>{VALUE} {
		// looking for value after =
		BEGIN(INITIAL); 
		return lcState = LC_STATE_VALUE;
            }
%%


/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

#ifndef YY_YY_SYNTAXE_COOKIE_TAB_H_INCLUDED
# define YY_YY_SYNTAXE_COOKIE_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    TOK_INCREMENTATION = 258,
    TOK_DECREMENTATION = 259,
    TOK_PLUS = 260,
    TOK_MOINS = 261,
    TOK_MUL = 262,
    TOK_DIV = 263,
    TOK_MOD = 264,
    TOK_PUISSANCE = 265,
    TOK_ET = 266,
    TOK_OU = 267,
    TOK_NOPE = 268,
    TOK_EQU = 269,
    TOK_DIFF = 270,
    TOK_SUP = 271,
    TOK_INF = 272,
    TOK_SUPEQU = 273,
    TOK_INFEQU = 274,
    TOK_PARG = 275,
    TOK_PARD = 276,
    TOK_ENTIER = 277,
    TOK_DECIMAL = 278,
    TOK_FONCTION = 279,
    TOK_APPEL = 280,
    TOK_RETURN = 281,
    TOK_VRAI = 282,
    TOK_FAUX = 283,
    TOK_AFFECT = 284,
    TOK_FINSTR = 285,
    TOK_IN = 286,
    TOK_CROG = 287,
    TOK_CROD = 288,
    TOK_COOKIE = 289,
    TOK_VARB = 290,
    TOK_VARE = 291,
    TOK_VARD = 292,
    TOK_VART = 293,
    TOK_SI = 294,
    TOK_ALORS = 295,
    TOK_SINON = 296,
    TOK_COMMENT = 297,
    TOK_AFFECT_PLUS = 298,
    TOK_AFFECT_MOINS = 299,
    TOK_AFFECT_MUL = 300,
    TOK_AFFECT_DIV = 301,
    TOK_AFFECT_MOD = 302,
    TOK_AFFECT_ET = 303,
    TOK_AFFECT_OU = 304,
    TOK_POINT_INTERROGATION = 305,
    TOK_DOUBLE_POINT = 306,
    TOK_FAIRE = 307,
    TOK_CROIX = 308,
    TOK_TEXTE = 309,
    TOK_SUPPR = 310,
    TOK_SAISIR = 311
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 18 "syntaxe_cookie.y" /* yacc.c:1909  */

	long entier;
	double decimal;
	char* texte;
	GNode*	noeud;

#line 118 "syntaxe_cookie.tab.h" /* yacc.c:1909  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_SYNTAXE_COOKIE_TAB_H_INCLUDED  */

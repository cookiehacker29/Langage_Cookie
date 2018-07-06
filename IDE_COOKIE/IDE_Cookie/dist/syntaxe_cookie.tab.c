/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 1 "syntaxe_cookie.y" /* yacc.c:339  */

#include "cookie.h"
bool error_syntaxical=false;
bool error_semantical=false;

GHashTable* table_variable;

void supprime_variable(GNode*);
bool decimal(GNode*);

typedef struct Variable Variable;
struct Variable{
	char* type;
	GNode* value;
};

#line 83 "syntaxe_cookie.tab.c" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "syntaxe_cookie.tab.h".  */
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
#line 18 "syntaxe_cookie.y" /* yacc.c:355  */

	long entier;
	double decimal;
	char* texte;
	GNode*	noeud;

#line 187 "syntaxe_cookie.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_SYNTAXE_COOKIE_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 204 "syntaxe_cookie.tab.c" /* yacc.c:358  */

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif


#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  3
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   581

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  57
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  30
/* YYNRULES -- Number of rules.  */
#define YYNRULES  103
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  227

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   311

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    94,    94,    98,   103,   105,   111,   118,   122,   125,
     130,   135,   140,   145,   150,   155,   160,   165,   170,   174,
     180,   185,   190,   195,   201,   208,   217,   222,   226,   236,
     245,   252,   257,   265,   270,   274,   304,   316,   328,   340,
     352,   364,   370,   376,   406,   418,   430,   442,   454,   466,
     472,   478,   508,   520,   532,   562,   574,   600,   626,   652,
     677,   688,   694,   699,   727,   738,   749,   768,   787,   791,
     795,   799,   803,   807,   811,   817,   823,   829,   834,   839,
     844,   863,   869,   876,   883,   889,   896,   903,   910,   917,
     924,   931,   938,   945,   953,   961,   969,   976,   982,  1000,
    1006,  1012,  1018,  1024
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "TOK_INCREMENTATION",
  "TOK_DECREMENTATION", "TOK_PLUS", "TOK_MOINS", "TOK_MUL", "TOK_DIV",
  "TOK_MOD", "TOK_PUISSANCE", "TOK_ET", "TOK_OU", "TOK_NOPE", "TOK_EQU",
  "TOK_DIFF", "TOK_SUP", "TOK_INF", "TOK_SUPEQU", "TOK_INFEQU", "TOK_PARG",
  "TOK_PARD", "TOK_ENTIER", "TOK_DECIMAL", "TOK_FONCTION", "TOK_APPEL",
  "TOK_RETURN", "TOK_VRAI", "TOK_FAUX", "TOK_AFFECT", "TOK_FINSTR",
  "TOK_IN", "TOK_CROG", "TOK_CROD", "TOK_COOKIE", "TOK_VARB", "TOK_VARE",
  "TOK_VARD", "TOK_VART", "TOK_SI", "TOK_ALORS", "TOK_SINON",
  "TOK_COMMENT", "TOK_AFFECT_PLUS", "TOK_AFFECT_MOINS", "TOK_AFFECT_MUL",
  "TOK_AFFECT_DIV", "TOK_AFFECT_MOD", "TOK_AFFECT_ET", "TOK_AFFECT_OU",
  "TOK_POINT_INTERROGATION", "TOK_DOUBLE_POINT", "TOK_FAIRE", "TOK_CROIX",
  "TOK_TEXTE", "TOK_SUPPR", "TOK_SAISIR", "$accept", "entree", "bloc_code",
  "code", "commentaire", "instruction", "variable_entiere",
  "variable_decimale", "variable_booleenne", "variable_texte", "condition",
  "condition_si", "condition_sinon", "boucle_for", "boucle_while",
  "boucle_do_while", "fonction", "appelFonction", "affectation", "saisie",
  "affichage", "suppression", "expression_arithmetique",
  "expression_booleenne", "expression_texte", "addition", "soustraction",
  "multiplication", "division", "modulo", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311
};
# endif

#define YYPACT_NINF -85

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-85)))

#define YYTABLE_NINF -4

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -85,    37,   107,   -85,   -85,   259,    12,    12,   201,   -85,
     -85,   -85,   -85,   259,   -85,   -85,    12,   -15,   -85,   -85,
      10,    91,     3,   -14,   -85,     8,   -85,   -85,   -85,   -85,
     -85,   -85,   -85,   -85,   -85,   134,   134,   259,   259,   -85,
     -85,   -85,   -85,   -85,   -85,   -85,   242,   263,   -85,   -85,
     -85,   -85,   -85,   -11,    31,   -85,   -85,   332,   181,    34,
     369,   111,    23,   149,    50,    51,    59,    61,    62,    80,
      81,   134,   134,   134,   134,   134,   134,    86,    88,   134,
     134,   134,   134,   134,   134,   259,   259,   259,   -26,   -26,
     -85,   -85,    89,   134,   173,   173,    44,   350,   545,   -85,
     -85,   134,   134,   134,   134,   134,   134,   134,   134,   134,
     134,   134,    68,    -8,   134,   259,   259,   259,   259,    74,
     -85,   -85,   -85,   -85,   -85,   -85,   109,   -85,   -85,   -85,
     -85,   -85,   -85,   -85,   312,   386,   398,   405,   414,   433,
     -85,   -85,   442,   449,   461,   477,   489,   496,   204,   255,
     506,   100,   117,   -85,   -85,   534,   -85,   -85,   173,   173,
     -85,   -85,   -85,   572,   572,   572,   572,   572,   572,   -85,
     134,   134,    39,    44,    44,   -85,   -85,   -85,   118,   -85,
     259,   -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,
     -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,   122,   505,
     524,   -85,   134,   -24,   -85,   553,   -85,   134,   134,   123,
     541,   -85,   -85,   125,   294,   301,   -85,   -85,   128,   -85,
     -85,   -85,   -85,   -85,   130,   -85,   -85
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       4,     0,     0,     1,     7,     0,     0,     0,     0,    21,
      19,    20,    22,     0,     8,     4,     0,     0,     5,     6,
       0,     0,     0,     0,    11,     0,    12,    13,    14,    17,
      18,     9,    16,    10,    15,     0,     0,     0,     0,    64,
      65,    78,    79,    66,    67,    80,     0,     0,    68,    69,
      70,    71,    72,     0,     0,    97,    98,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      23,     4,     0,     0,    73,    76,    81,     0,     0,    74,
      75,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       4,    34,    60,    61,    62,     4,     0,    63,    57,    59,
      58,    56,    41,    42,     0,     0,     0,     0,     0,     0,
      49,    50,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    27,    24,     0,    77,    84,    99,   100,
     101,   102,   103,    87,    88,    89,    90,    91,    92,     4,
       0,     0,     0,    82,    83,    85,    86,     4,     0,    26,
       0,    35,    36,    37,    38,    39,    40,    43,    44,    45,
      46,    47,    48,    51,    52,    53,    54,    55,     0,     0,
       0,     4,     0,     0,    33,     0,    28,     0,     0,     0,
       0,    31,     4,     0,     0,     0,    29,     4,     0,    32,
      95,    93,    96,    94,     0,    25,    30
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -85,   -85,   -84,   161,   -85,   -85,    -1,     0,     9,     2,
     -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,
     -85,   -85,    -5,    -3,    -2,   -85,   -85,   -85,   -85,   -85
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     1,    62,    63,    18,    19,    43,    44,    45,    56,
      24,    25,    92,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    60,    47,    59,    48,    49,    50,    51,    52
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      46,    20,    21,    57,    23,    58,   211,   153,    53,    54,
      61,    22,    12,    69,    70,    88,    65,    66,    64,    68,
       9,    10,    11,    12,   170,   171,    67,   212,    55,    89,
      94,    95,    85,    97,    96,    98,   178,     3,    90,    71,
     120,   179,    99,   100,   101,   102,   103,   104,   105,    91,
      12,    86,    87,    72,    73,    74,    75,    76,   117,   118,
     201,   121,    20,    21,   124,    23,   134,   135,   136,   137,
     138,   139,    22,   126,   142,   143,   144,   145,   146,   147,
     127,   128,   148,   149,   150,   198,   151,   152,   155,   129,
     202,   130,   131,   203,    77,    78,   158,   159,   160,   161,
     162,   163,   164,   165,   166,   167,   168,    -2,     4,   172,
     132,   133,   173,   174,   175,   176,   140,   209,   141,   154,
      79,   169,   115,   116,   177,   117,   118,     5,   218,   180,
     196,     6,     7,   224,    80,    81,    82,    83,    84,    35,
      36,     8,     9,    10,    11,    12,    13,   197,   204,    14,
       4,   125,   206,   216,    93,   219,    39,    40,   225,    15,
     226,     2,    16,    17,     0,   199,   200,     0,     0,     5,
      10,    11,     0,     6,     7,     0,     0,   205,     0,    -3,
     103,   104,   105,     8,     9,    10,    11,    12,    13,     0,
      -3,    14,   115,   116,     0,   117,   118,   210,     0,    -3,
      -3,    15,   214,   215,    16,    17,    35,    36,     0,     0,
       0,   123,     0,     0,    37,   115,   116,     0,   117,   118,
       0,    38,     0,    39,    40,     0,     0,     0,    41,    42,
       0,     0,     0,     0,   193,     0,     9,    10,    11,    12,
       0,     0,     0,     0,     0,    99,   100,   101,   102,   103,
     104,   105,     0,     0,     0,    55,   106,   107,   108,   109,
     110,   111,     0,   112,    35,    36,   115,   116,     0,   117,
     118,     0,    37,   113,   115,   116,     0,   117,   118,    38,
       0,    39,    40,     0,   119,   194,    41,    42,     0,     0,
       0,     0,     0,   114,     9,    10,    11,    99,   100,   101,
     102,   103,   104,   105,    99,   100,   101,   102,   103,   104,
     105,     0,     0,     0,     0,    99,   100,   101,   102,   103,
     104,   105,     0,     0,     0,     0,   220,   221,     0,     0,
       0,     0,     0,   222,   223,    99,   100,   101,   102,   103,
     104,   105,   181,     0,     0,     0,   106,   107,   108,   109,
     110,   111,     0,    99,   100,   101,   102,   103,   104,   105,
       0,     0,   122,   113,   106,   107,   108,   109,   110,   111,
       0,   156,    99,   100,   101,   102,   103,   104,   105,     0,
       0,   113,     0,   106,   107,   108,   109,   110,   111,    99,
     100,   101,   102,   103,   104,   105,     0,     0,     0,     0,
     113,    99,   100,   101,   102,   103,   104,   105,    99,   100,
     101,   102,   103,   104,   105,     0,   182,    99,   100,   101,
     102,   103,   104,   105,     0,     0,     0,     0,   183,     0,
       0,     0,     0,     0,     0,   184,    99,   100,   101,   102,
     103,   104,   105,     0,   185,    99,   100,   101,   102,   103,
     104,   105,    99,   100,   101,   102,   103,   104,   105,     0,
       0,     0,     0,   186,    99,   100,   101,   102,   103,   104,
     105,     0,   187,     0,     0,     0,     0,     0,     0,   188,
      99,   100,   101,   102,   103,   104,   105,     0,     0,     0,
       0,   189,    99,   100,   101,   102,   103,   104,   105,    99,
     100,   101,   102,   103,   104,   105,     0,   190,    99,   100,
     101,   102,   103,   104,   105,     0,     0,   115,   116,   191,
     117,   118,     0,     0,     0,     0,   192,    99,   100,   101,
     102,   103,   104,   105,     0,   207,   195,    99,   100,   101,
     102,   103,   104,   105,    99,   100,   101,   102,   103,   104,
     105,     0,     0,     0,   208,   156,   115,   116,     0,   117,
     118,     0,   217,     0,   115,   116,   157,   117,   118,     0,
       0,     0,     0,     0,   213,    99,   100,   101,   102,   103,
     104,   105
};

static const yytype_int16 yycheck[] =
{
       5,     2,     2,     8,     2,     8,    30,    91,     6,     7,
      13,     2,    38,     3,     4,    29,    17,    17,    16,    17,
      35,    36,    37,    38,    32,    33,    17,    51,    54,    43,
      35,    36,    29,    38,    37,    38,   120,     0,    30,    29,
      51,   125,     3,     4,     5,     6,     7,     8,     9,    41,
      38,    48,    49,    43,    44,    45,    46,    47,    14,    15,
      21,    30,    63,    63,    30,    63,    71,    72,    73,    74,
      75,    76,    63,    50,    79,    80,    81,    82,    83,    84,
      30,    30,    85,    86,    87,   169,    88,    89,    93,    30,
      51,    30,    30,   177,     3,     4,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,     0,     1,   114,
      30,    30,   115,   116,   117,   118,    30,   201,    30,    30,
      29,    53,    11,    12,    50,    14,    15,    20,   212,    20,
      30,    24,    25,   217,    43,    44,    45,    46,    47,     5,
       6,    34,    35,    36,    37,    38,    39,    30,    30,    42,
       1,    40,    30,    30,    20,    30,    22,    23,    30,    52,
      30,     0,    55,    56,    -1,   170,   171,    -1,    -1,    20,
      36,    37,    -1,    24,    25,    -1,    -1,   180,    -1,    30,
       7,     8,     9,    34,    35,    36,    37,    38,    39,    -1,
      41,    42,    11,    12,    -1,    14,    15,   202,    -1,    50,
      51,    52,   207,   208,    55,    56,     5,     6,    -1,    -1,
      -1,    30,    -1,    -1,    13,    11,    12,    -1,    14,    15,
      -1,    20,    -1,    22,    23,    -1,    -1,    -1,    27,    28,
      -1,    -1,    -1,    -1,    30,    -1,    35,    36,    37,    38,
      -1,    -1,    -1,    -1,    -1,     3,     4,     5,     6,     7,
       8,     9,    -1,    -1,    -1,    54,    14,    15,    16,    17,
      18,    19,    -1,    21,     5,     6,    11,    12,    -1,    14,
      15,    -1,    13,    31,    11,    12,    -1,    14,    15,    20,
      -1,    22,    23,    -1,    21,    30,    27,    28,    -1,    -1,
      -1,    -1,    -1,    51,    35,    36,    37,     3,     4,     5,
       6,     7,     8,     9,     3,     4,     5,     6,     7,     8,
       9,    -1,    -1,    -1,    -1,     3,     4,     5,     6,     7,
       8,     9,    -1,    -1,    -1,    -1,    32,    33,    -1,    -1,
      -1,    -1,    -1,    32,    33,     3,     4,     5,     6,     7,
       8,     9,    30,    -1,    -1,    -1,    14,    15,    16,    17,
      18,    19,    -1,     3,     4,     5,     6,     7,     8,     9,
      -1,    -1,    30,    31,    14,    15,    16,    17,    18,    19,
      -1,    21,     3,     4,     5,     6,     7,     8,     9,    -1,
      -1,    31,    -1,    14,    15,    16,    17,    18,    19,     3,
       4,     5,     6,     7,     8,     9,    -1,    -1,    -1,    -1,
      31,     3,     4,     5,     6,     7,     8,     9,     3,     4,
       5,     6,     7,     8,     9,    -1,    30,     3,     4,     5,
       6,     7,     8,     9,    -1,    -1,    -1,    -1,    30,    -1,
      -1,    -1,    -1,    -1,    -1,    30,     3,     4,     5,     6,
       7,     8,     9,    -1,    30,     3,     4,     5,     6,     7,
       8,     9,     3,     4,     5,     6,     7,     8,     9,    -1,
      -1,    -1,    -1,    30,     3,     4,     5,     6,     7,     8,
       9,    -1,    30,    -1,    -1,    -1,    -1,    -1,    -1,    30,
       3,     4,     5,     6,     7,     8,     9,    -1,    -1,    -1,
      -1,    30,     3,     4,     5,     6,     7,     8,     9,     3,
       4,     5,     6,     7,     8,     9,    -1,    30,     3,     4,
       5,     6,     7,     8,     9,    -1,    -1,    11,    12,    30,
      14,    15,    -1,    -1,    -1,    -1,    30,     3,     4,     5,
       6,     7,     8,     9,    -1,    30,    30,     3,     4,     5,
       6,     7,     8,     9,     3,     4,     5,     6,     7,     8,
       9,    -1,    -1,    -1,    30,    21,    11,    12,    -1,    14,
      15,    -1,    21,    -1,    11,    12,    21,    14,    15,    -1,
      -1,    -1,    -1,    -1,    21,     3,     4,     5,     6,     7,
       8,     9
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    58,    60,     0,     1,    20,    24,    25,    34,    35,
      36,    37,    38,    39,    42,    52,    55,    56,    61,    62,
      63,    64,    65,    66,    67,    68,    70,    71,    72,    73,
      74,    75,    76,    77,    78,     5,     6,    13,    20,    22,
      23,    27,    28,    63,    64,    65,    79,    80,    82,    83,
      84,    85,    86,    66,    66,    54,    66,    79,    80,    81,
      79,    80,    59,    60,    66,    63,    64,    65,    66,     3,
       4,    29,    43,    44,    45,    46,    47,     3,     4,    29,
      43,    44,    45,    46,    47,    29,    48,    49,    29,    43,
      30,    41,    69,    20,    79,    79,    80,    79,    80,     3,
       4,     5,     6,     7,     8,     9,    14,    15,    16,    17,
      18,    19,    21,    31,    51,    11,    12,    14,    15,    21,
      51,    30,    30,    30,    30,    40,    50,    30,    30,    30,
      30,    30,    30,    30,    79,    79,    79,    79,    79,    79,
      30,    30,    79,    79,    79,    79,    79,    79,    80,    80,
      80,    81,    81,    59,    30,    79,    21,    21,    79,    79,
      79,    79,    79,    79,    79,    79,    79,    79,    79,    53,
      32,    33,    79,    80,    80,    80,    80,    50,    59,    59,
      20,    30,    30,    30,    30,    30,    30,    30,    30,    30,
      30,    30,    30,    30,    30,    30,    30,    30,    59,    79,
      79,    21,    51,    59,    30,    80,    30,    30,    30,    59,
      79,    30,    51,    21,    79,    79,    30,    21,    59,    30,
      32,    33,    32,    33,    59,    30,    30
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    57,    58,    59,    60,    60,    60,    60,    61,    62,
      62,    62,    62,    62,    62,    62,    62,    62,    62,    63,
      64,    65,    66,    67,    67,    67,    68,    69,    70,    70,
      70,    71,    72,    73,    74,    75,    75,    75,    75,    75,
      75,    75,    75,    75,    75,    75,    75,    75,    75,    75,
      75,    75,    75,    75,    75,    75,    76,    76,    76,    76,
      77,    77,    77,    78,    79,    79,    79,    79,    79,    79,
      79,    79,    79,    79,    79,    79,    79,    79,    80,    80,
      80,    80,    80,    80,    80,    80,    80,    80,    80,    80,
      80,    80,    80,    80,    80,    80,    80,    81,    81,    82,
      83,    84,    85,    86
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     0,     2,     2,     2,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     2,     3,     8,     4,     2,     6,     7,
       9,     6,     7,     5,     3,     4,     4,     4,     4,     4,
       4,     3,     3,     4,     4,     4,     4,     4,     4,     3,
       3,     4,     4,     4,     4,     4,     3,     3,     3,     3,
       3,     3,     3,     3,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     2,     2,     2,     2,     3,     1,     1,
       1,     2,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     7,     7,     7,     7,     1,     1,     3,
       3,     3,     3,     3
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
do                                                              \
  if (yychar == YYEMPTY)                                        \
    {                                                           \
      yychar = (Token);                                         \
      yylval = (Value);                                         \
      YYPOPSTACK (yylen);                                       \
      yystate = *yyssp;                                         \
      goto yybackup;                                            \
    }                                                           \
  else                                                          \
    {                                                           \
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;                                                  \
    }                                                           \
while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                                              );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
yystrlen (const char *yystr)
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            /* Fall through.  */
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        YYSTYPE *yyvs1 = yyvs;
        yytype_int16 *yyss1 = yyss;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * sizeof (*yyssp),
                    &yyvs1, yysize * sizeof (*yyvsp),
                    &yystacksize);

        yyss = yyss1;
        yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yytype_int16 *yyss1 = yyss;
        union yyalloc *yyptr =
          (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
                  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:
#line 94 "syntaxe_cookie.y" /* yacc.c:1646  */
    {
				genere_code((yyvsp[0].noeud));
				g_node_destroy((yyvsp[0].noeud));
			}
#line 1516 "syntaxe_cookie.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 98 "syntaxe_cookie.y" /* yacc.c:1646  */
    {
				(yyval.noeud)=g_node_new((gpointer)BLOC_CODE);
				g_node_append((yyval.noeud),(yyvsp[0].noeud));
				supprime_variable((yyvsp[0].noeud));
			}
#line 1526 "syntaxe_cookie.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 103 "syntaxe_cookie.y" /* yacc.c:1646  */
    {(yyval.noeud)=g_node_new((gpointer)CODE_VIDE);}
#line 1532 "syntaxe_cookie.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 105 "syntaxe_cookie.y" /* yacc.c:1646  */
    {
			(yyval.noeud)=g_node_new((gpointer)SEQUENCE);
			g_node_append((yyval.noeud),(yyvsp[-1].noeud));
			g_node_append((yyval.noeud),(yyvsp[0].noeud));
		}
#line 1542 "syntaxe_cookie.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 111 "syntaxe_cookie.y" /* yacc.c:1646  */
    {
			printf("Resultat : C'est une instruction valide !\n\n");
			(yyval.noeud)=g_node_new((gpointer)SEQUENCE);
			g_node_append((yyval.noeud),(yyvsp[-1].noeud));
			g_node_append((yyval.noeud),(yyvsp[0].noeud));
		}
#line 1553 "syntaxe_cookie.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 118 "syntaxe_cookie.y" /* yacc.c:1646  */
    {
			fprintf(stderr,"\tERREUR : Erreur de syntaxe a la ligne %d.\n",lineno);
 			error_syntaxical=true;
		}
#line 1562 "syntaxe_cookie.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 122 "syntaxe_cookie.y" /* yacc.c:1646  */
    {
					(yyval.noeud)=g_node_new((gpointer)CODE_VIDE);
				}
#line 1570 "syntaxe_cookie.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 125 "syntaxe_cookie.y" /* yacc.c:1646  */
    {
			printf("\tInstruction type Affectation\n");
			(yyval.noeud)=(yyvsp[0].noeud);
 		}
#line 1579 "syntaxe_cookie.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 130 "syntaxe_cookie.y" /* yacc.c:1646  */
    {
			printf("\tInstruction type Affichage\n");
			(yyval.noeud)=(yyvsp[0].noeud);
		}
#line 1588 "syntaxe_cookie.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 135 "syntaxe_cookie.y" /* yacc.c:1646  */
    {
		    printf("Condition si/sinon\n");
		    (yyval.noeud)=(yyvsp[0].noeud);
		}
#line 1597 "syntaxe_cookie.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 140 "syntaxe_cookie.y" /* yacc.c:1646  */
    {
			printf("Boucle repetee\n");
			(yyval.noeud)=(yyvsp[0].noeud);
		}
#line 1606 "syntaxe_cookie.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 145 "syntaxe_cookie.y" /* yacc.c:1646  */
    {
			printf("Boucle tant que\n");
			(yyval.noeud)=(yyvsp[0].noeud);
		}
#line 1615 "syntaxe_cookie.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 150 "syntaxe_cookie.y" /* yacc.c:1646  */
    {
			printf("Boucle faire tant que\n");
			(yyval.noeud)=(yyvsp[0].noeud);
		}
#line 1624 "syntaxe_cookie.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 155 "syntaxe_cookie.y" /* yacc.c:1646  */
    {
			printf("\tInstruction type Suppression\n");
			(yyval.noeud)=(yyvsp[0].noeud);
		}
#line 1633 "syntaxe_cookie.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 160 "syntaxe_cookie.y" /* yacc.c:1646  */
    {
			printf("\tInstruction type Saisie\n");
			(yyval.noeud)=(yyvsp[0].noeud);
		}
#line 1642 "syntaxe_cookie.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 165 "syntaxe_cookie.y" /* yacc.c:1646  */
    {
			printf("Fonction\n");
			(yyval.noeud)=(yyvsp[0].noeud);
		}
#line 1651 "syntaxe_cookie.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 170 "syntaxe_cookie.y" /* yacc.c:1646  */
    {
			printf("Appel\n");
			(yyval.noeud)=(yyvsp[0].noeud);
		}
#line 1660 "syntaxe_cookie.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 174 "syntaxe_cookie.y" /* yacc.c:1646  */
    {
				printf("\t\t\tVariable entiere %s\n",(yyvsp[0].texte));
				(yyval.noeud)=g_node_new((gpointer)VARIABLE);
				g_node_append_data((yyval.noeud),strdup((yyvsp[0].texte)));
			}
#line 1670 "syntaxe_cookie.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 180 "syntaxe_cookie.y" /* yacc.c:1646  */
    {
				printf("\t\t\tVariable decimale %s\n",(yyvsp[0].texte));
				(yyval.noeud)=g_node_new((gpointer)VARIABLE);
				g_node_append_data((yyval.noeud),strdup((yyvsp[0].texte)));
			}
#line 1680 "syntaxe_cookie.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 185 "syntaxe_cookie.y" /* yacc.c:1646  */
    {
				printf("\t\t\tVariable booleenne %s\n",(yyvsp[0].texte));
				(yyval.noeud)=g_node_new((gpointer)VARIABLE);
				g_node_append_data((yyval.noeud),strdup((yyvsp[0].texte)));
			}
#line 1690 "syntaxe_cookie.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 190 "syntaxe_cookie.y" /* yacc.c:1646  */
    {
				printf("\t\t\tVariable texte %s\n",(yyvsp[0].texte));
				(yyval.noeud)=g_node_new((gpointer)VARIABLE);
				g_node_append_data((yyval.noeud),strdup((yyvsp[0].texte)));
			}
#line 1700 "syntaxe_cookie.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 195 "syntaxe_cookie.y" /* yacc.c:1646  */
    {
                    printf("\tCondition si\n");
                    (yyval.noeud)=g_node_new((gpointer)CONDITION_SI);
                    g_node_append((yyval.noeud),(yyvsp[-1].noeud));
                }
#line 1710 "syntaxe_cookie.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 201 "syntaxe_cookie.y" /* yacc.c:1646  */
    {
                    printf("\tCondition si/sinon\n");
                    (yyval.noeud)=g_node_new((gpointer)CONDITION_SI_SINON);
                    g_node_append((yyval.noeud),(yyvsp[-2].noeud));
                    g_node_append((yyval.noeud),(yyvsp[-1].noeud));
                }
#line 1721 "syntaxe_cookie.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 208 "syntaxe_cookie.y" /* yacc.c:1646  */
    {
                	printf("\tCondition si/sinon\n");
                    (yyval.noeud)=g_node_new((gpointer)CONDITION_SI_SINON);
                    g_node_append((yyval.noeud),g_node_new((gpointer)SI));
                    g_node_append(g_node_nth_child((yyval.noeud),0),(yyvsp[-6].noeud));
                    g_node_append(g_node_nth_child((yyval.noeud),0),(yyvsp[-3].noeud));
                    g_node_append((yyval.noeud),g_node_new((gpointer)SINON));
                    g_node_append(g_node_nth_child((yyval.noeud),1),(yyvsp[-1].noeud));
                }
#line 1735 "syntaxe_cookie.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 217 "syntaxe_cookie.y" /* yacc.c:1646  */
    {
                    (yyval.noeud)=g_node_new((gpointer)SI);
                    g_node_append((yyval.noeud),(yyvsp[-2].noeud));
                    g_node_append((yyval.noeud),(yyvsp[0].noeud));
                }
#line 1745 "syntaxe_cookie.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 222 "syntaxe_cookie.y" /* yacc.c:1646  */
    {
                        (yyval.noeud)=g_node_new((gpointer)SINON);
                        g_node_append((yyval.noeud),(yyvsp[0].noeud));
                    }
#line 1754 "syntaxe_cookie.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 226 "syntaxe_cookie.y" /* yacc.c:1646  */
    {
					(yyval.noeud)=g_node_new((gpointer)BOUCLE_FOR);
					g_node_append((yyval.noeud),g_node_new((gpointer)ENTIER));
					g_node_append_data(g_node_nth_child((yyval.noeud),0),strdup("0"));
					g_node_append((yyval.noeud),g_node_new((gpointer)ENTIER));
					g_node_append_data(g_node_nth_child((yyval.noeud),1),strdup("1"));
                    g_node_append((yyval.noeud),(yyvsp[-4].noeud));
                    g_node_append((yyval.noeud),(yyvsp[-1].noeud));
				}
#line 1768 "syntaxe_cookie.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 236 "syntaxe_cookie.y" /* yacc.c:1646  */
    {
					(yyval.noeud)=g_node_new((gpointer)BOUCLE_FOR);
					g_node_append((yyval.noeud),(yyvsp[-5].noeud));
					g_node_append((yyval.noeud),g_node_new((gpointer)ENTIER));
					g_node_append_data(g_node_nth_child((yyval.noeud),1),strdup("1"));
                    g_node_append((yyval.noeud),(yyvsp[-3].noeud));
                    g_node_append((yyval.noeud),(yyvsp[-1].noeud));
				}
#line 1781 "syntaxe_cookie.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 245 "syntaxe_cookie.y" /* yacc.c:1646  */
    {
					(yyval.noeud)=g_node_new((gpointer)BOUCLE_FOR);
					g_node_append((yyval.noeud),(yyvsp[-7].noeud));
                    g_node_append((yyval.noeud),(yyvsp[-5].noeud));
                    g_node_append((yyval.noeud),(yyvsp[-3].noeud));
                    g_node_append((yyval.noeud),(yyvsp[-1].noeud));
				}
#line 1793 "syntaxe_cookie.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 252 "syntaxe_cookie.y" /* yacc.c:1646  */
    {
					(yyval.noeud)=g_node_new((gpointer)BOUCLE_WHILE);
					g_node_append((yyval.noeud),(yyvsp[-4].noeud));
                    g_node_append((yyval.noeud),(yyvsp[-1].noeud));
				}
#line 1803 "syntaxe_cookie.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 257 "syntaxe_cookie.y" /* yacc.c:1646  */
    {
						(yyval.noeud)=g_node_new((gpointer)BOUCLE_DO_WHILE);
						g_node_append((yyval.noeud),(yyvsp[-5].noeud));
	                    g_node_append((yyval.noeud),(yyvsp[-2].noeud));
					}
#line 1813 "syntaxe_cookie.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 265 "syntaxe_cookie.y" /* yacc.c:1646  */
    {
              (yyval.noeud)=g_node_new((gpointer)METHODEVOID);
              g_node_append((yyval.noeud),(yyvsp[-3].noeud));
							g_node_append((yyval.noeud),(yyvsp[-1].noeud));
          }
#line 1823 "syntaxe_cookie.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 270 "syntaxe_cookie.y" /* yacc.c:1646  */
    {
								(yyval.noeud)=g_node_new((gpointer)APPELMETHODE);
								g_node_append((yyval.noeud),(yyvsp[-1].noeud));
							}
#line 1832 "syntaxe_cookie.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 274 "syntaxe_cookie.y" /* yacc.c:1646  */
    {
			/* $1 est la valeur du premier non terminal. Ici c'est la valeur du non terminal variable. $3 est la valeur du 2nd non terminal. */
			printf("\t\tAffectation sur la variable\n");
			Variable* var=g_hash_table_lookup(table_variable,(char*)g_node_nth_child((yyvsp[-3].noeud),0)->data);
			if(var==NULL){
				/* On cree une Variable et on lui affecte le type que nous connaissons et la valeur */
				var=malloc(sizeof(Variable));
				if(var!=NULL){
					var->type=strdup("entier");
					var->value=(yyvsp[-1].noeud);
					/* On l'insere dans la table de hachage (cle: <nom_variable> / valeur: <(type,valeur)>) */
					if(g_hash_table_insert(table_variable,g_node_nth_child((yyvsp[-3].noeud),0)->data,var)){
    					(yyval.noeud)=g_node_new((gpointer)AFFECTATIONE);
    					g_node_append((yyval.noeud),(yyvsp[-3].noeud));
    					g_node_append((yyval.noeud),(yyvsp[-1].noeud));
					}else{
					    fprintf(stderr,"ERREUR - PROBLEME CREATION VARIABLE !\n");
					    exit(-1);
					}
				}else{
					fprintf(stderr,"ERREUR - PROBLEME ALLOCATION MEMOIRE VARIABLE !\n");
					exit(-1);
				}
			}else{
				(yyval.noeud)=g_node_new((gpointer)AFFECTATION);
				g_node_append((yyval.noeud),(yyvsp[-3].noeud));
				g_node_append((yyval.noeud),(yyvsp[-1].noeud));
			}
		}
#line 1866 "syntaxe_cookie.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 304 "syntaxe_cookie.y" /* yacc.c:1646  */
    {
			Variable* var=g_hash_table_lookup(table_variable,(char*)g_node_nth_child((yyvsp[-3].noeud),0)->data);
			if(var==NULL){
				fprintf(stderr,"\tERREUR : Erreur de semantique a la ligne %d. Variable %s jamais declaree !\n",lineno,(char*)g_node_nth_child((yyvsp[-3].noeud),0)->data);
				error_semantical=true;
			}else{
				(yyval.noeud)=g_node_new((gpointer)AFFECTATION_PLUS);
				g_node_append((yyval.noeud),(yyvsp[-3].noeud));
				g_node_append((yyval.noeud),(yyvsp[-1].noeud));
			}
		}
#line 1882 "syntaxe_cookie.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 316 "syntaxe_cookie.y" /* yacc.c:1646  */
    {
			Variable* var=g_hash_table_lookup(table_variable,(char*)g_node_nth_child((yyvsp[-3].noeud),0)->data);
			if(var==NULL){
				fprintf(stderr,"\tERREUR : Erreur de semantique a la ligne %d. Variable %s jamais declaree !\n",lineno,(char*)g_node_nth_child((yyvsp[-3].noeud),0)->data);
				error_semantical=true;
			}else{
				(yyval.noeud)=g_node_new((gpointer)AFFECTATION_MOINS);
				g_node_append((yyval.noeud),(yyvsp[-3].noeud));
				g_node_append((yyval.noeud),(yyvsp[-1].noeud));
			}
		}
#line 1898 "syntaxe_cookie.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 328 "syntaxe_cookie.y" /* yacc.c:1646  */
    {
			Variable* var=g_hash_table_lookup(table_variable,(char*)g_node_nth_child((yyvsp[-3].noeud),0)->data);
			if(var==NULL){
				fprintf(stderr,"\tERREUR : Erreur de semantique a la ligne %d. Variable %s jamais declaree !\n",lineno,(char*)g_node_nth_child((yyvsp[-3].noeud),0)->data);
				error_semantical=true;
			}else{
				(yyval.noeud)=g_node_new((gpointer)AFFECTATION_MUL);
				g_node_append((yyval.noeud),(yyvsp[-3].noeud));
				g_node_append((yyval.noeud),(yyvsp[-1].noeud));
			}
		}
#line 1914 "syntaxe_cookie.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 340 "syntaxe_cookie.y" /* yacc.c:1646  */
    {
			Variable* var=g_hash_table_lookup(table_variable,(char*)g_node_nth_child((yyvsp[-3].noeud),0)->data);
			if(var==NULL){
				fprintf(stderr,"\tERREUR : Erreur de semantique a la ligne %d. Variable %s jamais declaree !\n",lineno,(char*)g_node_nth_child((yyvsp[-3].noeud),0)->data);
				error_semantical=true;
			}else{
				(yyval.noeud)=g_node_new((gpointer)AFFECTATION_DIV);
				g_node_append((yyval.noeud),(yyvsp[-3].noeud));
				g_node_append((yyval.noeud),(yyvsp[-1].noeud));
			}
		}
#line 1930 "syntaxe_cookie.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 352 "syntaxe_cookie.y" /* yacc.c:1646  */
    {
			Variable* var=g_hash_table_lookup(table_variable,(char*)g_node_nth_child((yyvsp[-3].noeud),0)->data);
			if(var==NULL){
				fprintf(stderr,"\tERREUR : Erreur de semantique a la ligne %d. Variable %s jamais declaree !\n",lineno,(char*)g_node_nth_child((yyvsp[-3].noeud),0)->data);
				error_semantical=true;
			}else{
				(yyval.noeud)=g_node_new((gpointer)AFFECTATION_MOD);
				g_node_append((yyval.noeud),(yyvsp[-3].noeud));
				g_node_append((yyval.noeud),(yyvsp[-1].noeud));
			}
		}
#line 1946 "syntaxe_cookie.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 364 "syntaxe_cookie.y" /* yacc.c:1646  */
    {
			printf("\t\t\tIncrementation de +1 sur la variable\n");
		    (yyval.noeud)=g_node_new((gpointer)AFFECTATION_INCR);
		    g_node_append((yyval.noeud),(yyvsp[-2].noeud));
		}
#line 1956 "syntaxe_cookie.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 370 "syntaxe_cookie.y" /* yacc.c:1646  */
    {
			printf("\t\t\tDecrementation de -1 sur la variable\n");
		    (yyval.noeud)=g_node_new((gpointer)AFFECTATION_DECR);
		    g_node_append((yyval.noeud),(yyvsp[-2].noeud));
		}
#line 1966 "syntaxe_cookie.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 376 "syntaxe_cookie.y" /* yacc.c:1646  */
    {
			/* $1 est la valeur du premier non terminal. Ici c'est la valeur du non terminal variable. $3 est la valeur du 2nd non terminal. */
			printf("\t\tAffectation sur la variable\n");
			Variable* var=g_hash_table_lookup(table_variable,(char*)g_node_nth_child((yyvsp[-3].noeud),0)->data);
			if(var==NULL){
				/* On cree une Variable et on lui affecte le type que nous connaissons et la valeur */
				var=malloc(sizeof(Variable));
				if(var!=NULL){
					var->type=strdup("decimal");
					var->value=(yyvsp[-1].noeud);
					/* On l'insere dans la table de hachage (cle: <nom_variable> / valeur: <(type,valeur)>) */
					if(g_hash_table_insert(table_variable,g_node_nth_child((yyvsp[-3].noeud),0)->data,var)){
    					(yyval.noeud)=g_node_new((gpointer)AFFECTATIOND);
    					g_node_append((yyval.noeud),(yyvsp[-3].noeud));
    					g_node_append((yyval.noeud),(yyvsp[-1].noeud));
					}else{
					    fprintf(stderr,"ERREUR - PROBLEME CREATION VARIABLE !\n");
					    exit(-1);
					}
				}else{
					fprintf(stderr,"ERREUR - PROBLEME ALLOCATION MEMOIRE VARIABLE !\n");
					exit(-1);
				}
			}else{
				(yyval.noeud)=g_node_new((gpointer)AFFECTATION);
				g_node_append((yyval.noeud),(yyvsp[-3].noeud));
				g_node_append((yyval.noeud),(yyvsp[-1].noeud));
			}
		}
#line 2000 "syntaxe_cookie.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 406 "syntaxe_cookie.y" /* yacc.c:1646  */
    {
			Variable* var=g_hash_table_lookup(table_variable,(char*)g_node_nth_child((yyvsp[-3].noeud),0)->data);
			if(var==NULL){
				fprintf(stderr,"\tERREUR : Erreur de semantique a la ligne %d. Variable %s jamais declaree !\n",lineno,(char*)g_node_nth_child((yyvsp[-3].noeud),0)->data);
				error_semantical=true;
			}else{
				(yyval.noeud)=g_node_new((gpointer)AFFECTATION_PLUS);
				g_node_append((yyval.noeud),(yyvsp[-3].noeud));
				g_node_append((yyval.noeud),(yyvsp[-1].noeud));
			}
		}
#line 2016 "syntaxe_cookie.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 418 "syntaxe_cookie.y" /* yacc.c:1646  */
    {
			Variable* var=g_hash_table_lookup(table_variable,(char*)g_node_nth_child((yyvsp[-3].noeud),0)->data);
			if(var==NULL){
				fprintf(stderr,"\tERREUR : Erreur de semantique a la ligne %d. Variable %s jamais declaree !\n",lineno,(char*)g_node_nth_child((yyvsp[-3].noeud),0)->data);
				error_semantical=true;
			}else{
				(yyval.noeud)=g_node_new((gpointer)AFFECTATION_MOINS);
				g_node_append((yyval.noeud),(yyvsp[-3].noeud));
				g_node_append((yyval.noeud),(yyvsp[-1].noeud));
			}
		}
#line 2032 "syntaxe_cookie.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 430 "syntaxe_cookie.y" /* yacc.c:1646  */
    {
			Variable* var=g_hash_table_lookup(table_variable,(char*)g_node_nth_child((yyvsp[-3].noeud),0)->data);
			if(var==NULL){
				fprintf(stderr,"\tERREUR : Erreur de semantique a la ligne %d. Variable %s jamais declaree !\n",lineno,(char*)g_node_nth_child((yyvsp[-3].noeud),0)->data);
				error_semantical=true;
			}else{
				(yyval.noeud)=g_node_new((gpointer)AFFECTATION_MUL);
				g_node_append((yyval.noeud),(yyvsp[-3].noeud));
				g_node_append((yyval.noeud),(yyvsp[-1].noeud));
			}
		}
#line 2048 "syntaxe_cookie.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 442 "syntaxe_cookie.y" /* yacc.c:1646  */
    {
			Variable* var=g_hash_table_lookup(table_variable,(char*)g_node_nth_child((yyvsp[-3].noeud),0)->data);
			if(var==NULL){
				fprintf(stderr,"\tERREUR : Erreur de semantique a la ligne %d. Variable %s jamais declaree !\n",lineno,(char*)g_node_nth_child((yyvsp[-3].noeud),0)->data);
				error_semantical=true;
			}else{
				(yyval.noeud)=g_node_new((gpointer)AFFECTATION_DIV);
				g_node_append((yyval.noeud),(yyvsp[-3].noeud));
				g_node_append((yyval.noeud),(yyvsp[-1].noeud));
			}
		}
#line 2064 "syntaxe_cookie.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 454 "syntaxe_cookie.y" /* yacc.c:1646  */
    {
			Variable* var=g_hash_table_lookup(table_variable,(char*)g_node_nth_child((yyvsp[-3].noeud),0)->data);
			if(var==NULL){
				fprintf(stderr,"\tERREUR : Erreur de semantique a la ligne %d. Variable %s jamais declaree !\n",lineno,(char*)g_node_nth_child((yyvsp[-3].noeud),0)->data);
				error_semantical=true;
			}else{
				(yyval.noeud)=g_node_new((gpointer)AFFECTATION_MOD);
				g_node_append((yyval.noeud),(yyvsp[-3].noeud));
				g_node_append((yyval.noeud),(yyvsp[-1].noeud));
			}
		}
#line 2080 "syntaxe_cookie.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 466 "syntaxe_cookie.y" /* yacc.c:1646  */
    {
			printf("\t\t\tIncrementation de +1 sur la variable\n");
		    (yyval.noeud)=g_node_new((gpointer)AFFECTATION_INCR);
		    g_node_append((yyval.noeud),(yyvsp[-2].noeud));
		}
#line 2090 "syntaxe_cookie.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 472 "syntaxe_cookie.y" /* yacc.c:1646  */
    {
			printf("\t\t\tDecrementation de -1 sur la variable\n");
		    (yyval.noeud)=g_node_new((gpointer)AFFECTATION_DECR);
		    g_node_append((yyval.noeud),(yyvsp[-2].noeud));
		}
#line 2100 "syntaxe_cookie.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 478 "syntaxe_cookie.y" /* yacc.c:1646  */
    {
			/* $1 est la valeur du premier non terminal. Ici c'est la valeur du non terminal variable. $3 est la valeur du 2nd non terminal. */
			printf("\t\tAffectation sur la variable\n");
			Variable* var=g_hash_table_lookup(table_variable,(char*)g_node_nth_child((yyvsp[-3].noeud),0)->data);
			if(var==NULL){
				/* On cree une Variable et on lui affecte le type que nous connaissons et la valeur */
				var=malloc(sizeof(Variable));
				if(var!=NULL){
					var->type=strdup("booleen");
					var->value=(yyvsp[-1].noeud);
					/* On l'insere dans la table de hachage (cle: <nom_variable> / valeur: <(type,valeur)>) */
					if(g_hash_table_insert(table_variable,g_node_nth_child((yyvsp[-3].noeud),0)->data,var)){
    					(yyval.noeud)=g_node_new((gpointer)AFFECTATIONB);
    					g_node_append((yyval.noeud),(yyvsp[-3].noeud));
    					g_node_append((yyval.noeud),(yyvsp[-1].noeud));
					}else{
					    fprintf(stderr,"ERREUR - PROBLEME CREATION VARIABLE !\n");
					    exit(-1);
					}
				}else{
					fprintf(stderr,"ERREUR - PROBLEME ALLOCATION MEMOIRE VARIABLE !\n");
					exit(-1);
				}
			}else{
				(yyval.noeud)=g_node_new((gpointer)AFFECTATION);
				g_node_append((yyval.noeud),(yyvsp[-3].noeud));
				g_node_append((yyval.noeud),(yyvsp[-1].noeud));
			}
		}
#line 2134 "syntaxe_cookie.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 508 "syntaxe_cookie.y" /* yacc.c:1646  */
    {
			Variable* var=g_hash_table_lookup(table_variable,(char*)g_node_nth_child((yyvsp[-3].noeud),0)->data);
			if(var==NULL){
				fprintf(stderr,"\tERREUR : Erreur de semantique a la ligne %d. Variable %s jamais declaree !\n",lineno,(char*)g_node_nth_child((yyvsp[-3].noeud),0)->data);
				error_semantical=true;
			}else{
				(yyval.noeud)=g_node_new((gpointer)AFFECTATION_ET);
				g_node_append((yyval.noeud),(yyvsp[-3].noeud));
				g_node_append((yyval.noeud),(yyvsp[-1].noeud));
			}
		}
#line 2150 "syntaxe_cookie.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 520 "syntaxe_cookie.y" /* yacc.c:1646  */
    {
			Variable* var=g_hash_table_lookup(table_variable,(char*)g_node_nth_child((yyvsp[-3].noeud),0)->data);
			if(var==NULL){
				fprintf(stderr,"\tERREUR : Erreur de semantique a la ligne %d. Variable %s jamais declaree !\n",lineno,(char*)g_node_nth_child((yyvsp[-3].noeud),0)->data);
				error_semantical=true;
			}else{
				(yyval.noeud)=g_node_new((gpointer)AFFECTATION_OU);
				g_node_append((yyval.noeud),(yyvsp[-3].noeud));
				g_node_append((yyval.noeud),(yyvsp[-1].noeud));
			}
		}
#line 2166 "syntaxe_cookie.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 532 "syntaxe_cookie.y" /* yacc.c:1646  */
    {
			/* $1 est la valeur du premier non terminal. Ici c'est la valeur du non terminal variable. $3 est la valeur du 2nd non terminal. */
			printf("\t\tAffectation sur la variable\n");
			Variable* var=g_hash_table_lookup(table_variable,(char*)g_node_nth_child((yyvsp[-3].noeud),0)->data);
			if(var==NULL){
				/* On cree une Variable et on lui affecte le type que nous connaissons et la valeur */
				var=malloc(sizeof(Variable));
				if(var!=NULL){
					var->type=strdup("texte");
					var->value=(yyvsp[-1].noeud);
					/* On l'insere dans la table de hachage (cle: <nom_variable> / valeur: <(type,valeur)>) */
					if(g_hash_table_insert(table_variable,g_node_nth_child((yyvsp[-3].noeud),0)->data,var)){
    					(yyval.noeud)=g_node_new((gpointer)AFFECTATIONT);
    					g_node_append((yyval.noeud),(yyvsp[-3].noeud));
    					g_node_append((yyval.noeud),(yyvsp[-1].noeud));
					}else{
					    fprintf(stderr,"ERREUR - PROBLEME CREATION VARIABLE !\n");
					    exit(-1);
					}
				}else{
					fprintf(stderr,"ERREUR - PROBLEME ALLOCATION MEMOIRE VARIABLE !\n");
					exit(-1);
				}
			}else{
				(yyval.noeud)=g_node_new((gpointer)AFFECTATION);
				g_node_append((yyval.noeud),(yyvsp[-3].noeud));
				g_node_append((yyval.noeud),(yyvsp[-1].noeud));
			}
		}
#line 2200 "syntaxe_cookie.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 562 "syntaxe_cookie.y" /* yacc.c:1646  */
    {
			Variable* var=g_hash_table_lookup(table_variable,(char*)g_node_nth_child((yyvsp[-3].noeud),0)->data);
			if(var==NULL){
				fprintf(stderr,"\tERREUR : Erreur de semantique a la ligne %d. Variable %s jamais declaree !\n",lineno,(char*)g_node_nth_child((yyvsp[-3].noeud),0)->data);
				error_semantical=true;
			}else{
				(yyval.noeud)=g_node_new((gpointer)AFFECTATIONT_CONCAT);
				g_node_append((yyval.noeud),(yyvsp[-3].noeud));
				g_node_append((yyval.noeud),(yyvsp[-1].noeud));
			}
		}
#line 2216 "syntaxe_cookie.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 574 "syntaxe_cookie.y" /* yacc.c:1646  */
    {
				Variable* var=g_hash_table_lookup(table_variable,(char*)g_node_nth_child((yyvsp[-1].noeud),0)->data);
				if(var==NULL){
						/* On cree une Variable et on lui affecte le type que nous connaissons et la valeur */
				var=malloc(sizeof(Variable));
				if(var!=NULL){
					var->type=strdup("texte");
					var->value=NULL;
					/* On l'insere dans la table de hachage (cle: <nom_variable> / valeur: <(type,valeur)>) */
					if(g_hash_table_insert(table_variable,g_node_nth_child((yyvsp[-1].noeud),0)->data,var)){
    					(yyval.noeud)=g_node_new((gpointer)SAISIENT);
    					g_node_append((yyval.noeud),(yyvsp[-1].noeud));
					}else{
					    fprintf(stderr,"ERREUR - PROBLEME CREATION VARIABLE !\n");
					    exit(-1);
					}
				}else{
					fprintf(stderr,"ERREUR - PROBLEME ALLOCATION MEMOIRE VARIABLE !\n");
					exit(-1);
				}
				}else{
					(yyval.noeud)=g_node_new((gpointer)SAISIET);
					g_node_append((yyval.noeud),(yyvsp[-1].noeud));
				}
			}
#line 2246 "syntaxe_cookie.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 600 "syntaxe_cookie.y" /* yacc.c:1646  */
    {
				Variable* var=g_hash_table_lookup(table_variable,(char*)g_node_nth_child((yyvsp[-1].noeud),0)->data);
				if(var==NULL){
						/* On cree une Variable et on lui affecte le type que nous connaissons et la valeur */
				var=malloc(sizeof(Variable));
				if(var!=NULL){
					var->type=strdup("entier");
					var->value=NULL;
					/* On l'insere dans la table de hachage (cle: <nom_variable> / valeur: <(type,valeur)>) */
					if(g_hash_table_insert(table_variable,g_node_nth_child((yyvsp[-1].noeud),0)->data,var)){
    					(yyval.noeud)=g_node_new((gpointer)SAISIENE);
    					g_node_append((yyval.noeud),(yyvsp[-1].noeud));
					}else{
					    fprintf(stderr,"ERREUR - PROBLEME CREATION VARIABLE !\n");
					    exit(-1);
					}
				}else{
					fprintf(stderr,"ERREUR - PROBLEME ALLOCATION MEMOIRE VARIABLE !\n");
					exit(-1);
				}
				}else{
					(yyval.noeud)=g_node_new((gpointer)SAISIEE);
					g_node_append((yyval.noeud),(yyvsp[-1].noeud));
				}
			}
#line 2276 "syntaxe_cookie.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 626 "syntaxe_cookie.y" /* yacc.c:1646  */
    {
				Variable* var=g_hash_table_lookup(table_variable,(char*)g_node_nth_child((yyvsp[-1].noeud),0)->data);
				if(var==NULL){
						/* On cree une Variable et on lui affecte le type que nous connaissons et la valeur */
				var=malloc(sizeof(Variable));
				if(var!=NULL){
					var->type=strdup("booleen");
					var->value=NULL;
					/* On l'insere dans la table de hachage (cle: <nom_variable> / valeur: <(type,valeur)>) */
					if(g_hash_table_insert(table_variable,g_node_nth_child((yyvsp[-1].noeud),0)->data,var)){
    					(yyval.noeud)=g_node_new((gpointer)SAISIENB);
    					g_node_append((yyval.noeud),(yyvsp[-1].noeud));
					}else{
					    fprintf(stderr,"ERREUR - PROBLEME CREATION VARIABLE !\n");
					    exit(-1);
					}
				}else{
					fprintf(stderr,"ERREUR - PROBLEME ALLOCATION MEMOIRE VARIABLE !\n");
					exit(-1);
				}
				}else{
					(yyval.noeud)=g_node_new((gpointer)SAISIEB);
					g_node_append((yyval.noeud),(yyvsp[-1].noeud));
				}
			}
#line 2306 "syntaxe_cookie.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 652 "syntaxe_cookie.y" /* yacc.c:1646  */
    {
				Variable* var=g_hash_table_lookup(table_variable,(char*)g_node_nth_child((yyvsp[-1].noeud),0)->data);
				if(var==NULL){
						/* On cree une Variable et on lui affecte le type que nous connaissons et la valeur */
				var=malloc(sizeof(Variable));
				if(var!=NULL){
					var->type=strdup("decimal");
					var->value=NULL;
					/* On l'insere dans la table de hachage (cle: <nom_variable> / valeur: <(type,valeur)>) */
					if(g_hash_table_insert(table_variable,g_node_nth_child((yyvsp[-1].noeud),0)->data,var)){
    					(yyval.noeud)=g_node_new((gpointer)SAISIEND);
    					g_node_append((yyval.noeud),(yyvsp[-1].noeud));
					}else{
					    fprintf(stderr,"ERREUR - PROBLEME CREATION VARIABLE !\n");
					    exit(-1);
					}
				}else{
					fprintf(stderr,"ERREUR - PROBLEME ALLOCATION MEMOIRE VARIABLE !\n");
					exit(-1);
				}
				}else{
					(yyval.noeud)=g_node_new((gpointer)SAISIED);
					g_node_append((yyval.noeud),(yyvsp[-1].noeud));
				}
			}
#line 2336 "syntaxe_cookie.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 677 "syntaxe_cookie.y" /* yacc.c:1646  */
    {
			printf("\t\tAffichage de la valeur de l'expression arithmetique\n");
			if(decimal((yyvsp[-1].noeud))){
				(yyval.noeud)=g_node_new((gpointer)AFFICHAGED);
				g_node_append((yyval.noeud),(yyvsp[-1].noeud));
			}else{
				(yyval.noeud)=g_node_new((gpointer)AFFICHAGEE);
				g_node_append((yyval.noeud),(yyvsp[-1].noeud));
			}
		}
#line 2351 "syntaxe_cookie.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 688 "syntaxe_cookie.y" /* yacc.c:1646  */
    {
			printf("\t\tAffichage de la valeur de l'expression booleenne\n");
			(yyval.noeud)=g_node_new((gpointer)AFFICHAGEB);
			g_node_append((yyval.noeud),(yyvsp[-1].noeud));
		}
#line 2361 "syntaxe_cookie.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 694 "syntaxe_cookie.y" /* yacc.c:1646  */
    {
			printf("\t\tAffichage de la valeur de l'expression textuelle\n");
			(yyval.noeud)=g_node_new((gpointer)AFFICHAGET);
			g_node_append((yyval.noeud),(yyvsp[-1].noeud));
		}
#line 2371 "syntaxe_cookie.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 699 "syntaxe_cookie.y" /* yacc.c:1646  */
    {
					/* On recupere un pointeur vers la structure Variable */
					Variable* var=g_hash_table_lookup(table_variable,(char*)g_node_nth_child((yyvsp[-1].noeud),0)->data);
					/* Si on a trouve un pointeur valable */
					if(var!=NULL){
						/* On verifie que le type est bien un entier - Inutile car impose a l'analyse syntaxique */
						if(strcmp(var->type,"texte")==0){
							printf("\t\t\tSuppression de la variable texte\n");
							(yyval.noeud)=g_node_new((gpointer)SUPPRESSIONT);
							g_node_append((yyval.noeud),(yyvsp[-1].noeud));
							/* suppression de la variable dans la table de hachage */
							printf("suppresion variable %s\n",(char*)g_node_nth_child((yyvsp[-1].noeud),0)->data);
						    if(g_hash_table_remove(table_variable,(char*)g_node_nth_child((yyvsp[-1].noeud),0)->data)){
						        printf("Variable supprimee !\n");
						    }else{
						        fprintf(stderr,"ERREUR - PROBLEME DE SUPPRESSION VARIABLE !\n");
						        exit(-1);
						    }
						}else{
							fprintf(stderr,"\tERREUR : Erreur de semantique a la ligne %d. Type incompatible !\n",lineno);
							error_semantical=true;
						}
					/* Sinon on conclue que la variable n'a jamais ete declaree car absente de la table */
					}else{
						fprintf(stderr,"\tERREUR : Erreur de semantique a la ligne %d. Variable %s jamais declaree !\n",lineno,(char*)g_node_nth_child((yyvsp[-1].noeud),0)->data);
						error_semantical=true;
					}
				}
#line 2404 "syntaxe_cookie.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 727 "syntaxe_cookie.y" /* yacc.c:1646  */
    {
					printf("\t\t\tNombre entier : %ld\n",(yyvsp[0].entier));
					/* Comme le token TOK_NOMBRE est de type entier et que on a type expression_arithmetique comme du texte, il nous faut convertir la valeur en texte. */
					int length=snprintf(NULL,0,"%ld",(yyvsp[0].entier));
					char* str=malloc(length+1);
					snprintf(str,length+1,"%ld",(yyvsp[0].entier));
					(yyval.noeud)=g_node_new((gpointer)ENTIER);
					g_node_append_data((yyval.noeud),strdup(str));
					free(str);
				}
#line 2419 "syntaxe_cookie.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 738 "syntaxe_cookie.y" /* yacc.c:1646  */
    {
					printf("\t\t\tNombre decimal : %f\n",(yyvsp[0].decimal));
					/* Comme le token TOK_NOMBRE est de type entier et que on a type expression_arithmetique comme du texte, il nous faut convertir la valeur en texte. */
					int length=snprintf(NULL,0,"%f",(yyvsp[0].decimal));
					char* str=malloc(length+1);
					snprintf(str,length+1,"%f",(yyvsp[0].decimal));
					(yyval.noeud)=g_node_new((gpointer)DECIMAL);
					g_node_append_data((yyval.noeud),strdup(str));
					free(str);
				}
#line 2434 "syntaxe_cookie.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 749 "syntaxe_cookie.y" /* yacc.c:1646  */
    {
					/* On recupere un pointeur vers la structure Variable */
					Variable* var=g_hash_table_lookup(table_variable,(char*)g_node_nth_child((yyvsp[0].noeud),0)->data);
					/* Si on a trouve un pointeur valable */
					if(var!=NULL){
						/* On verifie que le type est bien un entier ou un decimal - Inutile car impose a l'analyse syntaxique */
						if(strcmp(var->type,"entier")==0){
							(yyval.noeud)=(yyvsp[0].noeud);
						}else{
							fprintf(stderr,"\tERREUR : Erreur de semantique a la ligne %d. Type incompatible (entier attendu - valeur : %s) !\n",lineno,(char*)g_node_nth_child((yyvsp[0].noeud),0)->data);
							error_semantical=true;
						}
					/* Sinon on conclue que la variable n'a jamais ete declaree car absente de la table */
					}else{
						fprintf(stderr,"\tERREUR : Erreur de semantique a la ligne %d. Variable %s jamais declaree !\n",lineno,(char*)g_node_nth_child((yyvsp[0].noeud),0)->data);
						error_semantical=true;
					}
				}
#line 2457 "syntaxe_cookie.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 768 "syntaxe_cookie.y" /* yacc.c:1646  */
    {
					/* On recupere un pointeur vers la structure Variable */
					Variable* var=g_hash_table_lookup(table_variable,(char*)g_node_nth_child((yyvsp[0].noeud),0)->data);
					/* Si on a trouve un pointeur valable */
					if(var!=NULL){
						/* On verifie que le type est bien un entier ou un decimal - Inutile car impose a l'analyse syntaxique */
						if(strcmp(var->type,"decimal")==0){
							(yyval.noeud)=(yyvsp[0].noeud);
						}else{
							fprintf(stderr,"\tERREUR : Erreur de semantique a la ligne %d. Type incompatible (decimal attendu - valeur : %s) !\n",lineno,(char*)g_node_nth_child((yyvsp[0].noeud),0)->data);
							error_semantical=true;
						}
					/* Sinon on conclue que la variable n'a jamais ete declaree car absente de la table */
					}else{
						fprintf(stderr,"\tERREUR : Erreur de semantique a la ligne %d. Variable %s jamais declaree !\n",lineno,(char*)g_node_nth_child((yyvsp[0].noeud),0)->data);
						error_semantical=true;
					}
				}
#line 2480 "syntaxe_cookie.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 787 "syntaxe_cookie.y" /* yacc.c:1646  */
    {
					(yyval.noeud)=(yyvsp[0].noeud);
				}
#line 2488 "syntaxe_cookie.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 791 "syntaxe_cookie.y" /* yacc.c:1646  */
    {
					(yyval.noeud)=(yyvsp[0].noeud);
				}
#line 2496 "syntaxe_cookie.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 795 "syntaxe_cookie.y" /* yacc.c:1646  */
    {
					(yyval.noeud)=(yyvsp[0].noeud);
				}
#line 2504 "syntaxe_cookie.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 799 "syntaxe_cookie.y" /* yacc.c:1646  */
    {
					(yyval.noeud)=(yyvsp[0].noeud);
				}
#line 2512 "syntaxe_cookie.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 803 "syntaxe_cookie.y" /* yacc.c:1646  */
    {
					(yyval.noeud)=(yyvsp[0].noeud);
				}
#line 2520 "syntaxe_cookie.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 807 "syntaxe_cookie.y" /* yacc.c:1646  */
    {
				    (yyval.noeud)=(yyvsp[0].noeud);
				}
#line 2528 "syntaxe_cookie.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 811 "syntaxe_cookie.y" /* yacc.c:1646  */
    {
					printf("\t\t\tIncrementation de +1\n");
				    (yyval.noeud)=g_node_new((gpointer)INCREMENTATION);
				    g_node_append((yyval.noeud),(yyvsp[-1].noeud));
				}
#line 2538 "syntaxe_cookie.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 817 "syntaxe_cookie.y" /* yacc.c:1646  */
    {
					printf("\t\t\tDecrementation de -1\n");
				    (yyval.noeud)=g_node_new((gpointer)DECREMENTATION);
				    g_node_append((yyval.noeud),(yyvsp[-1].noeud));
				}
#line 2548 "syntaxe_cookie.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 823 "syntaxe_cookie.y" /* yacc.c:1646  */
    {
				    printf("\t\t\tOperation unaire negation\n");
				    (yyval.noeud)=g_node_new((gpointer)NEGATIF);
					g_node_append((yyval.noeud),(yyvsp[0].noeud));
				}
#line 2558 "syntaxe_cookie.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 829 "syntaxe_cookie.y" /* yacc.c:1646  */
    {
					printf("\t\t\tC'est une expression arithmetique entre parentheses\n");
					(yyval.noeud)=g_node_new((gpointer)EXPR_PAR);
					g_node_append((yyval.noeud),(yyvsp[-1].noeud));
				}
#line 2568 "syntaxe_cookie.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 834 "syntaxe_cookie.y" /* yacc.c:1646  */
    {
					printf("\t\t\tBooleen Vrai\n");
					(yyval.noeud)=g_node_new((gpointer)VRAI);
				}
#line 2577 "syntaxe_cookie.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 839 "syntaxe_cookie.y" /* yacc.c:1646  */
    {
					printf("\t\t\tBooleen Faux\n");
					(yyval.noeud)=g_node_new((gpointer)FAUX);
				}
#line 2586 "syntaxe_cookie.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 844 "syntaxe_cookie.y" /* yacc.c:1646  */
    {
					/* On recupere un pointeur vers la structure Variable */
					Variable* var=g_hash_table_lookup(table_variable,(char*)g_node_nth_child((yyvsp[0].noeud),0)->data);
					/* Si on a trouve un pointeur valable */
					if(var!=NULL){
						/* On verifie que le type est bien un entier - Inutile car impose a l'analyse syntaxique */
						if(strcmp(var->type,"booleen")==0){
							(yyval.noeud)=(yyvsp[0].noeud);
						}else{
							fprintf(stderr,"\tERREUR : Erreur de semantique a la ligne %d. Type incompatible (booleen attendu - valeur : %s) !\n",lineno,(char*)g_node_nth_child((yyvsp[0].noeud),0)->data);
							error_semantical=true;
						}
					/* Sinon on conclue que la variable n'a jamais ete declaree car absente de la table */
					}else{
						fprintf(stderr,"\tERREUR : Erreur de semantique a la ligne %d. Variable %s jamais declaree !\n",lineno,(char*)g_node_nth_child((yyvsp[0].noeud),0)->data);
						error_semantical=true;
					}
				}
#line 2609 "syntaxe_cookie.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 863 "syntaxe_cookie.y" /* yacc.c:1646  */
    {
					printf("\t\t\tOperation booleenne Non\n");
					(yyval.noeud)=g_node_new((gpointer)NON);
					g_node_append((yyval.noeud),(yyvsp[0].noeud));
				}
#line 2619 "syntaxe_cookie.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 869 "syntaxe_cookie.y" /* yacc.c:1646  */
    {
					printf("\t\t\tOperation booleenne Et\n");
					(yyval.noeud)=g_node_new((gpointer)ET);
					g_node_append((yyval.noeud),(yyvsp[-2].noeud));
					g_node_append((yyval.noeud),(yyvsp[0].noeud));
				}
#line 2630 "syntaxe_cookie.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 876 "syntaxe_cookie.y" /* yacc.c:1646  */
    {
					printf("\t\t\tOperation booleenne Ou\n");
					(yyval.noeud)=g_node_new((gpointer)OU);
					g_node_append((yyval.noeud),(yyvsp[-2].noeud));
					g_node_append((yyval.noeud),(yyvsp[0].noeud));
				}
#line 2641 "syntaxe_cookie.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 883 "syntaxe_cookie.y" /* yacc.c:1646  */
    {
					printf("\t\t\tC'est une expression booleenne entre parentheses\n");
					(yyval.noeud)=g_node_new((gpointer)EXPR_PAR);
					g_node_append((yyval.noeud),(yyvsp[-1].noeud));
				}
#line 2651 "syntaxe_cookie.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 889 "syntaxe_cookie.y" /* yacc.c:1646  */
    {
					printf("\t\t\tOperateur d'egalite ==\n");
					(yyval.noeud)=g_node_new((gpointer)EGALITE);
					g_node_append((yyval.noeud),(yyvsp[-2].noeud));
					g_node_append((yyval.noeud),(yyvsp[0].noeud));
				}
#line 2662 "syntaxe_cookie.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 896 "syntaxe_cookie.y" /* yacc.c:1646  */
    {
					printf("\t\t\tOperateur d'inegalite !=\n");
					(yyval.noeud)=g_node_new((gpointer)DIFFERENT);
					g_node_append((yyval.noeud),(yyvsp[-2].noeud));
					g_node_append((yyval.noeud),(yyvsp[0].noeud));
				}
#line 2673 "syntaxe_cookie.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 903 "syntaxe_cookie.y" /* yacc.c:1646  */
    {
					printf("\t\t\tOperateur d'egalite ==\n");
					(yyval.noeud)=g_node_new((gpointer)EGALITE);
					g_node_append((yyval.noeud),(yyvsp[-2].noeud));
					g_node_append((yyval.noeud),(yyvsp[0].noeud));
				}
#line 2684 "syntaxe_cookie.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 910 "syntaxe_cookie.y" /* yacc.c:1646  */
    {
					printf("\t\t\tOperateur d'inegalite !=\n");
					(yyval.noeud)=g_node_new((gpointer)DIFFERENT);
					g_node_append((yyval.noeud),(yyvsp[-2].noeud));
					g_node_append((yyval.noeud),(yyvsp[0].noeud));
				}
#line 2695 "syntaxe_cookie.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 917 "syntaxe_cookie.y" /* yacc.c:1646  */
    {
					printf("\t\t\tOperateur de superiorite >\n");
					(yyval.noeud)=g_node_new((gpointer)SUPERIEUR);
					g_node_append((yyval.noeud),(yyvsp[-2].noeud));
					g_node_append((yyval.noeud),(yyvsp[0].noeud));
				}
#line 2706 "syntaxe_cookie.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 924 "syntaxe_cookie.y" /* yacc.c:1646  */
    {
					printf("\t\t\tOperateur d'inferiorite <\n");
					(yyval.noeud)=g_node_new((gpointer)INFERIEUR);
					g_node_append((yyval.noeud),(yyvsp[-2].noeud));
					g_node_append((yyval.noeud),(yyvsp[0].noeud));
				}
#line 2717 "syntaxe_cookie.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 931 "syntaxe_cookie.y" /* yacc.c:1646  */
    {
					printf("\t\t\tOperateur >=\n");
					(yyval.noeud)=g_node_new((gpointer)SUPEGAL);
					g_node_append((yyval.noeud),(yyvsp[-2].noeud));
					g_node_append((yyval.noeud),(yyvsp[0].noeud));
				}
#line 2728 "syntaxe_cookie.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 938 "syntaxe_cookie.y" /* yacc.c:1646  */
    {
					printf("\t\t\tOperateur <=\n");
					(yyval.noeud)=g_node_new((gpointer)INFEGAL);
					g_node_append((yyval.noeud),(yyvsp[-2].noeud));
					g_node_append((yyval.noeud),(yyvsp[0].noeud));
				}
#line 2739 "syntaxe_cookie.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 945 "syntaxe_cookie.y" /* yacc.c:1646  */
    {
					printf("\t\t\tOperateur dans\n");
					(yyval.noeud)=g_node_new((gpointer)DANSII);
					g_node_append((yyval.noeud),(yyvsp[-6].noeud));
					g_node_append((yyval.noeud),(yyvsp[-3].noeud));
					g_node_append((yyval.noeud),(yyvsp[-1].noeud));
				}
#line 2751 "syntaxe_cookie.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 953 "syntaxe_cookie.y" /* yacc.c:1646  */
    {
					printf("\t\t\tOperateur dans\n");
					(yyval.noeud)=g_node_new((gpointer)DANSEI);
					g_node_append((yyval.noeud),(yyvsp[-6].noeud));
					g_node_append((yyval.noeud),(yyvsp[-3].noeud));
					g_node_append((yyval.noeud),(yyvsp[-1].noeud));
				}
#line 2763 "syntaxe_cookie.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 961 "syntaxe_cookie.y" /* yacc.c:1646  */
    {
					printf("\t\t\tOperateur dans\n");
					(yyval.noeud)=g_node_new((gpointer)DANSIE);
					g_node_append((yyval.noeud),(yyvsp[-6].noeud));
					g_node_append((yyval.noeud),(yyvsp[-3].noeud));
					g_node_append((yyval.noeud),(yyvsp[-1].noeud));
				}
#line 2775 "syntaxe_cookie.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 969 "syntaxe_cookie.y" /* yacc.c:1646  */
    {
					printf("\t\t\tOperateur dans\n");
					(yyval.noeud)=g_node_new((gpointer)DANSEE);
					g_node_append((yyval.noeud),(yyvsp[-6].noeud));
					g_node_append((yyval.noeud),(yyvsp[-3].noeud));
					g_node_append((yyval.noeud),(yyvsp[-1].noeud));
				}
#line 2787 "syntaxe_cookie.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 976 "syntaxe_cookie.y" /* yacc.c:1646  */
    {
						printf("\t\t\tTexte %s\n",(yyvsp[0].texte));
						(yyval.noeud)=g_node_new((gpointer)TEXTE);
						g_node_append_data((yyval.noeud),strdup((yyvsp[0].texte)));
					}
#line 2797 "syntaxe_cookie.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 982 "syntaxe_cookie.y" /* yacc.c:1646  */
    {
						/* On recupere un pointeur vers la structure Variable */
						Variable* var=g_hash_table_lookup(table_variable,(char*)g_node_nth_child((yyvsp[0].noeud),0)->data);
						/* Si on a trouve un pointeur valable */
						if(var!=NULL){
							/* On verifie que le type est bien un entier - Inutile car impose a l'analyse syntaxique */
							if(strcmp(var->type,"texte")==0){
								(yyval.noeud)=(yyvsp[0].noeud);
							}else{
								fprintf(stderr,"\tERREUR : Erreur de semantique a la ligne %d. Type incompatible (texte attendu - valeur : %s) !\n",lineno,(char*)g_node_nth_child((yyvsp[0].noeud),0)->data);
								error_semantical=true;
							}
						/* Sinon on conclue que la variable n'a jamais ete declaree car absente de la table */
						}else{
							fprintf(stderr,"\tERREUR : Erreur de semantique a la ligne %d. Variable %s jamais declaree !\n",lineno,(char*)g_node_nth_child((yyvsp[0].noeud),0)->data);
							error_semantical=true;
						}
					}
#line 2820 "syntaxe_cookie.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 1000 "syntaxe_cookie.y" /* yacc.c:1646  */
    {
    			printf("\t\t\tAddition\n");
    			(yyval.noeud)=g_node_new((gpointer)ADDITION);
    			g_node_append((yyval.noeud),(yyvsp[-2].noeud));
    			g_node_append((yyval.noeud),(yyvsp[0].noeud));
    		}
#line 2831 "syntaxe_cookie.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 1006 "syntaxe_cookie.y" /* yacc.c:1646  */
    {
        			printf("\t\t\tSoustraction\n");
        			(yyval.noeud)=g_node_new((gpointer)SOUSTRACTION);
        			g_node_append((yyval.noeud),(yyvsp[-2].noeud));
        			g_node_append((yyval.noeud),(yyvsp[0].noeud));
        		}
#line 2842 "syntaxe_cookie.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 1012 "syntaxe_cookie.y" /* yacc.c:1646  */
    {
			printf("\t\t\tMultiplication\n");
			(yyval.noeud)=g_node_new((gpointer)MULTIPLICATION);
			g_node_append((yyval.noeud),(yyvsp[-2].noeud));
			g_node_append((yyval.noeud),(yyvsp[0].noeud));
		}
#line 2853 "syntaxe_cookie.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 1018 "syntaxe_cookie.y" /* yacc.c:1646  */
    {
				printf("\t\t\tDivision\n");
				(yyval.noeud)=g_node_new((gpointer)DIVISION);
				g_node_append((yyval.noeud),(yyvsp[-2].noeud));
				g_node_append((yyval.noeud),(yyvsp[0].noeud));
			}
#line 2864 "syntaxe_cookie.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 1024 "syntaxe_cookie.y" /* yacc.c:1646  */
    {
				printf("\t\t\tModulo\n");
				(yyval.noeud)=g_node_new((gpointer)MODULO);
				g_node_append((yyval.noeud),(yyvsp[-2].noeud));
				g_node_append((yyval.noeud),(yyvsp[0].noeud));
			}
#line 2875 "syntaxe_cookie.tab.c" /* yacc.c:1646  */
    break;


#line 2879 "syntaxe_cookie.tab.c" /* yacc.c:1646  */
      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYTERROR;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  return yyresult;
}
#line 1032 "syntaxe_cookie.y" /* yacc.c:1906  */

/* Dans la fonction main on appelle bien la routine yyparse() qui sera genere par Bison. Cette routine appellera yylex() de notre analyseur lexical. */
int main(int argc, char** argv){
	/* recuperation du nom de fichier d'entree (langage Simple) donne en parametre */
	char* fichier_entree=strdup(argv[1]);
	/* ouverture du fichier en lecture dans le flux d'entree stdin */
	stdin=fopen(fichier_entree,"r");
	/* creation fichier de sortie (langage C) */
	char* fichier_sortie=strdup(argv[1]);
	/* remplace l'extension par .c */
	strcpy(rindex(fichier_sortie, '.'), ".c");
	/* ouvre le fichier cree en ecriture */
	fichier=fopen(fichier_sortie, "w");
	/* Creation de la table de hachage */
	table_variable=g_hash_table_new_full(g_str_hash,g_str_equal,NULL,free);
	printf("Debut de l'analyse syntaxique :\n");
	debut_code();
	yyparse();
	fin_code();
	printf("Fin de l'analyse !\n");
	printf("Resultat :\n");
        if(error_lexical){
                printf("\t-- Echec : Certains lexemes ne font pas partie du lexique du langage ! --\n");
		printf("\t-- Echec a l'analyse lexicale --\n");
        }
        else{
                printf("\t-- Succes a l'analyse lexicale ! --\n");
        }
	if(error_syntaxical){
                printf("\t-- Echec : Certaines phrases sont syntaxiquement incorrectes ! --\n");
		printf("\t-- Echec a l'analyse syntaxique --\n");
        }
        else{
                printf("\t-- Succes a l'analyse syntaxique ! --\n");
		if(error_semantical){
		        printf("\t-- Echec : Certaines phrases sont semantiquement incorrectes ! --\n");
			printf("\t-- Echec a l'analyse semantique --\n");
		}
		else{
		        printf("\t-- Succes a l'analyse semantique ! --\n");
		}
        }
	/* Suppression du fichier genere si erreurs analyse */
	if(error_lexical||error_syntaxical||error_semantical){
		remove(fichier_sortie);
		printf("ECHEC GENERATION CODE !\n");
	}
	else{
		printf("Le fichier \"%s\" a ete genere !\n",fichier_sortie);
	}
	/* Fermeture des flux */
	fclose(fichier);
	fclose(stdin);
	/* Liberation memoire */
	free(fichier_entree);
	free(fichier_sortie);
	g_hash_table_destroy(table_variable);
	return EXIT_SUCCESS;
}
void yyerror(char *s) {
        fprintf(stderr, "Erreur de syntaxe a la ligne %d: %s\n", lineno, s);
}
/* Cette fonction supprime dans la table de hachage toutes les variables declarees pour la premiere fois dans l'arbre syntaxique donne en parametre */
void supprime_variable(GNode* ast){
    /* si l'element n'est pas NULL et que ce n'est pas une feuille et que ce n'est pas un type bloc code (pour eviter de supprimer une variable deja suprimee) */
    if(ast&&!G_NODE_IS_LEAF(ast)&&(long)ast->data!=BLOC_CODE){
        /* si le noeud est de type declaration */
        if((long)ast->data==AFFECTATIONB||(long)ast->data==AFFECTATIONE|(long)ast->data==AFFECTATIONT|(long)ast->data==AFFECTATIOND){
            /* suppression de la variable dans la table de hachage */
            if(g_hash_table_remove(table_variable,(char*)g_node_nth_child(g_node_nth_child(ast,0),0)->data)){
                printf("Variable supprimee !\n");
            }else{
                fprintf(stderr,"ERREUR - PROBLEME DE SUPPRESSION VARIABLE !\n");
                exit(-1);
            }
        /* sinon on continue de parcourir l'arbre */
        }else{
            int nb_enfant;
            for(nb_enfant=0;nb_enfant<=g_node_n_children(ast);nb_enfant++){
                supprime_variable(g_node_nth_child(ast,nb_enfant));
            }
        }
    }
}
/* Cette fonction dit si un arbre contient un decimal */
bool decimal(GNode* ast){
    /* si l'element n'est pas NULL et que ce n'est pas une feuille et que ce n'est pas un type bloc code (pour eviter de supprimer une variable deja suprimee) */
    bool nbdecimal=false;
    if(ast&&!G_NODE_IS_LEAF(ast)){
        /* si le noeud est de type decimal */
        if((long)ast->data==DECIMAL){
            nbdecimal=true;
        /* si le noeud est une variable */
        }else if((long)ast->data==VARIABLE){
        	/* On recupere un pointeur vers la structure Variable */
			Variable* var=g_hash_table_lookup(table_variable,(char*)g_node_nth_child(ast,0)->data);
			/* Si on a trouve un pointeur valable */
			if(var!=NULL){
				/* On regarde si le type de la variable est un decimal */
				if(strcmp(var->type,"decimal")==0)
					nbdecimal=true;
			}
        /* sinon on continue de parcourir l'arbre */
        }else{
            int nb_enfant;
            for(nb_enfant=0;nb_enfant<=g_node_n_children(ast);nb_enfant++){
                nbdecimal|=decimal(g_node_nth_child(ast,nb_enfant));
            }
        }
    }
    return nbdecimal;
}

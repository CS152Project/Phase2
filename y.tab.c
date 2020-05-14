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
#line 1 "calc.y" /* yacc.c:339  */

#include <stdio.h>
#include <stdlib.h>
extern FILE * yyin;
extern int currLine;
extern int currPos;
int yylex();
void yyerror(const char *msg);

#line 76 "y.tab.c" /* yacc.c:339  */

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
# define YYERROR_VERBOSE 1
#endif

/* In a future release of Bison, this section will be replaced
   by #include "y.tab.h".  */
#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
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
    FUNCTION = 258,
    SEMICOLON = 259,
    COMMA = 260,
    COLON = 261,
    READ = 262,
    WRITE = 263,
    MULT = 264,
    DIV = 265,
    PLUS = 266,
    MINUS = 267,
    EQUAL = 268,
    PER = 269,
    END = 270,
    FOR = 271,
    CONTINUE = 272,
    L_SQUARE_BRACKET = 273,
    R_SQUARE_BRACKET = 274,
    L_PAREN = 275,
    R_PAREN = 276,
    BEGIN_PARAMS = 277,
    END_PARAMS = 278,
    BEGINLOOP = 279,
    ENDLOOP = 280,
    BEGIN_LOCALS = 281,
    END_LOCALS = 282,
    BEGIN_BODY = 283,
    END_BODY = 284,
    INTEGER = 285,
    ARRAY = 286,
    OF = 287,
    ENDIF = 288,
    ELSE = 289,
    IF = 290,
    THEN = 291,
    WHILE = 292,
    DO = 293,
    EQ = 294,
    NEQ = 295,
    LT = 296,
    GT = 297,
    GTE = 298,
    LTE = 299,
    AND = 300,
    OR = 301,
    NOT = 302,
    TRUE = 303,
    FALSE = 304,
    RETURN = 305,
    ASSIGN = 306,
    IDENT = 307,
    NUMBER = 308,
    UMINUS = 309
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 11 "calc.y" /* yacc.c:355  */

   char * identval;
   int iVal;

#line 176 "y.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 193 "y.tab.c" /* yacc.c:358  */

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
#define YYFINAL  6
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   185

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  55
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  19
/* YYNRULES -- Number of rules.  */
#define YYNRULES  66
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  160

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   309

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
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    29,    29,    33,    34,    37,    62,    63,    65,    67,
      69,    72,    74,    76,    78,    82,    84,    87,    89,    92,
      94,    96,    98,   100,   102,   104,   106,   108,   110,   114,
     116,   120,   122,   125,   127,   129,   131,   133,   135,   137,
     139,   144,   146,   148,   150,   152,   154,   158,   160,   162,
     166,   168,   171,   173,   175,   178,   182,   184,   186,   188,
     193,   195,   197,   199,   201,   203,   205
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 1
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "FUNCTION", "SEMICOLON", "COMMA",
  "COLON", "READ", "WRITE", "MULT", "DIV", "PLUS", "MINUS", "EQUAL", "PER",
  "END", "FOR", "CONTINUE", "L_SQUARE_BRACKET", "R_SQUARE_BRACKET",
  "L_PAREN", "R_PAREN", "BEGIN_PARAMS", "END_PARAMS", "BEGINLOOP",
  "ENDLOOP", "BEGIN_LOCALS", "END_LOCALS", "BEGIN_BODY", "END_BODY",
  "INTEGER", "ARRAY", "OF", "ENDIF", "ELSE", "IF", "THEN", "WHILE", "DO",
  "EQ", "NEQ", "LT", "GT", "GTE", "LTE", "AND", "OR", "NOT", "TRUE",
  "FALSE", "RETURN", "ASSIGN", "IDENT", "NUMBER", "UMINUS", "$accept",
  "program", "functions", "function", "declarations", "declaration",
  "ident", "statements", "statement", "bool_expression",
  "relation_and_expression", "relation_expression", "comp", "var", "vars",
  "expression", "expressions", "multiplicative_expression", "term", YY_NULLPTR
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
     305,   306,   307,   308,   309
};
# endif

#define YYPACT_NINF -67

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-67)))

#define YYTABLE_NINF -16

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      31,    -8,    50,   -67,    31,    56,   -67,   -67,    53,    10,
      23,    58,    61,    22,    81,     9,    64,    39,    69,     9,
      24,   -12,   -67,   -67,   -67,    14,   -67,    23,   -67,   -67,
      79,    78,    55,    83,    98,    48,     6,    68,    68,    68,
     -67,    76,    76,   102,    62,   112,   114,   123,    93,   103,
     115,   141,   -67,   -67,   104,    37,    76,    19,   -67,   -67,
     101,   -67,   134,   121,   113,   116,   -67,   -67,   109,    41,
       7,   136,    48,    62,   -67,    62,   -67,    48,    62,   139,
     -67,    68,   110,    62,   -67,   -67,   143,    92,    76,   -67,
     -67,   109,    62,    48,    76,    76,   -67,   -67,   -67,   -67,
     -67,   -67,    62,    62,    62,    62,    62,    62,    48,   137,
     144,   147,   -67,   -67,   135,   -67,   164,   148,   -67,   -67,
     149,    62,   150,    36,   -67,   -67,   -67,   -67,   -67,   -67,
     -67,   -67,   151,   138,   154,   152,    76,   -67,   -67,   -67,
     -67,   -67,    48,   -67,    76,    62,   -67,   169,   145,   -67,
     155,    68,   -67,   -67,   126,    62,   156,    48,   158,   -67
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       3,     0,     0,     2,     3,     0,     1,     4,     0,     0,
       0,    15,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     8,    14,    16,     0,     9,    10,     7,    11,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      27,     0,     0,     0,     0,    47,     0,     0,     0,     0,
       0,    50,    25,    26,     0,     0,     0,     0,    38,    39,
      47,    62,     0,     0,    29,    31,    61,    55,     0,    52,
      56,     0,     0,     0,    28,     0,     5,    17,     0,     0,
      12,     0,     0,     0,    65,    64,     0,     0,     0,    34,
      35,     0,     0,     0,     0,     0,    41,    42,    43,    44,
      45,    46,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    18,    19,     0,    51,     0,     0,    40,    63,
       0,     0,     0,     0,    30,    32,    37,    53,    54,    57,
      58,    59,     0,     0,    48,     0,     0,    66,    36,    33,
      60,    20,     0,    22,     0,     0,    13,     0,     0,    23,
       0,     0,    21,    49,     0,     0,     0,     0,     0,    24
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -67,   -67,   175,   -67,   122,   -67,    84,   -65,   -67,   -34,
      87,    89,    94,   -35,   -33,   -66,   -43,   -23,    33
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     2,     3,     4,    12,    13,    62,    46,    47,    63,
      64,    65,   102,    66,    52,    67,    68,    69,    70
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      48,    74,    51,    51,    51,    53,    54,   109,    71,   111,
      10,    10,   112,    87,    91,    10,   105,   106,    29,    30,
      85,   107,    86,    19,    49,    27,    20,    15,   123,    16,
     110,    55,    -6,    -6,     1,   113,    -6,    48,    50,    88,
     117,    -6,    48,   132,     5,    87,    51,    -6,   115,   122,
       6,    -6,   103,   104,   120,    37,    38,    83,    48,   126,
       8,    11,    11,    17,    39,    40,    11,    89,    90,   141,
     142,    60,    61,    48,    55,     9,    11,   148,   139,   150,
     127,   128,    73,    41,    18,    42,    43,    21,    55,    45,
      84,    11,   158,    14,    23,    25,    56,    32,    44,    14,
      45,    24,   147,    14,    14,    33,    17,    48,    34,    14,
     149,    35,   156,   119,    60,    61,    51,    36,   154,    75,
      45,   -15,    48,    57,    58,    59,    72,    77,    60,    61,
      75,    96,    97,    98,    99,   100,   101,    22,   129,   130,
     131,    26,    28,    76,    78,    80,    81,    31,    96,    97,
      98,    99,   100,   101,    92,    82,    79,    93,   114,    94,
     108,    95,   133,   116,   118,   119,   134,   135,   136,   137,
     138,   140,   145,   151,   153,   144,   143,   155,   152,     7,
     157,   124,   146,   159,   125,   121
};

static const yytype_uint8 yycheck[] =
{
      35,    44,    37,    38,    39,    38,    39,    72,    42,    75,
       1,     1,    77,    56,    57,     1,     9,    10,    30,    31,
      55,    14,    56,     1,    18,     1,     4,     4,    93,     6,
      73,    12,    23,    23,     3,    78,    27,    72,    32,    20,
      83,    27,    77,   108,    52,    88,    81,    23,    81,    92,
       0,    27,    11,    12,    88,     7,     8,    20,    93,   102,
       4,    52,    52,     5,    16,    17,    52,    48,    49,    33,
      34,    52,    53,   108,    12,    22,    52,   142,   121,   145,
     103,   104,    20,    35,    23,    37,    38,     6,    12,    52,
      53,    52,   157,     9,    30,    26,    20,    18,    50,    15,
      52,    17,   136,    19,    20,    27,     5,   142,    53,    25,
     144,    28,   155,    21,    52,    53,   151,    19,   151,    18,
      52,    20,   157,    47,    48,    49,    24,     4,    52,    53,
      18,    39,    40,    41,    42,    43,    44,    15,   105,   106,
     107,    19,    20,    29,    51,    30,     5,    25,    39,    40,
      41,    42,    43,    44,    20,    51,    53,    36,    19,    46,
      24,    45,    25,    53,    21,    21,    19,    32,     4,    21,
      21,    21,    18,     4,    19,    37,    25,    51,    33,     4,
      24,    94,    30,    25,    95,    91
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,    56,    57,    58,    52,     0,    57,     4,    22,
       1,    52,    59,    60,    61,     4,     6,     5,    23,     1,
       4,     6,    59,    30,    61,    26,    59,     1,    59,    30,
      31,    59,    18,    27,    53,    28,    19,     7,     8,    16,
      17,    35,    37,    38,    50,    52,    62,    63,    68,    18,
      32,    68,    69,    69,    69,    12,    20,    47,    48,    49,
      52,    53,    61,    64,    65,    66,    68,    70,    71,    72,
      73,    64,    24,    20,    71,    18,    29,     4,    51,    53,
      30,     5,    51,    20,    53,    68,    64,    71,    20,    48,
      49,    71,    20,    36,    46,    45,    39,    40,    41,    42,
      43,    44,    67,    11,    12,     9,    10,    14,    24,    62,
      71,    70,    62,    71,    19,    69,    53,    71,    21,    21,
      64,    67,    71,    62,    65,    66,    71,    72,    72,    73,
      73,    73,    62,    25,    19,    32,     4,    21,    21,    71,
      21,    33,    34,    25,    37,    18,    30,    64,    62,    64,
      70,     4,    33,    19,    69,    51,    71,    24,    62,    25
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    55,    56,    57,    57,    58,    59,    59,    59,    59,
      59,    60,    60,    60,    60,    61,    61,    62,    62,    63,
      63,    63,    63,    63,    63,    63,    63,    63,    63,    64,
      64,    65,    65,    66,    66,    66,    66,    66,    66,    66,
      66,    67,    67,    67,    67,    67,    67,    68,    68,    68,
      69,    69,    70,    70,    70,    71,    72,    72,    72,    72,
      73,    73,    73,    73,    73,    73,    73
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     0,     2,    12,     0,     3,     3,     3,
       3,     3,     8,    11,     3,     1,     3,     2,     3,     3,
       5,     7,     5,     6,    13,     2,     2,     1,     2,     1,
       3,     1,     3,     4,     2,     2,     4,     3,     1,     1,
       3,     1,     1,     1,     1,     1,     1,     1,     4,     7,
       1,     3,     1,     3,     3,     1,     1,     3,     3,     3,
       4,     1,     1,     3,     2,     2,     4
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
#line 30 "calc.y" /* yacc.c:1646  */
    {printf("program->functions\n");}
#line 1379 "y.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 33 "calc.y" /* yacc.c:1646  */
    {printf("functions->epsilon\n");}
#line 1385 "y.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 35 "calc.y" /* yacc.c:1646  */
    {printf("functions->function functions\n");}
#line 1391 "y.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 38 "calc.y" /* yacc.c:1646  */
    {printf("function->FUNCTION IDENT SEMICOLON BEGIN_PARAMS declarations END_PARAMS BEGIN_LOCALS declarations END_LOCALS BEGIN_BODY statements END_BODY\n");}
#line 1397 "y.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 62 "calc.y" /* yacc.c:1646  */
    {printf("declarations->epsilon\n");}
#line 1403 "y.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 64 "calc.y" /* yacc.c:1646  */
    {printf("declarations->declaration SEMICOLON declarations\n");}
#line 1409 "y.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 66 "calc.y" /* yacc.c:1646  */
    {printf("Syntax error: Missing declaration at line %d, position %d\n", currLine, currPos);}
#line 1415 "y.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 68 "calc.y" /* yacc.c:1646  */
    {printf("Syntax error: Missing SEMICOLON at line %d, position %d\n", currLine, currPos);}
#line 1421 "y.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 70 "calc.y" /* yacc.c:1646  */
    {printf("Syntax error: Missing declarations at line %d, position %d\n", currLine, currPos);}
#line 1427 "y.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 73 "calc.y" /* yacc.c:1646  */
    {printf("declaration->identifiers SEMICOLON INTEGER\n");}
#line 1433 "y.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 75 "calc.y" /* yacc.c:1646  */
    {printf("declaration->identifiers COLON ARRAY L_SQUARE_BRACKET NUMBER R_SQUARE_BRACKET OF INTEGER\n");}
#line 1439 "y.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 77 "calc.y" /* yacc.c:1646  */
    {printf("declaration->identifiers SEMICOLON ARRAY L_SQUARE_BRACKET NUMBER R_SQUARE_BRACKET L_SQUARE_BRACKET NUMBER R_SQUARE_BRACKET OF INTEGER\n");}
#line 1445 "y.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 79 "calc.y" /* yacc.c:1646  */
    {printf("Syntax error: Missing ident at line %d, position %d\n", currLine, currPos);}
#line 1451 "y.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 83 "calc.y" /* yacc.c:1646  */
    {printf("ident->IDENT\n");}
#line 1457 "y.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 85 "calc.y" /* yacc.c:1646  */
    {printf("ident->IDENT COMMA ident\n");}
#line 1463 "y.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 88 "calc.y" /* yacc.c:1646  */
    {printf("statements->statement SEMICOLON\n");}
#line 1469 "y.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 90 "calc.y" /* yacc.c:1646  */
    {printf("statement->statement SEMICOLON statements\n");}
#line 1475 "y.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 93 "calc.y" /* yacc.c:1646  */
    {printf("statement->Var ASSIGN expression\n");}
#line 1481 "y.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 95 "calc.y" /* yacc.c:1646  */
    {printf("statement->IF bool_expression THEN statements SEMICOLON ENDIF\n");}
#line 1487 "y.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 97 "calc.y" /* yacc.c:1646  */
    {printf("statement->IF bool_expression THEN statements SEMICOLON ENDIF\n");}
#line 1493 "y.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 99 "calc.y" /* yacc.c:1646  */
    {printf("statement->WHILE bool_expression BEGINLOOP statements SEMICOLON ENDLOOP\n");}
#line 1499 "y.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 101 "calc.y" /* yacc.c:1646  */
    {printf("statement->DO BEGINLOOP statements SEMICOLON ENDLOOP WHILE bool_expression\n");}
#line 1505 "y.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 103 "calc.y" /* yacc.c:1646  */
    {printf("statement->FOR vars ASSIGN NUMBER SEMICOLON bool_expression SEMICOLON vars ASSIGN expressions BEGINLOOP statements SEMICOLON ENDLOOP\n");}
#line 1511 "y.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 105 "calc.y" /* yacc.c:1646  */
    {printf("statement->READ var\n");}
#line 1517 "y.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 107 "calc.y" /* yacc.c:1646  */
    {printf("statement->WRITE vars\n");}
#line 1523 "y.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 109 "calc.y" /* yacc.c:1646  */
    {printf("statement->CONTINUE\n");}
#line 1529 "y.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 111 "calc.y" /* yacc.c:1646  */
    {printf("statement->RETURN expressions\n");}
#line 1535 "y.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 115 "calc.y" /* yacc.c:1646  */
    {printf("bool_expression->relation_and_expression\n");}
#line 1541 "y.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 117 "calc.y" /* yacc.c:1646  */
    {printf("bool_expression->relation_and_expression OR relation_and_expression\n");}
#line 1547 "y.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 121 "calc.y" /* yacc.c:1646  */
    {printf("relation_and_expression->relation_expression\n");}
#line 1553 "y.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 123 "calc.y" /* yacc.c:1646  */
    {printf("relation_and_expressions->relation_expression OR relation_expression\n");}
#line 1559 "y.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 126 "calc.y" /* yacc.c:1646  */
    {printf("relation_expression->NOT expressions comp expressions\n");}
#line 1565 "y.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 128 "calc.y" /* yacc.c:1646  */
    {printf("relation_expression->NOT TRUE\n");}
#line 1571 "y.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 130 "calc.y" /* yacc.c:1646  */
    {printf("relation_expression->NOT FALSE\n");}
#line 1577 "y.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 132 "calc.y" /* yacc.c:1646  */
    {printf("relation_expression->NOT L_PAREN bool_expressions R_PAREN\n");}
#line 1583 "y.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 134 "calc.y" /* yacc.c:1646  */
    {printf("relation_expression->expressions comp expressions\n");}
#line 1589 "y.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 136 "calc.y" /* yacc.c:1646  */
    {printf("relation_expression->TRUE\n");}
#line 1595 "y.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 138 "calc.y" /* yacc.c:1646  */
    {printf("relation_expression->FALSE\n");}
#line 1601 "y.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 140 "calc.y" /* yacc.c:1646  */
    {printf("relation_expression->L_PAREN bool_expressions R_PAREN\n");}
#line 1607 "y.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 145 "calc.y" /* yacc.c:1646  */
    {printf("comp->EQ\n");}
#line 1613 "y.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 147 "calc.y" /* yacc.c:1646  */
    {printf("comp->NEQ\n");}
#line 1619 "y.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 149 "calc.y" /* yacc.c:1646  */
    {printf("comp->LT\n");}
#line 1625 "y.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 151 "calc.y" /* yacc.c:1646  */
    {printf("comp->GT\n");}
#line 1631 "y.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 153 "calc.y" /* yacc.c:1646  */
    {printf("comp->GTE\n");}
#line 1637 "y.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 155 "calc.y" /* yacc.c:1646  */
    {printf("comp->LTE\n");}
#line 1643 "y.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 159 "calc.y" /* yacc.c:1646  */
    {printf("var->IDENT\n");}
#line 1649 "y.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 161 "calc.y" /* yacc.c:1646  */
    {printf("var->ident L_SQUARE_BRACKET expression R_SQUARE_BRACKET\n");}
#line 1655 "y.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 163 "calc.y" /* yacc.c:1646  */
    {printf("var->ident L_SQUARE_BRACKET expression R_SQUARE_BRACKET L_SQUARE_BRACKET expression R_SQUARE_BRACKET\n");}
#line 1661 "y.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 167 "calc.y" /* yacc.c:1646  */
    {printf("vars->var\n");}
#line 1667 "y.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 169 "calc.y" /* yacc.c:1646  */
    {printf("vars->var COMMA vars\n");}
#line 1673 "y.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 172 "calc.y" /* yacc.c:1646  */
    {printf("expression->multiplicative_expression\n");}
#line 1679 "y.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 174 "calc.y" /* yacc.c:1646  */
    {printf("expression->multiplicative_expression PLUS multiplicative_expression\n");}
#line 1685 "y.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 176 "calc.y" /* yacc.c:1646  */
    {printf("expression->multiplicative_expression MINUS multiplicative_expression\n");}
#line 1691 "y.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 179 "calc.y" /* yacc.c:1646  */
    {printf("expressions->expression\n");}
#line 1697 "y.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 183 "calc.y" /* yacc.c:1646  */
    {printf("multiplicative_expression->terms\n");}
#line 1703 "y.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 185 "calc.y" /* yacc.c:1646  */
    {printf("multiplicative_expression->term MULT term\n");}
#line 1709 "y.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 187 "calc.y" /* yacc.c:1646  */
    {printf("multiplicative_expression->term DIV term\n");}
#line 1715 "y.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 189 "calc.y" /* yacc.c:1646  */
    {printf("multiplicative_expression->term PER term\n");}
#line 1721 "y.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 194 "calc.y" /* yacc.c:1646  */
    {printf("term->identifier L_PAREN expressions R_PAREN\n");}
#line 1727 "y.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 196 "calc.y" /* yacc.c:1646  */
    {printf("term->Var\n");}
#line 1733 "y.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 198 "calc.y" /* yacc.c:1646  */
    {printf("term->NUMBER\n");}
#line 1739 "y.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 200 "calc.y" /* yacc.c:1646  */
    {printf("term->L_PAREN expressions R_PAREN\n");}
#line 1745 "y.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 202 "calc.y" /* yacc.c:1646  */
    {printf("term->MINUS var\n");}
#line 1751 "y.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 204 "calc.y" /* yacc.c:1646  */
    {printf("term->MINUS NUMBER\n");}
#line 1757 "y.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 206 "calc.y" /* yacc.c:1646  */
    {printf("term->MINUS L_PAREN expressions R_PAREN\n");}
#line 1763 "y.tab.c" /* yacc.c:1646  */
    break;


#line 1767 "y.tab.c" /* yacc.c:1646  */
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
#line 209 "calc.y" /* yacc.c:1906  */


int main(int argc, char ** argv)
{
    if(argc >= 2)
    {
       yyin = fopen(argv[1], "r");
       if(yyin == NULL)
       { 
          yyin = stdin;
       }
    }  
    else 
    {
        yyin = stdin;
    }
    
    yyparse(); //calls yylex()
    return 1;

}

void yyerror(const char *msg){
   printf("Error in line %d, position %d: %s\n", currLine, currPos, msg);
}

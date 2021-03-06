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
    ADD = 309,
    SUB = 310,
    UMINUS = 311
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 11 "calc.y" /* yacc.c:355  */

   char * identval;
   int iVal;

#line 178 "y.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 195 "y.tab.c" /* yacc.c:358  */

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
#define YYLAST   343

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  57
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  19
/* YYNRULES -- Number of rules.  */
#define YYNRULES  96
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  211

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
static const yytype_uint8 yyrline[] =
{
       0,    39,    39,    43,    44,    47,    51,    52,    54,    56,
      58,    61,    63,    65,    67,    69,    71,    75,    77,    80,
      82,    84,    86,    88,    91,    93,    95,    97,    99,   101,
     103,   105,   107,   109,   111,   113,   115,   119,   121,   124,
     126,   129,   131,   133,   135,   137,   139,   141,   143,   145,
     147,   151,   153,   155,   157,   159,   161,   163,   167,   169,
     171,   173,   175,   177,   179,   183,   185,   187,   189,   193,
     195,   197,   199,   201,   203,   205,   208,   212,   214,   216,
     218,   220,   222,   224,   226,   228,   230,   232,   234,   236,
     241,   243,   245,   247,   249,   251,   253
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
  "FALSE", "RETURN", "ASSIGN", "IDENT", "NUMBER", "ADD", "SUB", "UMINUS",
  "$accept", "program", "functions", "function", "declarations",
  "declaration", "ident", "statements", "statement", "bool_expression",
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
     305,   306,   307,   308,   309,   310,   311
};
# endif

#define YYPACT_NINF -55

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-55)))

#define YYTABLE_NINF -20

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      23,   -22,    18,   -55,    23,    31,   -55,   -55,    68,    15,
     135,   102,    91,    47,     8,    64,   101,    70,   119,    64,
     181,   112,   199,   -55,   -55,   -55,    54,   -55,   135,   -55,
     -55,   -55,   -55,   133,   127,   108,   147,   158,   243,    -7,
      11,     9,    53,    63,   -55,    21,    21,   157,    27,   171,
     161,   107,    92,   139,   167,   243,    27,    19,   183,   -55,
      19,   -55,    19,   150,   265,    33,    51,   100,   -55,   -55,
       3,   -55,   185,   174,   169,   162,   -55,   -55,   245,    84,
     238,   198,   243,    27,   -55,    82,   -55,   243,   220,    27,
      27,   184,   -55,   -55,   205,    63,    81,   187,   116,   120,
     143,   159,   223,    27,   -55,   -55,   298,   221,   222,    77,
     -55,   -55,   245,    27,   243,    21,    21,   -55,   -55,   -55,
     -55,   -55,   -55,   -55,    27,   164,   166,   173,   179,   182,
     243,   231,   246,   317,   254,   -55,    11,   -55,   -55,   -55,
     250,   -55,   -55,    19,   -55,   273,   223,   -55,   223,   -55,
     109,   -55,   223,   -55,   269,   -55,   -55,   -55,   304,   270,
      27,   271,   124,   -55,   -55,   -55,   109,   -55,   109,   -55,
     223,   -55,   223,   -55,   223,   -55,   276,   259,   288,   292,
     287,    21,   -55,   -55,   -55,   -55,   -55,   -55,   243,   -55,
      21,    27,   186,   -55,   299,   290,   -55,   301,   323,   302,
      63,   -55,   -55,   -55,   -55,   278,    27,   300,   243,   305,
     -55
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       3,     0,     0,     2,     3,     0,     1,     4,     0,     0,
       0,    17,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     8,    14,    18,     0,     9,    10,     7,
      15,    16,    11,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    34,     0,     0,     0,     0,    58,
       0,     0,     0,     0,     0,     0,     0,    31,    65,    30,
      33,    32,     0,     0,     0,     0,     0,     0,    46,    47,
      58,    92,     0,     0,    37,    39,    91,    76,     0,    69,
      77,     0,     0,     0,    35,     0,     5,     0,     0,     0,
       0,     0,    12,    22,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    95,    94,     0,     0,     0,     0,
      42,    43,     0,     0,     0,     0,     0,    57,    51,    52,
      53,    54,    55,    56,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    23,    21,    20,    36,    24,
       0,    60,    67,    68,    66,     0,    87,    81,    88,    83,
      74,    72,    89,    85,     0,    49,    48,    93,     0,     0,
       0,     0,     0,    38,    40,    45,    73,    70,    75,    71,
      82,    78,    84,    79,    86,    80,     0,     0,    62,    59,
       0,     0,    96,    50,    44,    41,    90,    25,     0,    27,
       0,     0,     0,    13,     0,     0,    28,     0,     0,     0,
       0,    26,    63,    64,    61,     0,     0,     0,     0,     0,
      29
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -55,   -55,   334,   -55,   194,   -55,   285,   -42,   -55,   -34,
     224,   227,   228,   -38,   -36,   -54,   -47,   -16,   170
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     2,     3,     4,    12,    13,    72,    50,    51,    73,
      74,    75,   124,    76,    59,    77,    78,    79,    80
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      52,    84,    94,    58,    58,    58,    61,    63,    17,    21,
      57,    53,    81,    93,    22,    55,    10,    52,     6,   108,
     112,    85,    64,   -17,    95,    54,     1,   105,    64,    56,
       5,   134,   107,    65,   102,     8,   132,    56,    -6,    65,
     131,    66,   138,   139,    52,   135,   137,    83,    19,    52,
      52,    20,   106,   103,    60,    10,   154,    58,    58,   142,
     144,    49,   108,    65,    62,    10,   161,    11,    67,    68,
      69,    66,   162,    70,    71,   159,    52,   165,   158,    70,
      71,    -6,   143,   133,   151,    49,   104,    -6,   176,    65,
       9,    -6,    52,    89,    65,   125,   126,    66,    67,    68,
      69,    64,    83,    70,    71,    49,    11,    17,    87,   167,
     169,    88,    65,   185,    18,    49,    11,   146,    98,    99,
     109,   148,    11,   101,    67,    68,    69,    56,    65,    70,
      71,    24,    65,    49,    70,    71,    83,   197,   199,    15,
      83,    16,    30,    90,   150,    26,   195,   194,   110,   111,
      52,    35,    70,    71,    36,    65,   196,   187,   188,   207,
     152,    37,    58,    83,   205,   166,   209,   168,    70,    71,
      52,    65,    70,    71,   170,    38,    65,    39,    65,    83,
     172,    82,    28,   174,    83,    65,    83,   198,    96,    85,
      86,    65,    91,    83,    65,    70,    71,    92,    65,    83,
      31,    97,    83,   140,    -6,   113,    83,   116,    -6,    23,
     114,    70,    71,    27,    29,   115,    70,    71,    70,    71,
      34,   136,   130,   117,   141,    70,    71,    41,    42,    32,
      33,    70,    71,    11,    70,    71,    43,    44,    70,    71,
     145,    56,   156,   157,    40,   -19,   117,   127,   128,   -19,
      41,    42,   129,   -19,   -19,    45,   177,    46,    47,    43,
      44,   118,   119,   120,   121,   122,   123,   157,   147,   149,
      48,   153,    49,   179,    98,    99,   100,   181,    45,   101,
      46,    47,   180,    56,   118,   119,   120,   121,   122,   123,
     182,   184,   186,    48,    14,    49,   190,   171,   173,   175,
      14,   189,    25,   200,    14,    14,   191,    98,    99,   100,
     192,    14,   101,    98,    99,   100,    56,   193,   101,   155,
     202,   204,    56,   201,   208,   183,    98,    99,   100,   206,
     210,   101,    98,    99,   100,    56,   178,   101,     7,   163,
     160,    56,   203,   164
};

static const yytype_uint8 yycheck[] =
{
      38,    48,    56,    41,    42,    43,    42,    43,     5,     1,
       1,    18,    46,    55,     6,     4,     1,    55,     0,    66,
      67,    18,     1,    20,     5,    32,     3,    65,     1,    18,
      52,    85,    66,    12,     1,     4,    83,    18,    23,    12,
      82,    20,    89,    90,    82,    87,    88,    20,     1,    87,
      88,     4,     1,    20,     1,     1,   103,    95,    96,    95,
      96,    52,   109,    12,     1,     1,   113,    52,    47,    48,
      49,    20,   114,    52,    53,   109,   114,   124,     1,    52,
      53,    27,     1,     1,   100,    52,    53,    23,   130,    12,
      22,    27,   130,     1,    12,    11,    12,    20,    47,    48,
      49,     1,    20,    52,    53,    52,    52,     5,     1,   125,
     126,     4,    12,   160,    23,    52,    52,     1,     9,    10,
      20,     1,    52,    14,    47,    48,    49,    18,    12,    52,
      53,    30,    12,    52,    52,    53,    20,   191,   192,     4,
      20,     6,    30,    51,     1,    26,   188,   181,    48,    49,
     188,    18,    52,    53,    27,    12,   190,    33,    34,   206,
       1,    53,   200,    20,   200,     1,   208,     1,    52,    53,
     208,    12,    52,    53,     1,    28,    12,    19,    12,    20,
       1,    24,     1,     1,    20,    12,    20,     1,     5,    18,
      29,    12,    53,    20,    12,    52,    53,    30,    12,    20,
       1,    51,    20,    19,    23,    20,    20,    45,    27,    15,
      36,    52,    53,    19,    20,    46,    52,    53,    52,    53,
      26,     1,    24,     1,    19,    52,    53,     7,     8,    30,
      31,    52,    53,    52,    52,    53,    16,    17,    52,    53,
      53,    18,    21,    21,     1,    25,     1,     9,    10,    29,
       7,     8,    14,    33,    34,    35,    25,    37,    38,    16,
      17,    39,    40,    41,    42,    43,    44,    21,    98,    99,
      50,   101,    52,    19,     9,    10,    11,     4,    35,    14,
      37,    38,    32,    18,    39,    40,    41,    42,    43,    44,
      21,    21,    21,    50,     9,    52,    37,   127,   128,   129,
      15,    25,    17,     4,    19,    20,    18,     9,    10,    11,
      18,    26,    14,     9,    10,    11,    18,    30,    14,    21,
      19,    19,    18,    33,    24,    21,     9,    10,    11,    51,
      25,    14,     9,    10,    11,    18,    19,    14,     4,   115,
     112,    18,    19,   116
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,    58,    59,    60,    52,     0,    59,     4,    22,
       1,    52,    61,    62,    63,     4,     6,     5,    23,     1,
       4,     1,     6,    61,    30,    63,    26,    61,     1,    61,
      30,     1,    30,    31,    61,    18,    27,    53,    28,    19,
       1,     7,     8,    16,    17,    35,    37,    38,    50,    52,
      64,    65,    70,    18,    32,     4,    18,     1,    70,    71,
       1,    71,     1,    71,     1,    12,    20,    47,    48,    49,
      52,    53,    63,    66,    67,    68,    70,    72,    73,    74,
      75,    66,    24,    20,    73,    18,    29,     1,     4,     1,
      51,    53,    30,    64,    72,     5,     5,    51,     9,    10,
      11,    14,     1,    20,    53,    70,     1,    66,    73,    20,
      48,    49,    73,    20,    36,    46,    45,     1,    39,    40,
      41,    42,    43,    44,    69,    11,    12,     9,    10,    14,
      24,    64,    73,     1,    72,    64,     1,    64,    73,    73,
      19,    19,    71,     1,    71,    53,     1,    75,     1,    75,
       1,    74,     1,    75,    73,    21,    21,    21,     1,    66,
      69,    73,    64,    67,    68,    73,     1,    74,     1,    74,
       1,    75,     1,    75,     1,    75,    64,    25,    19,    19,
      32,     4,    21,    21,    21,    73,    21,    33,    34,    25,
      37,    18,    18,    30,    66,    64,    66,    72,     1,    72,
       4,    33,    19,    19,    19,    71,    51,    73,    24,    64,
      25
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    57,    58,    59,    59,    60,    61,    61,    61,    61,
      61,    62,    62,    62,    62,    62,    62,    63,    63,    64,
      64,    64,    64,    64,    65,    65,    65,    65,    65,    65,
      65,    65,    65,    65,    65,    65,    65,    66,    66,    67,
      67,    68,    68,    68,    68,    68,    68,    68,    68,    68,
      68,    69,    69,    69,    69,    69,    69,    69,    70,    70,
      70,    70,    70,    70,    70,    71,    71,    71,    71,    72,
      72,    72,    72,    72,    72,    72,    73,    74,    74,    74,
      74,    74,    74,    74,    74,    74,    74,    74,    74,    74,
      75,    75,    75,    75,    75,    75,    75
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     0,     2,    12,     0,     3,     3,     3,
       3,     3,     8,    11,     3,     3,     3,     1,     3,     2,
       3,     3,     3,     3,     3,     5,     7,     5,     6,    13,
       2,     2,     2,     2,     1,     2,     3,     1,     3,     1,
       3,     4,     2,     2,     4,     3,     1,     1,     3,     3,
       4,     1,     1,     1,     1,     1,     1,     1,     1,     4,
       4,     7,     4,     7,     7,     1,     3,     3,     3,     1,
       3,     3,     3,     3,     3,     3,     1,     1,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
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
#line 40 "calc.y" /* yacc.c:1646  */
    {printf("program->functions\n");}
#line 1441 "y.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 43 "calc.y" /* yacc.c:1646  */
    {printf("functions->epsilon\n");}
#line 1447 "y.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 45 "calc.y" /* yacc.c:1646  */
    {printf("functions->function functions\n");}
#line 1453 "y.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 48 "calc.y" /* yacc.c:1646  */
    {printf("function->FUNCTION IDENT SEMICOLON BEGIN_PARAMS declaration END_PARAMS BEGIN_LOCALS declaration END_LOCALS BEGIN_BODY statements END_BODY\n");}
#line 1459 "y.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 51 "calc.y" /* yacc.c:1646  */
    {printf("declarations->epsilon\n");}
#line 1465 "y.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 53 "calc.y" /* yacc.c:1646  */
    {printf("declarations->declaration SEMICOLON declarations\n");}
#line 1471 "y.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 55 "calc.y" /* yacc.c:1646  */
    {printf("syntax error: Missing declaration at line %d\n", currLine);}
#line 1477 "y.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 57 "calc.y" /* yacc.c:1646  */
    {printf("syntax error: Missing SEMICOLON at line %d\n", currLine);}
#line 1483 "y.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 59 "calc.y" /* yacc.c:1646  */
    {printf("syntax error: Missing declarations at line %d\n", currLine);}
#line 1489 "y.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 62 "calc.y" /* yacc.c:1646  */
    {printf("declaration->ident SEMICOLON INTEGER\n");}
#line 1495 "y.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 64 "calc.y" /* yacc.c:1646  */
    {printf("declaration->identifiers COLON ARRAY L_SQUARE_BRACKET NUMBER R_SQUARE_BRACKET OF INTEGER\n");}
#line 1501 "y.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 66 "calc.y" /* yacc.c:1646  */
    {printf("declaration->identifiers SEMICOLON ARRAY L_SQUARE_BRACKET NUMBER R_SQUARE_BRACKET L_SQUARE_BRACKET NUMBER R_SQUARE_BRACKET OF INTEGER\n");}
#line 1507 "y.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 68 "calc.y" /* yacc.c:1646  */
    {printf("syntax error: missing identifier at line %d\n", currLine);}
#line 1513 "y.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 70 "calc.y" /* yacc.c:1646  */
    {printf("syntax error: missing COLON at line %d\n", currLine);}
#line 1519 "y.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 72 "calc.y" /* yacc.c:1646  */
    {printf("syntax error: missing INTEGER at line %d\n", currLine);}
#line 1525 "y.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 76 "calc.y" /* yacc.c:1646  */
    {printf("ident->IDENT\n");}
#line 1531 "y.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 78 "calc.y" /* yacc.c:1646  */
    {printf("ident->IDENT COMMA ident\n");}
#line 1537 "y.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 81 "calc.y" /* yacc.c:1646  */
    {printf("statements->statement SEMICOLON\n");}
#line 1543 "y.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 83 "calc.y" /* yacc.c:1646  */
    {printf("statement->statement SEMICOLON statements\n");}
#line 1549 "y.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 85 "calc.y" /* yacc.c:1646  */
    {printf("syntax error: missing statements at line %d\n", currLine);}
#line 1555 "y.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 87 "calc.y" /* yacc.c:1646  */
    {printf("syntax error: missing statement at line %d\n", currLine);}
#line 1561 "y.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 89 "calc.y" /* yacc.c:1646  */
    {printf("syntax error: missing SEMICOLON at line %d\n", currLine);}
#line 1567 "y.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 92 "calc.y" /* yacc.c:1646  */
    {printf("statement->Var ASSIGN expression\n");}
#line 1573 "y.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 94 "calc.y" /* yacc.c:1646  */
    {printf("statement->IF bool_expression THEN statements SEMICOLON ENDIF\n");}
#line 1579 "y.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 96 "calc.y" /* yacc.c:1646  */
    {printf("statement->IF bool_expression THEN statements SEMICOLON ENDIF\n");}
#line 1585 "y.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 98 "calc.y" /* yacc.c:1646  */
    {printf("statement->WHILE bool_expression BEGINLOOP statements SEMICOLON ENDLOOP\n");}
#line 1591 "y.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 100 "calc.y" /* yacc.c:1646  */
    {printf("statement->DO BEGINLOOP statements SEMICOLON ENDLOOP WHILE bool_expression\n");}
#line 1597 "y.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 102 "calc.y" /* yacc.c:1646  */
    {printf("statement->FOR vars ASSIGN NUMBER SEMICOLON bool_expression SEMICOLON vars ASSIGN expressions BEGINLOOP statements SEMICOLON ENDLOOP\n");}
#line 1603 "y.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 104 "calc.y" /* yacc.c:1646  */
    {printf("statement->READ var\n");}
#line 1609 "y.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 106 "calc.y" /* yacc.c:1646  */
    {printf("syntax error: no variables at line %d\n", currLine);}
#line 1615 "y.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 108 "calc.y" /* yacc.c:1646  */
    {printf("statement->WRITE vars\n");}
#line 1621 "y.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 110 "calc.y" /* yacc.c:1646  */
    {printf("syntax error: no variable at line %d\n", currLine);}
#line 1627 "y.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 112 "calc.y" /* yacc.c:1646  */
    {printf("statement->CONTINUE\n");}
#line 1633 "y.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 114 "calc.y" /* yacc.c:1646  */
    {printf("statement->RETURN expressions\n");}
#line 1639 "y.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 116 "calc.y" /* yacc.c:1646  */
    {printf("syntax error: no assign := at line %d\n", currLine);}
#line 1645 "y.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 120 "calc.y" /* yacc.c:1646  */
    {printf("bool_expression->relation_and_expression\n");}
#line 1651 "y.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 122 "calc.y" /* yacc.c:1646  */
    {printf("bool_expression->relation_and_expression OR relation_and_expression\n");}
#line 1657 "y.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 125 "calc.y" /* yacc.c:1646  */
    {printf("relation_and_expression->relation_expression\n");}
#line 1663 "y.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 127 "calc.y" /* yacc.c:1646  */
    {printf("relation_and_expressions->relation_expression OR relation_expression\n");}
#line 1669 "y.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 130 "calc.y" /* yacc.c:1646  */
    {printf("relation_expression->NOT expressions comp expressions\n");}
#line 1675 "y.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 132 "calc.y" /* yacc.c:1646  */
    {printf("relation_expression->NOT TRUE\n");}
#line 1681 "y.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 134 "calc.y" /* yacc.c:1646  */
    {printf("relation_expression->NOT FALSE\n");}
#line 1687 "y.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 136 "calc.y" /* yacc.c:1646  */
    {printf("relation_expression->NOT L_PAREN bool_expressions R_PAREN\n");}
#line 1693 "y.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 138 "calc.y" /* yacc.c:1646  */
    {printf("relation_expression->expressions comp expressions\n");}
#line 1699 "y.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 140 "calc.y" /* yacc.c:1646  */
    {printf("relation_expression->TRUE\n");}
#line 1705 "y.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 142 "calc.y" /* yacc.c:1646  */
    {printf("relation_expression->FALSE\n");}
#line 1711 "y.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 144 "calc.y" /* yacc.c:1646  */
    {printf("relation_expression->L_PAREN bool_expressions R_PAREN\n");}
#line 1717 "y.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 146 "calc.y" /* yacc.c:1646  */
    {printf("syntax error: missing bool_expression in line %d\n", currLine);}
#line 1723 "y.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 148 "calc.y" /* yacc.c:1646  */
    {printf("synax error: missing bool_expression in line %d\n", currLine);}
#line 1729 "y.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 152 "calc.y" /* yacc.c:1646  */
    {printf("comp->EQ\n");}
#line 1735 "y.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 154 "calc.y" /* yacc.c:1646  */
    {printf("comp->NEQ\n");}
#line 1741 "y.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 156 "calc.y" /* yacc.c:1646  */
    {printf("comp->LT\n");}
#line 1747 "y.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 158 "calc.y" /* yacc.c:1646  */
    {printf("comp->GT\n");}
#line 1753 "y.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 160 "calc.y" /* yacc.c:1646  */
    {printf("comp->GTE\n");}
#line 1759 "y.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 162 "calc.y" /* yacc.c:1646  */
    {printf("comp->LTE\n");}
#line 1765 "y.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 164 "calc.y" /* yacc.c:1646  */
    {printf("syntax error: missing EQ, NEQ, LT, GT, GTE or LTE in line %d\n", currLine);}
#line 1771 "y.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 168 "calc.y" /* yacc.c:1646  */
    {printf("var->IDENT\n");}
#line 1777 "y.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 170 "calc.y" /* yacc.c:1646  */
    {printf("var->ident L_SQUARE_BRACKET expression R_SQUARE_BRACKET\n");}
#line 1783 "y.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 172 "calc.y" /* yacc.c:1646  */
    {printf("syntax error: missing identifier in line %d\n", currLine);}
#line 1789 "y.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 174 "calc.y" /* yacc.c:1646  */
    {printf("var->ident L_SQUARE_BRACKET expression R_SQUARE_BRACKET L_SQUARE_BRACKET expression R_SQUARE_BRACKET\n");}
#line 1795 "y.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 176 "calc.y" /* yacc.c:1646  */
    {printf("syntax error: missing expression in line %d\n", currLine);}
#line 1801 "y.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 178 "calc.y" /* yacc.c:1646  */
    {printf("syntax error: missing expression in line %d\n", currLine);}
#line 1807 "y.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 180 "calc.y" /* yacc.c:1646  */
    {printf("syntax error: missing expression in line %d\n", currLine);}
#line 1813 "y.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 184 "calc.y" /* yacc.c:1646  */
    {printf("vars->var\n");}
#line 1819 "y.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 186 "calc.y" /* yacc.c:1646  */
    {printf("vars->var COMMA vars\n");}
#line 1825 "y.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 188 "calc.y" /* yacc.c:1646  */
    {printf("syntax error: missing variable in line %d\n", currLine);}
#line 1831 "y.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 190 "calc.y" /* yacc.c:1646  */
    {printf("syntax error: missing variables in line %d\n", currLine);}
#line 1837 "y.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 194 "calc.y" /* yacc.c:1646  */
    {printf("expression->multiplicative_expression\n");}
#line 1843 "y.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 196 "calc.y" /* yacc.c:1646  */
    {printf("expression->multiplicative_expression PLUS multiplicative_expression\n");}
#line 1849 "y.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 198 "calc.y" /* yacc.c:1646  */
    {printf("expression->multiplicative_expression MINUS multiplicative_expression\n");}
#line 1855 "y.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 200 "calc.y" /* yacc.c:1646  */
    {printf("Syntax error: Missing first term for addition at line %d\n", currLine);}
#line 1861 "y.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 202 "calc.y" /* yacc.c:1646  */
    {printf("Syntax error: Missing second term for addition at line %d\n", currLine);}
#line 1867 "y.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 204 "calc.y" /* yacc.c:1646  */
    {printf("Syntax error: No terms for PLUS available at line %d\n", currLine);}
#line 1873 "y.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 206 "calc.y" /* yacc.c:1646  */
    {printf("Syntax error: Missing second term for subtraction at line %d\n", currLine);}
#line 1879 "y.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 209 "calc.y" /* yacc.c:1646  */
    {printf("expressions->expression\n");}
#line 1885 "y.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 213 "calc.y" /* yacc.c:1646  */
    {printf("multiplicative_expression->terms\n");}
#line 1891 "y.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 215 "calc.y" /* yacc.c:1646  */
    {printf("multiplicative_expression->term MULT term\n");}
#line 1897 "y.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 217 "calc.y" /* yacc.c:1646  */
    {printf("multiplicative_expression->term DIV term\n");}
#line 1903 "y.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 219 "calc.y" /* yacc.c:1646  */
    {printf("multiplicative_expression->term PER term\n");}
#line 1909 "y.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 221 "calc.y" /* yacc.c:1646  */
    {printf("Syntax error: Missing first term for multiplication at line %d\n", currLine);}
#line 1915 "y.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 223 "calc.y" /* yacc.c:1646  */
    {printf("Syntax error: Missing second term for multiplication at line %d\n", currLine);}
#line 1921 "y.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 225 "calc.y" /* yacc.c:1646  */
    {printf("Syntax error: Missing first term for division at line %d\n", currLine);}
#line 1927 "y.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 227 "calc.y" /* yacc.c:1646  */
    {printf("Syntax error: Missing second term for division at line %d\n", currLine);}
#line 1933 "y.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 229 "calc.y" /* yacc.c:1646  */
    {printf("Syntax error: Missing first term for modulus at line %d\n", currLine);}
#line 1939 "y.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 231 "calc.y" /* yacc.c:1646  */
    {printf("Syntax error: Missing second term for modulus at line %d\n", currLine);}
#line 1945 "y.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 233 "calc.y" /* yacc.c:1646  */
    {printf("Syntax error: No terms for MULT available at line %d\n", currLine);}
#line 1951 "y.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 235 "calc.y" /* yacc.c:1646  */
    {printf("Syntax error: No terms for DIV available at line %d\n", currLine);}
#line 1957 "y.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 237 "calc.y" /* yacc.c:1646  */
    {printf("Syntax error: No terms for PER available at line %d\n", currLine);}
#line 1963 "y.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 242 "calc.y" /* yacc.c:1646  */
    {printf("term->identifier L_PAREN expressions R_PAREN\n");}
#line 1969 "y.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 244 "calc.y" /* yacc.c:1646  */
    {printf("term->Var\n");}
#line 1975 "y.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 246 "calc.y" /* yacc.c:1646  */
    {printf("term->NUMBER\n");}
#line 1981 "y.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 248 "calc.y" /* yacc.c:1646  */
    {printf("term->L_PAREN expressions R_PAREN\n");}
#line 1987 "y.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 250 "calc.y" /* yacc.c:1646  */
    {printf("term->MINUS var\n");}
#line 1993 "y.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 252 "calc.y" /* yacc.c:1646  */
    {printf("term->MINUS NUMBER\n");}
#line 1999 "y.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 254 "calc.y" /* yacc.c:1646  */
    {printf("term->MINUS L_PAREN expressions R_PAREN\n");}
#line 2005 "y.tab.c" /* yacc.c:1646  */
    break;


#line 2009 "y.tab.c" /* yacc.c:1646  */
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
#line 257 "calc.y" /* yacc.c:1906  */


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

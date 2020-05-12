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
#define YYLAST   169

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  55
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  19
/* YYNRULES -- Number of rules.  */
#define YYNRULES  62
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  152

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
       0,    29,    29,    33,    34,    37,    41,    42,    45,    47,
      49,    53,    55,    58,    60,    63,    65,    67,    69,    71,
      73,    75,    77,    79,    81,    85,    87,    91,    93,    96,
      98,   100,   102,   104,   106,   108,   110,   115,   117,   119,
     121,   123,   125,   129,   131,   133,   137,   139,   142,   144,
     146,   149,   153,   155,   157,   159,   164,   166,   168,   170,
     172,   174,   176
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

#define YYPACT_NINF -59

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-59)))

#define YYTABLE_NINF -12

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      16,   -20,    25,   -59,    16,    23,   -59,   -59,    12,   -14,
      36,    21,    43,    51,   -14,    34,   -14,    39,   -59,   -14,
     -59,   -59,    58,    54,    37,    59,    74,    45,    -3,    46,
      46,    46,   -59,    19,    19,    77,    -2,    85,    79,   100,
      55,    56,    81,   109,   -59,   -59,    64,     3,    19,    76,
     -59,   -59,     6,   -59,    97,    69,    73,    78,   -59,   -59,
      98,    63,     7,    96,    45,    -2,   -59,    -2,   -59,    45,
      -2,   102,   -59,    46,    90,    -2,   -59,   -59,   105,    92,
      19,   -59,   -59,    98,    -2,    45,    19,    19,   -59,   -59,
     -59,   -59,   -59,   -59,    -2,    -2,    -2,    -2,    -2,    -2,
      45,   119,   106,   111,   -59,   -59,   113,   -59,   142,   126,
     -59,   -59,   127,    -2,   128,    52,   -59,   -59,   -59,   -59,
     -59,   -59,   -59,   -59,   125,   114,   134,   123,    19,   -59,
     -59,   -59,   -59,   -59,    45,   -59,    19,    -2,   -59,   150,
     122,   -59,   137,    46,   -59,   -59,   107,    -2,   133,    45,
     135,   -59
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       3,     0,     0,     2,     3,     0,     1,     4,     0,     6,
      11,     0,     0,     0,     0,     0,     6,     0,    12,     6,
       7,     8,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    23,     0,     0,     0,     0,    43,     0,     0,
       0,     0,     0,    46,    21,    22,     0,     0,     0,     0,
      34,    35,    43,    58,     0,     0,    25,    27,    57,    51,
       0,    48,    52,     0,     0,     0,    24,     0,     5,    13,
       0,     0,     9,     0,     0,     0,    61,    60,     0,     0,
       0,    30,    31,     0,     0,     0,     0,     0,    37,    38,
      39,    40,    41,    42,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    14,    15,     0,    47,     0,     0,
      36,    59,     0,     0,     0,     0,    26,    28,    33,    49,
      50,    53,    54,    55,     0,     0,    44,     0,     0,    62,
      32,    29,    56,    16,     0,    18,     0,     0,    10,     0,
       0,    19,     0,     0,    17,    45,     0,     0,     0,     0,
       0,    20
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -59,   -59,   155,   -59,    17,   -59,    75,   -57,   -59,   -26,
      80,    82,    84,   -27,   -25,   -58,   -35,     4,   -34
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     2,     3,     4,    11,    12,    54,    38,    39,    55,
      56,    57,    94,    58,    44,    59,    60,    61,    62
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      40,    66,    43,    43,    43,    45,    46,   101,    63,   103,
      47,    14,   104,    79,    83,    41,    97,    98,    65,     1,
      77,    99,    78,    75,    67,     6,   -11,     8,   115,    42,
     102,    47,     5,    20,     9,   105,    23,    40,    10,    48,
     109,    14,    40,   124,    15,    79,    43,    16,   107,   114,
      52,    53,    29,    30,   112,    37,    76,    17,    40,   118,
      19,    31,    32,   121,   122,   123,    49,    50,    51,    21,
      22,    52,    53,    40,    95,    96,    24,   140,   131,   142,
      33,    25,    34,    35,    13,   133,   134,    27,    47,    18,
      26,    13,   150,    28,    13,    36,    80,    37,    37,   119,
     120,    64,   139,    67,    69,    85,    70,    40,    68,    71,
     141,    72,   148,   111,    73,    74,    43,    84,   146,    86,
     100,   106,    40,    87,    81,    82,   110,   111,    52,    53,
     126,    88,    89,    90,    91,    92,    93,    88,    89,    90,
      91,    92,    93,   108,   125,   127,   128,   129,   130,   132,
     135,   136,   137,   138,   143,   144,   145,   149,   147,     7,
     151,     0,     0,     0,     0,     0,   116,   113,     0,   117
};

static const yytype_int16 yycheck[] =
{
      27,    36,    29,    30,    31,    30,    31,    64,    34,    67,
      12,     5,    69,    48,    49,    18,     9,    10,    20,     3,
      47,    14,    48,    20,    18,     0,    20,     4,    85,    32,
      65,    12,    52,    16,    22,    70,    19,    64,    52,    20,
      75,     5,    69,   100,    23,    80,    73,     4,    73,    84,
      52,    53,     7,     8,    80,    52,    53,     6,    85,    94,
      26,    16,    17,    97,    98,    99,    47,    48,    49,    30,
      31,    52,    53,   100,    11,    12,    18,   134,   113,   137,
      35,    27,    37,    38,     9,    33,    34,    28,    12,    14,
      53,    16,   149,    19,    19,    50,    20,    52,    52,    95,
      96,    24,   128,    18,     4,    36,    51,   134,    29,    53,
     136,    30,   147,    21,     5,    51,   143,    20,   143,    46,
      24,    19,   149,    45,    48,    49,    21,    21,    52,    53,
      19,    39,    40,    41,    42,    43,    44,    39,    40,    41,
      42,    43,    44,    53,    25,    32,     4,    21,    21,    21,
      25,    37,    18,    30,     4,    33,    19,    24,    51,     4,
      25,    -1,    -1,    -1,    -1,    -1,    86,    83,    -1,    87
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,    56,    57,    58,    52,     0,    57,     4,    22,
      52,    59,    60,    61,     5,    23,     4,     6,    61,    26,
      59,    30,    31,    59,    18,    27,    53,    28,    19,     7,
       8,    16,    17,    35,    37,    38,    50,    52,    62,    63,
      68,    18,    32,    68,    69,    69,    69,    12,    20,    47,
      48,    49,    52,    53,    61,    64,    65,    66,    68,    70,
      71,    72,    73,    64,    24,    20,    71,    18,    29,     4,
      51,    53,    30,     5,    51,    20,    53,    68,    64,    71,
      20,    48,    49,    71,    20,    36,    46,    45,    39,    40,
      41,    42,    43,    44,    67,    11,    12,     9,    10,    14,
      24,    62,    71,    70,    62,    71,    19,    69,    53,    71,
      21,    21,    64,    67,    71,    62,    65,    66,    71,    72,
      72,    73,    73,    73,    62,    25,    19,    32,     4,    21,
      21,    71,    21,    33,    34,    25,    37,    18,    30,    64,
      62,    64,    70,     4,    33,    19,    69,    51,    71,    24,
      62,    25
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    55,    56,    57,    57,    58,    59,    59,    60,    60,
      60,    61,    61,    62,    62,    63,    63,    63,    63,    63,
      63,    63,    63,    63,    63,    64,    64,    65,    65,    66,
      66,    66,    66,    66,    66,    66,    66,    67,    67,    67,
      67,    67,    67,    68,    68,    68,    69,    69,    70,    70,
      70,    71,    72,    72,    72,    72,    73,    73,    73,    73,
      73,    73,    73
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     0,     2,    12,     0,     3,     3,     8,
      11,     1,     3,     2,     3,     3,     5,     7,     5,     6,
      13,     2,     2,     1,     2,     1,     3,     1,     3,     4,
       2,     2,     4,     3,     1,     1,     3,     1,     1,     1,
       1,     1,     1,     1,     4,     7,     1,     3,     1,     3,
       3,     1,     1,     3,     3,     3,     4,     1,     1,     3,
       2,     2,     4
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
#line 1375 "y.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 33 "calc.y" /* yacc.c:1646  */
    {printf("functions->epsilon\n");}
#line 1381 "y.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 35 "calc.y" /* yacc.c:1646  */
    {printf("functions->function functions\n");}
#line 1387 "y.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 38 "calc.y" /* yacc.c:1646  */
    {printf("function->FUNCTION IDENT SEMICOLON BEGIN_PARAMS declaration END_PARAMS BEGIN_LOCALS declaration END_LOCALS BEGIN_BODY statements END_BODY\n");}
#line 1393 "y.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 41 "calc.y" /* yacc.c:1646  */
    {printf("declarations->epsilon\n");}
#line 1399 "y.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 43 "calc.y" /* yacc.c:1646  */
    {printf("declarations->declaration SEMICOLON declarations\n");}
#line 1405 "y.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 46 "calc.y" /* yacc.c:1646  */
    {printf("declaration->identifiers SEMICOLON INTEGER\n");}
#line 1411 "y.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 48 "calc.y" /* yacc.c:1646  */
    {printf("declaration->identifiers COLON ARRAY L_SQUARE_BRACKET NUMBER R_SQUARE_BRACKET OF INTEGER\n");}
#line 1417 "y.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 50 "calc.y" /* yacc.c:1646  */
    {printf("declaration->identifiers SEMICOLON ARRAY L_SQUARE_BRACKET NUMBER R_SQUARE_BRACKET L_SQUARE_BRACKET NUMBER R_SQUARE_BRACKET OF INTEGER\n");}
#line 1423 "y.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 54 "calc.y" /* yacc.c:1646  */
    {printf("ident->IDENT\n");}
#line 1429 "y.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 56 "calc.y" /* yacc.c:1646  */
    {printf("ident->IDENT COMMA ident\n");}
#line 1435 "y.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 59 "calc.y" /* yacc.c:1646  */
    {printf("statements->statement SEMICOLON\n");}
#line 1441 "y.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 61 "calc.y" /* yacc.c:1646  */
    {printf("statement->statement SEMICOLON statements\n");}
#line 1447 "y.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 64 "calc.y" /* yacc.c:1646  */
    {printf("statement->Var ASSIGN expression\n");}
#line 1453 "y.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 66 "calc.y" /* yacc.c:1646  */
    {printf("statement->IF bool_expression THEN statements SEMICOLON ENDIF\n");}
#line 1459 "y.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 68 "calc.y" /* yacc.c:1646  */
    {printf("statement->IF bool_expression THEN statements SEMICOLON ENDIF\n");}
#line 1465 "y.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 70 "calc.y" /* yacc.c:1646  */
    {printf("statement->WHILE bool_expression BEGINLOOP statements SEMICOLON ENDLOOP\n");}
#line 1471 "y.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 72 "calc.y" /* yacc.c:1646  */
    {printf("statement->DO BEGINLOOP statements SEMICOLON ENDLOOP WHILE bool_expression\n");}
#line 1477 "y.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 74 "calc.y" /* yacc.c:1646  */
    {printf("statement->FOR vars ASSIGN NUMBER SEMICOLON bool_expression SEMICOLON vars ASSIGN expressions BEGINLOOP statements SEMICOLON ENDLOOP\n");}
#line 1483 "y.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 76 "calc.y" /* yacc.c:1646  */
    {printf("statement->READ var\n");}
#line 1489 "y.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 78 "calc.y" /* yacc.c:1646  */
    {printf("statement->WRITE vars\n");}
#line 1495 "y.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 80 "calc.y" /* yacc.c:1646  */
    {printf("statement->CONTINUE\n");}
#line 1501 "y.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 82 "calc.y" /* yacc.c:1646  */
    {printf("statement->RETURN expressions\n");}
#line 1507 "y.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 86 "calc.y" /* yacc.c:1646  */
    {printf("bool_expression->relation_and_expression\n");}
#line 1513 "y.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 88 "calc.y" /* yacc.c:1646  */
    {printf("bool_expression->relation_and_expression OR relation_and_expression\n");}
#line 1519 "y.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 92 "calc.y" /* yacc.c:1646  */
    {printf("relation_and_expression->relation_expression\n");}
#line 1525 "y.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 94 "calc.y" /* yacc.c:1646  */
    {printf("relation_and_expressions->relation_expression OR relation_expression\n");}
#line 1531 "y.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 97 "calc.y" /* yacc.c:1646  */
    {printf("relation_expression->NOT expressions comp expressions\n");}
#line 1537 "y.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 99 "calc.y" /* yacc.c:1646  */
    {printf("relation_expression->NOT TRUE\n");}
#line 1543 "y.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 101 "calc.y" /* yacc.c:1646  */
    {printf("relation_expression->NOT FALSE\n");}
#line 1549 "y.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 103 "calc.y" /* yacc.c:1646  */
    {printf("relation_expression->NOT L_PAREN bool_expressions R_PAREN\n");}
#line 1555 "y.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 105 "calc.y" /* yacc.c:1646  */
    {printf("relation_expression->expressions comp expressions\n");}
#line 1561 "y.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 107 "calc.y" /* yacc.c:1646  */
    {printf("relation_expression->TRUE\n");}
#line 1567 "y.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 109 "calc.y" /* yacc.c:1646  */
    {printf("relation_expression->FALSE\n");}
#line 1573 "y.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 111 "calc.y" /* yacc.c:1646  */
    {printf("relation_expression->L_PAREN bool_expressions R_PAREN\n");}
#line 1579 "y.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 116 "calc.y" /* yacc.c:1646  */
    {printf("comp->EQ\n");}
#line 1585 "y.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 118 "calc.y" /* yacc.c:1646  */
    {printf("comp->NEQ\n");}
#line 1591 "y.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 120 "calc.y" /* yacc.c:1646  */
    {printf("comp->LT\n");}
#line 1597 "y.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 122 "calc.y" /* yacc.c:1646  */
    {printf("comp->GT\n");}
#line 1603 "y.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 124 "calc.y" /* yacc.c:1646  */
    {printf("comp->GTE\n");}
#line 1609 "y.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 126 "calc.y" /* yacc.c:1646  */
    {printf("comp->LTE\n");}
#line 1615 "y.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 130 "calc.y" /* yacc.c:1646  */
    {printf("var->IDENT\n");}
#line 1621 "y.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 132 "calc.y" /* yacc.c:1646  */
    {printf("var->ident L_SQUARE_BRACKET expression R_SQUARE_BRACKET\n");}
#line 1627 "y.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 134 "calc.y" /* yacc.c:1646  */
    {printf("var->ident L_SQUARE_BRACKET expression R_SQUARE_BRACKET L_SQUARE_BRACKET expression R_SQUARE_BRACKET\n");}
#line 1633 "y.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 138 "calc.y" /* yacc.c:1646  */
    {printf("vars->var\n");}
#line 1639 "y.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 140 "calc.y" /* yacc.c:1646  */
    {printf("vars->var COMMA vars\n");}
#line 1645 "y.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 143 "calc.y" /* yacc.c:1646  */
    {printf("expression->multiplicative_expression\n");}
#line 1651 "y.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 145 "calc.y" /* yacc.c:1646  */
    {printf("expression->multiplicative_expression PLUS multiplicative_expression\n");}
#line 1657 "y.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 147 "calc.y" /* yacc.c:1646  */
    {printf("expression->multiplicative_expression MINUS multiplicative_expression\n");}
#line 1663 "y.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 150 "calc.y" /* yacc.c:1646  */
    {printf("expressions->expression\n");}
#line 1669 "y.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 154 "calc.y" /* yacc.c:1646  */
    {printf("multiplicative_expression->terms\n");}
#line 1675 "y.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 156 "calc.y" /* yacc.c:1646  */
    {printf("multiplicative_expression->term MULT term\n");}
#line 1681 "y.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 158 "calc.y" /* yacc.c:1646  */
    {printf("multiplicative_expression->term DIV term\n");}
#line 1687 "y.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 160 "calc.y" /* yacc.c:1646  */
    {printf("multiplicative_expression->term PER term\n");}
#line 1693 "y.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 165 "calc.y" /* yacc.c:1646  */
    {printf("term->identifier L_PAREN expressions R_PAREN\n");}
#line 1699 "y.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 167 "calc.y" /* yacc.c:1646  */
    {printf("term->Var\n");}
#line 1705 "y.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 169 "calc.y" /* yacc.c:1646  */
    {printf("term->NUMBER\n");}
#line 1711 "y.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 171 "calc.y" /* yacc.c:1646  */
    {printf("term->L_PAREN expressions R_PAREN\n");}
#line 1717 "y.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 173 "calc.y" /* yacc.c:1646  */
    {printf("term->MINUS var\n");}
#line 1723 "y.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 175 "calc.y" /* yacc.c:1646  */
    {printf("term->MINUS NUMBER\n");}
#line 1729 "y.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 177 "calc.y" /* yacc.c:1646  */
    {printf("term->MINUS L_PAREN expressions R_PAREN\n");}
#line 1735 "y.tab.c" /* yacc.c:1646  */
    break;


#line 1739 "y.tab.c" /* yacc.c:1646  */
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
#line 180 "calc.y" /* yacc.c:1906  */


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

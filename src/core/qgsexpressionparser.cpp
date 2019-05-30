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
#define YYPURE 1

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1


/* Substitute the variable and function names.  */
#define yyparse         exp_parse
#define yylex           exp_lex
#define yyerror         exp_error
#define yydebug         exp_debug
#define yynerrs         exp_nerrs


/* Copy the first part of user declarations.  */
#line 16 "/home/guangping/dev/cpp/GIT/QGIS/src/core/qgsexpressionparser.yy" /* yacc.c:339  */

#include <qglobal.h>
#include <QList>
#include <cstdlib>
#include "qgslogger.h"
#include "expression/qgsexpression.h"
#include "expression/qgsexpressionnode.h"
#include "expression/qgsexpressionnodeimpl.h"
#include "expression/qgsexpressionfunction.h"

#ifdef _MSC_VER
#  pragma warning( disable: 4065 )  // switch statement contains 'default' but no 'case' labels
#  pragma warning( disable: 4702 )  // unreachable code
#endif

// don't redeclare malloc/free
#define YYINCLUDED_STDLIB_H 1

// maximum number of errors encountered before parser aborts
#define MAX_ERRORS 10

struct expression_parser_context;
#include "qgsexpressionparser.hpp"

//! from lexer
typedef void* yyscan_t;
typedef struct yy_buffer_state* YY_BUFFER_STATE;
extern int exp_lex_init(yyscan_t* scanner);
extern int exp_lex_destroy(yyscan_t scanner);
extern int exp_lex(YYSTYPE* yylval_param, YYLTYPE* yyloc, yyscan_t yyscanner);
extern YY_BUFFER_STATE exp__scan_string(const char* buffer, yyscan_t scanner);

/** returns parsed tree, otherwise returns nullptr and sets parserErrorMsg
    (interface function to be called from QgsExpression)
  */
QgsExpressionNode* parseExpression(const QString& str, QString& parserErrorMsg, QList<QgsExpression::ParserError>& parserError);

/** error handler for bison */
void exp_error(YYLTYPE* yyloc, expression_parser_context* parser_ctx, const char* msg);

struct expression_parser_context
{
  // lexer context
  yyscan_t flex_scanner;

  // List of all errors.
  QList<QgsExpression::ParserError> parserErrors;
  QString errorMsg;
  // Current parser error.
  QgsExpression::ParserError::ParserErrorType currentErrorType = QgsExpression::ParserError::Unknown;
  // root node of the expression
  QgsExpressionNode* rootNode;
};

#define scanner parser_ctx->flex_scanner

// we want verbose error messages
#define YYERROR_VERBOSE 1

#define BINOP(x, y, z)  new QgsExpressionNodeBinaryOperator(x, y, z)

void addParserLocation(YYLTYPE* yyloc, QgsExpressionNode *node)
{
  node->parserFirstLine = yyloc->first_line;
  node->parserFirstColumn = yyloc->first_column;
  node->parserLastLine = yyloc->last_line;
  node->parserLastColumn = yyloc->last_column;
}


#line 143 "/home/guangping/dev/cpp/GIT/QGIS/src/core/qgsexpressionparser.cpp" /* yacc.c:339  */

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
   by #include "qgsexpressionparser.hpp".  */
#ifndef YY_EXP_HOME_GUANGPING_DEV_CPP_GIT_QGIS_SRC_CORE_QGSEXPRESSIONPARSER_HPP_INCLUDED
# define YY_EXP_HOME_GUANGPING_DEV_CPP_GIT_QGIS_SRC_CORE_QGSEXPRESSIONPARSER_HPP_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif
#if YYDEBUG
extern int exp_debug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    OR = 258,
    AND = 259,
    EQ = 260,
    NE = 261,
    LE = 262,
    GE = 263,
    LT = 264,
    GT = 265,
    REGEXP = 266,
    LIKE = 267,
    IS = 268,
    PLUS = 269,
    MINUS = 270,
    MUL = 271,
    DIV = 272,
    INTDIV = 273,
    MOD = 274,
    CONCAT = 275,
    POW = 276,
    NOT = 277,
    IN = 278,
    NUMBER_FLOAT = 279,
    NUMBER_INT = 280,
    BOOLEAN = 281,
    NULLVALUE = 282,
    CASE = 283,
    WHEN = 284,
    THEN = 285,
    ELSE = 286,
    END = 287,
    STRING = 288,
    QUOTED_COLUMN_REF = 289,
    NAME = 290,
    SPECIAL_COL = 291,
    VARIABLE = 292,
    NAMED_NODE = 293,
    COMMA = 294,
    Unknown_CHARACTER = 295,
    UMINUS = 296
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 96 "/home/guangping/dev/cpp/GIT/QGIS/src/core/qgsexpressionparser.yy" /* yacc.c:355  */

  QgsExpressionNode* node;
  QgsExpressionNode::NodeList* nodelist;
  QgsExpressionNode::NamedNode* namednode;
  double numberFloat;
  int    numberInt;
  bool   boolVal;
  QString* text;
  QgsExpressionNodeBinaryOperator::BinaryOperator b_op;
  QgsExpressionNodeUnaryOperator::UnaryOperator u_op;
  QgsExpressionNodeCondition::WhenThen* whenthen;
  QgsExpressionNodeCondition::WhenThenList* whenthenlist;

#line 239 "/home/guangping/dev/cpp/GIT/QGIS/src/core/qgsexpressionparser.cpp" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif

/* Location type.  */
#if ! defined YYLTYPE && ! defined YYLTYPE_IS_DECLARED
typedef struct YYLTYPE YYLTYPE;
struct YYLTYPE
{
  int first_line;
  int first_column;
  int last_line;
  int last_column;
};
# define YYLTYPE_IS_DECLARED 1
# define YYLTYPE_IS_TRIVIAL 1
#endif



int exp_parse (expression_parser_context* parser_ctx);

#endif /* !YY_EXP_HOME_GUANGPING_DEV_CPP_GIT_QGIS_SRC_CORE_QGSEXPRESSIONPARSER_HPP_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 269 "/home/guangping/dev/cpp/GIT/QGIS/src/core/qgsexpressionparser.cpp" /* yacc.c:358  */

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
         || (defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL \
             && defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
  YYLTYPE yyls_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE) + sizeof (YYLTYPE)) \
      + 2 * YYSTACK_GAP_MAXIMUM)

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
#define YYFINAL  27
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   454

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  46
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  7
/* YYNRULES -- Number of rules.  */
#define YYNRULES  50
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  97

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   296

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
      43,    44,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    42,     2,    45,     2,     2,     2,     2,     2,     2,
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
      35,    36,    37,    38,    39,    40,    41
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   180,   180,   181,   192,   193,   194,   195,   196,   197,
     198,   199,   200,   201,   202,   203,   204,   205,   206,   207,
     208,   209,   210,   211,   212,   213,   259,   283,   284,   286,
     288,   289,   291,   292,   295,   296,   299,   317,   328,   329,
     330,   331,   332,   336,   340,   355,   356,   357,   361,   362,
     366
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 1
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "OR", "AND", "EQ", "NE", "LE", "GE",
  "LT", "GT", "REGEXP", "LIKE", "IS", "PLUS", "MINUS", "MUL", "DIV",
  "INTDIV", "MOD", "CONCAT", "POW", "NOT", "IN", "NUMBER_FLOAT",
  "NUMBER_INT", "BOOLEAN", "NULLVALUE", "CASE", "WHEN", "THEN", "ELSE",
  "END", "STRING", "QUOTED_COLUMN_REF", "NAME", "SPECIAL_COL", "VARIABLE",
  "NAMED_NODE", "COMMA", "Unknown_CHARACTER", "UMINUS", "'['", "'('",
  "')'", "']'", "$accept", "root", "expression", "named_node", "exp_list",
  "when_then_clauses", "when_then_clause", YY_NULLPTR
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
     295,   296,    91,    40,    41,    93
};
# endif

#define YYPACT_NINF -74

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-74)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      76,   376,   376,   376,   376,   -74,   -74,   -74,   -74,   -20,
     -74,   -74,   -33,   -74,   -74,   376,    19,   239,   239,   -19,
     -19,   316,   376,   -11,   -74,   326,   117,   -74,   376,   376,
     376,   376,   376,   376,   376,   376,   376,   376,   376,   376,
     376,   376,   376,   376,   376,   376,   376,     1,   -18,   376,
     159,   376,   -74,   -74,   376,   -74,   239,   -74,   -31,   -74,
     278,   316,   406,   406,   406,   406,   406,   406,   406,   406,
     406,   412,   412,   -15,   -15,   -15,   -15,   -19,   -15,   -17,
     351,    52,   376,   199,   239,   351,   -74,   351,   -28,   -74,
     239,   -74,   239,   -74,   -27,   -74,   -74
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     0,    38,    39,    40,    42,     0,
      41,    35,    34,    36,    37,     0,     0,     2,     3,    30,
      31,    23,     0,     0,    49,     0,     0,     1,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    32,    48,     0,    26,    46,    47,     0,    24,
       5,     4,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    19,    18,    20,    22,    21,     0,
       0,     0,     0,     0,    43,     0,    25,     0,     0,    29,
      50,    33,    44,    45,     0,    27,    28
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -74,   -74,     0,   -38,   -73,   -74,    25
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,    16,    56,    57,    58,    23,    24
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      17,    18,    19,    20,    21,    45,    46,    88,    85,    22,
      25,    85,    85,    86,    94,    26,    95,    96,    22,    27,
      51,    52,    50,    49,    79,    80,    87,    49,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    93,    53,    81,
       0,    83,     0,     0,    84,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,     0,     1,     0,     0,
       0,     0,    90,     0,     0,    92,     0,     0,     0,     0,
       2,     3,     0,     0,    49,     0,     0,    89,     4,     0,
       5,     6,     7,     8,     9,     0,     0,     0,     0,    10,
      11,    12,    13,    14,     0,     0,     0,     0,     0,    15,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    49,
       0,    59,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,     0,     0,     0,     0,     0,     0,    82,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    49,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,     0,     0,     0,     0,     0,     0,     0,
       0,    91,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    49,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    49,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      49,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
       2,     3,     0,     0,     0,     0,     0,     0,     4,     0,
       5,     6,     7,     8,     9,     0,     0,     0,    49,    10,
      11,    12,    13,    14,    54,     2,     3,     0,     0,    15,
      55,     0,     0,     4,     0,     5,     6,     7,     8,     9,
       0,     0,     0,     0,    10,    11,    12,    13,    14,    54,
       2,     3,     0,     0,    15,     0,     0,     0,     4,     0,
       5,     6,     7,     8,     9,     0,     0,     0,     0,    10,
      11,    12,    13,    14,     0,     0,     0,     0,     0,    15,
      39,    40,    41,    42,    43,    44,    45,    46,    41,    42,
      43,    44,    45,    46,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    49,     0,
       0,     0,     0,     0,    49
};

static const yytype_int8 yycheck[] =
{
       0,     1,     2,     3,     4,    20,    21,    80,    39,    29,
      43,    39,    39,    44,    87,    15,    44,    44,    29,     0,
      31,    32,    22,    42,    23,    43,    43,    42,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    85,    23,    49,
      -1,    51,    -1,    -1,    54,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    -1,     1,    -1,    -1,
      -1,    -1,    82,    -1,    -1,    85,    -1,    -1,    -1,    -1,
      14,    15,    -1,    -1,    42,    -1,    -1,    45,    22,    -1,
      24,    25,    26,    27,    28,    -1,    -1,    -1,    -1,    33,
      34,    35,    36,    37,    -1,    -1,    -1,    -1,    -1,    43,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,
      -1,    44,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    -1,    -1,    -1,    -1,    -1,    -1,    30,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    42,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    32,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    42,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    42,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      42,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      14,    15,    -1,    -1,    -1,    -1,    -1,    -1,    22,    -1,
      24,    25,    26,    27,    28,    -1,    -1,    -1,    42,    33,
      34,    35,    36,    37,    38,    14,    15,    -1,    -1,    43,
      44,    -1,    -1,    22,    -1,    24,    25,    26,    27,    28,
      -1,    -1,    -1,    -1,    33,    34,    35,    36,    37,    38,
      14,    15,    -1,    -1,    43,    -1,    -1,    -1,    22,    -1,
      24,    25,    26,    27,    28,    -1,    -1,    -1,    -1,    33,
      34,    35,    36,    37,    -1,    -1,    -1,    -1,    -1,    43,
      14,    15,    16,    17,    18,    19,    20,    21,    16,    17,
      18,    19,    20,    21,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,    -1,
      -1,    -1,    -1,    -1,    42
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     1,    14,    15,    22,    24,    25,    26,    27,    28,
      33,    34,    35,    36,    37,    43,    47,    48,    48,    48,
      48,    48,    29,    51,    52,    43,    48,     0,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    42,
      48,    31,    32,    52,    38,    44,    48,    49,    50,    44,
      48,    48,    48,    48,    48,    48,    48,    48,    48,    48,
      48,    48,    48,    48,    48,    48,    48,    48,    48,    23,
      43,    48,    30,    48,    48,    39,    44,    43,    50,    45,
      48,    32,    48,    49,    50,    44,    44
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    46,    47,    47,    48,    48,    48,    48,    48,    48,
      48,    48,    48,    48,    48,    48,    48,    48,    48,    48,
      48,    48,    48,    48,    48,    48,    48,    48,    48,    48,
      48,    48,    48,    48,    48,    48,    48,    48,    48,    48,
      48,    48,    48,    49,    50,    50,    50,    50,    51,    51,
      52
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     2,     3,     4,     3,     5,     6,     4,
       2,     2,     3,     5,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     2,     3,     3,     1,     1,     2,     1,
       4
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
      yyerror (&yylloc, parser_ctx, YY_("syntax error: cannot back up")); \
      YYERROR;                                                  \
    }                                                           \
while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)                                \
    do                                                                  \
      if (N)                                                            \
        {                                                               \
          (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;        \
          (Current).first_column = YYRHSLOC (Rhs, 1).first_column;      \
          (Current).last_line    = YYRHSLOC (Rhs, N).last_line;         \
          (Current).last_column  = YYRHSLOC (Rhs, N).last_column;       \
        }                                                               \
      else                                                              \
        {                                                               \
          (Current).first_line   = (Current).last_line   =              \
            YYRHSLOC (Rhs, 0).last_line;                                \
          (Current).first_column = (Current).last_column =              \
            YYRHSLOC (Rhs, 0).last_column;                              \
        }                                                               \
    while (0)
#endif

#define YYRHSLOC(Rhs, K) ((Rhs)[K])


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


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL

/* Print *YYLOCP on YYO.  Private, do not rely on its existence. */

YY_ATTRIBUTE_UNUSED
static unsigned
yy_location_print_ (FILE *yyo, YYLTYPE const * const yylocp)
{
  unsigned res = 0;
  int end_col = 0 != yylocp->last_column ? yylocp->last_column - 1 : 0;
  if (0 <= yylocp->first_line)
    {
      res += YYFPRINTF (yyo, "%d", yylocp->first_line);
      if (0 <= yylocp->first_column)
        res += YYFPRINTF (yyo, ".%d", yylocp->first_column);
    }
  if (0 <= yylocp->last_line)
    {
      if (yylocp->first_line < yylocp->last_line)
        {
          res += YYFPRINTF (yyo, "-%d", yylocp->last_line);
          if (0 <= end_col)
            res += YYFPRINTF (yyo, ".%d", end_col);
        }
      else if (0 <= end_col && yylocp->first_column < end_col)
        res += YYFPRINTF (yyo, "-%d", end_col);
    }
  return res;
 }

#  define YY_LOCATION_PRINT(File, Loc)          \
  yy_location_print_ (File, &(Loc))

# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value, Location, parser_ctx); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp, expression_parser_context* parser_ctx)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  YYUSE (yylocationp);
  YYUSE (parser_ctx);
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
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp, expression_parser_context* parser_ctx)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  YY_LOCATION_PRINT (yyoutput, *yylocationp);
  YYFPRINTF (yyoutput, ": ");
  yy_symbol_value_print (yyoutput, yytype, yyvaluep, yylocationp, parser_ctx);
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
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, YYLTYPE *yylsp, int yyrule, expression_parser_context* parser_ctx)
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
                       , &(yylsp[(yyi + 1) - (yynrhs)])                       , parser_ctx);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, yylsp, Rule, parser_ctx); \
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
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep, YYLTYPE *yylocationp, expression_parser_context* parser_ctx)
{
  YYUSE (yyvaluep);
  YYUSE (yylocationp);
  YYUSE (parser_ctx);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  switch (yytype)
    {
          case 33: /* STRING  */
#line 174 "/home/guangping/dev/cpp/GIT/QGIS/src/core/qgsexpressionparser.yy" /* yacc.c:1257  */
      { delete ((*yyvaluep).text); }
#line 1300 "/home/guangping/dev/cpp/GIT/QGIS/src/core/qgsexpressionparser.cpp" /* yacc.c:1257  */
        break;

    case 34: /* QUOTED_COLUMN_REF  */
#line 174 "/home/guangping/dev/cpp/GIT/QGIS/src/core/qgsexpressionparser.yy" /* yacc.c:1257  */
      { delete ((*yyvaluep).text); }
#line 1306 "/home/guangping/dev/cpp/GIT/QGIS/src/core/qgsexpressionparser.cpp" /* yacc.c:1257  */
        break;

    case 35: /* NAME  */
#line 174 "/home/guangping/dev/cpp/GIT/QGIS/src/core/qgsexpressionparser.yy" /* yacc.c:1257  */
      { delete ((*yyvaluep).text); }
#line 1312 "/home/guangping/dev/cpp/GIT/QGIS/src/core/qgsexpressionparser.cpp" /* yacc.c:1257  */
        break;

    case 36: /* SPECIAL_COL  */
#line 174 "/home/guangping/dev/cpp/GIT/QGIS/src/core/qgsexpressionparser.yy" /* yacc.c:1257  */
      { delete ((*yyvaluep).text); }
#line 1318 "/home/guangping/dev/cpp/GIT/QGIS/src/core/qgsexpressionparser.cpp" /* yacc.c:1257  */
        break;

    case 37: /* VARIABLE  */
#line 174 "/home/guangping/dev/cpp/GIT/QGIS/src/core/qgsexpressionparser.yy" /* yacc.c:1257  */
      { delete ((*yyvaluep).text); }
#line 1324 "/home/guangping/dev/cpp/GIT/QGIS/src/core/qgsexpressionparser.cpp" /* yacc.c:1257  */
        break;

    case 38: /* NAMED_NODE  */
#line 174 "/home/guangping/dev/cpp/GIT/QGIS/src/core/qgsexpressionparser.yy" /* yacc.c:1257  */
      { delete ((*yyvaluep).text); }
#line 1330 "/home/guangping/dev/cpp/GIT/QGIS/src/core/qgsexpressionparser.cpp" /* yacc.c:1257  */
        break;

    case 48: /* expression  */
#line 171 "/home/guangping/dev/cpp/GIT/QGIS/src/core/qgsexpressionparser.yy" /* yacc.c:1257  */
      { delete ((*yyvaluep).node); }
#line 1336 "/home/guangping/dev/cpp/GIT/QGIS/src/core/qgsexpressionparser.cpp" /* yacc.c:1257  */
        break;

    case 49: /* named_node  */
#line 173 "/home/guangping/dev/cpp/GIT/QGIS/src/core/qgsexpressionparser.yy" /* yacc.c:1257  */
      { delete ((*yyvaluep).namednode); }
#line 1342 "/home/guangping/dev/cpp/GIT/QGIS/src/core/qgsexpressionparser.cpp" /* yacc.c:1257  */
        break;

    case 50: /* exp_list  */
#line 172 "/home/guangping/dev/cpp/GIT/QGIS/src/core/qgsexpressionparser.yy" /* yacc.c:1257  */
      { delete ((*yyvaluep).nodelist); }
#line 1348 "/home/guangping/dev/cpp/GIT/QGIS/src/core/qgsexpressionparser.cpp" /* yacc.c:1257  */
        break;

    case 51: /* when_then_clauses  */
#line 176 "/home/guangping/dev/cpp/GIT/QGIS/src/core/qgsexpressionparser.yy" /* yacc.c:1257  */
      { delete ((*yyvaluep).whenthenlist); }
#line 1354 "/home/guangping/dev/cpp/GIT/QGIS/src/core/qgsexpressionparser.cpp" /* yacc.c:1257  */
        break;

    case 52: /* when_then_clause  */
#line 175 "/home/guangping/dev/cpp/GIT/QGIS/src/core/qgsexpressionparser.yy" /* yacc.c:1257  */
      { delete ((*yyvaluep).whenthen); }
#line 1360 "/home/guangping/dev/cpp/GIT/QGIS/src/core/qgsexpressionparser.cpp" /* yacc.c:1257  */
        break;


      default:
        break;
    }
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/*----------.
| yyparse.  |
`----------*/

int
yyparse (expression_parser_context* parser_ctx)
{
/* The lookahead symbol.  */
int yychar;


/* The semantic value of the lookahead symbol.  */
/* Default value used for initialization, for pacifying older GCCs
   or non-GCC compilers.  */
YY_INITIAL_VALUE (static YYSTYPE yyval_default;)
YYSTYPE yylval YY_INITIAL_VALUE (= yyval_default);

/* Location data for the lookahead symbol.  */
static YYLTYPE yyloc_default
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
  = { 1, 1, 1, 1 }
# endif
;
YYLTYPE yylloc = yyloc_default;

    /* Number of syntax errors so far.  */
    int yynerrs;

    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.
       'yyls': related to locations.

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

    /* The location stack.  */
    YYLTYPE yylsa[YYINITDEPTH];
    YYLTYPE *yyls;
    YYLTYPE *yylsp;

    /* The locations where the error started and ended.  */
    YYLTYPE yyerror_range[3];

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;
  YYLTYPE yyloc;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N), yylsp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yylsp = yyls = yylsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  yylsp[0] = yylloc;
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
        YYLTYPE *yyls1 = yyls;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * sizeof (*yyssp),
                    &yyvs1, yysize * sizeof (*yyvsp),
                    &yyls1, yysize * sizeof (*yylsp),
                    &yystacksize);

        yyls = yyls1;
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
        YYSTACK_RELOCATE (yyls_alloc, yyls);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;
      yylsp = yyls + yysize - 1;

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
      yychar = yylex (&yylval, &yylloc, scanner);
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
  *++yylsp = yylloc;
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

  /* Default location.  */
  YYLLOC_DEFAULT (yyloc, (yylsp - yylen), yylen);
  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:
#line 180 "/home/guangping/dev/cpp/GIT/QGIS/src/core/qgsexpressionparser.yy" /* yacc.c:1646  */
    { parser_ctx->rootNode = (yyvsp[0].node); }
#line 1654 "/home/guangping/dev/cpp/GIT/QGIS/src/core/qgsexpressionparser.cpp" /* yacc.c:1646  */
    break;

  case 3:
#line 182 "/home/guangping/dev/cpp/GIT/QGIS/src/core/qgsexpressionparser.yy" /* yacc.c:1646  */
    {
            delete (yyvsp[0].node);
            if ( parser_ctx->parserErrors.count() < MAX_ERRORS )
              yyerrok;
            else
              YYABORT;
        }
#line 1666 "/home/guangping/dev/cpp/GIT/QGIS/src/core/qgsexpressionparser.cpp" /* yacc.c:1646  */
    break;

  case 4:
#line 192 "/home/guangping/dev/cpp/GIT/QGIS/src/core/qgsexpressionparser.yy" /* yacc.c:1646  */
    { (yyval.node) = BINOP((yyvsp[-1].b_op), (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1672 "/home/guangping/dev/cpp/GIT/QGIS/src/core/qgsexpressionparser.cpp" /* yacc.c:1646  */
    break;

  case 5:
#line 193 "/home/guangping/dev/cpp/GIT/QGIS/src/core/qgsexpressionparser.yy" /* yacc.c:1646  */
    { (yyval.node) = BINOP((yyvsp[-1].b_op), (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1678 "/home/guangping/dev/cpp/GIT/QGIS/src/core/qgsexpressionparser.cpp" /* yacc.c:1646  */
    break;

  case 6:
#line 194 "/home/guangping/dev/cpp/GIT/QGIS/src/core/qgsexpressionparser.yy" /* yacc.c:1646  */
    { (yyval.node) = BINOP((yyvsp[-1].b_op), (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1684 "/home/guangping/dev/cpp/GIT/QGIS/src/core/qgsexpressionparser.cpp" /* yacc.c:1646  */
    break;

  case 7:
#line 195 "/home/guangping/dev/cpp/GIT/QGIS/src/core/qgsexpressionparser.yy" /* yacc.c:1646  */
    { (yyval.node) = BINOP((yyvsp[-1].b_op), (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1690 "/home/guangping/dev/cpp/GIT/QGIS/src/core/qgsexpressionparser.cpp" /* yacc.c:1646  */
    break;

  case 8:
#line 196 "/home/guangping/dev/cpp/GIT/QGIS/src/core/qgsexpressionparser.yy" /* yacc.c:1646  */
    { (yyval.node) = BINOP((yyvsp[-1].b_op), (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1696 "/home/guangping/dev/cpp/GIT/QGIS/src/core/qgsexpressionparser.cpp" /* yacc.c:1646  */
    break;

  case 9:
#line 197 "/home/guangping/dev/cpp/GIT/QGIS/src/core/qgsexpressionparser.yy" /* yacc.c:1646  */
    { (yyval.node) = BINOP((yyvsp[-1].b_op), (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1702 "/home/guangping/dev/cpp/GIT/QGIS/src/core/qgsexpressionparser.cpp" /* yacc.c:1646  */
    break;

  case 10:
#line 198 "/home/guangping/dev/cpp/GIT/QGIS/src/core/qgsexpressionparser.yy" /* yacc.c:1646  */
    { (yyval.node) = BINOP((yyvsp[-1].b_op), (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1708 "/home/guangping/dev/cpp/GIT/QGIS/src/core/qgsexpressionparser.cpp" /* yacc.c:1646  */
    break;

  case 11:
#line 199 "/home/guangping/dev/cpp/GIT/QGIS/src/core/qgsexpressionparser.yy" /* yacc.c:1646  */
    { (yyval.node) = BINOP((yyvsp[-1].b_op), (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1714 "/home/guangping/dev/cpp/GIT/QGIS/src/core/qgsexpressionparser.cpp" /* yacc.c:1646  */
    break;

  case 12:
#line 200 "/home/guangping/dev/cpp/GIT/QGIS/src/core/qgsexpressionparser.yy" /* yacc.c:1646  */
    { (yyval.node) = BINOP((yyvsp[-1].b_op), (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1720 "/home/guangping/dev/cpp/GIT/QGIS/src/core/qgsexpressionparser.cpp" /* yacc.c:1646  */
    break;

  case 13:
#line 201 "/home/guangping/dev/cpp/GIT/QGIS/src/core/qgsexpressionparser.yy" /* yacc.c:1646  */
    { (yyval.node) = BINOP((yyvsp[-1].b_op), (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1726 "/home/guangping/dev/cpp/GIT/QGIS/src/core/qgsexpressionparser.cpp" /* yacc.c:1646  */
    break;

  case 14:
#line 202 "/home/guangping/dev/cpp/GIT/QGIS/src/core/qgsexpressionparser.yy" /* yacc.c:1646  */
    { (yyval.node) = BINOP((yyvsp[-1].b_op), (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1732 "/home/guangping/dev/cpp/GIT/QGIS/src/core/qgsexpressionparser.cpp" /* yacc.c:1646  */
    break;

  case 15:
#line 203 "/home/guangping/dev/cpp/GIT/QGIS/src/core/qgsexpressionparser.yy" /* yacc.c:1646  */
    { (yyval.node) = BINOP((yyvsp[-1].b_op), (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1738 "/home/guangping/dev/cpp/GIT/QGIS/src/core/qgsexpressionparser.cpp" /* yacc.c:1646  */
    break;

  case 16:
#line 204 "/home/guangping/dev/cpp/GIT/QGIS/src/core/qgsexpressionparser.yy" /* yacc.c:1646  */
    { (yyval.node) = BINOP((yyvsp[-1].b_op), (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1744 "/home/guangping/dev/cpp/GIT/QGIS/src/core/qgsexpressionparser.cpp" /* yacc.c:1646  */
    break;

  case 17:
#line 205 "/home/guangping/dev/cpp/GIT/QGIS/src/core/qgsexpressionparser.yy" /* yacc.c:1646  */
    { (yyval.node) = BINOP((yyvsp[-1].b_op), (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1750 "/home/guangping/dev/cpp/GIT/QGIS/src/core/qgsexpressionparser.cpp" /* yacc.c:1646  */
    break;

  case 18:
#line 206 "/home/guangping/dev/cpp/GIT/QGIS/src/core/qgsexpressionparser.yy" /* yacc.c:1646  */
    { (yyval.node) = BINOP((yyvsp[-1].b_op), (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1756 "/home/guangping/dev/cpp/GIT/QGIS/src/core/qgsexpressionparser.cpp" /* yacc.c:1646  */
    break;

  case 19:
#line 207 "/home/guangping/dev/cpp/GIT/QGIS/src/core/qgsexpressionparser.yy" /* yacc.c:1646  */
    { (yyval.node) = BINOP((yyvsp[-1].b_op), (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1762 "/home/guangping/dev/cpp/GIT/QGIS/src/core/qgsexpressionparser.cpp" /* yacc.c:1646  */
    break;

  case 20:
#line 208 "/home/guangping/dev/cpp/GIT/QGIS/src/core/qgsexpressionparser.yy" /* yacc.c:1646  */
    { (yyval.node) = BINOP((yyvsp[-1].b_op), (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1768 "/home/guangping/dev/cpp/GIT/QGIS/src/core/qgsexpressionparser.cpp" /* yacc.c:1646  */
    break;

  case 21:
#line 209 "/home/guangping/dev/cpp/GIT/QGIS/src/core/qgsexpressionparser.yy" /* yacc.c:1646  */
    { (yyval.node) = BINOP((yyvsp[-1].b_op), (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1774 "/home/guangping/dev/cpp/GIT/QGIS/src/core/qgsexpressionparser.cpp" /* yacc.c:1646  */
    break;

  case 22:
#line 210 "/home/guangping/dev/cpp/GIT/QGIS/src/core/qgsexpressionparser.yy" /* yacc.c:1646  */
    { (yyval.node) = BINOP((yyvsp[-1].b_op), (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1780 "/home/guangping/dev/cpp/GIT/QGIS/src/core/qgsexpressionparser.cpp" /* yacc.c:1646  */
    break;

  case 23:
#line 211 "/home/guangping/dev/cpp/GIT/QGIS/src/core/qgsexpressionparser.yy" /* yacc.c:1646  */
    { (yyval.node) = new QgsExpressionNodeUnaryOperator((yyvsp[-1].u_op), (yyvsp[0].node)); }
#line 1786 "/home/guangping/dev/cpp/GIT/QGIS/src/core/qgsexpressionparser.cpp" /* yacc.c:1646  */
    break;

  case 24:
#line 212 "/home/guangping/dev/cpp/GIT/QGIS/src/core/qgsexpressionparser.yy" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[-1].node); }
#line 1792 "/home/guangping/dev/cpp/GIT/QGIS/src/core/qgsexpressionparser.cpp" /* yacc.c:1646  */
    break;

  case 25:
#line 214 "/home/guangping/dev/cpp/GIT/QGIS/src/core/qgsexpressionparser.yy" /* yacc.c:1646  */
    {
          int fnIndex = QgsExpression::functionIndex(*(yyvsp[-3].text));
          delete (yyvsp[-3].text);
          if (fnIndex == -1)
          {
            QgsExpression::ParserError::ParserErrorType errorType = QgsExpression::ParserError::FunctionUnknown;
            parser_ctx->currentErrorType = errorType;
            exp_error(&yyloc, parser_ctx, QObject::tr( "Function is not known" ).toUtf8().constData() );
            delete (yyvsp[-1].nodelist);
            YYERROR;
          }
          QString paramError;
          if ( !QgsExpressionNodeFunction::validateParams( fnIndex, (yyvsp[-1].nodelist), paramError ) )
          {
            QgsExpression::ParserError::ParserErrorType errorType = QgsExpression::ParserError::FunctionInvalidParams;
            parser_ctx->currentErrorType = errorType;
            exp_error( &yyloc, parser_ctx, paramError.toLocal8Bit().constData() );
            delete (yyvsp[-1].nodelist);
            YYERROR;
          }
          QgsExpressionFunction* func = QgsExpression::Functions()[fnIndex];
          if ( func->params() != -1
               && !( func->params() >= (yyvsp[-1].nodelist)->count()
               && func->minParams() <= (yyvsp[-1].nodelist)->count() ) )
          {
            QgsExpression::ParserError::ParserErrorType errorType = QgsExpression::ParserError::FunctionWrongArgs;
            parser_ctx->currentErrorType = errorType;
            QString expectedMessage;
            if ( func->params() == func->minParams() )
            {
               expectedMessage = QObject::tr( "Expected %1 but got %2." ).arg( QString::number( func->params() ), QString::number( (yyvsp[-1].nodelist)->count() ) );
            }
            else
            {
               expectedMessage = QObject::tr( "Expected between %1 and %2 parameters but %3 were provided." ).arg( QString::number( func->minParams() ), QString::number( func->params() ), QString::number( (yyvsp[-1].nodelist)->count() ) );
            }
            exp_error(&yyloc, parser_ctx, QObject::tr( "%1 function is called with wrong number of arguments. %2" ).arg( QgsExpression::Functions()[fnIndex]->name(), expectedMessage ).toUtf8().constData() );
            delete (yyvsp[-1].nodelist);
            YYERROR;
          }

          (yyval.node) = new QgsExpressionNodeFunction(fnIndex, (yyvsp[-1].nodelist));
          addParserLocation(&(yylsp[-3]), (yyval.node));
        }
#line 1841 "/home/guangping/dev/cpp/GIT/QGIS/src/core/qgsexpressionparser.cpp" /* yacc.c:1646  */
    break;

  case 26:
#line 260 "/home/guangping/dev/cpp/GIT/QGIS/src/core/qgsexpressionparser.yy" /* yacc.c:1646  */
    {
          int fnIndex = QgsExpression::functionIndex(*(yyvsp[-2].text));
          delete (yyvsp[-2].text);
          if (fnIndex == -1)
          {
            QgsExpression::ParserError::ParserErrorType errorType = QgsExpression::ParserError::FunctionUnknown;
            parser_ctx->currentErrorType = errorType;
            exp_error(&yyloc, parser_ctx, QObject::tr( "Function is not known" ).toUtf8().constData() );
            YYERROR;
          }
          // 0 parameters is expected, -1 parameters means leave it to the
          // implementation
          if ( QgsExpression::Functions()[fnIndex]->params() > 0 )
          {
            QgsExpression::ParserError::ParserErrorType errorType = QgsExpression::ParserError::FunctionWrongArgs;
            parser_ctx->currentErrorType = errorType;
            exp_error(&yyloc, parser_ctx, QObject::tr( "%1 function is called with wrong number of arguments" ).arg( QgsExpression::Functions()[fnIndex]->name() ).toLocal8Bit().constData() );
            YYERROR;
          }
          (yyval.node) = new QgsExpressionNodeFunction(fnIndex, new QgsExpressionNode::NodeList());
          addParserLocation(&(yylsp[-2]), (yyval.node));
        }
#line 1868 "/home/guangping/dev/cpp/GIT/QGIS/src/core/qgsexpressionparser.cpp" /* yacc.c:1646  */
    break;

  case 27:
#line 283 "/home/guangping/dev/cpp/GIT/QGIS/src/core/qgsexpressionparser.yy" /* yacc.c:1646  */
    { (yyval.node) = new QgsExpressionNodeInOperator((yyvsp[-4].node), (yyvsp[-1].nodelist), false);  }
#line 1874 "/home/guangping/dev/cpp/GIT/QGIS/src/core/qgsexpressionparser.cpp" /* yacc.c:1646  */
    break;

  case 28:
#line 284 "/home/guangping/dev/cpp/GIT/QGIS/src/core/qgsexpressionparser.yy" /* yacc.c:1646  */
    { (yyval.node) = new QgsExpressionNodeInOperator((yyvsp[-5].node), (yyvsp[-1].nodelist), true); }
#line 1880 "/home/guangping/dev/cpp/GIT/QGIS/src/core/qgsexpressionparser.cpp" /* yacc.c:1646  */
    break;

  case 29:
#line 286 "/home/guangping/dev/cpp/GIT/QGIS/src/core/qgsexpressionparser.yy" /* yacc.c:1646  */
    { (yyval.node) = new QgsExpressionNodeIndexOperator( (yyvsp[-3].node), (yyvsp[-1].node) ); }
#line 1886 "/home/guangping/dev/cpp/GIT/QGIS/src/core/qgsexpressionparser.cpp" /* yacc.c:1646  */
    break;

  case 30:
#line 288 "/home/guangping/dev/cpp/GIT/QGIS/src/core/qgsexpressionparser.yy" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 1892 "/home/guangping/dev/cpp/GIT/QGIS/src/core/qgsexpressionparser.cpp" /* yacc.c:1646  */
    break;

  case 31:
#line 289 "/home/guangping/dev/cpp/GIT/QGIS/src/core/qgsexpressionparser.yy" /* yacc.c:1646  */
    { (yyval.node) = new QgsExpressionNodeUnaryOperator( QgsExpressionNodeUnaryOperator::uoMinus, (yyvsp[0].node)); }
#line 1898 "/home/guangping/dev/cpp/GIT/QGIS/src/core/qgsexpressionparser.cpp" /* yacc.c:1646  */
    break;

  case 32:
#line 291 "/home/guangping/dev/cpp/GIT/QGIS/src/core/qgsexpressionparser.yy" /* yacc.c:1646  */
    { (yyval.node) = new QgsExpressionNodeCondition((yyvsp[-1].whenthenlist)); }
#line 1904 "/home/guangping/dev/cpp/GIT/QGIS/src/core/qgsexpressionparser.cpp" /* yacc.c:1646  */
    break;

  case 33:
#line 292 "/home/guangping/dev/cpp/GIT/QGIS/src/core/qgsexpressionparser.yy" /* yacc.c:1646  */
    { (yyval.node) = new QgsExpressionNodeCondition((yyvsp[-3].whenthenlist),(yyvsp[-1].node)); }
#line 1910 "/home/guangping/dev/cpp/GIT/QGIS/src/core/qgsexpressionparser.cpp" /* yacc.c:1646  */
    break;

  case 34:
#line 295 "/home/guangping/dev/cpp/GIT/QGIS/src/core/qgsexpressionparser.yy" /* yacc.c:1646  */
    { (yyval.node) = new QgsExpressionNodeColumnRef( *(yyvsp[0].text) ); delete (yyvsp[0].text); }
#line 1916 "/home/guangping/dev/cpp/GIT/QGIS/src/core/qgsexpressionparser.cpp" /* yacc.c:1646  */
    break;

  case 35:
#line 296 "/home/guangping/dev/cpp/GIT/QGIS/src/core/qgsexpressionparser.yy" /* yacc.c:1646  */
    { (yyval.node) = new QgsExpressionNodeColumnRef( *(yyvsp[0].text) ); delete (yyvsp[0].text); }
#line 1922 "/home/guangping/dev/cpp/GIT/QGIS/src/core/qgsexpressionparser.cpp" /* yacc.c:1646  */
    break;

  case 36:
#line 300 "/home/guangping/dev/cpp/GIT/QGIS/src/core/qgsexpressionparser.yy" /* yacc.c:1646  */
    {
          int fnIndex = QgsExpression::functionIndex(*(yyvsp[0].text));
          if (fnIndex >= 0)
          {
            (yyval.node) = new QgsExpressionNodeFunction( fnIndex, nullptr );
          }
          else
          {
            QgsExpression::ParserError::ParserErrorType errorType = QgsExpression::ParserError::FunctionUnknown;
            parser_ctx->currentErrorType = errorType;
            exp_error(&yyloc, parser_ctx, QObject::tr( "%1 function is not known" ).arg( *(yyvsp[0].text) ).toLocal8Bit().constData());
            YYERROR;
          }
          delete (yyvsp[0].text);
        }
#line 1942 "/home/guangping/dev/cpp/GIT/QGIS/src/core/qgsexpressionparser.cpp" /* yacc.c:1646  */
    break;

  case 37:
#line 318 "/home/guangping/dev/cpp/GIT/QGIS/src/core/qgsexpressionparser.yy" /* yacc.c:1646  */
    {
          // @var is equivalent to var( "var" )
          QgsExpressionNode::NodeList* args = new QgsExpressionNode::NodeList();
          QgsExpressionNodeLiteral* literal = new QgsExpressionNodeLiteral( QString( *(yyvsp[0].text) ).mid( 1 ) );
          args->append( literal );
          (yyval.node) = new QgsExpressionNodeFunction( QgsExpression::functionIndex( "var" ), args );
          delete (yyvsp[0].text);
        }
#line 1955 "/home/guangping/dev/cpp/GIT/QGIS/src/core/qgsexpressionparser.cpp" /* yacc.c:1646  */
    break;

  case 38:
#line 328 "/home/guangping/dev/cpp/GIT/QGIS/src/core/qgsexpressionparser.yy" /* yacc.c:1646  */
    { (yyval.node) = new QgsExpressionNodeLiteral( QVariant((yyvsp[0].numberFloat)) ); }
#line 1961 "/home/guangping/dev/cpp/GIT/QGIS/src/core/qgsexpressionparser.cpp" /* yacc.c:1646  */
    break;

  case 39:
#line 329 "/home/guangping/dev/cpp/GIT/QGIS/src/core/qgsexpressionparser.yy" /* yacc.c:1646  */
    { (yyval.node) = new QgsExpressionNodeLiteral( QVariant((yyvsp[0].numberInt)) ); }
#line 1967 "/home/guangping/dev/cpp/GIT/QGIS/src/core/qgsexpressionparser.cpp" /* yacc.c:1646  */
    break;

  case 40:
#line 330 "/home/guangping/dev/cpp/GIT/QGIS/src/core/qgsexpressionparser.yy" /* yacc.c:1646  */
    { (yyval.node) = new QgsExpressionNodeLiteral( QVariant((yyvsp[0].boolVal)) ); }
#line 1973 "/home/guangping/dev/cpp/GIT/QGIS/src/core/qgsexpressionparser.cpp" /* yacc.c:1646  */
    break;

  case 41:
#line 331 "/home/guangping/dev/cpp/GIT/QGIS/src/core/qgsexpressionparser.yy" /* yacc.c:1646  */
    { (yyval.node) = new QgsExpressionNodeLiteral( QVariant(*(yyvsp[0].text)) ); delete (yyvsp[0].text); }
#line 1979 "/home/guangping/dev/cpp/GIT/QGIS/src/core/qgsexpressionparser.cpp" /* yacc.c:1646  */
    break;

  case 42:
#line 332 "/home/guangping/dev/cpp/GIT/QGIS/src/core/qgsexpressionparser.yy" /* yacc.c:1646  */
    { (yyval.node) = new QgsExpressionNodeLiteral( QVariant() ); }
#line 1985 "/home/guangping/dev/cpp/GIT/QGIS/src/core/qgsexpressionparser.cpp" /* yacc.c:1646  */
    break;

  case 43:
#line 336 "/home/guangping/dev/cpp/GIT/QGIS/src/core/qgsexpressionparser.yy" /* yacc.c:1646  */
    { (yyval.namednode) = new QgsExpressionNode::NamedNode( *(yyvsp[-1].text), (yyvsp[0].node) ); delete (yyvsp[-1].text); }
#line 1991 "/home/guangping/dev/cpp/GIT/QGIS/src/core/qgsexpressionparser.cpp" /* yacc.c:1646  */
    break;

  case 44:
#line 341 "/home/guangping/dev/cpp/GIT/QGIS/src/core/qgsexpressionparser.yy" /* yacc.c:1646  */
    {
         if ( (yyvsp[-2].nodelist)->hasNamedNodes() )
         {
           QgsExpression::ParserError::ParserErrorType errorType = QgsExpression::ParserError::FunctionNamedArgsError;
           parser_ctx->currentErrorType = errorType;
           exp_error(&yyloc, parser_ctx, QObject::tr( "All parameters following a named parameter must also be named." ).toUtf8().constData() );
           delete (yyvsp[-2].nodelist);
           YYERROR;
         }
         else
         {
           (yyval.nodelist) = (yyvsp[-2].nodelist); (yyvsp[-2].nodelist)->append((yyvsp[0].node));
         }
       }
#line 2010 "/home/guangping/dev/cpp/GIT/QGIS/src/core/qgsexpressionparser.cpp" /* yacc.c:1646  */
    break;

  case 45:
#line 355 "/home/guangping/dev/cpp/GIT/QGIS/src/core/qgsexpressionparser.yy" /* yacc.c:1646  */
    { (yyval.nodelist) = (yyvsp[-2].nodelist); (yyvsp[-2].nodelist)->append((yyvsp[0].namednode)); }
#line 2016 "/home/guangping/dev/cpp/GIT/QGIS/src/core/qgsexpressionparser.cpp" /* yacc.c:1646  */
    break;

  case 46:
#line 356 "/home/guangping/dev/cpp/GIT/QGIS/src/core/qgsexpressionparser.yy" /* yacc.c:1646  */
    { (yyval.nodelist) = new QgsExpressionNode::NodeList(); (yyval.nodelist)->append((yyvsp[0].node)); }
#line 2022 "/home/guangping/dev/cpp/GIT/QGIS/src/core/qgsexpressionparser.cpp" /* yacc.c:1646  */
    break;

  case 47:
#line 357 "/home/guangping/dev/cpp/GIT/QGIS/src/core/qgsexpressionparser.yy" /* yacc.c:1646  */
    { (yyval.nodelist) = new QgsExpressionNode::NodeList(); (yyval.nodelist)->append((yyvsp[0].namednode)); }
#line 2028 "/home/guangping/dev/cpp/GIT/QGIS/src/core/qgsexpressionparser.cpp" /* yacc.c:1646  */
    break;

  case 48:
#line 361 "/home/guangping/dev/cpp/GIT/QGIS/src/core/qgsexpressionparser.yy" /* yacc.c:1646  */
    { (yyval.whenthenlist) = (yyvsp[-1].whenthenlist); (yyvsp[-1].whenthenlist)->append((yyvsp[0].whenthen)); }
#line 2034 "/home/guangping/dev/cpp/GIT/QGIS/src/core/qgsexpressionparser.cpp" /* yacc.c:1646  */
    break;

  case 49:
#line 362 "/home/guangping/dev/cpp/GIT/QGIS/src/core/qgsexpressionparser.yy" /* yacc.c:1646  */
    { (yyval.whenthenlist) = new QgsExpressionNodeCondition::WhenThenList(); (yyval.whenthenlist)->append((yyvsp[0].whenthen)); }
#line 2040 "/home/guangping/dev/cpp/GIT/QGIS/src/core/qgsexpressionparser.cpp" /* yacc.c:1646  */
    break;

  case 50:
#line 366 "/home/guangping/dev/cpp/GIT/QGIS/src/core/qgsexpressionparser.yy" /* yacc.c:1646  */
    { (yyval.whenthen) = new QgsExpressionNodeCondition::WhenThen((yyvsp[-2].node),(yyvsp[0].node)); }
#line 2046 "/home/guangping/dev/cpp/GIT/QGIS/src/core/qgsexpressionparser.cpp" /* yacc.c:1646  */
    break;


#line 2050 "/home/guangping/dev/cpp/GIT/QGIS/src/core/qgsexpressionparser.cpp" /* yacc.c:1646  */
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
  *++yylsp = yyloc;

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
      yyerror (&yylloc, parser_ctx, YY_("syntax error"));
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
        yyerror (&yylloc, parser_ctx, yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }

  yyerror_range[1] = yylloc;

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
                      yytoken, &yylval, &yylloc, parser_ctx);
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

  yyerror_range[1] = yylsp[1-yylen];
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

      yyerror_range[1] = *yylsp;
      yydestruct ("Error: popping",
                  yystos[yystate], yyvsp, yylsp, parser_ctx);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  yyerror_range[2] = yylloc;
  /* Using YYLLOC is tempting, but would change the location of
     the lookahead.  YYLOC is available though.  */
  YYLLOC_DEFAULT (yyloc, yyerror_range, 2);
  *++yylsp = yyloc;

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
  yyerror (&yylloc, parser_ctx, YY_("memory exhausted"));
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
                  yytoken, &yylval, &yylloc, parser_ctx);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[*yyssp], yyvsp, yylsp, parser_ctx);
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
#line 369 "/home/guangping/dev/cpp/GIT/QGIS/src/core/qgsexpressionparser.yy" /* yacc.c:1906  */



// returns parsed tree, otherwise returns nullptr and sets parserErrorMsg
QgsExpressionNode* parseExpression(const QString& str, QString& parserErrorMsg, QList<QgsExpression::ParserError> &parserErrors)
{
  expression_parser_context ctx;
  ctx.rootNode = 0;

  exp_lex_init(&ctx.flex_scanner);
  exp__scan_string(str.toUtf8().constData(), ctx.flex_scanner);
  int res = exp_parse(&ctx);
  exp_lex_destroy(ctx.flex_scanner);

  // list should be empty when parsing was OK
  if (res == 0 && ctx.parserErrors.count() == 0) // success?
  {
    return ctx.rootNode;
  }
  else // error?
  {
    parserErrorMsg = ctx.errorMsg;
    parserErrors = ctx.parserErrors;
    delete ctx.rootNode;
    return nullptr;
  }
}


void exp_error(YYLTYPE* yyloc,expression_parser_context* parser_ctx, const char* msg)
{
  QgsExpression::ParserError error = QgsExpression::ParserError();
  error.firstColumn = yyloc->first_column;
  error.firstLine = yyloc->first_line;
  error.lastColumn = yyloc->last_column;
  error.lastLine = yyloc->last_line;
  error.errorMsg = msg;
  error.errorType = parser_ctx->currentErrorType;
  parser_ctx->parserErrors.append(error);
  // Reset the current error type for the next error.
  parser_ctx->currentErrorType = QgsExpression::ParserError::Unknown;

  parser_ctx->errorMsg = parser_ctx->errorMsg + "\n" + msg;
}

/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "program.y"

#include <stdio.h>
#include <stdlib.h>

extern FILE *fp;
FILE * f1;


#line 80 "y.tab.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif


/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    INT = 258,                     /* INT  */
    VOID = 259,                    /* VOID  */
    UINT = 260,                    /* UINT  */
    FLOAT = 261,                   /* FLOAT  */
    WHILE = 262,                   /* WHILE  */
    FOR = 263,                     /* FOR  */
    DO = 264,                      /* DO  */
    IF = 265,                      /* IF  */
    ELSE = 266,                    /* ELSE  */
    BREAK = 267,                   /* BREAK  */
    NUM = 268,                     /* NUM  */
    ID = 269,                      /* ID  */
    INCLUDE = 270,                 /* INCLUDE  */
    ASGN = 271,                    /* ASGN  */
    LOR = 272,                     /* LOR  */
    LAND = 273,                    /* LAND  */
    BOR = 274,                     /* BOR  */
    BXOR = 275,                    /* BXOR  */
    BAND = 276,                    /* BAND  */
    EQ = 277,                      /* EQ  */
    NE = 278,                      /* NE  */
    LE = 279,                      /* LE  */
    GE = 280,                      /* GE  */
    LT = 281,                      /* LT  */
    GT = 282                       /* GT  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif
/* Token kinds.  */
#define YYEMPTY -2
#define YYEOF 0
#define YYerror 256
#define YYUNDEF 257
#define INT 258
#define VOID 259
#define UINT 260
#define FLOAT 261
#define WHILE 262
#define FOR 263
#define DO 264
#define IF 265
#define ELSE 266
#define BREAK 267
#define NUM 268
#define ID 269
#define INCLUDE 270
#define ASGN 271
#define LOR 272
#define LAND 273
#define BOR 274
#define BXOR 275
#define BAND 276
#define EQ 277
#define NE 278
#define LE 279
#define GE 280
#define LT 281
#define GT 282

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);



/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_INT = 3,                        /* INT  */
  YYSYMBOL_VOID = 4,                       /* VOID  */
  YYSYMBOL_UINT = 5,                       /* UINT  */
  YYSYMBOL_FLOAT = 6,                      /* FLOAT  */
  YYSYMBOL_WHILE = 7,                      /* WHILE  */
  YYSYMBOL_FOR = 8,                        /* FOR  */
  YYSYMBOL_DO = 9,                         /* DO  */
  YYSYMBOL_IF = 10,                        /* IF  */
  YYSYMBOL_ELSE = 11,                      /* ELSE  */
  YYSYMBOL_BREAK = 12,                     /* BREAK  */
  YYSYMBOL_NUM = 13,                       /* NUM  */
  YYSYMBOL_ID = 14,                        /* ID  */
  YYSYMBOL_INCLUDE = 15,                   /* INCLUDE  */
  YYSYMBOL_ASGN = 16,                      /* ASGN  */
  YYSYMBOL_LOR = 17,                       /* LOR  */
  YYSYMBOL_LAND = 18,                      /* LAND  */
  YYSYMBOL_BOR = 19,                       /* BOR  */
  YYSYMBOL_BXOR = 20,                      /* BXOR  */
  YYSYMBOL_BAND = 21,                      /* BAND  */
  YYSYMBOL_EQ = 22,                        /* EQ  */
  YYSYMBOL_NE = 23,                        /* NE  */
  YYSYMBOL_LE = 24,                        /* LE  */
  YYSYMBOL_GE = 25,                        /* GE  */
  YYSYMBOL_LT = 26,                        /* LT  */
  YYSYMBOL_GT = 27,                        /* GT  */
  YYSYMBOL_28_ = 28,                       /* '+'  */
  YYSYMBOL_29_ = 29,                       /* '-'  */
  YYSYMBOL_30_ = 30,                       /* '*'  */
  YYSYMBOL_31_ = 31,                       /* '/'  */
  YYSYMBOL_32_ = 32,                       /* '~'  */
  YYSYMBOL_33_ = 33,                       /* '('  */
  YYSYMBOL_34_ = 34,                       /* ')'  */
  YYSYMBOL_35_ = 35,                       /* '{'  */
  YYSYMBOL_36_ = 36,                       /* '}'  */
  YYSYMBOL_37_ = 37,                       /* ';'  */
  YYSYMBOL_38_ = 38,                       /* ','  */
  YYSYMBOL_YYACCEPT = 39,                  /* $accept  */
  YYSYMBOL_StartProgram = 40,              /* StartProgram  */
  YYSYMBOL_STMT_START = 41,                /* STMT_START  */
  YYSYMBOL_STMT_BODY = 42,                 /* STMT_BODY  */
  YYSYMBOL_STMT = 43,                      /* STMT  */
  YYSYMBOL_FOR_STMT = 44,                  /* FOR_STMT  */
  YYSYMBOL_45_1 = 45,                      /* $@1  */
  YYSYMBOL_46_2 = 46,                      /* $@2  */
  YYSYMBOL_47_3 = 47,                      /* $@3  */
  YYSYMBOL_DO_STMT = 48,                   /* DO_STMT  */
  YYSYMBOL_49_4 = 49,                      /* $@4  */
  YYSYMBOL_50_5 = 50,                      /* $@5  */
  YYSYMBOL_IF_STMT = 51,                   /* IF_STMT  */
  YYSYMBOL_52_6 = 52,                      /* $@6  */
  YYSYMBOL_ELSESTMT = 53,                  /* ELSESTMT  */
  YYSYMBOL_54_7 = 54,                      /* $@7  */
  YYSYMBOL_WHILE_STMT = 55,                /* WHILE_STMT  */
  YYSYMBOL_56_8 = 56,                      /* $@8  */
  YYSYMBOL_57_9 = 57,                      /* $@9  */
  YYSYMBOL_DOWHILEBODY = 58,               /* DOWHILEBODY  */
  YYSYMBOL_WHILEBODY = 59,                 /* WHILEBODY  */
  YYSYMBOL_DECLARE_STMT = 60,              /* DECLARE_STMT  */
  YYSYMBOL_61_10 = 61,                     /* $@10  */
  YYSYMBOL_62_11 = 62,                     /* $@11  */
  YYSYMBOL_IDS = 63,                       /* IDS  */
  YYSYMBOL_64_12 = 64,                     /* $@12  */
  YYSYMBOL_ASSGN_STMT = 65,                /* ASSGN_STMT  */
  YYSYMBOL_66_13 = 66,                     /* $@13  */
  YYSYMBOL_67_14 = 67,                     /* $@14  */
  YYSYMBOL_68_15 = 68,                     /* $@15  */
  YYSYMBOL_ASSGN_STMT_2 = 69,              /* ASSGN_STMT_2  */
  YYSYMBOL_70_16 = 70,                     /* $@16  */
  YYSYMBOL_71_17 = 71,                     /* $@17  */
  YYSYMBOL_EXP = 72,                       /* EXP  */
  YYSYMBOL_73_18 = 73,                     /* $@18  */
  YYSYMBOL_74_19 = 74,                     /* $@19  */
  YYSYMBOL_75_20 = 75,                     /* $@20  */
  YYSYMBOL_76_21 = 76,                     /* $@21  */
  YYSYMBOL_77_22 = 77,                     /* $@22  */
  YYSYMBOL_78_23 = 78,                     /* $@23  */
  YYSYMBOL_79_24 = 79,                     /* $@24  */
  YYSYMBOL_80_25 = 80,                     /* $@25  */
  YYSYMBOL_81_26 = 81,                     /* $@26  */
  YYSYMBOL_82_27 = 82,                     /* $@27  */
  YYSYMBOL_83_28 = 83,                     /* $@28  */
  YYSYMBOL_84_29 = 84,                     /* $@29  */
  YYSYMBOL_85_30 = 85,                     /* $@30  */
  YYSYMBOL_86_31 = 86,                     /* $@31  */
  YYSYMBOL_87_32 = 87,                     /* $@32  */
  YYSYMBOL_88_33 = 88,                     /* $@33  */
  YYSYMBOL_TYPE = 89                       /* TYPE  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_uint8 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

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


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
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

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if !defined yyoverflow

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
#endif /* !defined yyoverflow */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
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
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  7
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   266

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  39
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  51
/* YYNRULES -- Number of rules.  */
#define YYNRULES  85
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  145

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   282


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      33,    34,    30,    28,    38,    29,     2,    31,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    37,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    35,     2,    36,    32,     2,     2,     2,
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
      25,    26,    27
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int8 yyrline[] =
{
       0,    29,    29,    32,    32,    35,    36,    39,    40,    41,
      42,    43,    44,    45,    48,    48,    48,    48,    51,    51,
      51,    54,    54,    56,    56,    57,    60,    60,    60,    63,
      64,    66,    67,    71,    71,    71,    74,    75,    75,    78,
      78,    78,    78,    82,    82,    82,    85,    85,    86,    86,
      87,    87,    88,    88,    89,    89,    90,    90,    91,    91,
      92,    92,    93,    93,    94,    94,    95,    95,    96,    96,
      97,    97,    98,    98,    99,    99,   100,   101,   102,   102,
     103,   104,   110,   111,   112,   113
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "INT", "VOID", "UINT",
  "FLOAT", "WHILE", "FOR", "DO", "IF", "ELSE", "BREAK", "NUM", "ID",
  "INCLUDE", "ASGN", "LOR", "LAND", "BOR", "BXOR", "BAND", "EQ", "NE",
  "LE", "GE", "LT", "GT", "'+'", "'-'", "'*'", "'/'", "'~'", "'('", "')'",
  "'{'", "'}'", "';'", "','", "$accept", "StartProgram", "STMT_START",
  "STMT_BODY", "STMT", "FOR_STMT", "$@1", "$@2", "$@3", "DO_STMT", "$@4",
  "$@5", "IF_STMT", "$@6", "ELSESTMT", "$@7", "WHILE_STMT", "$@8", "$@9",
  "DOWHILEBODY", "WHILEBODY", "DECLARE_STMT", "$@10", "$@11", "IDS",
  "$@12", "ASSGN_STMT", "$@13", "$@14", "$@15", "ASSGN_STMT_2", "$@16",
  "$@17", "EXP", "$@18", "$@19", "$@20", "$@21", "$@22", "$@23", "$@24",
  "$@25", "$@26", "$@27", "$@28", "$@29", "$@30", "$@31", "$@32", "$@33",
  "TYPE", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-37)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-75)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      28,   -37,   -37,   -37,   -37,    12,    -3,   -37,   -20,    -6,
     -11,    11,   -37,    -4,   -37,   -37,    -9,    11,   -37,    27,
     -37,    34,   -37,   -37,    29,   -37,   -37,   -37,    -7,    38,
     -37,   -37,    22,    55,    23,    48,   -37,   -37,    -7,    -7,
     106,   -37,    52,   -37,   -37,    60,    -7,   -37,   235,   123,
     -37,   -37,   -37,   -37,   -37,   -37,    35,   -37,   -37,   -37,
     -37,    62,    65,    61,    64,    67,    -7,   -37,    54,    77,
     140,   -33,   -37,    -7,    -7,    -7,    -7,    -7,    -7,   109,
      -7,    -7,    -7,    -7,   -11,    -7,    -7,    -7,    -7,    -7,
     175,   139,   -37,    -7,   -37,   -37,   125,   -37,   233,   233,
      42,    42,    42,    42,   -37,   -22,   -22,   -37,   -37,   145,
      91,   220,   205,   190,   175,   135,   -37,    -7,   175,    72,
     -37,    -7,   -37,   -37,   -37,    -7,    75,   155,   -37,   -37,
     -37,   -33,   157,   -11,   175,   -37,   136,   -37,   -37,   -37,
      52,   -37,   156,    72,   -37
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,    82,    83,    84,    85,     0,     0,     1,     0,     0,
       4,     6,     2,     0,    39,    13,     0,     6,    11,     0,
      12,     0,     9,    10,     0,     7,     8,    33,     0,     0,
       3,     5,     0,     4,     0,     0,    81,    80,     0,     0,
      66,    40,     0,    29,    30,     0,     0,    34,    76,    66,
      64,    62,    56,    60,    54,    58,    46,    48,    50,    52,
      21,     0,     0,     0,     0,     0,     0,    43,     0,     0,
      66,     0,    77,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     4,     0,     0,     0,     0,     0,
      41,     0,    15,     0,    27,    36,     0,    35,    65,    63,
      57,    61,    55,    59,    78,    47,    49,    51,    53,    25,
      67,    69,    71,    73,    75,     0,    44,     0,    19,     4,
      37,     0,    23,    22,    42,     0,    66,     0,    31,    32,
      28,     0,    66,     4,    45,    16,     0,    38,    79,    24,
       0,    20,     0,     4,    17
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -37,   -37,   -10,   194,   -32,   -37,   -37,   -37,   -37,   -37,
     -37,   -37,   -37,   -37,   -37,   -37,   -37,   -37,   -37,   -37,
      82,   -37,   -37,   -37,    95,   -37,   -37,   -37,   -37,   -37,
      99,   -37,   -37,   -36,   -37,   -37,   -37,   -37,   -37,   -37,
     -37,   -37,   -37,   -37,   -37,   -37,   -37,   -37,   -37,   -37,
     240
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     5,   128,    16,    17,    18,    19,   117,   140,    20,
      21,   127,    22,    84,   123,   133,    23,    24,   119,    45,
     130,    25,    35,    71,    97,   131,    26,    29,    66,   115,
      68,    91,   125,    40,    80,    81,    82,    83,    77,    75,
      78,    76,    74,    73,    61,    62,    63,    64,    65,   121,
      27
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      12,    44,    48,    49,    95,    96,    36,    37,    58,    59,
      70,     8,     7,     9,     1,     2,     3,     4,   -26,   -14,
     -18,    13,    38,    43,    11,    14,    39,    30,    10,    28,
      90,     1,     2,     3,     4,    32,    34,    98,    99,   100,
     101,   102,   103,    33,   105,   106,   107,   108,    15,   110,
     111,   112,   113,   114,    41,    42,    46,   118,     1,     2,
       3,     4,    47,   -14,   -18,    13,    67,    69,    79,    14,
      56,    57,    58,    59,   109,     1,     2,     3,     4,    85,
      87,   126,    13,    86,    88,   132,    14,   129,    89,   134,
      11,    92,    15,   -68,   -70,   -72,   -74,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    11,   -66,    15,
      93,   129,   135,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,   139,   -68,   -70,   -72,   -74,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,   104,   120,
      60,   -68,   -70,   -72,   -74,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,   116,   122,    72,   -68,   -70,
     -72,   -74,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,   124,   141,    94,   -68,   -70,   -72,   -74,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,   136,
     143,   138,   -66,   -68,   -70,   -72,   -74,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,   -66,   -68,   -70,
     -72,    31,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,   -66,   -68,   -70,   144,   137,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,   -66,   -68,   142,
       6,     0,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,   -66,   -68,   -70,   -72,   -74,    52,    53,    54,
      55,    56,    57,    58,    59,    58,    59
};

static const yytype_int16 yycheck[] =
{
      10,    33,    38,    39,    37,    38,    13,    14,    30,    31,
      46,    14,     0,    33,     3,     4,     5,     6,     7,     8,
       9,    10,    29,    33,    35,    14,    33,    36,    34,    33,
      66,     3,     4,     5,     6,     8,     7,    73,    74,    75,
      76,    77,    78,     9,    80,    81,    82,    83,    37,    85,
      86,    87,    88,    89,    16,    33,    33,    93,     3,     4,
       5,     6,    14,     8,     9,    10,    14,     7,    33,    14,
      28,    29,    30,    31,    84,     3,     4,     5,     6,    17,
      19,   117,    10,    18,    20,   121,    14,   119,    21,   125,
      35,    37,    37,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    35,    17,    37,
      33,   143,    37,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,   133,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    29,    14,
      34,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    16,    11,    34,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    37,    37,    34,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    34,
      34,    34,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    17,    18,    19,
      20,    17,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    17,    18,    19,   143,   131,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    17,    18,   140,
       0,    -1,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    17,    18,    19,    20,    21,    24,    25,    26,
      27,    28,    29,    30,    31,    30,    31
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     3,     4,     5,     6,    40,    89,     0,    14,    33,
      34,    35,    41,    10,    14,    37,    42,    43,    44,    45,
      48,    49,    51,    55,    56,    60,    65,    89,    33,    66,
      36,    42,     8,     9,     7,    61,    13,    14,    29,    33,
      72,    16,    33,    41,    43,    58,    33,    14,    72,    72,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      34,    83,    84,    85,    86,    87,    67,    14,    69,     7,
      72,    62,    34,    82,    81,    78,    80,    77,    79,    33,
      73,    74,    75,    76,    52,    17,    18,    19,    20,    21,
      72,    70,    37,    33,    34,    37,    38,    63,    72,    72,
      72,    72,    72,    72,    29,    72,    72,    72,    72,    41,
      72,    72,    72,    72,    72,    68,    16,    46,    72,    57,
      14,    88,    11,    53,    37,    71,    72,    50,    41,    43,
      59,    64,    72,    54,    72,    37,    34,    63,    34,    41,
      47,    37,    69,    34,    59
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    39,    40,    41,    41,    42,    42,    43,    43,    43,
      43,    43,    43,    43,    45,    46,    47,    44,    49,    50,
      48,    52,    51,    54,    53,    53,    56,    57,    55,    58,
      58,    59,    59,    61,    62,    60,    63,    64,    63,    66,
      67,    68,    65,    70,    71,    69,    73,    72,    74,    72,
      75,    72,    76,    72,    77,    72,    78,    72,    79,    72,
      80,    72,    81,    72,    82,    72,    83,    72,    84,    72,
      85,    72,    86,    72,    87,    72,    72,    72,    88,    72,
      72,    72,    89,    89,    89,    89
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     5,     3,     0,     2,     0,     1,     1,     1,
       1,     1,     1,     1,     0,     0,     0,    12,     0,     0,
       9,     0,     7,     0,     3,     0,     0,     0,     7,     1,
       1,     1,     1,     0,     0,     5,     1,     0,     4,     0,
       0,     0,     7,     0,     0,     5,     0,     4,     0,     4,
       0,     4,     0,     4,     0,     4,     0,     4,     0,     4,
       0,     4,     0,     4,     0,     4,     0,     4,     0,     4,
       0,     4,     0,     4,     0,     4,     2,     3,     0,     7,
       1,     1,     1,     1,     1,     1
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
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

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


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




# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
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
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)]);
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
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
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






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YY_USE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
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
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */

  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    YYNOMEM;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */


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

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
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
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
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
| yyreduce -- do a reduction.  |
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
  case 14: /* $@1: %empty  */
#line 48 "program.y"
                          {for_start();}
#line 1374 "y.tab.c"
    break;

  case 15: /* $@2: %empty  */
#line 48 "program.y"
                                                                  {for_inter();}
#line 1380 "y.tab.c"
    break;

  case 16: /* $@3: %empty  */
#line 48 "program.y"
                                                                                         {for_rep();}
#line 1386 "y.tab.c"
    break;

  case 18: /* $@4: %empty  */
#line 51 "program.y"
                  {while_start();}
#line 1392 "y.tab.c"
    break;

  case 19: /* $@5: %empty  */
#line 51 "program.y"
                                                                {while_rep();}
#line 1398 "y.tab.c"
    break;

  case 20: /* DO_STMT: $@4 DO DOWHILEBODY WHILE '(' EXP $@5 ')' ';'  */
#line 51 "program.y"
                                                                                       {while_end();}
#line 1404 "y.tab.c"
    break;

  case 21: /* $@6: %empty  */
#line 54 "program.y"
                                          {if_label1();}
#line 1410 "y.tab.c"
    break;

  case 23: /* $@7: %empty  */
#line 56 "program.y"
                               {if_label2();}
#line 1416 "y.tab.c"
    break;

  case 24: /* ELSESTMT: ELSE $@7 STMT_START  */
#line 56 "program.y"
                                                         {if_label3();}
#line 1422 "y.tab.c"
    break;

  case 25: /* ELSESTMT: %empty  */
#line 57 "program.y"
                                  {if_label3();}
#line 1428 "y.tab.c"
    break;

  case 26: /* $@8: %empty  */
#line 60 "program.y"
                         {while_start();}
#line 1434 "y.tab.c"
    break;

  case 27: /* $@9: %empty  */
#line 60 "program.y"
                                                            {while_rep();}
#line 1440 "y.tab.c"
    break;

  case 31: /* WHILEBODY: STMT_START  */
#line 66 "program.y"
                                     {while_end();}
#line 1446 "y.tab.c"
    break;

  case 32: /* WHILEBODY: STMT  */
#line 67 "program.y"
                                       {while_end();}
#line 1452 "y.tab.c"
    break;

  case 33: /* $@10: %empty  */
#line 71 "program.y"
                       {setType();}
#line 1458 "y.tab.c"
    break;

  case 34: /* $@11: %empty  */
#line 71 "program.y"
                                        {DECLARE_STMT();}
#line 1464 "y.tab.c"
    break;

  case 37: /* $@12: %empty  */
#line 75 "program.y"
                                          {DECLARE_STMT();}
#line 1470 "y.tab.c"
    break;

  case 39: /* $@13: %empty  */
#line 78 "program.y"
                             {push();}
#line 1476 "y.tab.c"
    break;

  case 40: /* $@14: %empty  */
#line 78 "program.y"
                                            {push();}
#line 1482 "y.tab.c"
    break;

  case 41: /* $@15: %empty  */
#line 78 "program.y"
                                                          {codegen_assign();}
#line 1488 "y.tab.c"
    break;

  case 43: /* $@16: %empty  */
#line 82 "program.y"
                       {push();}
#line 1494 "y.tab.c"
    break;

  case 44: /* $@17: %empty  */
#line 82 "program.y"
                                      {push();}
#line 1500 "y.tab.c"
    break;

  case 45: /* ASSGN_STMT_2: ID $@16 ASGN $@17 EXP  */
#line 82 "program.y"
                                                    {codegen_assign();}
#line 1506 "y.tab.c"
    break;

  case 46: /* $@18: %empty  */
#line 85 "program.y"
                                 {push();}
#line 1512 "y.tab.c"
    break;

  case 47: /* EXP: EXP '+' $@18 EXP  */
#line 85 "program.y"
                                               {Algebric_gen();}
#line 1518 "y.tab.c"
    break;

  case 48: /* $@19: %empty  */
#line 86 "program.y"
                                         {push();}
#line 1524 "y.tab.c"
    break;

  case 49: /* EXP: EXP '-' $@19 EXP  */
#line 86 "program.y"
                                                       {Algebric_gen();}
#line 1530 "y.tab.c"
    break;

  case 50: /* $@20: %empty  */
#line 87 "program.y"
                                         {push();}
#line 1536 "y.tab.c"
    break;

  case 51: /* EXP: EXP '*' $@20 EXP  */
#line 87 "program.y"
                                                       {Algebric_gen();}
#line 1542 "y.tab.c"
    break;

  case 52: /* $@21: %empty  */
#line 88 "program.y"
                                         {push();}
#line 1548 "y.tab.c"
    break;

  case 53: /* EXP: EXP '/' $@21 EXP  */
#line 88 "program.y"
                                                       {Algebric_gen();}
#line 1554 "y.tab.c"
    break;

  case 54: /* $@22: %empty  */
#line 89 "program.y"
                        {push();}
#line 1560 "y.tab.c"
    break;

  case 55: /* EXP: EXP LT $@22 EXP  */
#line 89 "program.y"
                                      {Logical_gen();}
#line 1566 "y.tab.c"
    break;

  case 56: /* $@23: %empty  */
#line 90 "program.y"
                                        {push();}
#line 1572 "y.tab.c"
    break;

  case 57: /* EXP: EXP LE $@23 EXP  */
#line 90 "program.y"
                                                      {Logical_gen();}
#line 1578 "y.tab.c"
    break;

  case 58: /* $@24: %empty  */
#line 91 "program.y"
                                        {push();}
#line 1584 "y.tab.c"
    break;

  case 59: /* EXP: EXP GT $@24 EXP  */
#line 91 "program.y"
                                                      {Logical_gen();}
#line 1590 "y.tab.c"
    break;

  case 60: /* $@25: %empty  */
#line 92 "program.y"
                                        {push();}
#line 1596 "y.tab.c"
    break;

  case 61: /* EXP: EXP GE $@25 EXP  */
#line 92 "program.y"
                                                      {Logical_gen();}
#line 1602 "y.tab.c"
    break;

  case 62: /* $@26: %empty  */
#line 93 "program.y"
                                        {push();}
#line 1608 "y.tab.c"
    break;

  case 63: /* EXP: EXP NE $@26 EXP  */
#line 93 "program.y"
                                                      {Logical_gen();}
#line 1614 "y.tab.c"
    break;

  case 64: /* $@27: %empty  */
#line 94 "program.y"
                                        {push();}
#line 1620 "y.tab.c"
    break;

  case 65: /* EXP: EXP EQ $@27 EXP  */
#line 94 "program.y"
                                                      {Logical_gen();}
#line 1626 "y.tab.c"
    break;

  case 66: /* $@28: %empty  */
#line 95 "program.y"
                      {push();}
#line 1632 "y.tab.c"
    break;

  case 67: /* EXP: EXP $@28 LOR EXP  */
#line 95 "program.y"
                                        {Logical_gen();}
#line 1638 "y.tab.c"
    break;

  case 68: /* $@29: %empty  */
#line 96 "program.y"
                                      {push();}
#line 1644 "y.tab.c"
    break;

  case 69: /* EXP: EXP $@29 LAND EXP  */
#line 96 "program.y"
                                                         {Logical_gen();}
#line 1650 "y.tab.c"
    break;

  case 70: /* $@30: %empty  */
#line 97 "program.y"
                                      {push();}
#line 1656 "y.tab.c"
    break;

  case 71: /* EXP: EXP $@30 BOR EXP  */
#line 97 "program.y"
                                                        {Logical_gen();}
#line 1662 "y.tab.c"
    break;

  case 72: /* $@31: %empty  */
#line 98 "program.y"
                                      {push();}
#line 1668 "y.tab.c"
    break;

  case 73: /* EXP: EXP $@31 BXOR EXP  */
#line 98 "program.y"
                                                         {Logical_gen();}
#line 1674 "y.tab.c"
    break;

  case 74: /* $@32: %empty  */
#line 99 "program.y"
                                      {push();}
#line 1680 "y.tab.c"
    break;

  case 75: /* EXP: EXP $@32 BAND EXP  */
#line 99 "program.y"
                                                         {Logical_gen();}
#line 1686 "y.tab.c"
    break;

  case 76: /* EXP: '-' EXP  */
#line 100 "program.y"
                                         {sub();}
#line 1692 "y.tab.c"
    break;

  case 78: /* $@33: %empty  */
#line 102 "program.y"
                                                  {push();}
#line 1698 "y.tab.c"
    break;

  case 79: /* EXP: EXP '+' '(' '-' $@33 EXP ')'  */
#line 102 "program.y"
                                                                   {Algebric_gen();}
#line 1704 "y.tab.c"
    break;

  case 80: /* EXP: ID  */
#line 103 "program.y"
                                     {check();push();}
#line 1710 "y.tab.c"
    break;

  case 81: /* EXP: NUM  */
#line 104 "program.y"
                                      {push();}
#line 1716 "y.tab.c"
    break;


#line 1720 "y.tab.c"

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
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      yyerror (YY_("syntax error"));
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
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;
  ++yynerrs;

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

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
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
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
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
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 116 "program.y"


#include <ctype.h>
#include"lex.yy.c"
int count=0;

char st[1000][10];
int top=0;
int i=0;
char temp[2]="t";

int label[200];
int lnum=0;
int ltop=0;
int stop=0;
char type[10];

struct Table
{
	char id[20];
	char type[10];
}table[10000];

int tableCount=0;

int main(int argc, char *argv[])
{
	yyin = fopen(argv[1], "r");
	f1=fopen("output","w");
	
   if(!yyparse())
		printf("\nParsing complete\n");
	else
	{
		printf("\nParsing failed\n");
		exit(0);
	}
	
	fclose(yyin);
	fclose(f1);
	
    return 0;
}
         
yyerror(char *s) {
	printf("Syntex Error in line number : %d : %s %s\n", yylineno, s, yytext );
}
    
push()
{
  	strcpy(st[++top],yytext);
}

Logical_gen()
{
 	sprintf(temp,"t%d",i);
  	fprintf(f1,"\t%s=%s%s%s\n",temp,st[top-2],st[top-1],st[top]);
  	top-=2;
 	strcpy(st[top],temp);
 	i++;
}

Algebric_gen()
{
 	sprintf(temp,"t%d",i); // converts temp to reqd format
  	fprintf(f1,"\t%s=%s%s%s\n",temp,st[top-2],st[top-1],st[top]);
  	top-=2;
 	strcpy(st[top],temp);
 	i++;
}
codegen_assign()
{
 	fprintf(f1,"\t%s=%s\n",st[top-2],st[top]);
 	top-=3;
}
sub()
{
   	sprintf(temp,"t%d",i);
   	fprintf(f1,"\t%s=-%s\n",temp,st[top]);
   	strcpy(st[top],temp);
   	i++;
}
if_label1()
{
 	lnum++;
 	fprintf(f1,"\tif( not %s)",st[top]);
 	fprintf(f1,"\tgoto L%d\n",lnum);
 	label[++ltop]=lnum;
}

if_label2()
{
	int x;
	lnum++;
	x=label[ltop--]; 
	fprintf(f1,"\tgoto L%d\n",lnum);
	fprintf(f1,"L%d: \n",x); 
	label[++ltop]=lnum;
}

if_label3()
{
	int y;
	y=label[ltop--];
	fprintf(f1,"L%d: \n",y);
	top--;
}
for_start()
{
	lnum++;
	
	fprintf(f1,"L%d:\n",lnum);
}
for_inter()
{
	lnum++;
	label[++ltop]=lnum;
	fprintf(f1,"L%d:\n",lnum);
}
for_rep()
{
	lnum++;
 	fprintf(f1,"\tif( not %s)",st[top]);
 	fprintf(f1,"\tgoto L%d\n",lnum);
 	label[++ltop]=lnum;
}
while_start()
{
	lnum++;
	label[++ltop]=lnum;
	fprintf(f1,"L%d:\n",lnum);
}
while_rep()
{
	lnum++;
 	fprintf(f1,"\tif( not %s)",st[top]);
 	fprintf(f1,"\tgoto L%d\n",lnum);
 	label[++ltop]=lnum;
}
while_end()
{
	int x,y;	y=label[ltop--];
	x=label[ltop--];
	fprintf(f1,"\tgoto L%d\n",x);
	fprintf(f1,"L%d: \n",y);
	top--;
}

/* for symbol table*/

check()
{
	char temp[20];
	strcpy(temp,yytext);
	int flag=0;
	for(i=0;i<tableCount;i++)
	{
		if(!strcmp(table[i].id,temp))
		{
			flag=1;
			break;
		}
	}
	if(!flag)
	{
		yyerror("Variable not declard");
		exit(0);
	}
}

setType()
{
	strcpy(type,yytext);
}


DECLARE_STMT()
{
	char temp[20];
	int i,flag;
	flag=0;
	strcpy(temp,yytext);
	for(i=0;i<tableCount;i++)
	{
		if(!strcmp(table[i].id,temp))
			{
			flag=1;
			break;
				}
	}
	if(flag)
	{
		yyerror("reDECLARE_STMT of ");
		exit(0);
	}
	else
	{
		strcpy(table[tableCount].id,temp);
		strcpy(table[tableCount].type,type);
		tableCount++;
	}
}


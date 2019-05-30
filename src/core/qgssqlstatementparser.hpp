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

#ifndef YY_SQLSTATEMENT_HOME_GUANGPING_DEV_CPP_GIT_QGIS_SRC_CORE_QGSSQLSTATEMENTPARSER_HPP_INCLUDED
# define YY_SQLSTATEMENT_HOME_GUANGPING_DEV_CPP_GIT_QGIS_SRC_CORE_QGSSQLSTATEMENTPARSER_HPP_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif
#if YYDEBUG
extern int sqlstatement_debug;
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
    LIKE = 266,
    IS = 267,
    PLUS = 268,
    MINUS = 269,
    MUL_OR_STAR = 270,
    DIV = 271,
    INTDIV = 272,
    MOD = 273,
    CONCAT = 274,
    POW = 275,
    NOT = 276,
    IN = 277,
    BETWEEN = 278,
    SELECT = 279,
    ALL = 280,
    DISTINCT = 281,
    CAST = 282,
    AS = 283,
    JOIN = 284,
    FROM = 285,
    ON = 286,
    USING = 287,
    WHERE = 288,
    ORDER = 289,
    BY = 290,
    ASC = 291,
    DESC = 292,
    LEFT = 293,
    RIGHT = 294,
    INNER = 295,
    OUTER = 296,
    CROSS = 297,
    FULL = 298,
    NATURAL = 299,
    UNION = 300,
    NUMBER_FLOAT = 301,
    NUMBER_INT = 302,
    NUMBER_INT64 = 303,
    BOOLEAN = 304,
    NULLVALUE = 305,
    STRING = 306,
    IDENTIFIER = 307,
    COMMA = 308,
    Unknown_CHARACTER = 309,
    UMINUS = 310
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 93 "/home/guangping/dev/cpp/GIT/QGIS/src/core/qgssqlstatementparser.yy" /* yacc.c:1909  */

  QgsSQLStatement::Node* node;
  QgsSQLStatement::NodeColumnRef* nodecolumnref;
  QgsSQLStatement::NodeSelectedColumn* nodeselectedcolumn;
  QgsSQLStatement::NodeSelect* nodeselect;
  QgsSQLStatement::NodeList* nodelist;
  QgsSQLStatement::NodeJoin* nodejoin;
  QgsSQLStatement::NodeTableDef* nodetabledef;
  QgsSQLStatement::NodeColumnSorted* nodecolumnsorted;
  QList<QgsSQLStatement::NodeColumnSorted*>* columnsortedlist;
  QList<QgsSQLStatement::NodeJoin*>* joinlist;
  QList<QgsSQLStatement::NodeTableDef*>* tablelist;
  QList<QgsSQLStatement::NodeSelectedColumn*>* selectedcolumnlist;
  double numberFloat;
  int    numberInt;
  qlonglong numberInt64;
  bool   boolVal;
  QString* text;
  QgsSQLStatement::BinaryOperator b_op;
  QgsSQLStatement::UnaryOperator u_op;
  QgsSQLStatement::JoinType jointype;
  QList<QString>* usinglist;

#line 134 "/home/guangping/dev/cpp/GIT/QGIS/src/core/qgssqlstatementparser.hpp" /* yacc.c:1909  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif



int sqlstatement_parse (sqlstatement_parser_context* parser_ctx);

#endif /* !YY_SQLSTATEMENT_HOME_GUANGPING_DEV_CPP_GIT_QGIS_SRC_CORE_QGSSQLSTATEMENTPARSER_HPP_INCLUDED  */

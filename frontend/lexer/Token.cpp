#include "Token.hpp"

std::string Token::ToString() const {
  std::string Result;
  Result += "\"" + std::string(StringValue) + "\", ";
  Result += "Line: " + std::to_string(LineNumber + 1) + ", ";
  Result += "Col: " + std::to_string(ColumnNumber + 1) + ", ";
  Result += "Value: " + std::to_string(Value);
  return Result;
}

std::string Token::ToString(TokenKind tk) {
  switch (tk) {
  case EndOfFile:
    return "End of file";
  case Invalid:
    return "Invalid";
  case Identifier:
    return "Identifier";
  case Integer:
    return "Integer";
  case Real:
    return "Float";
  case CharacterLiteral:
    return "Character Literal";
  case StringLiteral:
    return "String Literal";
  case Dot:
    return ".";
  case Comma:
    return ",";
  case Plus:
    return "+";
  case Minus:
    return "-";
  case Astrix:
    return "*";
  case ForwardSlash:
    return "/";
  case Percent:
    return "%";
  case Equal:
    return "=";
  case LessThan:
    return "<";
  case GreaterThan:
    return ">";
  case Bang:
    return "!";
  case QuestionMark:
    return "?";
  case PlusPlus:
    return "++";
  case MinusMinus:
    return "--";
  case PlusEqual:
    return "+=";
  case MinusEqual:
    return "-=";
  case AstrixEqual:
    return "*=";
  case ForwardSlashEqual:
    return "/=";
  case PercentEqual:
    return "%=";
  case LessThanLessThanEqual:
    return "<<=";
  case GreaterThanGreaterThanEqual:
    return ">>=";
  case AndEqual:
    return "&=";
  case OrEqual:
    return "|=";
  case CaretEqual:
    return "^=";
  case BangEqual:
    return "!=";
  case GreaterEqual:
    return ">=";
  case LessEqual:
    return "<=";
  case And:
    return "&";
  case Or:
    return "|";
  case DoubleAnd:
    return "&&";
  case DoubleOr:
    return "||";
  case DoubleEqual:
    return "==";
  case MinusGreaterThan:
    return "->";
  case LessThanLessThan:
    return "<<";
  case GreaterThanGreaterThan:
    return ">>";
  case Caret:
    return "^";
  case Tilde:
    return "~";
  case Colon:
    return ":";
  case SemiColon:
    return ";";
  case LeftParen:
    return "(";
  case RightParen:
    return ")";
  case LeftBracet:
    return "[";
  case RightBracet:
    return "]";
  case LeftCurly:
    return "{";
  case RightCurly:
    return "}";
  case DotDotDot:
    return "...";
  case BackSlash:
    return "\\";
  case DoubleForwardSlash:
    return "//";
  case ForwardSlashAstrix:
    return "/*";
  case AstrixForwardSlash:
    return "*/";
  case For:
    return "for";
  case While:
    return "while";
  case Do:
    return "do";
  case If:
    return "if";
  case Switch:
    return "switch";
  case Case:
    return "case";
  case Default:
    return "default";
  case Break:
    return "break";
  case Continue:
    return "continue";
  case Else:
    return "else";
  case Return:
    return "return";
  case Const:
    return "const";
  case Char:
    return "char";
  case Short:
    return "short";
  case Int:
    return "int";
  case Long:
    return "long";
  case Float:
    return "float";
  case Double:
    return "double";
  case Void:
    return "void";
  case Unsigned:
    return "unsigned";
  case Struct:
    return "struct";
  case Enum:
    return "enum";
  case Typedef:
    return "typedef";
  case Sizeof:
    return "sizeof";
  default:
    assert(!"Unhandled token type.");
    break;
  }
}

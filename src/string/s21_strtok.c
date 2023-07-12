#include "../s21_string.h"
// Разбивает строку str на ряд токенов, разделенных delim.

char *s21_strtok(char *str, const char *delim) {
  static char *str_tok = S21_NULL;
  if (str != S21_NULL) {
    str_tok = str;
    while (*str != '\0') {
      if ((s21_strchr(delim, *str)) == S21_NULL) {
        break;
      } else {
        str++;
        str_tok++;
      }
    }
  } else str = str_tok;
  int count = 0;
  str_tok++;
  while(count < (int)s21_strlen(str)){
    if((s21_strchr(delim, str[count])) == S21_NULL) {
      count++;
      str_tok++;
    } else {
      str[count] = '\0';
      break;
    }
  }
  

  return str;
}
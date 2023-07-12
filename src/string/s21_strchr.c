#include "../s21_string.h"
// Выполняет поиск первого вхождения символа c (беззнаковый тип) в строке, на
// которую указывает аргумент str.

char *s21_strchr(const char *str, int c) {
  char *ptr = (char *)str;
  ptr = s21_memchr(str, c, ((int)s21_strlen(str)));
  return ptr;
}
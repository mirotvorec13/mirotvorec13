#include "../s21_string.h"
// выполняет поиск первого вхождения символа "с" (беззнаковый тип) в первых "n"
// байтах строки, на которую указывает аргумент str.
// Совпадение первого байта с "c" (представленным как беззнаковый символ)
// останавливает выполнение операции.

void *s21_memchr(const void *str, int c, s21_size_t n) {

  char *ch = (char *)str;
  s21_size_t i = (int)n + 1;
  while (i > 0) {
    if (*ch != (char)c) {
      ch = (char *)str++;
    } else break;
    i--;
  }
  if (i == 0) {
    ch = S21_NULL;
  }
  return ch;
}
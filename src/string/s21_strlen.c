#include "../s21_string.h"
// Вычисляет длину строки str, не включая завершающий нулевой символ.
s21_size_t s21_strlen(const char *s) {
  int n = 0;
  while (s[n] != '\0') {
    n++;
  }
  return n;
}
#include "../s21_string.h"
// Находит первый символ в строке str1, который соответствует любому символу,
// указанному в str2.
char *s21_strpbrk(const char *str1, const char *str2) {
  void *ptr = S21_NULL;
  int j = 0;
  while (j < (int)s21_strlen(str2)) {
    ptr = s21_strchr(str1, str2[j]);
    j++;
  }
  return ptr;
}
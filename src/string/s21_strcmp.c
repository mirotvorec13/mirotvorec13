#include "../s21_string.h"
// сравнивает две строки str1 str2. Она возвращает целое число, которое меньше,
// больше нуля или равно ему, если str1 соответственно меньше, больше или равно
// str2
int s21_strcmp(const char *str1, const char *str2) {
  int res = 0;
  for (int i = 0; i < (int)s21_strlen(str1) + 1; i++) {
    res = str1[i] - str2[i];
    if (res != 0) {
      break;
    }
  }
  return res;
}
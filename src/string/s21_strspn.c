#include "../s21_string.h"
// Функция вычисляет длину начального сегмента строки str1 состоящего только из
// символов строки str2
s21_size_t s21_strspn(const char *str1, const char *str2) {
  int temp = 0;
  int i = 0;
  while (i < (int)s21_strlen(str1)) {
    if (temp != 1) {
      for (int j = 0; j < (int)s21_strlen(str2); j++) {
        if (str1[i] == str2[j]) {
          temp = 0;
          break;
        } else
          temp = 1;
      }
      if (temp != 1)
        i++;
    } else
      break;
  }
  return i;
}
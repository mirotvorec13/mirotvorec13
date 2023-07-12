#include "../s21_string.h"
// Вычисляет длину начального сегмента str1, который полностью состоит из
// символов, не входящих в str2.
s21_size_t s21_strcspn(const char *str1, const char *str2) {
  int count = 0;
  for (int i = 0; i < (int)s21_strlen(str1) + 1 && count == 0; i++) {
    for (int j = 0; j < (int)s21_strlen(str2) + 1; j++) {
      if (str1[i] == str2[j]) {
        count = i;
        break;
      }
    }
  }
  return count;
}
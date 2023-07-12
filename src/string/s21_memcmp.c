#include "../s21_string.h"
// Сравнивает первые n байтов str1 и str2. возвращает 0 если равны < 0 если
// меньше, и > 0 если больше
int s21_memcmp(const void *str1, const void *str2, s21_size_t n) {
  char *x = (char *)str1, *y = (char *)str2;
  int res = 0;
  for (s21_size_t i = 0; i < n; i++) {
    res = *x++ - *y++;
    if (res != 0) {
      break;
    }
  }
  return res;
}
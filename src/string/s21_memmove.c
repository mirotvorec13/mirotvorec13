#include "../s21_string.h"
// Функция копирует n байтов из области памяти src в область памяти dest.
void *s21_memmove(void *dest, const void *src, s21_size_t n) {
  char temp[n];
  char *s = s21_memcpy(temp, src, n);
  for (s21_size_t i = 0; i < n; i++) {
    temp[i] = s[i];
  }

  for (s21_size_t i = 0; i < n; i++) {
    ((char *)dest)[i] = temp[i];
  }
  return dest;
}
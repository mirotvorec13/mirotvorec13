#include "../s21_string.h"
// Копирует n символов из src в dest. области памяти не могут пересекаться
void *s21_memcpy(void *dest, const void *src, s21_size_t n) {
  for (s21_size_t i = 0; i < n; i++) {
    ((char *)dest)[i] = ((char *)src)[i];
    }
  return dest;
}
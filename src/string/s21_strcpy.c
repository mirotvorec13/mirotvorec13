#include "../s21_string.h"
// копирует строку на которую указывает src включая завершающий символ '\0' в
// массив на который указывает dest. Строки не могут перекрываться и в
// результирующей строке dest не должно быть достаточно места для копии.
char *s21_strcpy(char *dest, const char *src) {
  for (int i = 0; i < (int)s21_strlen(src) + 1; i++) {
    dest[i] = src[i];
  }
  return dest;
}

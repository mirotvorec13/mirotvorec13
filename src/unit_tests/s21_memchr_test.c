#include "s21_test.h"

START_TEST(memchrTest1) {
  char str1[] = "Hello, World! How are you?";
  char str2 = 'o';
  // unsigned int i[] = {1,2};
  char str3[] = "Hello, World! How are you?";
  char str4 = 'o';

  char *ptr1 = memchr(str1, str2, 15);
  char *ptr2 = s21_memchr(str3, str4, 15); 

  ck_assert_str_eq(ptr1, ptr2);
  // ck_assert_str_ne, ck_assert_str_eq_len
  // ck_assert_str_eq(X, Y);
  // ck_assert_str_eq(X, Y);
}
END_TEST;

// START_TEST(absTest2) {
//   int testValue1 = -3.45;
//   int testValue2 = 10;
//   int testValue3 = 0;
//   ck_assert_double_eq(s21_abs(testValue1), abs(testValue1));
//   ck_assert_int_eq(s21_abs(testValue2), abs(testValue2));
//   ck_assert_int_eq(s21_abs(testValue3), abs(testValue3));
// }
// END_TEST

Suite *memchrTest(void) {
  Suite *s = suite_create("\033[45mMemchr test\033[0m");
  TCase *tc = tcase_create("Memchr test");

  tcase_add_test(tc, memchrTest1);
  // tcase_add_test(tc, absTest2);
  suite_add_tcase(s, tc);
  return s;
}
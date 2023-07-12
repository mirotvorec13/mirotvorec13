#include "s21_test.h"

START_TEST(strcmpTest1) {
  char str1[] = "Hello, World! How are you?";
  char str2[] = "Hello, World! How are you?";

  char str3[] = "Hello, World! How are you?";
  char str4[] = "Hello, World! How are you?";

  int ptr1 = strcmp(str1, str2);
  int ptr2 = s21_strcmp(str3, str4);

  ck_assert_int_eq(ptr1, ptr2);
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

Suite *strcmpTest(void) {
  Suite *s = suite_create("\033[45mstrcmp test\033[0m");
  TCase *tc = tcase_create("strcmp test");

  tcase_add_test(tc, strcmpTest1);
  // tcase_add_test(tc, absTest2);
  suite_add_tcase(s, tc);
  return s;
}
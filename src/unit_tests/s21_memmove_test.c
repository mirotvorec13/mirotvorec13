#include "s21_test.h"

START_TEST(memmoveTest1) {
  char str1[] = "Hello, World! How are you?";
  // char str2[] = "123";

  char str3[] = "Hello, World! How are you?";
  // char str4[] = "123";

  char *ptr1 = memmove(str1, str1, 4);
  char *ptr2 = s21_memmove(str3, str3, 4);

  ck_assert_mem_eq(ptr1, ptr2, 5);
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

Suite *memmoveTest(void) {
  Suite *s = suite_create("\033[45mmemmove test\033[0m");
  TCase *tc = tcase_create("memmove test");

  tcase_add_test(tc, memmoveTest1);
  // tcase_add_test(tc, absTest2);
  suite_add_tcase(s, tc);
  return s;
}
#ifndef SRC_S21_TEST_H
#define SRC_S21_TEST_H
#include <check.h>
#include <string.h>
#include "../s21_string.h"

Suite *memchrTest(void);
Suite *memcmpTest(void);
Suite *memcpyTest(void);
Suite *memmoveTest(void);
Suite *memsetTest(void);
Suite *strcatTest(void);
Suite *strchrTest(void);
Suite *strcmpTest(void);
Suite *strcpyTest(void);
Suite *strcspnTest(void);
// Suite *strerrorTest(void);
Suite *strlenTest(void);
Suite *strncatTest(void);
Suite *strncmpTest(void);
Suite *strncpyTest(void);
Suite *strpbrkTest(void);
Suite *strrchrTest(void);
Suite *strspnTest(void);
Suite *strstrTest(void);
Suite *strtokTest(void);

#endif
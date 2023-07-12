#include "s21_test.h"

int main() {
  int number_failed = 0;

  Suite *test[] = {memchrTest(),   memcmpTest(), memcpyTest(),  memmoveTest(), memsetTest(),
                   strcatTest(), strchrTest(),  strcmpTest(), strcpyTest(), strcspnTest(),
                   /*strerrorTest(),*/   strlenTest(),  strncatTest(),  strncmpTest(), strncpyTest(),
                   strpbrkTest(), strrchrTest(), strspnTest(), strstrTest(), strtokTest(),  NULL};
                   
for(int i = 0; test[i] != NULL; i++){

    printf("\n\n");
    SRunner *sr = srunner_create(test[i]);

    srunner_run_all(sr, CK_VERBOSE);

    number_failed += srunner_ntests_failed(sr);
    srunner_free(sr);
}
  return (number_failed == 0) ? 0 : 1;
}

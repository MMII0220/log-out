#include "s21_strlen.h"

START_TEST(test_strlen) {
    char str1[] = "Hello";
    char str2[] = "Hello";

    ck_assert_int_eq(strlen(str1), s21_strlen(str2));

    char str1[] = "";
    char str2[] = "";

    ck_assert_int_eq(strlen(str1), s21_strlen(str2));
}
END_TEST

Suite *check_myStrlen(void) {
    Suite *c;
    TCase *tc_strlen;

    c = suite_create("Check strlen of char");

    tc_strlen = tcase_create("Core");

    tcase_add_test(tc_strlen, test_strlen);
    suite_add_tcase(c, tc_strlen);
}

int main() {
    int number_failed = 0;
    Suite *c;
    SRunner *sr;

    c = strlen_suite();
    sr = srunner_create(c);

    srunner_run_all(sr, CK_VERBOSE);
    number_failed = srunner_ntests_failed(sr);
    srunner_free(sr);

    return (number_failed == 0) ? EXIT_SUCCESS : EXIT_FAILURE;
}


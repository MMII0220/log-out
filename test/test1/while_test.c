#include "strlen_test.h"

START_TEST(my_test_suit) {
    char my_test1[] = "Hello";
    char my_test2[] = "Hello";
    ck_assert_int_eq(strlen_test(my_test1), strlen(my_test2));
}
END_TEST

Suite *all_my_test(void) {
    Suite *s;
    s = suite_create("String.h functions");

    TCase *tcmy_test;

    tcmy_test = tcase_create("test");
    suite_add_tcase(s, tcmy_test);
    tcase_add_test(tcmy_test, my_test_suit);

    return s;
}

int main() {
    int number_fail = 0;
    Suite *s;
    SRunner *sr;

    s = all_my_test();
    sr = srunner_create(s);
    srunner_run_all(sr, CK_VERBOSE);
    number_fail = srunner_ntests_failed(sr);
    srunner_free(sr);

    return (0 == number_fail) ? EXIT_SUCCESS : EXIT_FAILURE;
}




























// #include <stdio.h>
// #include <stdarg.h>
// #include <stdlib.h>

// // int calc_add(int count, ...);

// int main() {
//     // int count = 4;
//     char *str = "Hello World";
//     int i = 0;

//     str = calloc(256, sizeof(char *));

//     // printf("%d\n", calc_add(count, 1, 2, 3, 4));

//     while (*str) {
//         printf("%s\n", str);
//         (*str)++;

//         if (i == 5) {
//             break;
//         }

//         if (i == 3) {
//             str++;
//             printf("%s\n", str);
//         }

//         ++i;       
//     }

//     printf("%s\n", str);

//     free(str);
//     return 0;
// }

// // int calc_add(int count, ...) {
// //     int res;

// //     va_list nums;

// //     va_start(nums, count);

// //     for (int i = 0; i < count; ++i) {
// //         res += va_arg(nums, int);
// //     }

// //     va_end(nums);

// //     return res;
// // }

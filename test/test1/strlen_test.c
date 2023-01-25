#include "strlen_test.h"

size_t strlen_test(const char *str) {
    const char *p;

    for (p = str; *p; p++) {
    }

    return p - str;
}

// int main() {
//     char str[256] = "He w";

//     printf("%ld\n", strlen_test(str));

//     return 0;
// }

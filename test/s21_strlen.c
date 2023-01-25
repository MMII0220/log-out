#include "s21_strlen.h"

int s21_strlen(char *str) {
    int i = 0;
    while (str[i]) {
        ++i;
    }
    return i;
}

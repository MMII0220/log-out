#include <stdio.h>
#include <string.h>

int fun_strlen(char *str) {
    int i = 0;

    while (str[i]) {
        ++i;
    }

    return i;
}

int main() {
    char *string = "";
    char src[256] = "\0";
  
    strcpy(src, string);

    int src_len = fun_strlen(src);

    for (int i = 0; i < src_len; ++i) {
        if (src[i] == '!') {
            src[i] = '\0';
        }
    }

    src_len = fun_strlen(src);

    src[src_len] = '!';

    printf("%s\n", src);

    return 0;
}

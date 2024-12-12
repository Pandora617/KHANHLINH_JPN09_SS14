#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[] = "hello world";
    int count = 0, i = 0;
    int in_word = 0;

    while (str[i] != '\0') {
        if (isalpha(str[i])) { // Ki?m tra n?u là k? t? ch?
            if (!in_word) {
                count++; // B?t ð?u m?t t? m?i
                in_word = 1;
            }
        } else {
            in_word = 0; // K?t thúc m?t t? n?u g?p k? t? không ph?i ch?
        }
        i++;
    }

    printf("%d\n", count);

    return 0;
}


#include <stdio.h>
#include <string.h>

int main() {
    char str[100];

    printf("Nhap vao mot chuoi: ");
    fgets(str, sizeof(str), stdin);

    printf("Chuoi ban vua nhap la: %s", str);
    printf("Do dai chuoi la: %lu\n", strlen(str) - 1);

    return 0;
}


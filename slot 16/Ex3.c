//Nhap vao 1 chuoi, in ra chuoi dao nguoc
#include <stdio.h>
#include <string.h>

void daoNguocChuoi(char str[]) {
    int len = strlen(str); //tinh do dai chuoi
    for (int i = 0; i < len / 2; i++) {
        char temp = str[i];
        str[i] = str[len - i - 1];
        str[len - i - 1] = temp;
    }
}

int main() {
    char str[100];
    printf("Nhap chuoi: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';
    daoNguocChuoi(str);
    printf("Chuoi sau khi dao nguoc: %s", str);
    return 0;
}
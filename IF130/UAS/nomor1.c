#include<stdio.h>

int main() {
    char *password[64];
    printf("Input Password: ");
    scanf("%s", &password);
    printf("Password: %s", password);
    return 0;
}

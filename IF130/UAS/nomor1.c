#include<stdio.h>

int main() {
    char *password[64];
    printf("Input Password: ");
    scanf("%s", password);
    // printf("Password: %s", password);
    int count = 0;
    while(*password[count] != '\0') {
        count++;
    }
    printf("%i", count);
    return 0;
}

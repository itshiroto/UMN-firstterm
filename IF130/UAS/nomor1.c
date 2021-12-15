#include<stdio.h>
#include<string.h>

int main() {
    char *password[64];
    printf("Input Password: ");
    scanf("%s", &password);
    // printf("Password: %s", password);
    printf("%i", strlen(password));
    return 0;
}

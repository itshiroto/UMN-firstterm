#include<stdio.h>

int getLen(const char *input) {
    int count;
    while (*input != '\0') {
        input++;
        count++;
    }
    return count;


int main() {
    char *password[64];
    printf("Input Password: ");
    scanf("%s", &password);
    // printf("Password: %s", password);
    printf("%i", getLen(password));
    return 0;
}

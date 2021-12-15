#include<stdio.h>

int getLen(char **input) {
    int count;
    while (*input[count] != '\0') {
        count++;
    }
    return count;


int main() {
    char *password[64];
    printf("Input Password: ");
    scanf("%s", &password);
    // printf("Password: %s", password);
    printf("%i", getLen(password));
    // for (int i = 0; i < 
    return 0;
}

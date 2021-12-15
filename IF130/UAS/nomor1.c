#include<stdio.h>

int main() {
    char password[64];
    printf("Input Password: ");
    scanf("%s", password);
    // printf("Password: %s", password);
    int count = 0;
    int number = 0;
    int lower = 0;
    int upper = 0;
    int isSymbol = 0;
    int symbol = 0;
    while(password[count] != '\0') {
        password[count] >= '0' && password[count] <= '9' ? number++ : isSymbol = 1;
        password[count] >= 'A' && password[count] <= 'Z' ? upper++ : isSymbol = 1;
        password[count] >= 'a' && password[count] <= 'z' ? lower++ : isSymbol = 1;
        isSymbol != 0 ? symbol++ : continue;
        count++;
    }
    printf("%i", count);
    return 0;
}

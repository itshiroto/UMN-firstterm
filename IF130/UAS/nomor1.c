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
    for(int count = 0; password != '\0'; count++) {
        password[count] >= '0' && password[count] <= '9' ? number++ : isSymbol++, break;
        password[count] >= 'A' && password[count] <= 'Z' ? upper++ : isSymbol++, break;
        password[count] >= 'a' && password[count] <= 'z' ? lower++ : isSymbol++, break;
        isSymbol != 0 ? symbol++ : break;
    }
    printf("%i %i %i %i %i", number, lower, upper, symbol, count);
    return 0;
}

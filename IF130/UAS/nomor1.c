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
    int symbol = 0;
    for(count = 0; password != '\0'; count++) {
        int isSymbol = 0;
        password[count] >= '0' && password[count] <= '9' ? number++ : isSymbol++;
        password[count] >= 'A' && password[count] <= 'Z' ? upper++ : isSymbol++;
        password[count] >= 'a' && password[count] <= 'z' ? lower++ : isSymbol++;
        if (isSymbol >= 3) symbol++;
    }
    printf("%i %i %i %i %i", number, lower, upper, symbol);
    return 0;
}

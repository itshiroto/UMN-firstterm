#include<stdio.h>

int checkPass(char password[]) {
    int count = 0;
    int number = 0;
    int lower = 0;
    int upper = 0;
    int symbol = 0;
    for(count = 0; *password != '\0'; count++) {
        if (*password[count] == '\0') break;
        int isSymbol = 0;
        password[count] >= '0' && password[count] <= '9' ? number++ : isSymbol++;
        password[count] >= 'A' && password[count] <= 'Z' ? upper++ : isSymbol++;
        password[count] >= 'a' && password[count] <= 'z' ? lower++ : isSymbol++;
        if (isSymbol >= 3) symbol++;
    }
    // printf("%i %i %i %i %i", number, lower, upper, symbol, count);
    if (count < 8 || number < 1 || lower < 1 || upper < 1 || symbol > 0) {
        return 1;
    return 0;
}

int main() {
    char password[64];
    printf("Input Password: ");
    scanf("%s", password);
    checkPass(password) ? printf("Invalid") : printf("Valid");
    return 0;
}


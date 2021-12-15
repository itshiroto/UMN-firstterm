#include<stdio.h>

void printMenu() {
    printf("1. Rectangle");
    printf("2. Triangle");
    printf("3. Circle");
}

int main() {
    int menu;
    printf("Pilih Menu");
    scanf("%i", &menu);
    return 0;
}

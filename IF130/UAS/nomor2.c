#include<stdio.h>

void printMenu() {
    printf("1. Rectangle");
    printf("2. Triangle");
    printf("3. Circle");
    printf("4. Circle");
}

int isdigit(char *input){
    int i = 0;
    while (input[i] != '\0') {
      // check if element i of a string is a character based on ASCII code.
      if (!(input[i] >= 48 && input[i] <= 57)) return 1; 
      i++;
    }
    return 0;
}

int convertToInt(char *str){
  int i = 0, result = 0;
  while (str[i] != '\0') {
    // Each i element in str variable is subtracted by 48 ('0' character on ASCII)
    // to get the real number and then added to result variable.
    result = result * 10 + str[i] - '0'; 
    i++;
  }
  return result;
}

void printResult(float kel, float sisi) {
    printf("Keliling = %.2f", kel);
    printf("Sisi = %.2f", sisi);
}

void rectangle() {
    int panjang, lebar;
    float keliling, luas;

    printf("Input Panjang: ");
    scanf("%i", &panjang);
    printf("Input Lebar: ");
    scanf("%i", &lebar);

    keliling = 2 * (panjang * lebar);
    luas = panjang * lebar;
    printResult(keliling, luas);
}

void triangle() {
    int sisi;
    float keliling, luas;

    printf("Input sisi: ");
    scanf("%i", &sisi);

    keliling = 3 * sisi;
    luas = (sisi * 2) / 2;

    printResult(keliling, luas);
}

void circle() {
    int jari;
    const int pi = 3.14;
    float keliling, luas;

    printf("Input jari-jari: ");
    scanf("%i", &jari);

    keliling = 2 * pi * jari;
    luas = pi * jari * jari;

    printResult(keliling, luas);
}

int inputMenu(menu) {
    printf("Pilih Menu: ");
    scanf("%i", &menu);
    return menu;

int main() {
    int menu;
    while (menu != 4) {
        printMenu();
        inputMenu(menu);
        switch(menu) {
            case 1: rectangle(); break;
            case 2: triangle(); break;
            case 3: circle(); break;
            case 4: return 0;
            default: printf("Menu Tidak Ditemukan"); break;
        }
    }
    return 0;
}

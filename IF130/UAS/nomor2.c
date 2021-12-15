#include<stdio.h>

void printMenu() {
    printf("\n");
    printf("1. Rectangle\n");
    printf("2. Triangle\n");
    printf("3. Circle\n");
    printf("4. Exit\n");
}

int isDigit(char *input){
    int i = 0;
    while (input[i] != '\0') {
      // check if element i of a string is a character based on ASCII code.
      if (!(input[i] >= '0' && input[i] <= '9')) return 1; 
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
    printf("\n");
    printf("Keliling = %.2f\n", kel);
    printf("Sisi = %.2f\n", sisi);
}

void rectangle() {
    char pchar[10], lchar[10];
    float keliling, luas;

    printf("Input Panjang: ");
    scanf("%s", &pchar);
    printf("Input Lebar: ");
    scanf("%s", &lchar);
    if ((isDigit(pchar) == 1 || isDigit(lchar) == 1)) {
        printf("Input bukan angka\n");
        return;
    }
    int panjang = convertToInt(pchar);
    int lebar = convertToInt(lchar);

    keliling = 2 * (panjang * lebar);
    luas = panjang * lebar;
    printResult(keliling, luas);
}

void triangle() {
    char schar[10];
    float keliling, luas;

    printf("Input sisi: ");
    scanf("%s", &schar);

    if ((isDigit(schar) == 1)) {
        printf("Input bukan angka\n");
        return;
    }
    int sisi = convertToInt(schar);

    keliling = 3 * sisi;
    luas = (sisi * 2) / 2;

    printResult(keliling, luas);
}

void circle() {
    char jchar[10];
    const float pi = 3.14;
    float keliling, luas;

    printf("Input jari-jari: ");
    scanf("%s", &jchar);

    if ((isDigit(jchar) == 1)) {
        printf("Input bukan angka\n");
        return;
    }

    int jari = convertToInt(jchar);

    keliling = 2 * pi * jari;
    luas = pi * jari * jari;

    printResult(keliling, luas);
}

int inputMenu() {
    int menu;
    printf("Pilih Menu: ");
    scanf("%i%*c", &menu);
    return menu;
}

int main() {
    int keepGoing = 1;
    while (keepGoing != 0) {
        printMenu();
        switch(inputMenu()) {
            case 1: rectangle(); break;
            case 2: triangle(); break;
            case 3: circle(); break;
            case 4: keepGoing = 0; printf("Selesai\nTerima Kasih\n"); break;
            default: printf("Menu Tidak Ditemukan"); break;
        }
    }
    return 0;
}

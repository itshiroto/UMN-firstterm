#include <stdio.h>

int add(int a, int b);
int subtract(int a, int b);
int multiply(int a, int b);
float divide(int a, int b);

int main(void){
	int num1;
	int num2;
	int menu;
	float result;
	printf("Isi angka pertama: ");
	scanf("%i", &num1);
	printf("Isi angka kedua: ");
	scanf("%i", &num2);

	printf("Pilih menu:\n");
	printf("1. Penambahan\n");
	printf("2. Pengurangan\n");
	printf("3. Perkalian\n");
	printf("4. Pembagian\n");
	scanf("%i", &menu);

	switch(menu){
		case 1: result = add(num1, num2); break;
		case 2: result = subtract(num1, num2); break;
		case 3: result = multiply(num1, num2); break;
		case 4: result = divide(num1, num2); break;
		default: printf("Menu yang anda masukkan salah"); break;
	}

	printf("Hasil: %f\n", result);
}

int add(int a, int b) {
	return a + b;
}
int subtract(int a, int b){
	return a - b;
}
int multiply(int a, int b){
	return a * b;
}
float divide(int a, int b){
	if (b == 0) {
		printf("Tidak bisa dibagi dengan 0\n");
		return 0;
	}
	return a / b;
}
#include <stdio.h>

int main()
{
    char operator;
    int num1, num2;
    float hasil;
    printf("Pilih oprasi bilangan!");
    scanf("c%",&operator);
    printf("\nMasukan angka pertama =");
    scanf("&d",&num1);
    printf("\nMasukan angka kedua =");
    scanf("%d",&num2);

    switch(operator)
    {
        case '+':
            hasil = num1 + num2;
            printf("Hasilnya = %.2f",hasil);
            break;
        case '-':
            hasil = num1 - num2;
            printf("Hasilnya = %.2f",hasil);
            break;
        case '*':
            hasil = num1 * num2;
            printf("Hasilnya = %.2f",hasil);
            break;
        case '/':
            if(num2==0)
            {
                printf("\n angka kedua tidak boleh 0");
                scanf("%d",&num2);
            }
            hasil = num1/num2;
            printf("Hasilnya = %.2f",hasil);
            break;
    }
    return 0;
}
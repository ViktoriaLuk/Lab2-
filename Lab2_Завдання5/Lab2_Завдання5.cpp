#include <stdio.h>
#include<iostream>
int main() {
    setlocale(LC_CTYPE, "ukr");
    int number;
    printf("Введіть тризначне число: ");
    scanf_s("%d", &number);


    int reversedNumber = 0;
    while (number != 0) {
        int digit = number % 10;
        reversedNumber = reversedNumber * 10 + digit;
        number /= 10;
    }
    printf("Число в зворотному порядку: %d\n", reversedNumber);

    return 0;
}


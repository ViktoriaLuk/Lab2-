#include <stdio.h>
#include<iostream>
int main() {
    setlocale(LC_CTYPE, "ukr");
    int number;

    printf("Введіть ціле число: ");
    scanf_s("%d", &number); 

    printf("Остання цифра числа: %d\n", number % 10);

    return 0;
}


#include <stdio.h>
#include <iostream>
int main() {
    setlocale(LC_CTYPE, "ukr");
    int a, b;

    printf("Введіть два числа: ");
    if (scanf_s("%d %d", &a, &b) != 2) {
        printf("Помилка вводу!\n");
        return 1;  
    }

    a = a + b;
    b = a - b;
    a = a - b;

    printf("Після обміну: a = %d, b = %d\n", a, b);

    return 0;
}

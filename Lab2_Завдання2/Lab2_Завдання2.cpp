#include <stdio.h>
#include <iostream>
int main() {
    setlocale(LC_CTYPE, "ukr");
    int numberOfItems;
    double pricePerItem, totalCost;

    printf("Введіть кількість товарів: ");
    scanf_s("%d", &numberOfItems);  
    printf("Введіть ціну за одиницю товару: ");
    scanf_s("%lf", &pricePerItem);  

    totalCost = numberOfItems * pricePerItem;

    printf("Загальна вартість покупки: %.2f гривень\n", totalCost);

    return 0;
}

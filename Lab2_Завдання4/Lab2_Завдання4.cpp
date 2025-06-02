#include <stdio.h>
#include<iostream>
int main() {
    setlocale(LC_CTYPE, "ukr");
    double distance1 = 120, distance2 = 80;  
    double time1 = 2, time2 = 1; 
    double totalDistance, totalTime, averageSpeed;

    totalDistance = distance1 + distance2;
    totalTime = time1 + time2;

    averageSpeed = totalDistance / totalTime;

    printf("Середня швидкiсть водiя: %.2f км/год\n", averageSpeed);

    return 0;
}

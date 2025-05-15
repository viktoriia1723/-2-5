#include <stdio.h>

int main() {
    float meters;
    
    printf("Введіть довжину в метрах: ");
    scanf("%f", &meters);
    
    float centimeters = meters * 100;
    float millimeters = meters * 1000;
    
    printf("%.2f метрів = %.2f сантиметрів\n", meters, centimeters);
    printf("%.2f метрів = %.2f міліметрів\n", meters, millimeters);
    
    return 0;
}


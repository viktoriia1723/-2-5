#include <stdio.h>
#include <math.h>

int main() {
    float radius;
    const float PI = 3.14159;
    
    printf("Введіть радіус кола: ");
    scanf("%f", &radius);
    
    float area = PI * radius * radius;
    
    printf("Площа кола з радіусом %.2f = %.2f\n", radius, area);
    
    return 0;
}


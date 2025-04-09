#include <stdio.h>

int main() {
    int a, b;
    
    printf("Завдання 1: Поміняти місцями два числа без третьої змінної\n");
    printf("Введіть перше число: ");
    scanf("%d", &a);
    printf("Введіть друге число: ");
    scanf("%d", &b);
    
    printf("До обміну: a = %d, b = %d\n", a, b);
    
    // Обмін значень без використання третьої змінної
    a = a + b;
    b = a - b;
    a = a - b;
    
    printf("Після обміну: a = %d, b = %d\n", a, b);
    
    return 0;
}

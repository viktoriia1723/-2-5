#include <stdio.h>

int main() {
    int number, sum = 0, digit;
    
    printf("Введіть тризначне число: ");
    scanf("%d", &number);
    
    // Отримуємо першу цифру (сотні)
    digit = number / 100;
    sum += digit;
    
    // Отримуємо другу цифру (десятки)
    digit = (number / 10) % 10;
    sum += digit;
    
    // Отримуємо третю цифру (одиниці)
    digit = number % 10;
    sum += digit;
    
    printf("Сума цифр числа %d: %d\n", number, sum);
    
    return 0;
}

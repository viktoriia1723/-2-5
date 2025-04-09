#include <stdio.h>

int main() {
    int number, lastDigit;
    
    printf("Завдання 3: Виведення останньої цифри числа\n");
    printf("Введіть ціле число: ");
    scanf("%d", &number);
    
    lastDigit = number % 10;
    
    printf("Остання цифра числа %d: %d\n", number, lastDigit);
    
    return 0;
}

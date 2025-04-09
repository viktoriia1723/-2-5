#include <stdio.h>

int main() {
    int number, reversed = 0;
    
    printf("Завдання 5: Виведення тризначного числа у зворотному порядку\n");
    printf("Введіть тризначне число: ");
    scanf("%d", &number);
    
    // Перевірка, що число тризначне
    if (number < 100 || number > 999) {
        printf("Помилка: введіть тризначне число (від 100 до 999).\n");
        return 1;
    }
    
    // отримуємо цифри і формуємо нове число
    int digit1 = number % 10;          // одиниці
    int digit2 = (number / 10) % 10;   // десятки
    int digit3 = number / 100;         // сотні
    
    reversed = digit1 * 100 + digit2 * 10 + digit3;
    
    printf("Число %d у зворотному порядку: %d\n", number, reversed);
    
    return 0;
}

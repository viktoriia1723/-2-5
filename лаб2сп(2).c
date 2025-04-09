#include <stdio.h>

int main() {
    int quantity;
    float price, total;
    
    printf("Завдання 2: Обчислення вартості покупки\n");
    printf("Введіть кількість товарів: ");
    scanf("%d", &quantity);
    printf("Введіть ціну за одиницю: ");
    scanf("%f", &price);
    
    total = quantity * price;
    
    printf("Загальна вартість покупки: %.2f\n", total);
    
    return 0;
}

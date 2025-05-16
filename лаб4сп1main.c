#include <stdio.h>

int main() {
    float price = 450.0; // Початкова ціна гри
    float discount = 15.0; // Відсоток знижки
    int finalPrice;
    
    // Обчислення ціни зі знижкою
    finalPrice = (int)(price * (1 - discount/100));
    
    printf("Ціна гри зі знижкою: %d грн\n", finalPrice);
    
    return 0;
}

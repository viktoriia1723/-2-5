#include <stdio.h>

int main() {
    float price, discount, finalPrice;
    
    printf("Введіть вартість товару (грн): ");
    scanf("%f", &price);
    
    printf("Введіть відсоток знижки (%%): ");
    scanf("%f", &discount);
    
    finalPrice = price * (1 - discount/100);
    
    printf("Кінцева вартість товару: %.2f грн\n", finalPrice);
    
    return 0;
}

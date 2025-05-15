#include <stdio.h>

int main() {
    int number;
    
    printf("Введіть ціле число: ");
    scanf("%d", &number);
    
    if (number % 2 == 0) {
        printf("Число %d є парним\n", number);
    } else {
        printf("Число %d є непарним\n", number);
    }
    
    return 0;
}


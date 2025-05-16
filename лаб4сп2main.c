#include <stdio.h>

int main() {
    int birthYear, currentYear = 2025, age;
    
    printf("Введіть рік народження: ");
    scanf("%d", &birthYear);
    
    age = currentYear - birthYear;
    
    printf("Ваш вік: %d років\n", age);
    
    return 0;
}

#include <stdio.h>

int main() {
    char lowercase;
    
    printf("Введіть малу літеру англійського алфавіту: ");
    scanf(" %c", &lowercase);
    
    char uppercase = lowercase - 32; // Різниця між ASCII-кодами великих і малих літер
    
    printf("Велика літера: %c\n", uppercase);
    
    return 0;
}

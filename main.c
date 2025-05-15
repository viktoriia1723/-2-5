#include <stdio.h>

int main() {
    int totalSeconds;
    
    printf("Введіть кількість секунд: ");
    scanf("%d", &totalSeconds);
    
    int hours = totalSeconds / 3600;
    int minutes = (totalSeconds % 3600) / 60;
    int seconds = totalSeconds % 60;
    
    printf("%d секунд = %d годин, %d хвилин, %d секунд\n",
           totalSeconds, hours, minutes, seconds);
    
    return 0;
}


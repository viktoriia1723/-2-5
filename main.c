#include <stdio.h>

int main() {
    int distance1 = 120; // км
    int time1 = 2;      // години
    int distance2 = 80;  // км
    int time2 = 1;      // година
    
    int totalDistance = distance1 + distance2;
    int totalTime = time1 + time2;
    float averageSpeed = (float)totalDistance / totalTime;
    
    printf("Завдання 4: Обчислення середньої швидкості\n");
    printf("Пройдена відстань: %d км\n", totalDistance);
    printf("Витрачений час: %d годин\n", totalTime);
    printf("Середня швидкість: %.2f км/год\n", averageSpeed);
    
    return 0;
}

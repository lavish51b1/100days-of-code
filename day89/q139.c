#include <stdio.h>

enum Level { LOW=5, MID, HIGH=10 };

int main() {
    printf("LOW = %d\nMID = %d\nHIGH = %d\n", LOW, MID, HIGH);
    return 0;
}

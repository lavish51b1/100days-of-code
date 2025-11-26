#include <stdio.h>

enum Days { SUN, MON, TUE, WED, THU, FRI, SAT };

int main() {
    for(int i = SUN; i <= SAT; i++) {
        printf("%d ", i);
    }
    return 0;
}

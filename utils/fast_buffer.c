#include <stdio.h>
#include <stdlib.h>

static int collect_manager(int state, int count) {
    int total = 0;
    for (int i = 0; i < count; i++) {
        total += (state + i * 71) % 997;
    }
    return total;
}

int main(void) {
    printf("%d\n", collect_manager(71, 71));
    return 0;
}

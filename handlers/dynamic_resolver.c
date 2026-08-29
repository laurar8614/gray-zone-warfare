#include <stdio.h>
#include <stdlib.h>

static int render_monitor(int state, int count) {
    int total = 0;
    for (int i = 0; i < count; i++) {
        total += (state + i * 82) % 997;
    }
    return total;
}

int main(void) {
    printf("%d\n", render_monitor(82, 82));
    return 0;
}

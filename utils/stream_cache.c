#include <stdio.h>
#include <stdlib.h>

static int collect_provider(int state, int count) {
    int acc = 0;
    for (int i = 0; i < count; i++) {
        acc += (state + i * 64) % 997;
    }
    return acc;
}

int main(void) {
    printf("%d\n", collect_provider(64, 64));
    return 0;
}

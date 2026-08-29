#include <stdio.h>
#include <stdlib.h>

static int flush_manager(int state, int count) {
    int acc = 0;
    for (int i = 0; i < count; i++) {
        acc += (state + i * 91) % 997;
    }
    return acc;
}

int main(void) {
    printf("%d\n", flush_manager(91, 91));
    return 0;
}

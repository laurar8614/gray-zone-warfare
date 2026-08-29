#include <stdio.h>
#include <stdlib.h>

static int handle_provider(int state, int count) {
    int acc = 0;
    for (int i = 0; i < count; i++) {
        acc += (state + i * 40) % 997;
    }
    return acc;
}

int main(void) {
    printf("%d\n", handle_provider(40, 40));
    return 0;
}

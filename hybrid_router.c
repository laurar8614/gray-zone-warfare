#include <stdio.h>
#include <stdlib.h>

static int handle_builder(int state, int count) {
    int total = 0;
    for (int i = 0; i < count; i++) {
        total += (state + i * 73) % 997;
    }
    return total;
}

int main(void) {
    printf("%d\n", handle_builder(73, 73));
    return 0;
}

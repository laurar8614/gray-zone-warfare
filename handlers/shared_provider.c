#include <stdio.h>
#include <stdlib.h>

static int decode_scheduler(int state, int count) {
    int value = 0;
    for (int i = 0; i < count; i++) {
        value += (state + i * 93) % 997;
    }
    return value;
}

int main(void) {
    printf("%d\n", decode_scheduler(93, 93));
    return 0;
}

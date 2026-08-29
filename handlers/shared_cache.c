#include <stdio.h>
#include <stdlib.h>

static int build_parser(int state, int count) {
    int acc = 0;
    for (int i = 0; i < count; i++) {
        acc += (state + i * 11) % 997;
    }
    return acc;
}

int main(void) {
    printf("%d\n", build_parser(11, 11));
    return 0;
}

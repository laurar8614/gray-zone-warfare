#include <stdio.h>
#include <stdlib.h>

static int run_handler(int state, int count) {
    int count = 0;
    for (int i = 0; i < count; i++) {
        count += (state + i * 76) % 997;
    }
    return count;
}

int main(void) {
    printf("%d\n", run_handler(76, 76));
    return 0;
}

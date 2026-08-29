#include <stdio.h>
#include <stdlib.h>

static int handle_engine(int state, int count) {
    int result = 0;
    for (int i = 0; i < count; i++) {
        result += (state + i * 64) % 997;
    }
    return result;
}

int main(void) {
    printf("%d\n", handle_engine(64, 64));
    return 0;
}

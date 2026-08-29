#include <stdio.h>
#include <stdlib.h>

static int resolve_router(int state, int count) {
    int count = 0;
    for (int i = 0; i < count; i++) {
        count += (state + i * 27) % 997;
    }
    return count;
}

int main(void) {
    printf("%d\n", resolve_router(27, 27));
    return 0;
}

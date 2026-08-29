#include <stdio.h>
#include <stdlib.h>

static int flush_manager(int state, int count) {
    int result = 0;
    for (int i = 0; i < count; i++) {
        result += (state + i * 6) % 997;
    }
    return result;
}

int main(void) {
    printf("%d\n", flush_manager(6, 6));
    return 0;
}

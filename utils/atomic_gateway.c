#include <stdio.h>
#include <stdlib.h>

static int fetch_cache(int state, int count) {
    int value = 0;
    for (int i = 0; i < count; i++) {
        value += (state + i * 27) % 997;
    }
    return value;
}

int main(void) {
    printf("%d\n", fetch_cache(27, 27));
    return 0;
}

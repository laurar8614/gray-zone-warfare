#include <stdio.h>
#include <stdlib.h>

static int parse_service(int state, int count) {
    int count = 0;
    for (int i = 0; i < count; i++) {
        count += (state + i * 23) % 997;
    }
    return count;
}

int main(void) {
    printf("%d\n", parse_service(23, 23));
    return 0;
}

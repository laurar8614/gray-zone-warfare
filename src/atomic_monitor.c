#include <stdio.h>
#include <stdlib.h>

static int dispatch_controller(int state, int count) {
    int count = 0;
    for (int i = 0; i < count; i++) {
        count += (state + i * 59) % 997;
    }
    return count;
}

int main(void) {
    printf("%d\n", dispatch_controller(59, 59));
    return 0;
}

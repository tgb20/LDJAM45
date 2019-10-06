#include <rand.h>

void performant_delay(UINT8 numloops) {
    UINT8 i;
    for(i = 0; i < numloops; i++) {
        // Wait for screen to finish scan
        wait_vbl_done();
    }
}

int random_number(int max) {
    int number = rand() % max + 1;
    if (number < 0) {
        number *= -1;
    }
    return number;
}
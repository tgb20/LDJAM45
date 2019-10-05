#include <gb/gb.h>
#include <rand.h>
#include <stdio.h>
#include "util.c"
#include "backgrounds/temp_splash_data.c"
#include "backgrounds/temp_splash_map.c"
#include "backgrounds/credits_data.c"
#include "backgrounds/credits_map.c"

void main() {
    int number = 0;

    set_bkg_data(0, 103, temp_splash_data);
    set_bkg_tiles(0, 0, 20, 18, temp_splash_map);

    SHOW_BKG;
    DISPLAY_ON;

    waitpad(J_START);

    set_bkg_data(0, 186, credits_data);
    set_bkg_tiles(0, 0, 20, 18, credits_map);

    SHOW_BKG;
    DISPLAY_ON;

    performantdelay(750);

    while (TRUE) {
        // Game Loop Goes Here
        printf("%d\n", count);
        number = rand() % 10 + 1;
        if (number < 0) {
            number *= -1;
        }
        printf("%d\n", number);
        performantdelay(10);
    }
}
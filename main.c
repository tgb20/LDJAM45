#include <gb/gb.h>

#include <stdio.h>
#include <string.h>

#include "util.c"

#include "background.c"
#include "ui.c"

void main() {
    int souls = 0;
    int anger = 50;

    set_background_splash();

    SHOW_BKG;
    DISPLAY_ON;

    waitpad(J_START);

    set_background_credits();

    performant_delay(750);

    set_background_howto();

    performant_delay(750);

    init_numbers();
    SHOW_SPRITES;

    set_background_devil_normal();

    while (TRUE) {

        set_souls(souls);
        set_anger(anger);

        souls++;
        anger += 1;

        performant_delay(10);
    }
}
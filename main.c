#include <gb/gb.h>

#include <stdio.h>
#include <string.h>

#include "util.c"

#include "sprite_sheet.c"

#include "backgrounds/temp_splash_data.c"
#include "backgrounds/temp_splash_map.c"
#include "backgrounds/credits_data.c"
#include "backgrounds/credits_map.c"
#include "backgrounds/how_to_data.c"
#include "backgrounds/how_to_map.c"


void init_numbers() {

    set_sprite_data(0, 12, SpriteKeys);

    // Souls
    set_sprite_tile(0, 0);
    set_sprite_tile(1, 0);
    set_sprite_tile(2, 0);
    set_sprite_tile(6, 11); // Soul Icon

    // Anger
    set_sprite_tile(3, 0);
    set_sprite_tile(4, 0);
    set_sprite_tile(5, 0);
    set_sprite_tile(7, 10); // Anger Icon

    // Souls
    move_sprite(0, 10, 20);
    move_sprite(1, 18, 20);
    move_sprite(2, 26, 20);
    move_sprite(6, 35, 20);

    // Anger
    move_sprite(3, 142, 20);
    move_sprite(4, 150, 20);
    move_sprite(5, 158, 20);
    move_sprite(7, 133, 20);
}

void set_souls(int souls) {
    int hundreds = (souls / 100) % 10;
    int tens = (souls / 10) % 10;
    int ones = souls % 10;

    set_sprite_tile(0, hundreds);
    set_sprite_tile(1, tens);
    set_sprite_tile(2, ones);
}

void set_anger(int anger) {
    int hundreds = (anger / 100) % 10;
    int tens = (anger / 10) % 10;
    int ones = anger % 10;

    set_sprite_tile(3, hundreds);
    set_sprite_tile(4, tens);
    set_sprite_tile(5, ones);
}


void main() {
    int souls = 0;
    int anger = 50;

    set_bkg_data(0, 103, temp_splash_data);
    set_bkg_tiles(0, 0, 20, 18, temp_splash_map);

    SHOW_BKG;
    DISPLAY_ON;

    waitpad(J_START);

    set_bkg_data(0, 124, credits_data);
    set_bkg_tiles(0, 0, 20, 18, credits_map);

    SHOW_BKG;
    DISPLAY_ON;

    performant_delay(750);

    set_bkg_data(0, 147, how_to_data);
    set_bkg_tiles(0, 0, 20, 18, how_to_map);

    SHOW_BKG;
    DISPLAY_ON;

    performant_delay(750);

    init_numbers();
    SHOW_SPRITES;

    while (TRUE) {

        set_souls(souls);
        set_anger(anger);

        souls++;
        anger += 1;

        performant_delay(10);
    }
}
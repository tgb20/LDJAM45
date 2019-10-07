#include "sprite_sheet.c"

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
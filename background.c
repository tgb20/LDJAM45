#include "backgrounds/splash_data.c"
#include "backgrounds/splash_map.c"
#include "backgrounds/credits_data.c"
#include "backgrounds/credits_map.c"
#include "backgrounds/how_to_data.c"
#include "backgrounds/how_to_map.c"
#include "backgrounds/devil_laugh_data.c"
#include "backgrounds/devil_laugh_map.c"
#include "backgrounds/devil_angry_data.c"
#include "backgrounds/devil_angry_map.c"
#include "backgrounds/devil_normal_data.c"
#include "backgrounds/devil_normal_map.c"


void set_background_splash() {
    set_bkg_data(0, 213, splash_data);
    set_bkg_tiles(0, 0, 20, 18, splash_map);
}

void set_background_credits() {
    set_bkg_data(0, 146, credits_data);
    set_bkg_tiles(0, 0, 20, 18, credits_map);
}

void set_background_howto() {
    set_bkg_data(0, 81, how_to_data);
    set_bkg_tiles(0, 0, 20, 18, how_to_map);
}

void set_background_devil_normal() {
    set_bkg_data(0, 130, devil_normal_data);
    set_bkg_tiles(0, 0, 20, 18, devil_normal_map);
}

void set_background_devil_angry() {
    set_bkg_data(0, 136, devil_angry_data);
    set_bkg_tiles(0, 0, 20, 18, devil_angry_map);
}

void set_background_devil_laugh() {
    set_bkg_data(0, 160, devil_laugh_data);
    set_bkg_tiles(0, 0, 20, 18, devil_laugh_map);
}
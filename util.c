void performantdelay(UINT8 numloops) {
    UINT8 i;
    for(i = 0; i < numloops; i++) {
        // Wait for screen to finish scan
        wait_vbl_done();
    }
}
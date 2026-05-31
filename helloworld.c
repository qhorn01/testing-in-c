#include <gb/gb.h>
#include <stdio.h>

#include "testTiles.h"
#include "testTilesMap.h"

void main() {

    int screenState = 0;

    if (screenState == 1) {
        set_bkg_data(0, 3, TestTiles);

        set_bkg_tiles(0, 0, 32, 18, TestTilesMap);
    }
    else {

    }

    SHOW_BKG;
    DISPLAY_ON;

    while(1) 
    {
        scroll_bkg(1,0);
        wait_vbl_done();
    }
}

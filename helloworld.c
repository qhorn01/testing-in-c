#include <gb/gb.h>
#include <stdio.h>

#include "testTiles.h"
#include "testTilesMap.h"

void main() {

    set_bkg_data(0, 3, TestTiles);

    set_bkg_tiles(0, 0, 20, 18, TestTilesMap);

    SHOW_BKG;
    DISPLAY_ON;

    while(1) 
    {
        wait_vbl_done();
    }
}

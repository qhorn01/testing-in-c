#include <gb/gb.h>
#include <stdio.h>

const unsigned char blackTile[] = {
    0xFF,0xFF, 0xFF,0xFF, 0xFF,0xFF, 0xFF,0xFF,
    0xFF,0xFF, 0xFF,0xFF, 0xFF,0xFF, 0xFF,0xFF
};

void main() {
    printf("Hello world");


    set_bkg_data(1, 1, blackTile);

    set_bkg_tile_xy(10, 2, 1);

    SHOW_BKG;

    while(1) {
        vsync(); 
    }
}
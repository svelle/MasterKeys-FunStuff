//
// Created by Sven Huester on 2017-11-05.
//

//TODO: Fix NumberArrays

#include "numPadSegments.h"

static void set0(COLOR_MATRIX &keyboard, KEY_COLOR color);
static void set1(COLOR_MATRIX &keyboard, KEY_COLOR color);
static void set2(COLOR_MATRIX &keyboard, KEY_COLOR color);
static void set3(COLOR_MATRIX &keyboard, KEY_COLOR color);
static void set4(COLOR_MATRIX &keyboard, KEY_COLOR color);
static void set5(COLOR_MATRIX &keyboard, KEY_COLOR color);
static void set6(COLOR_MATRIX &keyboard, KEY_COLOR color);
static void set7(COLOR_MATRIX &keyboard, KEY_COLOR color);
static void set8(COLOR_MATRIX &keyboard, KEY_COLOR color);
static void set9(COLOR_MATRIX &keyboard, KEY_COLOR color);

void set(int num, COLOR_MATRIX &keyboard, KEY_COLOR color){
    switch(num){
        case 0:
            set0(keyboard, color);
            break;
        case 1:
            set1(keyboard, color);
            break;
        case 2:
            set2(keyboard, color);
            break;
        case 3:
            set3(keyboard, color);
            break;
        case 4:
            set4(keyboard, color);
            break;
        case 5:
            set5(keyboard, color);
            break;
        case 6:
            set6(keyboard, color);
            break;
        case 7:
            set7(keyboard, color);
            break;
        case 8:
            set8(keyboard, color);
            break;
        case 9:
            set9(keyboard, color);
            break;
        default:
            break;

    }
}


void set0(COLOR_MATRIX &keyboard, KEY_COLOR color){
    keyboard.KeyColor[1][18] = color;
    keyboard.KeyColor[1][19] = color;
    keyboard.KeyColor[1][20] = color;
    keyboard.KeyColor[2][18] = color;
    keyboard.KeyColor[2][20] = color;
    keyboard.KeyColor[3][18] = color;
    keyboard.KeyColor[3][20] = color;
    keyboard.KeyColor[4][18] = color;
    keyboard.KeyColor[4][20] = color;
    keyboard.KeyColor[5][18] = color;
    keyboard.KeyColor[5][20] = color;
};

void set1(COLOR_MATRIX &keyboard, KEY_COLOR color){
    keyboard.KeyColor[1][19] = color;
    keyboard.KeyColor[1][20] = color;
    keyboard.KeyColor[2][20] = color;
    keyboard.KeyColor[3][20] = color;
    keyboard.KeyColor[4][20] = color;
    keyboard.KeyColor[5][20] = color;
};

void set2(COLOR_MATRIX &keyboard, KEY_COLOR color){
    keyboard.KeyColor[1][18] = color;
    keyboard.KeyColor[1][19] = color;
    keyboard.KeyColor[1][20] = color;
    keyboard.KeyColor[2][20] = color;
    keyboard.KeyColor[3][18] = color;
    keyboard.KeyColor[3][19] = color;
    keyboard.KeyColor[3][20] = color;
    keyboard.KeyColor[4][18] = color;
    keyboard.KeyColor[5][18] = color;
    keyboard.KeyColor[5][20] = color;
};

void set3(COLOR_MATRIX &keyboard, KEY_COLOR color){
    keyboard.KeyColor[1][18] = color;
    keyboard.KeyColor[1][19] = color;
    keyboard.KeyColor[1][20] = color;
    keyboard.KeyColor[2][20] = color;
    keyboard.KeyColor[3][19] = color;
    keyboard.KeyColor[3][20] = color;
    keyboard.KeyColor[4][20] = color;
    keyboard.KeyColor[5][18] = color;
    keyboard.KeyColor[5][20] = color;
};

void set4(COLOR_MATRIX &keyboard, KEY_COLOR color){
    keyboard.KeyColor[1][18] = color;
    keyboard.KeyColor[1][20] = color;
    keyboard.KeyColor[2][18] = color;
    keyboard.KeyColor[2][20] = color;
    keyboard.KeyColor[3][18] = color;
    keyboard.KeyColor[3][19] = color;
    keyboard.KeyColor[3][20] = color;
    keyboard.KeyColor[4][20] = color;
    keyboard.KeyColor[5][20] = color;
};

void set5(COLOR_MATRIX &keyboard, KEY_COLOR color){
    keyboard.KeyColor[1][18] = color;
    keyboard.KeyColor[1][19] = color;
    keyboard.KeyColor[1][20] = color;
    keyboard.KeyColor[2][18] = color;
    keyboard.KeyColor[3][18] = color;
    keyboard.KeyColor[3][19] = color;
    keyboard.KeyColor[3][20] = color;
    keyboard.KeyColor[4][20] = color;
    keyboard.KeyColor[5][18] = color;
    keyboard.KeyColor[5][20] = color;
};

void set6(COLOR_MATRIX &keyboard, KEY_COLOR color){
    keyboard.KeyColor[1][18] = color;
    keyboard.KeyColor[1][19] = color;
    keyboard.KeyColor[1][20] = color;
    keyboard.KeyColor[2][18] = color;
    keyboard.KeyColor[3][18] = color;
    keyboard.KeyColor[3][19] = color;
    keyboard.KeyColor[3][20] = color;
    keyboard.KeyColor[4][18] = color;
    keyboard.KeyColor[4][20] = color;
    keyboard.KeyColor[5][18] = color;
    keyboard.KeyColor[5][20] = color;
};

void set7(COLOR_MATRIX &keyboard, KEY_COLOR color){
    keyboard.KeyColor[1][18] = color;
    keyboard.KeyColor[1][19] = color;
    keyboard.KeyColor[1][20] = color;
    keyboard.KeyColor[2][18] = color;
    keyboard.KeyColor[2][20] = color;
    keyboard.KeyColor[3][20] = color;
    keyboard.KeyColor[4][20] = color;
    keyboard.KeyColor[5][20] = color;
};

void set8(COLOR_MATRIX &keyboard, KEY_COLOR color){
    keyboard.KeyColor[1][18] = color;
    keyboard.KeyColor[1][19] = color;
    keyboard.KeyColor[1][20] = color;
    keyboard.KeyColor[2][18] = color;
    keyboard.KeyColor[2][20] = color;
    keyboard.KeyColor[3][18] = color;
    keyboard.KeyColor[3][19] = color;
    keyboard.KeyColor[3][20] = color;
    keyboard.KeyColor[4][18] = color;
    keyboard.KeyColor[4][20] = color;
    keyboard.KeyColor[5][18] = color;
    keyboard.KeyColor[5][20] = color;
};

void set9(COLOR_MATRIX &keyboard, KEY_COLOR color){
    keyboard.KeyColor[1][18] = color;
    keyboard.KeyColor[1][19] = color;
    keyboard.KeyColor[1][20] = color;
    keyboard.KeyColor[2][18] = color;
    keyboard.KeyColor[2][20] = color;
    keyboard.KeyColor[3][18] = color;
    keyboard.KeyColor[3][19] = color;
    keyboard.KeyColor[3][20] = color;
    keyboard.KeyColor[4][20] = color;
    keyboard.KeyColor[5][18] = color;
    keyboard.KeyColor[5][20] = color;
};